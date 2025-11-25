#include "parser/parser.h"
#include <internal/ag_utils.h> 
#include <internal/gen_parse.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
char *gen_beg_def(){
        if(idx_def == 0)
                return "";
        char *out = malloc(strlen(glob_x_def[0])*2);
        int size = strlen(glob_x_def[0])*2;
        sprintf(out,"");
        for(int i = 0; i < idx_def; i++){
                if (strlen(out)+strlen(glob_x_def[i]) > size){
                        out = realloc(out,size*2);
                        size = size*2;
                }
                strcat(out, glob_x_def[i]);
                strcat(out, "\n");
        }
        return out;
}


char *gen_red_header(){
        char *out;
// Build header file for reduce.h
        char template[] = "#pragma once\n#include \"tahr.h\"\n#define MAX_RED_SYM %d\n{$fun_def}";
        char fun_def_template[] = "extern int from_{$rhs_list}_to_{$lhs}({$rhs_list_type});\n";
        char **fun_def_array = malloc(sizeof(char*) * idx_red_rules);
        int fun_def_array_len = 0;
        int max_red_sym = 0;
        for (int i = 0; i < idx_red_rules; i++){
                rule_t rule = g_red_rules[i];
                if (rule.n_rhs>max_red_sym){
                        max_red_sym = rule.n_rhs;
                }
                int fun_def_size = strlen(fun_def_template) * 2;
                char *fun_def = malloc(fun_def_size);
                replace_to(fun_def,fun_def_template,"{$lhs}",g_red_rules[i].lhs.name);
                char rhs_template[] = "%s";
                char **rhs_list_array = malloc(sizeof(char*) * rule.n_rhs);
                int rhs_list_len = 0;
                for (int j = 0; j < rule.n_rhs; j++){
                        char *rhs_name = malloc(strlen(rhs_template) + strlen(rule.rhs[j].name) + 100);
                        sprintf(rhs_name,rhs_template,rule.rhs[j].name);
                        rhs_list_array[j] = rhs_name;
                        rhs_list_len+=strlen(rhs_name);
                }
                char *rhs_list = malloc(rhs_list_len*3);
                char *rhs_list_type = malloc(rhs_list_len*5);
                int rhs_list_type_size = rhs_list_len*5;
                sprintf(rhs_list,"");
                sprintf(rhs_list_type,"");
                for (int j = 0; j < rule.n_rhs-1; j++){
                        strcat(rhs_list,rhs_list_array[j]);
                        strcat(rhs_list_type,rhs_list_array[j]);
                        strcat(rhs_list_type,"_t* {$param_name}");
                        char *param_name = malloc(strlen(rhs_list_array[j]) + 100);
                        sprintf(param_name,"%s_%d",rhs_list_array[j],j);
                        while(strlen(rhs_list_type) + strlen(param_name) >= rhs_list_type_size){
                                rhs_list_type = realloc(rhs_list_type,rhs_list_type_size*2);
                                rhs_list_type_size = rhs_list_type_size*2;
                        }
                        replace_to(rhs_list_type,rhs_list_type,"{$param_name}",param_name);
                        strcat(rhs_list_type,",");
                        free(rhs_list_array[j]);
                        strcat(rhs_list,"_");
                }
                strcat(rhs_list,rhs_list_array[rule.n_rhs-1]);
                strcat(rhs_list_type,rhs_list_array[rule.n_rhs-1]);
                strcat(rhs_list_type,"_t* {$param_name}");
                char *param_name = malloc(strlen(rhs_list_array[rule.n_rhs-1]) + 100);
                sprintf(param_name,"%s_%d",rhs_list_array[rule.n_rhs-1],rule.n_rhs-1);
                while(strlen(rhs_list_type) + strlen(param_name) >= rhs_list_type_size){
                        rhs_list_type = realloc(rhs_list_type,rhs_list_type_size*2);
                        rhs_list_type_size = rhs_list_type_size*2;
                }
                replace_to(rhs_list_type,rhs_list_type,"{$param_name}",param_name);
                while (strlen(fun_def) + strlen(rhs_list) >= fun_def_size){
                        fun_def = realloc(fun_def,fun_def_size*2);
                        fun_def_size = fun_def_size*2;
                }
                replace_to(fun_def,fun_def,"{$rhs_list}",rhs_list);
                free(rhs_list);
                while (strlen(fun_def) + strlen(rhs_list_type) >= fun_def_size){
                        fun_def = realloc(fun_def,fun_def_size*2);
                        fun_def_size = fun_def_size*2;
                }
                replace_to(fun_def,fun_def,"{$rhs_list_type}",rhs_list_type);
                g_red_rules[i].red_rule = malloc(strlen(fun_def)+1);
                strcpy(g_red_rules[i].red_rule,fun_def);
                fun_def_array[i] = fun_def;
                fun_def_array_len+=strlen(fun_def);
                free(rhs_list_type);
        }
        char *fun_definitions = malloc(fun_def_array_len + 3*idx_red_rules); 
        sprintf(fun_definitions,"");
        for (int i = 0; i < idx_red_rules; i++){
                strcat(fun_definitions,fun_def_array[i]);
                strcat(fun_definitions,"\n");
                free(fun_def_array[i]);
        }
        out = malloc(strlen(fun_definitions)+strlen(template) + 100);
        sprintf(out,template,max_red_sym);
        replace_to(out,out,"{$fun_def}",fun_definitions);
        return out;
}

