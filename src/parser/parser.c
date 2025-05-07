#include <parser/parser.h>
#include <parser/error.h>
#include "internal/attributes.h"
#include "internal/n_symbols.h"
#include "internal/rules.h"
#include <internal/ag_utils.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void yyerror(char const *message)
{
        printf("Error: %s\n", message);
        exit(EXIT_FAILURE);
}

tk_list_t *the_list;

rule_t *last_rule = NULL;
void parse_init()
{
        last_rule = NULL;
        the_list = NULL;
}
symbol_t *the_current_token = NULL;
char *i_sym_to_id[MAX_SYMBOLS];
char g_token[MAX_SYMBOLS][TOK_SIZE];
symbol_t g_symbols[MAX_SYMBOLS];
attribute_t g_attributes[MAX_ATTRIBUTES];
rule_t g_rules[MAX_RULES];
rule_t g_red_rules[MAX_RULES];
rule_t g_trans_rules[MAX_RULES];
unsigned int idx_token = 0;
unsigned int idx_syms = 0;
unsigned int idx_atts = 0;
unsigned int idx_rules = 0;
unsigned int idx_trans_rules = 0;
unsigned int idx_red_rules = 0;
char *headers[MAX_HEADER];
unsigned int idx_headers = 0;
rule_list_t *the_rule_list;
rule_list_t *the_current_rule;
attribute_t* attribute_lookup(char *name){
        for(int i = 0; i < idx_atts; i++){
                if (strcmp(g_attributes[i].name, name) == 0)
                        return g_attributes+i;
        }
        // Attribute not found
        char buf[1024];
        sprintf(buf,NO_ATT_ERR,name);
        yyerror(buf);
        return NULL;
}

void header_add(char *str){
        headers[idx_headers] = malloc(strlen(str)+1);
        strcpy(headers[idx_headers], str);
        idx_headers++;
}

void token_add(){
        if (the_list == NULL) {
                return ;
        }
        tk_list_t *idx = the_list;
        while(idx != NULL) {
                memcpy(g_token[idx_token], idx->tok, strlen(idx->tok)+1);
                idx_token++;
                g_symbols[idx_syms] = *create_symbol_T(idx->tok, NULL, 0, NULL);
                i_sym_to_id[idx_syms] = g_symbols[idx_syms].name;
                idx_syms++;
                idx = idx->next;
        }
}

void add_reduction_rule(char *att_oper){
       if (att_oper == NULL){
                // This is the LHS
                tk_list_t *idx = the_list;
                if (idx == NULL){
                        printf("Syntax Error: You can't use \"<-\" without a proper LHS\n");
                        exit(EXIT_FAILURE);
                }else{
                        for (int i = 0; i < idx_syms; i++){
                                if (strcmp(g_symbols[i].name, idx->tok) == 0){
                                        the_current_token = g_symbols+i;                                        
                              }
                        }
                        if(the_current_token == NULL){
                                char err_msg[1024];
                                sprintf(err_msg,NO_SYM_ERR,idx->tok);
                                yyerror(err_msg);
                        }
                }
                tk_free();
                g_red_rules[idx_red_rules].lhs = *(the_current_token);
                last_rule = g_red_rules+idx_red_rules;
                idx_red_rules++;
       }
       else{
                // Set the RHSs and the attribute_operations
                tk_list_t *idx = the_list;
                last_rule->n_rhs = 0;
                if (idx == NULL){
                        printf("Syntax Error: You can't use \"<-\" without a proper RHSs\n");
                        exit(EXIT_FAILURE);
                }else{
                        while(idx!=NULL){
                                last_rule->n_rhs++;
                                idx = idx->next; 
                        }
                        idx = the_list;
                        int i = 0;
                        last_rule->rhs = malloc(sizeof(symbol_t)*last_rule->n_rhs);
                        while(idx!=NULL){
                                symbol_t *s = symbol_lookup(idx->tok);
                                last_rule->rhs[i] = *s;
                                i++;
                                idx = idx->next;
                        }
                        tk_free();
                        last_rule->attribute_operations = calloc(strlen(att_oper)+1,sizeof(char));
                        memcpy(last_rule->attribute_operations, att_oper+1, strlen(att_oper)-2);
                        last_rule->attribute_operations[strlen(att_oper)-1] = '\n';
                        last_rule->attribute_operations[strlen(att_oper)] = '\0';
                        last_rule = NULL;

                }
       }
}

