#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <internal/ag_utils.h>
#include "n_symbols.h"
#include <internal/ruledef.h>
#include "parser/limit.h"
#include "rules.h"
#include "attributes.h"
#include "util.h"
#include <parser/parser.h>

int get_sym_id_from_name(char *name);
char *generate_header_include(char **headers){
        char *ret;
        int len = 0;
        if (idx_headers == 0)
                return NULL;
        for (int i = 0; i < idx_headers; i++){
                len+=strlen(headers[i]);
        }
        ret = malloc(sizeof(char)*len+1);
        sprintf(ret,""); 
        for (int i = 0; i < idx_headers; i++){
                strcat(ret, headers[i]);
                strcat(ret,"\n");
        }
        return ret;
}

char *generate_trans_functions(){
        char template[] = "void trans(void *sym){\n\tunsigned int id = get_sym_id(sym);\n\t{$code}\n\treturn;\n}";
        char code_template[] = "if (id == %d){\n\t\tunsigned int new_id = %d;\n\t\tmemcpy(sym,&new_id,sizeof(unsigned int));\n\t}\n\t"; 
        char **codes = malloc(idx_syms*sizeof(char*));
        int n_codes = 0;
        int len = 0;
        char *code;
        for (int i = 0; i < idx_syms; i++){
                if (g_symbols[i].eq != NULL){
                        char *l_code = malloc(strlen(code_template) + 30);
                        sprintf(l_code, code_template, get_sym_id_from_name(g_symbols[i].name), get_sym_id_from_name(g_symbols[i].eq->name)); 
                        codes[n_codes] = l_code;
                        len+=strlen(l_code);
                        n_codes++;
                        
                }
        }
        code = malloc(len+1);
        sprintf(code,"");
        for (int i = 0; i < n_codes; i++){
                strcat(code, codes[i]);
                free(codes[i]);
        }
        free(codes);
        char *res = malloc(strlen(template) + strlen(code));
        replace_to(res,template,"{$code}",code);
        free(code);
        
        return res;
}

char* generate_symbol_enum(char **names){
        int i = 0;
        char template[] = "typedef enum{\n{$set}\n}sym_type;\n";
        char *set;
        int max_len = 0;
        while (names[i]!=NULL){
                if (strlen(names[i])>max_len)
                        max_len = strlen(names[i]);
                i++;
        }
        set = malloc(max_len*i);
        i = 0;
        memcpy(set, "", strlen(""));
        while (names[i]!=NULL){
                strcat(set, names[i]);
                strcat(set, ",\n");
                i++;
        }
        char *out = malloc(strlen(template) + strlen(set));
        replace_to(out, template, "{$set}", set);
        free(set);
        return out;
}

char* generate_compare_function(){
    char template[] = "int get_sym_id_from_name(char *name){\n\t {$code}\n}";
    char code_template[] = "if (strcmp(%s,name) == 0){\n\t return %d;}\n";
    char **code_array = malloc(sizeof(char *)*idx_syms);
    int len = 0;
    for (int i = 0; i < idx_syms; i++){
        char *code_line = malloc(strlen(code_template) + strlen(g_symbols[i].name) + 100);
        sprintf(code_line, code_template, g_symbols[i].name, i);
        code_array[i] = code_line;
        len+=strlen(code_line);
    }
    char *the_code = malloc(len+1);
    strcpy(the_code, code_array[0]);
    for (int i = 1; i < idx_syms; i++){
        strcat(the_code, code_array[i]);
        free(code_array[i]);
    }
    free(code_array);
    char *out = malloc(strlen(template)+len+1);
    replace_to(out, template, "{$code}",the_code);
    free(the_code);
    return out;
}
char *gen_sym_to_id_array(){
        char template[] = "char *sym_to_id[%d] = {\n\t{$code}\n};";
        char row_template[] = "\"%s\",\n";
        char **rows = malloc(sizeof(char*) * idx_syms);
        int size = 0;
        for(int i = 0; i < idx_syms; i++){
                char *tmp = malloc(strlen(row_template) + strlen(i_sym_to_id[i]));
                sprintf(tmp,row_template,i_sym_to_id[i]);
                rows[i] = tmp;
                size+=strlen(tmp);
        }
        char *code = malloc(size+20);
        sprintf(code,"");
        for(int i = 0; i < idx_syms; i++){
                strcat(code,rows[i]);
                free(rows[i]);
        }
        free(rows);
        char *out = malloc(strlen(template) + strlen(code)+20);
        sprintf(out,template,idx_syms);
        replace_to(out,out,"{$code}",code);
        free(code);
        return out;
}
int get_sym_id_from_name(char *name){
    for (int i = 0; i < MAX_SYMBOLS; i++){
        if (i_sym_to_id[i] != NULL && strcmp(i_sym_to_id[i], name)==0){
            int t = 0x0;
            for (int j = 0; j < idx_syms; j++){
                if(strcmp(g_symbols[j].name,name)==0){
                    if (g_symbols[j].is_NT == 0x0)
                        t = 0x1;
                    break;
                }
            }
            int the_id=0;
            the_id |= t<<31;
            the_id |= i;
            return i;
        }
    }
    return -1;
}