char *gen_red_function(){
        char *out;
// Build file reduce.c with a function for each reduce rule defined
        char template[] = "#include \"reduce.h\"\n#include \"ag_parser.h\"\n{$code}"; 
        char fun_def_template[] = "int from_{$rhs_list}_to_{$lhs}({$rhs_list_type}){\n\t{$fun_code}\n}";
        char **code_array = malloc(idx_red_rules * sizeof(char*));
        int fun_def_len = 0;
        for (int i = 0; i < idx_red_rules; i++){
                char *code = gen_red_rule(g_red_rules + i, i); 
                rule_t rule = g_red_rules[i];
                int fun_def_size = strlen(fun_def_template) * 2;
                char *fun_def = malloc(fun_def_size);
                replace_to(fun_def,fun_def_template,"{$lhs}",g_red_rules[i].lhs.name);
                char rhs_template[] = "%s";
                char **rhs_list_array = malloc(sizeof(char*) * rule.n_rhs);
                int rhs_list_len = 0;
                for (int j = 0; j < rule.n_rhs; j++){
                        char *rhs_name = malloc(strlen(rhs_template) + strlen(rule.rhs[j].name) + 100);
                        sprintf(rhs_name,rhs_template,rule.rhs[j].name);
                        rhs_list_array[j] = rhs_name;
                        rhs_list_len+=strlen(rhs_name);
                }
                char *rhs_list = malloc(rhs_list_len*3);
                char *rhs_list_type = malloc(rhs_list_len*5);
                int rhs_list_type_size = rhs_list_len*5;
                sprintf(rhs_list,"");
                sprintf(rhs_list_type,"");
                for (int j = 0; j < rule.n_rhs-1; j++){
                        strcat(rhs_list,rhs_list_array[j]);
                        strcat(rhs_list_type,rhs_list_array[j]);
                        strcat(rhs_list_type,"_t* {$param_name}");
                        char *param_name = malloc(strlen(rhs_list_array[j]) + 100);
                        sprintf(param_name,"%s_%d",rhs_list_array[j],j);
                        while(strlen(rhs_list_type) + strlen(param_name) >= rhs_list_type_size){
                                rhs_list_type = realloc(rhs_list_type,rhs_list_type_size*2);
                                rhs_list_type_size = rhs_list_type_size*2;
                        }
                        replace_to(rhs_list_type,rhs_list_type,"{$param_name}",param_name);
                        strcat(rhs_list_type,",");
                        free(rhs_list_array[j]);
                        strcat(rhs_list,"_");
                }
                strcat(rhs_list,rhs_list_array[rule.n_rhs-1]);
                strcat(rhs_list_type,rhs_list_array[rule.n_rhs-1]);
                strcat(rhs_list_type,"_t* {$param_name}");
                char *param_name = malloc(strlen(rhs_list_array[rule.n_rhs-1]) + 100);
                sprintf(param_name,"%s_%d",rhs_list_array[rule.n_rhs-1],rule.n_rhs-1);
                while(strlen(rhs_list_type) + strlen(param_name) >= rhs_list_type_size){
                        rhs_list_type = realloc(rhs_list_type,rhs_list_type_size*2);
                        rhs_list_type_size = rhs_list_type_size*2;
                }
                replace_to(rhs_list_type,rhs_list_type,"{$param_name}",param_name);
                while (strlen(fun_def) + strlen(rhs_list) >= fun_def_size){
                        fun_def = realloc(fun_def,fun_def_size*2);
                        fun_def_size = fun_def_size*2;
                }
                replace_to(fun_def,fun_def,"{$rhs_list}",rhs_list);
                free(rhs_list);
                while (strlen(fun_def) + strlen(rhs_list_type) >= fun_def_size){
                        fun_def = realloc(fun_def,fun_def_size*2);
                        fun_def_size = fun_def_size*2;
                }
                replace_to(fun_def,fun_def,"{$rhs_list_type}",rhs_list_type);
                while (strlen(fun_def) + strlen(code) >= fun_def_size){
                        fun_def = realloc(fun_def,fun_def_size*2);
                        fun_def_size = fun_def_size*2;
                }
                replace_to(fun_def,fun_def,"{$fun_code}",code);
                fun_def_len += strlen(fun_def);
                code_array[i] = fun_def;
        }
        char *fun_def_all = malloc(fun_def_len + idx_red_rules*3);
        sprintf(fun_def_all,"");
        for (int i = 0; i < idx_red_rules; i++){
                strcat(fun_def_all,code_array[i]);
                strcat(fun_def_all,"\n");
        }
        out = malloc(strlen(template) + strlen(fun_def_all));
        replace_to(out,template,"{$code}",fun_def_all);
        return out;
}


int copy_sym_str(char **dest, char *sym_str){
        char *map[] = {"COMMA","DOT","SEMICOLON","COLON","O_SQUARE","C_SQUARE","O_BRACKET","C_BRACKET","O_CURLY","C_CURLY","DOLLAR","STAR"};
        char *result = malloc(4*strlen(sym_str));
        int res_size = 4*strlen(sym_str);
        char *map2[] = {",",".",";",":","[","]","(",")","{","}","$","*"};
        sprintf(result,"%s",sym_str);
        for (int i = 0; i < 12; i++){
                if(strlen(map[i]) + strlen(result) >= res_size){
                    result = realloc(result,res_size*2);
                    res_size = res_size*2;
                }
                replace_to(result,result, map2[i], map[i]);
        }
        // SPLIT THE STRING AND COUNT MEMBERS
        int nmember = 0;
        int start_word = 0;
        int i = 0;
        int size = 0;
        while(i < strlen(result)){
                if (result[i] == '"'){
                        if (start_word == 0){
                                start_word = 1;
                        }else{
                                start_word = 0;
                                nmember++;
                        }
                }else{
                        if (start_word){
                                i++;
                                size++;
                                continue;
                        }
                        if (result[i] == ' '){
                                i++;
                                continue;
                        }
                        nmember++;
                        size++;
                        while(i < strlen(result)){
                                if (result[i] == '"' || result[i] == ' '){
                                        i--;
                                        break;
                                }
                                size++;
                                i++;
                        }
                }
                i++; 
        }
        char *buf = malloc(size+3*nmember);
        int buf_size = size+3*nmember;
        i = 0; 
        int j = 0;
        while(i < strlen(result)){
                if(j >= buf_size){
                    buf = realloc(buf,buf_size*2);
                    buf_size = buf_size*2;
                }
                if (result[i] == '"'){
                        if (start_word == 0){
                                start_word = 1;
                        }else{
                                start_word = 0;
                                buf[j] = ' ';
                                j++;
                        }
                }else{
                        if (start_word){
                                if (result[i]>= 'a' && result[i]<= 'z')
                                        buf[j] = result[i] - ('a'-'A');
                                else
                                        buf[j] = result[i];
                                j++;
                                i++;
                                continue;
                        }
                        if (result[i] == ' '){
                                i++;
                                continue;
                        }
                        while(i < strlen(result)){
                                if (result[i] == '"' || result[i] == ' '){
                                        i--;
                                        buf[j] = ' ';
                                        j++;
                                        break;
                                }
                                else{
                                        if (result[i]>= 'a' && result[i]<= 'z')
                                                buf[j] = result[i] - ('a'-'A');
                                        else
                                                buf[j] = result[i];
                                        j++;
                                }
                                i++;
                        }
                }
                i++; 
        }
        buf[j] = '\0';
        *dest = buf;
        return nmember;
}