void set_sym_trans(char *sym_str){

        if (sym_str == NULL){
                //Get the LHS from the token list
                tk_list_t *idx = the_list;
                the_current_token = NULL;
                if (idx == NULL){
                        printf("Syntax Error: You can't use \"<->\" without a proper LHS\n");
                        exit(EXIT_FAILURE);
                }else{
                        for (int i = 0; i < idx_syms; i++){
                                if (strcmp(g_symbols[i].name, idx->tok) == 0){
                                        the_current_token = g_symbols+i;                                        
                              }
                        }
                        if(the_current_token == NULL){
                                char err_msg[1024];
                                sprintf(err_msg,NO_SYM_ERR,idx->tok);
                                yyerror(err_msg);
                        }
                }
                g_trans_rules[idx_trans_rules].lhs = *(the_current_token);
                last_rule = g_trans_rules+idx_trans_rules;
                idx_trans_rules++;
        }
        else{
                if (the_current_token->eq == NULL){
                        for (int i = 0; i < idx_syms; i++){
                                if (strcmp(g_symbols[i].name, sym_str) == 0){
                                        the_current_token->eq = g_symbols+i;                                        
                                       last_rule->rhs = malloc(sizeof(rule_t)*1);
                                       last_rule->rhs[0] = g_symbols[i];
                                       last_rule->n_rhs = 1;
                                        return;
                              }
                        }

                                char err_msg[1024];
                                sprintf(err_msg,NO_SYM_ERR,sym_str);
                                yyerror(err_msg);
                }
                else{
                        last_rule->attribute_operations = malloc(strlen(sym_str)+1);
                        memcpy(last_rule->attribute_operations, sym_str+1, strlen(sym_str)-2);
                        last_rule->attribute_operations[strlen(sym_str)-1] = '\n';
                        last_rule->attribute_operations[strlen(sym_str)] = '\0';
                }
        }
}
void set_sym_str(char *sym_str){
        if (sym_str == NULL){
                //Get the LHS from the token list
                tk_list_t *idx = the_list;
                if (idx == NULL){
                        printf("Syntax Error: You can't use \":\" without a proper LHS\n");
                        exit(EXIT_FAILURE);
                }else{
                        for (int i = 0; i < idx_syms; i++){
                                if (strcmp(g_symbols[i].name, idx->tok) == 0){
                                        the_current_token = g_symbols+i;                                        
                                        return;
                              }
                        }
                        if(the_current_token == NULL){

                                char err_msg[1024];
                                sprintf(err_msg,NO_SYM_ERR,idx->tok);
                                yyerror(err_msg);
                        }
                }
        }
        else{
                if (the_current_token->sym_str == NULL){
                        the_current_token->sym_str = malloc(sizeof(char *)*4);
                }
                if (the_current_token->n_sym_str%4 == 0){
                        the_current_token->sym_str = realloc(the_current_token->sym_str, sizeof(char*)*(the_current_token->n_sym_str+4));
                }
                the_current_token->sym_str[the_current_token->n_sym_str] =  malloc(strlen(sym_str)+1);
                strcpy(the_current_token->sym_str[the_current_token->n_sym_str], sym_str);
                the_current_token->n_sym_str++;
        }
}


int strcheck(char *str, char ch){
        for (int i = 0; i < strlen(str); i++){
                if (str[i]==ch)
                        return 1;
        }
        return 0;
}
char glob_x_def[MAX_DEF][MAX_IN_DEF_LENGTH];
int idx_def = 0;
void beg_def_add(char *def){

        if(strlen(def) > MAX_IN_DEF_LENGTH){
                yyerror("\%x def exceeds limits\n");
                exit(EXIT_FAILURE);
        }
       memcpy(glob_x_def[idx_def],def,strlen(def)); 
       idx_def++;

}