char *remove_quotes(char *str){
        char *res = malloc(strlen(str)+1);
        int j = 0;
        int found = 0;
        for (int i = 0; i < strlen(str); i++){
                if (str[i] != '"'){
                        if (str[i] == ' ' && found)
                                continue;
                        res[j] = str[i];
                        j++;
                }else{
                        found = !found;
                       // if (found){
                       //         if (i+1<strlen(str) && str[i+1] == ' '){
                       //                 res[j] = str[i];
                       //                 j++;
                       //         }
                       // }else{
                       //         if (str[i-1] == ' '){
                       //                 res[j] = str[i];
                       //                 j++;
                       //         }
                       // }
                }
        }
        res[j] = '\0';
        found = 0;
        j = 0;
        // remove additional spaces
        for (int i = 0; i < strlen(res); i++){
                if (res[i] == ' ' && found){
                        continue;
                }
                res[j] = res[i];
                j++;
                found = 0;
                if (res[i] == ' ')
                        found = 1;
        }
        res[j] = '\0';
        free(str);
        return res;
}

char* fix_sym_str(char *str){
        char *res = malloc(strlen(str)+1);
        int j = 0;
        int found = 0;
        for (int i = 0; i < strlen(str); i++){
                if (str[i] == '"'){
                        found = !found;
                }
                if (str[i] == ' ' && !found){
                        continue;
                }
                res[j] = str[i];
                j++;
        }
        res[j] = '\0';
        j = 0;
        for (int i = 0; i < strlen(res); i++){
                if (res[i] != '"'){
                        res[j] = res[i];
                        j++;
                }
        }
        res[j] = '\0';
        return res;
}
char* generate_symbol(symbol_t *sym){
        char template[]="typedef struct __{$name}{\n\tunsigned int id;\n\t{$attributes}\n}{$name}_t;";
        char template_att[]="{$type} {$name};";
        int max_att_len = 0;
        if(sym->n_attr == 0){
                char *the_res; 
                        the_res = malloc(strlen("typedef struct __%s{\n\tunsigned int id;\n\tchar *sym_str;\n}%s_t;") + 2*strlen(sym->name) + 100);
                        sprintf(the_res, "typedef struct __%s{\n\tunsigned int id;\n\tchar *sym_str;\n}%s_t;", sym->name, sym->name);
                return the_res;
        }
        for (int i = 0; i < sym->n_attr; i++){
                int len = 1+strlen(template_att) - len_ph(template_att) + strlen(sym->attributes[i].name) + strlen(sym->atts_name[i]);
                if (len>max_att_len)
                        max_att_len=len;
        }
        char **atts;
        atts = malloc(sizeof(char *)*sym->n_attr);
        if (atts == NULL){
                goto err;
        }
        
        
        for (int i = 0; i < sym->n_attr; i++){
                atts[i] = malloc(2*sizeof(char)*max_att_len+1);
                int i_att_size = 2*sizeof(char)*max_att_len+1;
                if (atts[i] == NULL){
                        for (int j = 0; j < i; j++){
                                free(atts[j]);
}
                        free(atts);
                        goto err;
                }
                replace_to(atts[i], template_att, "{$type}", sym->attributes[i].name);
                replace_to(atts[i], atts[i], "{$name}", sym->atts_name[i]);
                if (strlen(atts[i]) >= i_att_size){
                        printf("Assertion failed %d >= %d\n",strlen(atts[i]),i_att_size);
                        exit(EXIT_FAILURE);
                }
        }
        int att_size = 2*sizeof(char)*sym->n_attr*max_att_len;
        char *the_atts = malloc(att_size);
        if (the_atts == NULL){
                goto err;
        }
        sprintf(the_atts,"");
        for (int i = 0; i < sym->n_attr-1; i++){
                strcat(the_atts,atts[i]);
                strcat(the_atts,"\n\t");
        }
        strcat(the_atts,atts[sym->n_attr-1]);
        if (strlen(the_atts) >= att_size){
                printf("Assertion Failed for att_size %d >= %d\n",strlen(the_atts),att_size);
                exit(EXIT_FAILURE);
        }
        for (int i = 0; i < sym->n_attr; i++){
                free(atts[i]);
        }
        free(atts);
        int template_size = strlen(template)+strlen(the_atts)+strlen(sym->name)*2+1;
        char *the_template = malloc(template_size);
        if (the_template == NULL)
                goto err;
        replace_to(the_template,template,"{$name}",sym->name);
        replace_to(the_template, the_template, "{$attributes}", the_atts);
        if (strlen(the_template) >= template_size){
                printf("Assertion failed for template_size %d >= %d\n",strlen(the_template),template_size);
                exit(EXIT_FAILURE);
        }
        free(the_atts);
        return the_template;
err:
        printf("Error during symbol generation, maybe memory leak\n");
        return NULL;
}

char* val_with_quotes(char *val, int q){
        if (q==0)
                return val;
        char *new = malloc(strlen(val)+1+2);
        sprintf(new,"\"%s\"",val);
        return new;
}