char **split(char *str, char del){
        char **out;
        int not_del = 0;
        int size = 0;
        int j = 0;
        while(str[j] == del)
                j++;
        for (int i = j; i < strlen(str); i++){
                if (str[i] == del && not_del){
                        not_del = 0;
                        size++;
                }
                else{
                        not_del = 1;
                }
        }
        out = calloc(size+10, sizeof(char*));
        int out_size = (size+10)*sizeof(char*); 
        int i_size = 0;
        not_del = 0;
        int c = 0;
        for (int i = j; i < strlen(str); i++){
                if (str[i] == del && not_del){
                        not_del = 0;
                        char *tmp = malloc(i_size+1);
                        memcpy(tmp, str + (i-i_size), i_size);
                        tmp[i_size] = '\0';
                        if(c>=out_size){
                            out = realloc(out,out_size*2);
                            out_size = out_size*2;
                        }
                        out[c] = tmp;
                        c++;
                        i_size = 0;
                }
                else{
                        not_del = 1;
                        i_size++;
                }
        }
        return out;
}

int is_att_name(symbol_t *sym, char *str){
        char *i_str = str;
        for (int i = 0; i < sym->n_attr; i++){
                if (strcmp(sym->atts_name[i], i_str) == 0){
                       return 1;
                }
        }
        return 0;
}
int is_att(symbol_t *sym, char *str, char *type){
        char *i_str = to_lower_case(str);
        for (int i = 0; i < sym->n_attr; i++){
                if (strcmp(sym->attributes[i].name, i_str) == 0){
                       if (strcmp(sym->attributes[i].type, "char*") == 0){
                                *type = 's';
                       }
                       if (strcmp(sym->attributes[i].type, "char") == 0){
                                *type = 'c';
                       }
                       if (strcmp(sym->attributes[i].type, "long") == 0){
                                *type = 'l';
                       }
                       if (strcmp(sym->attributes[i].type, "int") == 0){
                                *type = 'i';
                       }
                       return 1;
                }
        }
        return 0;
}