void attribute_add(){
        if (idx_atts > MAX_ATTRIBUTES -1){
                printf("ERROR: Attribute number exceed limits, please consider to re-configure this tool\n");
                exit(EXIT_FAILURE);
        }
        if (the_list == NULL) {
                return;
        }
        tk_list_t *idx = the_list;
        if(idx->next == NULL){
                printf("ERROR: Attribute must have type!\n");
                exit(EXIT_FAILURE);
        }
        if (strcheck(idx->tok, '*')){
                printf("ERROR: Illegal character in attribute name: %s\n",idx->tok);
                exit(EXIT_FAILURE);
        }
        char *name = malloc(strlen(idx->tok)+1);
        char *type = malloc(strlen(idx->next->tok)+1);
        memcpy(name, idx->tok, strlen(idx->tok)+1);
        memcpy(type, idx->next->tok, strlen(idx->next->tok)+1);
        idx=idx->next->next;
        unsigned char infinite_value = 0x0;
        char *regex = NULL;
        char *beg_def = NULL;
        int n_values = 0;
        if (idx==NULL){
                //INFINITE VALUE
                infinite_value = 0x1;
                goto att_creation;
        }
        char **values;
        tk_list_t *old_idx = idx;
        while(idx!=NULL){
                n_values++;
                idx = idx->next;
        }
        values = malloc(sizeof(char *)*n_values);
        idx = old_idx;
        int i = 0;
        while(idx!=NULL){
                if (idx->tok[0] == '!'){
                        //Is a regex
                        regex = malloc(strlen(idx->tok)+1);
                        n_values = 0;
                        memcpy(regex,idx->tok+2,strlen(idx->tok)-4);
                        regex[strlen(idx->tok)-3] = '\0';
                        if(idx->next != NULL){
                                yyerror("Can't use multiple regex or regex + finite set of values");
                                exit(EXIT_FAILURE);
                        }
                        idx=idx->next;
                        break;
                }
                values[i] = malloc(strlen(idx->tok)+1);
                memcpy(values[i],idx->tok,strlen(idx->tok)+1);
                i++;
                idx = idx->next;
        }

        
att_creation:
        g_attributes[idx_atts] = *create_attribute(name, type, values, n_values, infinite_value,regex);
        idx_atts++;
}



void symbol_add(){
        if (idx_syms >= MAX_SYMBOLS-1){
                printf("ERROR: symbols number exceed limits, please consider to re-configure this tool\n");
        }
        if (the_list == NULL){
                return;
        }
        tk_list_t *idx = the_list;
        
        if (strcheck(idx->tok, '*')){
                printf("ERROR: Illegal character in symbol name: %s\n",idx->tok);
                exit(EXIT_FAILURE);
        }
        char *name = malloc(strlen(idx->tok)+1);
        memcpy(name, idx->tok, strlen(idx->tok)+1);
        int n_atts = 0;
        tk_list_t *old_idx = idx->next;
        attribute_t *atts;
        idx=idx->next;
        unsigned int max_len = 0;
        while (idx != NULL){
                n_atts++;
                if (idx->next == NULL){
                        printf("ERROR: attribute must have a name\n");
                        exit(EXIT_FAILURE);
                }
                else{
                        unsigned int len = strlen((idx->next)->tok);
                        if (len > max_len)
                                max_len = len;
                }
                idx = idx->next->next;
        }
        if(n_atts == 0){
                atts = NULL;
                goto symbol_creation;
        }
        char **atts_name = malloc(sizeof(char *) * n_atts);
        for (int i = 0; i < n_atts; i++){
               atts_name[i] = malloc(sizeof(char)*max_len+1); 
        }
        atts = malloc(sizeof(attribute_t) * n_atts);
        idx = old_idx;
        int i = 0;
        while (idx!=NULL){
                atts[i] = *attribute_lookup(idx->tok);
                idx = idx->next;
                strcpy(atts_name[i], idx->tok);
                i++;
                idx=idx->next;
        }
symbol_creation:
        g_symbols[idx_syms] = *create_symbol_NT(name, atts, n_atts);
        put_atts_name(g_symbols+idx_syms, atts_name);
        i_sym_to_id[idx_syms] = name;
        idx_syms++; 
}