char* gen_symbol_init(char *var, char *sym_type, int is_terminal){
        char template[] = "symbol_init({$var},{$sym_type},%d)";
        sprintf(template, template, is_terminal);
        char *the_str = malloc(strlen(template) + strlen(var) + strlen(sym_type));
        replace_to(the_str, template, "{$var}", var);
        replace_to(the_str, the_str, "{$sym_type}", val_with_quotes(sym_type,1));
        return the_str;
}


char *generate_attribute(attribute_t *the_attribute){
        char template[] = "typedef {$type} {$name};";
        char template2[] = "\nextern %s %s_values[%d];\n";
        int size = strlen(template) + strlen(the_attribute->type) + strlen(the_attribute->name);
        char *res = malloc(size);
        replace_to(res, template, "{$type}", the_attribute->type);
        replace_to(res, res, "{$name}", the_attribute->name);
        if (the_attribute->n_values != 0){
                res = realloc(res,2*size);
                size = 2*size;
                char *def = malloc(strlen(template2) + strlen(the_attribute->name)+ strlen(the_attribute->name) + 100);
                sprintf(def,template2,the_attribute->name,the_attribute->name,the_attribute->n_values);
                strcat(res,def);
        }
        if (strlen(res) >= size){
                printf("Assertion failed\n");
                exit(EXIT_FAILURE);
        }
        return res;
}

char *generate_attribute_values(attribute_t *the_attribute){
        if (the_attribute->n_values == 0)
                return NULL;
        char template[] = "{$type} {$name}_values[] = {$list_of_values};\n";
        int max_val_len = 0;
        for (int i = 0; i < the_attribute->n_values; i++){
                if (strlen(the_attribute->values[i])>max_val_len)
                        max_val_len = 1+strlen(the_attribute->values[i]);
        }
        int quotes = 0;
        if (strncmp(the_attribute->type,"char",strlen("char")) == 0)
                quotes = 2*the_attribute->n_values;
        int l_values_size = sizeof(char)*the_attribute->n_values*max_val_len + the_attribute->n_values + quotes;
        char *l_values = malloc(l_values_size);
        if (l_values == NULL)
                goto err;
        strcpy(l_values,val_with_quotes(the_attribute->values[0],quotes));
        for(int i = 1; i < the_attribute->n_values; i++){
                strcat(l_values,",");
                strcat(l_values, val_with_quotes(the_attribute->values[i],quotes));
        }
        if (l_values_size <= strlen(l_values)){
                printf("Assertion failed\n");
                exit(EXIT_FAILURE);
        }
        int the_size = strlen(template)+strlen(the_attribute->type)+strlen(the_attribute->name)+strlen(l_values) + 1;
        char *the_template = malloc(the_size);
        if (the_template == NULL)
                goto err;
        replace_to(the_template,template,"{$type}",the_attribute->type);
        replace_to(the_template,the_template,"{$name}",the_attribute->name);
        replace_to(the_template,the_template,"$list_of_values",l_values);
        if (strlen(the_template) >= the_size){
                printf("Assertion failed\n");
                exit(EXIT_FAILURE);
        }
        free(l_values);
        return the_template;
err:
        printf("Error during attribute values generation, maybe memory leak\n");
        return NULL;
}

int strcount(char *str, char *to_search){
        int i = 0;
        int count = 0;
        while(i < strlen(str)){
                char *the_str = malloc(strlen(to_search)+1);
                memset(the_str, 0x0, strlen(to_search)+1);
                memcpy(the_str, str+i, strlen(to_search));
                if(strcmp(the_str, to_search) == 0){
                        count++;
                        i+=strlen(to_search);
                }
                else{
                        i++;
                }
                free(the_str);
        }
        return count;
}

char *to_lower_case(char *str){
    char *the_str = malloc(strlen(str)+1);
    for (int i = 0; i < strlen(str); i++){
        if (str[i]>='A' && str[i]<='Z'){
            the_str[i] = str[i] + ('a'-'A');
        }
        else{
            the_str[i] = str[i];
        }
    }
    the_str[strlen(str)] = '\0';
    return the_str;
}