char *gen_red_rule(rule_t *rule,int id){
        char *out;
        //char template[] = "{$name}: {$rhs_list} {\n\t{$init}\n\t{$att_oper}\n\t{$sym_save}\nend_%d: ;\n};";
        char template[] = "{$init}\n\t{$att_oper}\n\t{$sym_save}\n";
        //char init_template[] = "{$name}_t *res = malloc(sizeof({$name}_t));\nsymbol_init(res,\"%s\",0);\n{$take_other}\n";
        char init_template[] = "{$name}_t *res = malloc(sizeof({$name}_t));\nsymbol_init(res,\"%s\",0);";
        char sym_save_template[1024] = "return save_and_fix(res,%d);\n"; 
        char take_other_template[] = "{$name}_t *{$name}_%d = ({$name}_t*) get_sym(%d);\n";
        char **take_other = malloc(sizeof(char *) * rule->n_rhs);
        int len = 0;
       // for (int i = 0; i < rule->n_rhs; i++){
       //         char *to = malloc(1024);
       //         int to_size = 1024;
       //         sprintf(to,take_other_template,i,rule->n_rhs-i);
       //         while(strlen(to)+strlen(rule->rhs[i].name)*3 >= to_size){
       //                 to = realloc(to,to_size*2);
       //                 to_size = to_size*2;
       //         }
       //         replace_to(to,to,"{$name}",rule->rhs[i].name);
       //         take_other[i] = to;
       //         len+=strlen(to);
       // }
       // char *take_other_s = malloc(len+1024);
       // int take_other_s_size = len+1024;
       // sprintf(take_other_s,"");
       // for (int i = 0; i < rule->n_rhs; i++){
       //         while(strlen(take_other_s) + strlen(take_other[i]) >= take_other_s_size){
       //                 take_other_s = realloc(take_other_s,take_other_s_size*2);
       //                 take_other_s_size*=2;
       //         }
       //         strcat(take_other_s,take_other[i]);
       //         free(take_other[i]);
       // }
        int init_size = strlen(init_template) + 1024;
        char *init = malloc(init_size);
        sprintf(init, init_template,rule->lhs.name); 
        while(strlen(init) + strlen(rule->lhs.name)*2 /*+ strlen(take_other_s)*/ >= init_size){
                init = realloc(init,init_size*2);
                init_size = init_size *2;
        }
        replace_to(init,init,"{$name}",rule->lhs.name);
        //replace_to(init,init,"{$take_other}",take_other_s);
        //free(take_other_s);
        // We have to fix the attribute operation string
        char **rhs_names = malloc(sizeof(char*) * rule->n_rhs);
        for (int i = 0; i < rule->n_rhs; i++){
                char *rhs_name = malloc(strlen(rule->rhs[i].name) + 100);
                sprintf(rhs_name,"%s_%d",rule->rhs[i].name,i);
                rhs_names[i] = rhs_name;
        }
        char *att = malloc(strlen(rule->attribute_operations)*4);
        replace_to(att,rule->attribute_operations,".","->");
        int att_size = strlen(rule->attribute_operations)*4;
        replace_to(att,att,"$$","res");
        for (int i = 0; i < rule->n_rhs; i++){
                while(strlen(att) > att_size/2){
                        att = realloc(att,att_size*2);
                        att_size = att_size * 2;
                }
                char *ph = malloc(20);
                sprintf(ph,"$%d",i+1);
                replace_to(att,att,ph,rhs_names[i]);
        }
        while(strlen(att) > att_size/2){
                att = realloc(att,att_size*2);
                att_size = att_size * 2;
        }
        // Now just fix the revert 
        char revert_template[1024] = "free(res);\nreturn 1;";
        replace_to(att,att,"revert;",revert_template);
        int rhs_list_size = 1024;
        char *rhs_list = malloc(rhs_list_size);
        sprintf(rhs_list,"");
        for (int i = 0; i < rule->n_rhs; i++){
                if (strlen(rhs_list) + strlen(rule->rhs[i].name) +1 >= rhs_list_size){
                        rhs_list = realloc(rhs_list,rhs_list_size*2);
                        rhs_list_size = rhs_list_size*2;
                }
                strcat(rhs_list,rule->rhs[i].name);
                strcat(rhs_list," ");
        }
        sprintf(sym_save_template,sym_save_template,rule->n_rhs);
        int out_size = strlen(template)  + strlen(att) + strlen(init) + strlen(sym_save_template) +1;
        out = malloc(out_size);
        replace_to(out,template,"{$init}",init);
        
        while(strlen(out) + strlen(att) >= out_size){
                out = realloc(out,out_size*2);
                out_size*=2;
        }
        replace_to(out,out,"{$att_oper}",att);
        while(strlen(out) + strlen(sym_save_template) >= out_size){
                out = realloc(out,out_size*2);
                out_size*=2;
        }
        replace_to(out,out,"{$sym_save}",sym_save_template);
        free(att);
        free(init);
        free(rhs_list);
        return out;
}
char *gen_constant_sym(){
        char template[] = "\%token<str> {$name};\n";
        char *map[] = {"COMMA","DOT","SEMICOLON","COLON","O_SQUARE","C_SQUARE","O_BRACKET","C_BRACKET","O_CURLY","C_CURLY","DOLLAR","STAR"};
        char *out = malloc(strlen(template) * 12);
        int size = strlen(template)*12;
        int occ = 0;
        sprintf(out,"");
        for(int i = 0; i < 12; i++){
                char *tmp = malloc(strlen(template) + strlen(map[i]));
                replace_to(tmp, template, "{$name}", map[i]);
                occ+=strlen(tmp);
                if(occ >= size){
                        out = realloc(out, 2*size);
                        size = size*2;
                }
                strcat(out, tmp);
                free(tmp);
        }
        return out;
}
char *gen_sym_alloc_code(symbol_t *sym, char *code_body, int nmember, symbol_t *orig_sym){
        char template[] = "{$name}_t *res = malloc(sizeof({$name}_t));\n{$init_code}\nsymbol_init(res,\"%s\",0);\n";
        char template_init[] = "res->{$att} = {$init};\n";
        char from_str_to_l[] = "i_strtol({$str})";
        char **init = malloc(sizeof(char *)*nmember);
        int c = 0; 
        char **arr = split(code_body, ' ');
        char **arr2 = split(orig_sym->sym_str[0], ' ');
        int init_size = 0;
        for (int i = 0; i < nmember; i++){
                char type;
                if(is_att(sym,arr[i],&type)){
                        char *the_init;
                        char res[10];
                        sprintf(res, "$%d", i+1);
                        char *rhs; 
                        switch(type){
                                case 'c':
                                        strcat(res,"[0]");
                                        the_init = malloc(strlen(template_init) + strlen(res)+1 + strlen(arr2[i]));
                                        replace_to(the_init, template_init, "{$init}", res);
                                        break;
                                case 'l':
                                case 'i':
                                        rhs = malloc(strlen(from_str_to_l) + strlen(res) + 1);
                                        replace_to(rhs, from_str_to_l, "{$str}", res);
                                        the_init = malloc(strlen(template_init) + strlen(rhs)+1+ strlen(arr2[i]));
                                        replace_to(the_init, template_init, "{$init}", rhs);
                                        break;
                                case 's':
                                        the_init = malloc(strlen(template_init) + strlen(res)+1+ strlen(arr2[i]) + 100);
                                        replace_to(the_init, template_init, "{$init}", res);
                                        break;
                        }
                        replace_to(the_init, the_init, "{$att}", to_lower_case(arr2[i]));
                        init_size+=strlen(the_init);
                        init[c] = the_init;
                        c++;
                }
        }
        char *code = malloc(init_size+1);
        sprintf(code, "");
        for (int i = 0; i < c; i++){
                strcat(code,init[i]);
        }
        char *out = malloc(strlen(template)+3*strlen(sym->name)+strlen(code) + 100);
        sprintf(out,template,sym->name);
        replace_to(out, out, "{$name}", sym->name);
        replace_to(out, out, "{$init_code}", code);
        return out;
}