symbol_t* symbol_lookup(char *name){
        for (int i = 0; i < idx_syms; i++){
                if (strcmp(g_symbols[i].name, name) == 0){
                        return g_symbols+i;
                }
        }
        
        char err_msg[1024];
        sprintf(err_msg,NO_SYM_ERR,name);
        yyerror(err_msg);
        return NULL;
}



void rule_add(char *token){
         
        if (the_current_rule == NULL){
                the_current_rule = malloc(sizeof(rule_list_t));
                the_current_rule->rule = calloc(1, sizeof(rule_t));
                the_current_rule->rule->lhs = *symbol_lookup(token);
                return;
        }
        else{
               if(token == NULL){
                       //End of rhs list
                       tk_list_t *idx = the_list;
                       if (idx == NULL){
                                printf("ERROR: Empty rhs are not allowed\n");
                                exit(EXIT_FAILURE);
                       }
                       tk_list_t *old_idx = idx;
                       int i=0;
                       while(idx!=NULL){
                                i++;
                                idx = idx->next;
                       }
                       the_current_rule->rule->rhs = malloc(sizeof(symbol_t) * i);
                       the_current_rule->rule->n_rhs = i;
                       idx = old_idx;
                       i = 0;
                       while(idx!=NULL){
                                the_current_rule->rule->rhs[i] = *symbol_lookup(idx->tok);
                                idx = idx->next;
                                i++;
                       }
                       tk_free();
                       the_current_rule->next = the_rule_list;
                       the_rule_list = the_current_rule;
                       the_current_rule = NULL;
               }else{
                        tk_list_add(token);
               }
        }
                
}

void rule_flush(){
        rule_list_t *cur = the_rule_list;
        while(cur != NULL){
                g_rules[idx_rules] = *(cur->rule);
                idx_rules++;
                rule_list_t *tmp = cur;
                cur = cur->next;
                free(tmp);
        }
}


void tk_list_add(char *the_token)
{
        if (the_list == NULL) {
                the_list = malloc(sizeof(tk_list_t));
                if (the_list == NULL) {
                        fprintf(stderr, "OOM for list head allocation\n");
                        exit(1);
                }
                the_list->next = NULL;
                memcpy(the_list->tok, the_token, strlen(the_token)+1);
        } else {
                tk_list_t *index = the_list;
                while(index->next != NULL)
                        index = index->next;

                tk_list_t *new_tk = malloc(sizeof(tk_list_t));
                if (new_tk == NULL) {
                        fprintf(stderr, "OOM for new list token allocation\n");
                        exit(1);
                }
                new_tk->next = NULL;
                memcpy(new_tk->tok, the_token, strlen(the_token)+1);
                index->next = new_tk;
        }
}

/** Free the token list for a new scan of a rule
 * */
void tk_free()
{
        while(the_list != NULL) {
                tk_list_t *fr_tok = the_list;
                the_list = the_list->next;
                free(fr_tok);
        }
}

#include <stdio.h>
#include "lex.yy.h"
#include <limits.h>
#include <string.h>

extern int yyparse (void);

char input_path[PATH_MAX];




int parse()
{
        if ((yyin = fopen(input_path, "r")) != NULL) {
                        parse_init();
                        the_current_rule = NULL;
                        the_rule_list = NULL;
                        int ret = yyparse();
                        return ret;
        }
        else {
                fprintf(stderr, "Cannot open file %s\n", input_path);
                return 1;
        }
}

void set_path(const char *path)
{
        memcpy(input_path, path, strlen(path)+1);
}