char* generate_rule(rule_t* the_rule,int id){
        char template_sign[] = "void from_{$lhs}_to_{$rhs_list}(void *start){\n\t{$the_code}\nbitmap_initialize(rule_bitmap,MAX_RULE);\n\t}";
        char the_lhs_conv_template[] = "{$lhs}_t* lhs = ({$lhs}_t*)start;\n\t"; 
        char the_rhs_decl_template[] = "{$rhs}_t* {$rhs}_{$i} = malloc(sizeof({$rhs}_t));\n\t";
        char the_symbol_init[] = "{$init};\n";
        char publish_result_template[] = "\tpush({$rhs}_{$i});\n";
        char **the_symbol_init_array = malloc(sizeof(char *)*the_rule->n_rhs);
        char **publish_result_list_template =  malloc(sizeof(char *)*the_rule->n_rhs);
        char** the_rhs_list_decl_template = malloc(sizeof(char *)*the_rule->n_rhs);
        char *r_string = NULL;
        if (the_rhs_list_decl_template == NULL){
                goto err;
        }
        int max_len = 0;
        for (int i = 0; i < the_rule->n_rhs; i++){
               symbol_t rhs = the_rule->rhs[i];
               if (strlen(rhs.name) > max_len){
                        max_len = strlen(rhs.name);
               }
        }
        
        if(the_rule->attribute_operations!=NULL){
                int lhs_count = 0;
                int *rhs_count = malloc(sizeof(int) * the_rule->n_rhs);
                if(rhs_count == NULL){
                        printf("Run out of memory\n");
                        exit(EXIT_FAILURE);
                }
                lhs_count = strcount(the_rule->attribute_operations, "$$");
                for(int k = 0; k < the_rule->n_rhs; k++){
                        char str[10];
                        sprintf(str, "$%d",k+1);
                        rhs_count[k] = strcount(the_rule->attribute_operations, str);
                }
                int the_att_size = 0;
                for (int k = 0; k < the_rule->n_rhs; k++){
                        the_att_size += rhs_count[k]*(strlen(the_rule->rhs[k].name)+20);
                }
                the_att_size+=lhs_count*strlen(the_rule->lhs.name);
                char *the_att_string = malloc(the_att_size+strlen(the_rule->attribute_operations));
                replace_to(the_att_string, the_rule->attribute_operations, "$$", "lhs");
                for(int k = the_rule->n_rhs-1; k >= 0; k--){
                        char ph[10];
                        sprintf(ph, "$%d",k+1);
                        char the_name[1024];
                        sprintf(the_name,"%s_%d",the_rule->rhs[k].name,k);
                        replace_to(the_att_string,the_att_string,ph,the_name);
                }
                replace_to(the_att_string, the_att_string, ".", "->");
               char revert_template[] = "push(start);\n\t{$free_list}\tbitmap_set(rule_bitmap,%d);\nreturn;\n";
               char free_template[] = "free({$rhs}_%d);\n";
               char *revert_string;
               revert_string = malloc(strlen(revert_template) +1 + max_len*(the_rule->n_rhs+20) + the_rule->n_rhs*strlen(free_template));
               sprintf(revert_string,revert_template,id);
               char *free_string = malloc((strlen(free_template)+max_len+6) * the_rule->n_rhs);
               sprintf(free_string,"");
               for (int r = 0; r < the_rule->n_rhs; r++){
                       char *temp_free_string = malloc(strlen(free_template) + max_len + the_rule->n_rhs/10+1);
                       sprintf(temp_free_string, free_template, r);
                       replace_to(temp_free_string, temp_free_string, "{$rhs}", the_rule->rhs[r].name);
                       strcat(free_string,temp_free_string);
                       free(temp_free_string);
               }
               replace_to(revert_string, revert_string, "{$free_list}", free_string);
               free(free_string);
               the_att_string = realloc(the_att_string, strlen(the_att_string) + strlen(revert_string));
               int prev_size = strlen(the_att_string)+strlen(revert_string);
               replace_to(the_att_string, the_att_string, "revert;", revert_string);
               if(prev_size < strlen(the_att_string)){
                        printf("Assertion failed\n");
                        exit(EXIT_FAILURE);
               }
               free(revert_string);
               the_rule->attribute_operations = the_att_string;
        }
        
        for (int i = the_rule->n_rhs-1; i >= 0; i--){
                char *the_rhs_decl = malloc(strlen(the_rhs_decl_template) + max_len*3 + 1 +1);
                replace_to(the_rhs_decl, the_rhs_decl_template,"{$rhs}", the_rule->rhs[i].name);
                char *the_i = malloc(2);
                sprintf(the_i,"%d",i);
                char name[1024];
                sprintf(name,"%s_%d",the_rule->rhs[i].name, i);
                char the_sym_type[1024];
                sprintf(the_sym_type, "%s", the_rule->rhs[i].name);
                char *init = gen_symbol_init(name, the_sym_type,!the_rule->rhs[i].is_NT);
                char *the_init = malloc(strlen(the_symbol_init) + max_len + strlen(init));
                replace_to(the_init, the_symbol_init, "{$init}", init);
                the_symbol_init_array[i] = the_init;
                replace_to(the_rhs_decl, the_rhs_decl, "{$i}",the_i);
                char *the_push_rhs = malloc(strlen(publish_result_template) + max_len + 1 +1 );
                publish_result_list_template[the_rule->n_rhs-1-i] = the_push_rhs;
                replace_to(the_push_rhs, publish_result_template, "{$rhs}", the_rule->rhs[i].name);
                replace_to(the_push_rhs, the_push_rhs, "{$i}", the_i);
                the_rhs_list_decl_template[i] = the_rhs_decl;
                if (the_rule->rhs[i].is_NT == 0x0){
                        // Put here the code that can fix the sym_str
                        int id = 0;
                        char array_str_template[] = "const char *pos_str[%d] = {\n{$repr}\n};";
                        char str_template[] = "\"{$str}\",";
                        char **s_array = malloc(sizeof(char*) * the_rule->rhs[i].n_sym_str);
                        int s_size = 0;
                        for (int j = 0; j < the_rule->rhs[i].n_sym_str; j++){
                                char *fixed_str = fix_sym_str(the_rule->rhs[i].sym_str[j]);
                                the_rule->rhs[i].sym_str[j] = remove_quotes(the_rule->rhs[i].sym_str[j]);
                                char *l_str = malloc(strlen(fixed_str) + strlen(str_template));
                                replace_to(l_str, str_template, "{$str}", fixed_str);
                                free(fixed_str);
                                s_array[j] = l_str;
                                s_size+= strlen(l_str);
                        }
                        char *s_all = malloc(s_size+1);
                        sprintf(s_all,"");
                        for (int j = 0; j < the_rule->rhs[i].n_sym_str; j++){
                                strcat(s_all,s_array[j]);
                        }
                        char *s_res = malloc(strlen(array_str_template) + strlen(s_all) + the_rule->rhs[i].n_sym_str/10 +1);
                        sprintf(s_res,array_str_template,the_rule->rhs[i].n_sym_str);
                        replace_to(s_res,s_res,"{$repr}",s_all);
                        char all_template[] = "\n\t%s\n\tint the_size = strlen(pos_str[%d])+1;\n\t%s_0->sym_str = malloc(the_size);\n\tstrcpy(%s_0->sym_str, pos_str[%d]);\n\t{$replace_cycle}\nenqueue(%s_0->sym_str);\n";
                        char *replace_e_template;
                        replace_e_template = "replace_to_mem_safe(&%s_0->sym_str,%s_0->sym_str,\"{$ph}\",to_str(&lhs->{$ph},\"{$type}\"),&the_size);\n\t\t";
                        char **replace_e_cycle = malloc(sizeof(char *) * the_rule->lhs.n_attr);
                        int r_len = 0;
                        for (int j = 0; j < the_rule->lhs.n_attr; j++){
                                char *replace_e = malloc(strlen(replace_e_template) + 2*strlen(the_rule->rhs[i].name) + 2*strlen(the_rule->lhs.atts_name[j]));

                        if (strcmp(the_rule->lhs.attributes[j].type, "char*") == 0) {
                        sprintf(replace_e,"replace_to_mem_safe(&%s_0->sym_str,%s_0->sym_str,\"{$ph}\",to_str(lhs->{$ph},\"{$type}\"),&the_size);\n\t\t",the_rule->rhs[i].name, the_rule->rhs[i].name);
                       }
                        else{
                                sprintf(replace_e, replace_e_template, the_rule->rhs[i].name, the_rule->rhs[i].name);
                        }
                                replace_to(replace_e,replace_e,"{$ph}",the_rule->lhs.atts_name[j]);
                                replace_to(replace_e,replace_e,"{$type}",the_rule->lhs.attributes[j].type);
                                replace_e_cycle[j] = replace_e;
                                r_len+=strlen(replace_e);
                        }
                        char *r_all = malloc(r_len+1);
                        sprintf(r_all,"");
                        for (int j = 0; j < the_rule->lhs.n_attr; j++){
                                strcat(r_all,replace_e_cycle[j]);
                        }
                        char *r_all_str = malloc(strlen(all_template) + strlen(s_res) + 3*strlen(the_rule->rhs[i].name) + 2*(id/10+1) + strlen(r_all));

                        sprintf(r_all_str,all_template,s_res,id,the_rule->rhs[i].name, the_rule->rhs[i].name, id,the_rule->rhs[i].name);
                        replace_to(r_all_str,r_all_str,"{$replace_cycle}",r_all);
                        if (strlen(all_template) + strlen(s_res) + 3*strlen(the_rule->rhs[i].name) + 2*(id/10+1) + strlen(r_all) < strlen(r_all_str)){

                        exit(EXIT_FAILURE);
                }
                        free(s_res);
                        r_string = r_all_str;
                        the_rule->attribute_operations = NULL;
                }
        }
        char *the_lhs_conv = malloc(strlen(the_lhs_conv_template)  + strlen(the_rule->lhs.name)*2 + 1);
        replace_to(the_lhs_conv, the_lhs_conv_template, "{$lhs}", the_rule->lhs.name);
        int the_len = 0;
        int the_len_out = 0;
        for (int i = 0; i < the_rule->n_rhs; i++){
                the_len+=strlen(the_rhs_list_decl_template[i]) + strlen(the_symbol_init_array[i]);
                the_len_out+=strlen(publish_result_list_template[i]);
        }
        char *the_rhs_list_decl = malloc(the_len+1);
        char *the_publish = malloc(the_len_out+1);
        strcpy(the_rhs_list_decl, the_rhs_list_decl_template[0]);
        strcat(the_rhs_list_decl, the_symbol_init_array[0]);
        strcpy(the_publish, publish_result_list_template[0]);
        for(int i = 1; i < the_rule->n_rhs; i++){
                strcat(the_rhs_list_decl, the_rhs_list_decl_template[i]);
                strcat(the_rhs_list_decl, the_symbol_init_array[i]);
                strcat(the_publish, publish_result_list_template[i]);
                free(the_rhs_list_decl_template[i]);
                free(the_symbol_init_array[i]);
                free(publish_result_list_template[i]);
        }

        free(the_symbol_init_array);
        free(publish_result_list_template);
        char *the_code;        
        if(the_rule->attribute_operations != NULL){    
            the_code = malloc(strlen(the_lhs_conv)+strlen(the_rhs_list_decl)+strlen(the_rule->attribute_operations)+2 + strlen(the_publish));
            sprintf(the_code,"%s%s%s\n%s",the_lhs_conv,the_rhs_list_decl,the_rule->attribute_operations,the_publish);
            if (strlen(the_lhs_conv)+strlen(the_rhs_list_decl)+strlen(the_rule->attribute_operations)+2 + strlen(the_publish) <= strlen(the_code)){
                printf("Assertion the code failed\n");
                exit(EXIT_FAILURE);
            }
        }
        else{
            the_code = malloc(strlen(the_lhs_conv)+strlen(the_rhs_list_decl)+2 + strlen(the_publish));
            sprintf(the_code,"%s%s\n%s",the_lhs_conv,the_rhs_list_decl,the_publish);
            if (strlen(the_lhs_conv)+strlen(the_rhs_list_decl)+2 + strlen(the_publish) < strlen(the_code)){

                printf("Assertion the code failed\n");
                exit(EXIT_FAILURE);
            }
        }
        free(the_publish);
        if (r_string != NULL){
                the_code = realloc(the_code, strlen(the_code) + strlen(r_string) + 4);
                sprintf(the_code,"%s\n%s\n",the_code, r_string);
                free(r_string);
        }
        int rhs_list_name_len = 0;
        for (int i = 0; i < the_rule->n_rhs; i++){
                rhs_list_name_len+=strlen(the_rule->rhs[i].name);
        }
        rhs_list_name_len+=the_rule->n_rhs;
        char *the_rhs_list_name = malloc(rhs_list_name_len+100);
        sprintf(the_rhs_list_name,"%s",the_rule->rhs[0].name);
        for(int i = 1; i < the_rule->n_rhs; i++){
                strcat(the_rhs_list_name,"_");
                strcat(the_rhs_list_name,the_rule->rhs[i].name);
        }
        char *out = malloc(strlen(template_sign)+strlen(the_rule->lhs.name) + strlen(the_rhs_list_name) + strlen(the_code) +1);
        if(out == NULL){
                printf("Run out of memory\n"); 
                exit(EXIT_FAILURE);
        }
        replace_to(out, template_sign, "{$lhs}",the_rule->lhs.name);
        replace_to(out, out, "{$rhs_list}", the_rhs_list_name);
        replace_to(out, out, "{$the_code}", the_code);
        if(strlen(template_sign)+strlen(the_rule->lhs.name) + strlen(the_rhs_list_name) + strlen(the_code) +1 < strlen(out)){
                printf("Assertion failed\n");
                exit(EXIT_FAILURE);
        }
        free(the_code);
        free(the_rhs_list_name);
        free(the_rhs_list_decl);
        free(the_lhs_conv);
        free(the_rhs_list_decl_template);
        return out;
err:
        printf("Error during rule generation, maybe memory leak\n");
        return NULL;
}