char *gen_sym_rule_bison(symbol_t *sym){
         char template[] = "{$name}: {$code_body} {\n\t{$code}\n};\n";
         char code_template[] = "$$ = malloc({$len} + 1);\n\tsprintf($$,\"{$s}\",{$variables});\n\t{$init}\n\t{$accept}";
         char save_template[] = "if(!save_symbol($$,res)){\n\tYYACCEPT;}";
         //TODO Generate C code that create the resulting symbol and fill the corresponding entries
         char *result;
         char *code_body;
         char *variables;
         char *the_format;
         symbol_t * the_nt = NULL;
         // Look for the non-terminal symbol
         for (int i = 0; i < idx_rules; i++){
                rule_t rule = g_rules[i];
                if (rule.n_rhs == 1 && strcmp(rule.rhs[0].name, sym->name)==0){
                        the_nt = symbol_lookup(rule.lhs.name);
                        break;
                }
         }
         if(the_nt == NULL){
                exit(EXIT_FAILURE);
         }
         char **arr = split(sym->sym_str[0],' ');
         char *fixed = malloc(strlen(sym->sym_str[0])+1024);
         int fix_size = strlen(sym->sym_str[0]) + 1024;
         sprintf(fixed,"%s",sym->sym_str[0]);
         int nmember = copy_sym_str(&code_body, sym->sym_str[0]);
         for (int c = 0; c < nmember; c++){
                for (int i = 0; i < the_nt->n_attr; i++){
                        if (strcmp(arr[c], the_nt->atts_name[i]) == 0){
                                if (strlen(fixed) + strlen(the_nt->attributes[i].name) >= fix_size){
                                        fixed = realloc(fixed, fix_size*2);
                                        fix_size = fix_size*2;
                                }
                                replace_to(fixed,fixed,the_nt->atts_name[i],the_nt->attributes[i].name);
                        }
                }
         }
         memset(code_body, 0, strlen(code_body));
         nmember = copy_sym_str(&code_body, fixed);
         char the_string[] = {'%','s','\0'};
         the_format = malloc(strlen(the_string)*nmember +3);
         sprintf(the_format,"%s",the_string);
         for (int i = 1; i < nmember; i++){
                strcat(the_format,the_string); 
         }
         variables = malloc(100*nmember +1);
         sprintf(variables,"");
         for(int i = 0; i < nmember; i++){
                char a_str[100];
                sprintf(a_str,"$%d,",i+1); 
                strcat(variables,a_str);
         }
         variables[strlen(variables)-1] = '\0';
         char *the_len = malloc((strlen("strlen($)+") + 4)*nmember + (1 + nmember/10 + 1)*nmember);
         int the_len_size = (strlen("strlen($)+") + 4)*nmember + (1 + nmember/10 + 1)*nmember;
         sprintf(the_len,"");
         for(int i = 0; i < nmember; i++){
                char a_str[128];
                sprintf(a_str,"strlen($%d)+",i+1);
                if(strlen(the_len) + strlen(a_str) >= the_len_size){
                    
                    the_len = realloc(the_len,the_len_size*2);
                    the_len_size = the_len_size*2;
                
                }
                strcat(the_len, a_str);
         }
         the_len[strlen(the_len)-1] = '\0';
         int the_idx = (the_nt - g_symbols);
         char *the_sym_init = gen_sym_alloc_code(the_nt, code_body, nmember, sym);
         char *the_code = malloc(strlen(code_template) +strlen(the_sym_init)+ strlen(save_template)+ strlen(the_len)+strlen(the_format)+strlen(variables));
         int the_code_size = strlen(code_template) +strlen(the_sym_init)+ strlen(save_template)+ strlen(the_len)+strlen(the_format)+strlen(variables);

         replace_to(the_code, code_template, "{$accept}",save_template);
         replace_to(the_code, the_code, "{$init}", the_sym_init);
         replace_to(the_code, the_code, "{$len}",the_len);
         replace_to(the_code,the_code, "{$s}", the_format);
         replace_to(the_code, the_code, "{$variables}",variables);
         if(strlen(the_code) >= the_code_size){
            printf("Assertion failed\n");
            exit(EXIT_FAILURE);
         }
         result = malloc(strlen(template) + strlen(code_body) +strlen(sym->name) + strlen(the_code));
         int the_result_size = strlen(template) + strlen(code_body) +strlen(sym->name) + strlen(the_code);
         replace_to(result, template, "{$name}", to_lower_case(sym->name));
         replace_to(result,result, "{$code_body}", code_body);
         replace_to(result,result,"{$code}",the_code);
         if(strlen(result) >= the_result_size){

            printf("Assertion failed\n");
            exit(EXIT_FAILURE);
             
         }
         return result;
}

char *gen_token_bison(attribute_t *attribute){
        char template[] = "\%token<str> {$name}";
        char *name = malloc(strlen(attribute->name)+1);
        for(int i = 0; i < strlen(attribute->name); i++){
                if (attribute->name[i]>= 'a' && attribute->name[i]<= 'z'){
                        name[i] = attribute->name[i] - ('a'-'A');
                }else{
                        name[i] = attribute->name[i];
                }
        }
        name[strlen(attribute->name)] = '\0';
        char *res = malloc(strlen(template) + strlen(name) +1);
        replace_to(res,template,"{$name}",name);
        return res;
}

char *gen_token_sym_bison(symbol_t *sym){
        
        char template[] = "\%type<str> {$name2};\n";
        char *name2 = malloc(strlen(sym->name)+1);
        char *name = malloc(strlen(sym->name)+1);
        for(int i = 0; i < strlen(sym->name); i++){
                if (sym->name[i]>= 'a' && sym->name[i]<= 'z'){
                        name[i] = sym->name[i] - ('a'-'A');
                        name2[i] = sym->name[i];
                }else{
                        name[i] = sym->name[i];
                        if(sym->name[i] >= 'A' && sym->name[i]<= 'Z')
                                name2[i] = sym->name[i] + ('a'-'A');
                        else
                                name2[i] = sym->name[i];
                }
        }
        name[strlen(sym->name)] = '\0';
        name2[strlen(sym->name)] = '\0';
        char *res = malloc(strlen(template) + strlen(name) +1  + strlen(name2));
        replace_to(res,template,"{$name2}",name2);
        replace_to(res,res,".","DOT");
        return res;
}