char *generate_sym_to_rules_trans_array(rule_t rules[], int n_rules){
        
        char array_def[1024];
        char the_code_template[] = "{$def}\nvoid init_trans_rules(void){\nfor(int i = 0; i < N_SYM; i++){\n\tfor(int j =0; j < MAX_RULE; j++){\n\t\t trans_rules[i][j] = NULL;\n\t}\n}{$cycle}\n}";
        sprintf(array_def,"rule_func trans_rules[N_SYM][MAX_RULE];\n");
        
        char array_pop_template[] = "trans_rules[%d][%d] = %s;\n";
        char cycle_template[1024];
        sprintf(cycle_template,"\n{$array_pop_template}\n");
        char **array_pop_list_template = malloc(sizeof(char *)*n_rules);
        int the_len = 0;
        int *sym_counter = malloc(sizeof(int) * MAX_SYMBOLS);
        memset(sym_counter,0,sizeof(int)*MAX_SYMBOLS);
        for (int i = 0;  i < n_rules; i++){
                char rule_name_template[] = "from_%s_to_%s";
                char *rule_name = malloc(strlen(rule_name_template) + strlen(rules[i].lhs.name) + strlen(rules[i].rhs[0].name)+1);
                sprintf(rule_name,rule_name_template,rules[i].lhs.name,rules[i].rhs[0].name);
                char *rule = malloc(strlen(array_pop_template) + get_sym_id_from_name(rules[i].lhs.name)/10 +1 + 4 + strlen(rule_name));
                sprintf(rule,array_pop_template,get_sym_id_from_name(rules[i].lhs.name),sym_counter[get_sym_id_from_name(rules[i].lhs.name)], rule_name);
                array_pop_list_template[i] = rule;
                the_len+=strlen(rule);
                sym_counter[get_sym_id_from_name(rules[i].lhs.name)]+=1;
        }
        char *array_pop_list = malloc(the_len+1);
        sprintf(array_pop_list, "");
        for (int i = 0; i < n_rules; i++){
                if(array_pop_list_template[i] != NULL){
                        strcat(array_pop_list, array_pop_list_template[i]);
                        free(array_pop_list_template[i]);
                }
        }
        free(array_pop_list_template);
        char *the_cycle = malloc(strlen(cycle_template)  +1 + strlen(array_pop_list));
        replace_to(the_cycle, cycle_template, "{$array_pop_template}", array_pop_list);
        free(array_pop_list);
        char *the_code = malloc(strlen(the_code_template)  +1 +strlen(the_cycle)+strlen(array_def));
        replace_to(the_code, the_code_template,"{$def}",array_def);
        replace_to(the_code, the_code, "{$cycle}", the_cycle);
        free(the_cycle);
        return the_code;
}