int is_good(char *str){
        for (int i = 0; i < strlen(str); i++){
                if ( (str[i]>= 'a' && str[i]<='z') || (str[i] >= 'A' && str[i]<= 'Z') || (str[i]>= '0' && str[i]<='9')){
                        return 1;
                }
        }
        return 0;
}

typedef struct my_list{
        char *data;
        struct my_list *next;
}list_t;

void push_my_list(list_t **my_head, char *data){
        if(!is_good(data))
                return;
        list_t *head = *my_head;
        if (head == NULL){
                 list_t *new = malloc(sizeof(list_t));
                 new->data = malloc(strlen(data)+1);
                 strcpy(new->data,data);
                 *(my_head) = new;
                 new->next = NULL;
                 return;
        }
        while(head->next!=NULL){
               if(strcmp(head->data, data) == 0)
                       return;
               head = head->next; 
        }
        
        if(strcmp(head->data, data) == 0)
                return;
        list_t *new = malloc(sizeof(list_t));
        new->data = malloc(strlen(data)+1);
        strcpy(new->data,data);
        head->next = new;
        new->next = NULL;
}

char *pop_my_list(list_t **my_head){
        list_t *head = *my_head;
        if(head != NULL){
                char *data = head->data;
                list_t *tmp = head;
                *(my_head) = head->next;
                free(tmp);
                return data;
        }
        return NULL;
}

char *to_upper_case(char *str){
        char *res = malloc(strlen(str)+1);
        for(int i = 0; i < strlen(str); i++){
                if (str[i] >= 'a' && str[i]<= 'z'){
                        res[i] = str[i] - ('a'-'A');
                }
                else{
                        res[i] = str[i];
                }
        }
        res[strlen(str)] = '\0';
        return res;
}

int get_id(symbol_t sym){
        for (int i = 0; i < idx_syms; i++){
                if (strcmp(i_sym_to_id[i],sym.name) == 0)
                        return i;
        }
        return 0;
}

char *gen_first_part_bison(){
        char template[] = "list_of_sym: \n\t| list_of_sym symbol{\n\t{$code}\n};\nsymbol: {$symbols}\n;\n";
        char sym_template[] = "%s\n";
        char *res;
        char **syms = malloc(sizeof(char*)*idx_syms);
        int n_syms = 0;
        int len = 0;
        int c = 0;
        //Compute code 
        char code_template[] = "void **temp = malloc(sizeof(void*) * MAX_RED_SYM);\nint id;\nretrieve(temp,&id);\n{$block}\nend:\nfree(temp);\n";       
        char if_template[] = "if (id >= %d && {$sym_check}){\n\tif(!({$fun_call})){\n\tYYACCEPT;\n}\ngoto end;\n}\n";
        //Sort function by n_rhs
        rule_t *rules = malloc(sizeof(rule_t)*idx_red_rules);
        memcpy(rules,g_red_rules,sizeof(rule_t)*idx_red_rules);
        for (int i = 0; i < idx_red_rules; i++){
                for(int j = i+1; j < idx_red_rules; j++){
                       if (rules[i].n_rhs < rules[j].n_rhs){
                                rule_t tmp = rules[i];
                                rules[i]= rules[j];
                                rules[j] = tmp;
                       }
                }
        }
        //Write if statements
        char sym_check_template[] = "get_sym_id(temp[id - %d + %d]) == %d"; 
        char **if_array = malloc(sizeof(char*) * idx_red_rules);
        int if_len = 0;
        for (int i = 0; i < idx_red_rules; i++){
                int if_statement_size = strlen(if_template) + 1024;
                char *if_statement = malloc(strlen(if_template) + 1024);
                rule_t rule = rules[i];
                sprintf(if_statement,if_template,rule.n_rhs);
                char **checks = malloc(sizeof(char*) * rule.n_rhs);
                int check_len = 0;
                for (int j = 0; j < rule.n_rhs; j++){
                        int check_size = strlen(sym_check_template) + 1024;
                        char *check = malloc(strlen(sym_check_template) + 1024);
                        sprintf(check,sym_check_template,rule.n_rhs,j,get_id(rule.rhs[j]));
                        check_len += strlen(check);
                        checks[j] = check;
                }
                char *the_check = malloc(check_len + 6*rule.n_rhs);
                sprintf(the_check,"");
                for (int j = 0; j < rule.n_rhs-1; j++){
                        strcat(the_check,checks[j]);
                        strcat(the_check,"&&");
                        free(checks[j]);
                }
                strcat(the_check,checks[rule.n_rhs-1]);
                free(checks[rule.n_rhs-1]);
                free(checks);
                char param_template[] = "({$type}_t *) temp[id - %d + %d]";
                char **params = malloc(sizeof(char*)*rule.n_rhs);
                int param_len = 0;
                for (int j = 0; j < rule.n_rhs; j++){
                        char *param  = malloc(strlen(param_template) + 1024);
                        sprintf(param,param_template,rule.n_rhs,j);
                        replace_to(param,param,"{$type}",rule.rhs[j].name);
                        params[j] = param;
                        param_len += strlen(param);
                }
                char *param_string = malloc(param_len + 3*rule.n_rhs);
                sprintf(param_string,"");
                for (int j = 0; j < rule.n_rhs-1; j++){
                        strcat(param_string,params[j]);
                        strcat(param_string,",");
                        free(params[j]);
                }
                strcat(param_string,params[rule.n_rhs-1]);
                free(params[rule.n_rhs-1]);
                free(params);
                char the_fun_template[] = "from_{$rhs_list}_to_{$lhs}({$rhs_list_type})";
                int the_fun_call_size = strlen(the_fun_template)*2 + strlen(param_string);
                char *the_fun_call = malloc(the_fun_call_size);
                replace_to(the_fun_call,the_fun_template,"{$rhs_list_type}",param_string);
                replace_to(the_fun_call,the_fun_call,"{$lhs}",rule.lhs.name);
                char **rhs_list_array = malloc(sizeof(char*) * rule.n_rhs);
                int rhs_list_len = 0;
                for (int j = 0; j < rule.n_rhs; j++){
                        char *rhs_name = malloc(strlen("%s") + strlen(rule.rhs[j].name) + 100);
                        sprintf(rhs_name,"%s",rule.rhs[j].name);
                        rhs_list_array[j] = rhs_name;
                        rhs_list_len+=strlen(rhs_name);
                }
                char *rhs_list = malloc(rhs_list_len*3);
                sprintf(rhs_list,"");
                for (int j = 0; j < rule.n_rhs-1; j++){
                        strcat(rhs_list,rhs_list_array[j]);
                        free(rhs_list_array[j]);
                        strcat(rhs_list,"_");
                }
                strcat(rhs_list,rhs_list_array[rule.n_rhs-1]);
                free(rhs_list_array[rule.n_rhs-1]);
                free(rhs_list_array);
                while(strlen(the_fun_call) + strlen(rhs_list) >= the_fun_call_size){
                        the_fun_call = realloc(the_fun_call,the_fun_call_size*2);
                        the_fun_call_size = the_fun_call_size*2;
                }
                replace_to(the_fun_call,the_fun_call,"{$rhs_list}",rhs_list);
                free(rhs_list);
                while(strlen(if_statement) + strlen(the_check) >= if_statement_size){
                        if_statement = realloc(if_statement,if_statement_size*2);
                        if_statement_size = if_statement_size*2;
                }
                replace_to(if_statement,if_statement,"{$sym_check}",the_check);
                free(the_check);
                while(strlen(if_statement) + strlen(the_fun_call) >= if_statement_size){
                        if_statement = realloc(if_statement,if_statement_size*2);
                        if_statement_size = if_statement_size*2;
                }
                replace_to(if_statement,if_statement,"{$fun_call}",the_fun_call);
                if_array[i] = if_statement;  
                if_len += strlen(if_statement);
        }
        char *the_if = malloc(if_len + 4*idx_red_rules);
        sprintf(the_if,"");
        for (int i = 0; i < idx_red_rules; i++){
                strcat(the_if,if_array[i]);
                strcat(the_if,"\n");
                free(if_array[i]);
        }
        free(if_array);
        char *the_code_template = malloc(strlen(code_template) + strlen(the_if) + 1024);
        replace_to(the_code_template,code_template,"{$block}",the_if);
        free(the_if); 
        for (int i = 0; i < idx_syms; i++){
                if(g_symbols[i].is_NT == 1){
                        //check if there is an equivalent terminal symbol
                        int ok = 0;
                        symbol_t *the_T;
                        for (int j = 0; j < idx_rules; j++){
                                if (strcmp(g_rules[j].lhs.name, g_symbols[i].name) == 0){
                                        if (g_rules[j].n_rhs == 1 && g_rules[j].rhs[0].is_NT==0){
                                                ok = 1;
                                                the_T = g_rules[j].rhs;
                                                break;
                                        }
                                }
                                
                        }
                        if (!ok)
                                continue;
                        char *temp = malloc(strlen(sym_template)+strlen(the_T->name)+1);
                        sprintf(temp,sym_template,to_lower_case(the_T->name));
                        syms[n_syms] = temp;
                        n_syms++;
                        len+=strlen(temp);
                }
        }
        char *str = malloc(len+3*n_syms+1); 
        sprintf(str,"");
        for (int i = 0; i < n_syms-1; i++){
                strcat(str, syms[i]);
                free(syms[i]);
                strcat(str, "| ");
        }
        strcat(str,syms[n_syms-1]);
        free(syms[n_syms-1]);
        free(syms);
        //res = malloc(strlen(template) + strlen(str) +1);
        res = malloc(strlen(str)+strlen(template)+1+strlen(the_code_template));
        replace_to(res,template,"{$symbols}",str);
        replace_to(res,res,"{$code}",the_code_template);
        return res;
}

char *gen_constant_sym_flex(){
        char template[] = "\"%c\" {return %s;};\n";
        char o_square[] = "\"\\[\" {return O_SQUARE;};\n";
        char c_square[] = "\"\\]\" {return C_SQUARE;};\n";
        char *map[] = {"COMMA","DOT","SEMICOLON","COLON","O_BRACKET","C_BRACKET","O_CURLY","C_CURLY","DOLLAR","STAR"};
        char *map_c = ",.;:(){}$*";
        char *out = malloc(strlen(template) * 13);
        int size = strlen(template)*13;
        int occ = 0;
        sprintf(out,"");
        for(int i = 0; i < 10; i++){
                char *tmp = malloc(strlen(template) + strlen(map[i]));
                sprintf(tmp,template,map_c[i],map[i]);
                occ+=strlen(tmp);
                if(occ >= size){
                        out = realloc(out, 2*size);
                        size = size*2;
                }
                strcat(out, tmp);
                free(tmp);
        }
        if(strlen(out)+strlen(o_square)>=size){
            
          out = realloc(out, 2*size);
          size = size*2;
        }
        strcat(out,o_square);
        if(strlen(out)+strlen(c_square)>=size){
            
          out = realloc(out, 2*size);
          size = size*2;
        }
        strcat(out,c_square);
        return out;
}