char *generate_sym_to_rules_array(rule_t rules[], int n_rules){
        
        char array_def[1024];
        char the_code_template[] = "{$def}\nvoid init_sym_to_rules(void){\nfor(int i = 0; i < N_SYM; i++){\n\tfor(int j =0; j < MAX_RULE; j++){\n\t\t sym_to_rules[i][j] = -1;\n\t}\n}{$cycle}\n}";
        sprintf(array_def,"int sym_to_rules[N_SYM][MAX_RULE];\n");
        
        char array_pop_template[] = "sym_to_rules[%d][%d] = %d;\n";
        char cycle_template[1024];
        sprintf(cycle_template,"\n{$array_pop_template}\n");
        char **array_pop_list_template = malloc(sizeof(char *)*n_rules);
        int the_len = 0;
        int *sym_counter = malloc(sizeof(int) * MAX_SYMBOLS);
        memset(sym_counter,0,sizeof(int)*MAX_SYMBOLS);
        for (int i = 0;  i < n_rules; i++){
                char *rule = malloc(strlen(array_pop_template) + 4);
                sprintf(rule,array_pop_template,get_sym_id_from_name(rules[i].lhs.name),sym_counter[get_sym_id_from_name(rules[i].lhs.name)], i);
                array_pop_list_template[i] = rule;
                the_len+=strlen(rule);
                sym_counter[get_sym_id_from_name(rules[i].lhs.name)]+=1;
        }
        char *array_pop_list = malloc(the_len+1);
        sprintf(array_pop_list, "");
        for (int i = 0; i < n_rules; i++){
                if(array_pop_list_template[i] != NULL){
                        strcat(array_pop_list, array_pop_list_template[i]);
                        free(array_pop_list_template[i]);
                }
        }
        free(array_pop_list_template);
        char *the_cycle = malloc(strlen(cycle_template)  +1 + strlen(array_pop_list));
        replace_to(the_cycle, cycle_template, "{$array_pop_template}", array_pop_list);
        free(array_pop_list);
        char *the_code = malloc(strlen(the_code_template)  +1 +strlen(the_cycle)+strlen(array_def));
        replace_to(the_code, the_code_template,"{$def}",array_def);
        replace_to(the_code, the_code, "{$cycle}", the_cycle);
        free(the_cycle);
        return the_code;
}

char *generate_terminal_rule_array(rule_t rules[],  int n_rules){

        char array_def[1024];
        char the_code_template[] = "{$def}\nvoid init_terminal_rules(void){\n{$cycle}\n}";
        sprintf(array_def,"unsigned int terminal_rules[MAX_RULE];\n");
        
        char array_pop_template[] = "terminal_rules[%d] = 1;\n";
        char cycle_template[1024];
        sprintf(cycle_template,"\n{$array_pop_template}\n");
        char **array_pop_list_template = malloc(sizeof(char *)*n_rules);
        int the_len = 0;
        for (int i = 0;  i < n_rules; i++){
                char *rule = malloc(strlen(array_pop_template) + 4);
                if (rules[i].n_rhs == 1 && rules[i].rhs[0].is_NT == 0x0){
                        sprintf(rule, array_pop_template, i);
                        array_pop_list_template[i] = rule;
                        the_len+=strlen(rule);
                }
                else{
                        sprintf(rule, "terminal_rules[%d] = 0;\n", i);
                        array_pop_list_template[i] = rule;
                        the_len+=strlen(rule);
                }
        }
        char *array_pop_list = malloc(the_len+1);
        sprintf(array_pop_list, "");
        for (int i = 0; i < n_rules; i++){
                if(array_pop_list_template[i] != NULL){
                        strcat(array_pop_list, array_pop_list_template[i]);
                        free(array_pop_list_template[i]);
                }
        }
        free(array_pop_list_template);
        char *the_cycle = malloc(strlen(cycle_template)  +1 + strlen(array_pop_list));
        replace_to(the_cycle, cycle_template, "{$array_pop_template}", array_pop_list);
        free(array_pop_list);
        char *the_code = malloc(strlen(the_code_template)  +1 +strlen(the_cycle)+strlen(array_def));
        replace_to(the_code, the_code_template,"{$def}",array_def);
        replace_to(the_code, the_code, "{$cycle}", the_cycle);
        free(the_cycle);
        return the_code;
}