char *gen_rule_flex_regex(attribute_t *the_att){
        char template[] = "%s { %s yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return %s;}\n"; 
        char *out = malloc(strlen(template) + strlen(the_att->name) + strlen(the_att->regex) +1);
        char *beg_def = the_att->beg_def;
        if(beg_def == NULL)
                beg_def = "";
        sprintf(out, template, the_att->regex,beg_def, to_upper_case(the_att->name));
        return out;

}


char *gen_rule_flex(char *str, char *str2,char *beg){
        char template[] = "[ ]*\"%s\" { %s yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return %s;}\n";
        char *name = malloc(strlen(str2)*2+1);
        int c = 0;
        for(int i = 0; i < strlen(str2); i++){
                if (str2[i] >= 'a' && str2[i]<='z'){
                        name[c] = str2[i] - ('a' - 'A');
                }else{
                        name[c] = str2[i];
                }
                c++;
        }
        if(beg == NULL)
                beg = "";
        name[c] = '\0';
        replace_to(name,name,".","DOT");
        char *the_str = malloc(strlen(str)*2);
        int j = 0;
        for (int i = 0; i < strlen(str); i++){
                if (str[i] == '.'){
                      // the_str[j] = '\\';
                      // j++;
                       the_str[j] = '.';
                       j++;
                }else{
                        the_str[j] = str[i];
                        j++;
                }
        }
        the_str[j] = '\0';
        char *res = malloc(strlen(template) + strlen(the_str) + strlen(name) + strlen(beg));
        sprintf(res, template, the_str,beg, name);
        free(name);
        return res;
}

char *gen_rule_flex_unkown(symbol_t *syms,int n_syms){
        char *out = malloc(1024);
        int size = 1024;
        int occ = 0;
        list_t *head = NULL;
        for (int i = 0; i < n_syms; i++){
                if (syms[i].sym_str!= NULL){
                        char **tokens = split(syms[i].sym_str[0],' ');
                        int c = 0;
                         symbol_t * the_nt = NULL;
                         // Look for the non-terminal symbol
                         for (int j = 0; j < idx_rules; j++){
                                rule_t rule = g_rules[j];
                                if (rule.n_rhs == 1 && strcmp(rule.rhs[0].name, (syms+i)->name)==0){
                                        the_nt = symbol_lookup(rule.lhs.name);
                                        break;
                                }
                         }
                        while(tokens[c] != NULL){
                                char type;
                                if(!is_att_name(the_nt,tokens[c])){
                                        push_my_list(&head, tokens[c]);                        
                                }
                                c++;
                        }
                }
        }
        sprintf(out,"");
        while(1){
                char *str = pop_my_list(&head);
                if (str == NULL)
                        break;
                //replace_to_mem_safe(&str,str,".","\\.",&str_size);
                char *tmp = gen_rule_flex(str,str,NULL);
                occ+=strlen(tmp);
                if(occ >= size){
                        out = realloc(out,size*2);
                        size = size*2;
                }
                strcat(out,tmp);
                free(tmp);
        }
        return out;
}

char *gen_rule_flex_int(char *str, char *beg){
        char template[] = "[ ]*[-+]?[0-9]+ { %s yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); return %s;}\n";
        char *name = malloc(strlen(str)+1);
        for(int i = 0; i < strlen(str); i++){
                if (str[i] >= 'a' && str[i]<='z'){
                        name[i] = str[i] - ('a' - 'A');
                }else{
                        name[i] = str[i];
                }
        }
        name[strlen(str)] = '\0';
        char *res = malloc(strlen(template) + strlen(name));
        if (beg == NULL)
                beg = "";
        sprintf(res, template, beg,name);
        return res;
}

char *gen_rule_flex_float(char *str, char *beg){
        char template[] = "[ ]*[-+]?[0-9]+\\.[0-9]+ { %s yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); return %s;}\n";
        char *name = malloc(strlen(str)+1);
        for(int i = 0; i < strlen(str); i++){
                if (str[i] >= 'a' && str[i]<='z'){
                        name[i] = str[i] - ('a' - 'A');
                }else{
                        name[i] = str[i];
                }
        }
        name[strlen(str)] = '\0';
        char *res = malloc(strlen(template) + strlen(name));
        if (beg == NULL)
                beg = "";
        sprintf(res, template,beg, name);
        return res;
}


char *gen_unkown_token_bison(symbol_t *syms, int n_syms){
        char template[] = "\%token<str> {$name};\n";
        char *out = malloc(1024);
        int size = 1024;
        int occ = 0;
        list_t *head = NULL;
        for (int i = 0; i < n_syms; i++){
                if (syms[i].sym_str!= NULL){
                        char **tokens = split(syms[i].sym_str[0],' ');
                        int c = 0;
                         symbol_t * the_nt = NULL;
                         // Look for the non-terminal symbol
                         for (int j = 0; j < idx_rules; j++){
                                rule_t rule = g_rules[j];
                                if (rule.n_rhs == 1 && strcmp(rule.rhs[0].name, (syms+i)->name)==0){
                                        the_nt = symbol_lookup(rule.lhs.name);
                                        break;
                                }
                         }
                        while(tokens[c] != NULL){
                                char type;
                                if(!is_att_name(the_nt,tokens[c])){
                                        push_my_list(&head, tokens[c]);                        
                                }
                                else
                                        free(tokens[c]);
                                c++;
                        }
                        free(tokens);
                }
        }
        sprintf(out,"");
        while(1){
                char *str = pop_my_list(&head);
                if (str == NULL)
                        break;
                char *tmp = malloc(strlen(template)+strlen(str)*3+1);
                replace_to(tmp,template,"{$name}",to_upper_case(str));
                replace_to(tmp,tmp,".","DOT");
                occ+=strlen(tmp);
                do{
                 if(occ >= size){
                         out = realloc(out,size*2);
                         size = size*2;
                 }
                }while(occ>=size);
                strcat(out,tmp);
        }
        return out;
}