char* generate_rule_functions_array(rule_t rules[], int n_rules){
        char array_def[1024];
        char the_code_template[] = "{$def}\nvoid init_rule_array(void){\n\t{$cycle}\n}";
        sprintf(array_def,"rule_func rule_functions[MAX_RULE];\n");
        char array_pop_template[] = "rule_functions[{$i}] = from_{$lhs}_to_{$rhs_list};\n";
        char cycle_template[1024];
        sprintf(cycle_template,"\n{$array_pop_template}\n");
        char **array_pop_list_template = malloc(sizeof(char *)*n_rules);
        int the_len = 0;
        for (int i = 0;  i < n_rules; i++){
                char *lhs_name = rules[i].lhs.name;
                int max_len = 0;
                for (int j = 0; j < rules[i].n_rhs; j++){
                        if(strlen(rules[i].rhs[j].name)>max_len){
                                max_len = strlen(rules[i].rhs[j].name);
                        }
                }
                char *rhs_list_name = malloc(max_len*rules[i].n_rhs + 2*rules[i].n_rhs);
                sprintf(rhs_list_name,"%s",rules[i].rhs[0].name);
                for(int j = 1; j < rules[i].n_rhs; j++){
                        strcat(rhs_list_name,"_");
                        strcat(rhs_list_name,rules[i].rhs[j].name);
                }
                char *pop_rule = malloc(strlen(array_pop_template) + strlen(lhs_name)  +1 +2 +strlen(rhs_list_name));
                char the_i[4];
                sprintf(the_i,"%d",i);
                replace_to(pop_rule,array_pop_template,"{$i}",the_i);
                replace_to(pop_rule,pop_rule,"{$lhs}",lhs_name);
                replace_to(pop_rule,pop_rule,"{$rhs_list}",rhs_list_name);
                array_pop_list_template[i]=pop_rule;
                the_len+=strlen(pop_rule);
        }
        char *array_pop_list = malloc(the_len+1);
        sprintf(array_pop_list, "%s", array_pop_list_template[0]);
        for (int i = 1; i < n_rules; i++){
                strcat(array_pop_list, array_pop_list_template[i]);
                free(array_pop_list_template[i]);
        }
        free(array_pop_list_template);
        char *the_cycle = malloc(strlen(cycle_template)  +1 + strlen(array_pop_list));
        //sprintf(the_cycle,"\n%s\n",array_pop_list);
        replace_to(the_cycle, cycle_template, "{$array_pop_template}", array_pop_list);
        free(array_pop_list);
        char *the_code = malloc(strlen(the_code_template)  +1 +strlen(the_cycle)+strlen(array_def));
        replace_to(the_code, the_code_template,"{$def}",array_def);
        replace_to(the_code, the_code, "{$cycle}", the_cycle);
        free(the_cycle);
        return the_code;
}

char *gen_get_size_sym(symbol_t *syms, int n_sym){
        char template[] = "int get_size(void *sym){\n\tint id = get_sym_id(sym);\n\t{$code}\n}\n";
        char code_template[] = "if (id == %d){\n\t return sizeof(%s);\n}\n\t";
        int len = 0;
        char **codes = malloc(sizeof(char*)*n_sym);
        for (int i = 0; i < n_sym; i++){
                int id = i;
                char sym_type_temp[] = "%s_t";
                char sym_name[1024];
                sprintf(sym_name, sym_type_temp, syms[i].name);
                char *temp = malloc(strlen(code_template) + strlen(sym_name) + id/10+1); 
                sprintf(temp, code_template, id, sym_name);
                codes[i] = temp;
                len+=strlen(temp);
        }
        char *res = malloc(strlen(template) + len);
        char *code_str = malloc(len+1);
        sprintf(code_str, "%s", codes[0]);
        for(int i = 1; i < n_sym; i++){
                strcat(code_str,codes[i]);
                free(codes[i]);
        }
        free(codes);
        replace_to(res, template, "{$code}", code_str);
        free(code_str);
        return res;
}

char *gen_lib_init(){
        char init[] = "block_bitmap *rule_bitmap;\nvoid library_init(){\n\tinit_rule_array();\n\t init_sym_to_rules();\n\t init_terminal_rules();\ninit_trans_rules();\nrule_bitmap = malloc(bitmap_required_size(MAX_RULE));\nbitmap_initialize(rule_bitmap,MAX_RULE);\n}";
        char *str = malloc(strlen(init)+1);
        strcpy(str, init);
        return str;
}

char *write_limit(int n_syms, int n_rules){
        char template[] = "#pragma once\n#define N_SYM %d\n#define MAX_RULE %d\n";
        char *ret = malloc(strlen(template) + n_syms/10+1 + n_rules/10+1);
        sprintf(ret,template,n_syms,n_rules);
        return ret;
}
