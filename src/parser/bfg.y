%{
        #include <stdio.h>
        #include <stdlib.h>
        #include <parser/parser.h>
        #include <utils/list/list.h>
        #include <string.h>
        #include <ctype.h>
        extern int yylex();
        extern void yyerror(const char *s);
%}

%union{
  char *str;
}

%type<str> token

%token TOKEN_DECL ATTRIBUTE_DECL SYMBOL_DECL
%token<str> IDENTIFIER
%token<str> REVERSE_ARROW 
%token<str> ATT_OPER
%token<str> ATT_TYPE
%token<str> SYM_REPR
%token<str> SYM_TRANS
%token<str> TRANS_OPER
%token<str> HEADER 
%token<str> END_HEADER 
%token<str> BEG_DEF
%token START_DECL
%token ARROW
%token DOUBLE_ARROW
%token SYM_PIPE
%%

input_file: beg_def START_DECL declaration START_DECL syms_repr START_DECL rule_declaration START_DECL syms_trans{
                rule_flush();
        }
        |
              header beg_def START_DECL declaration START_DECL syms_repr START_DECL rule_declaration START_DECL syms_trans {
                rule_flush();
        }

;

beg_def: 
       | BEG_DEF{
                // begin definition: need to store as it is  
               beg_def_add($1); 
       }
       | beg_def BEG_DEF{
                //continue
                
               beg_def_add($2); 
       }
       ;

rule_declaration: 
                | rule_declaration symbol arrow rhs_list semicolon{
                }
;

syms_repr:
         | syms_repr list colon syms_list{
         }

syms_list: SYM_REPR{
                set_sym_str($1);
         }
         | syms_list SYM_PIPE SYM_REPR{
                set_sym_str($3);
         }
syms_trans:
         | syms_trans list reverse_arrow list ATT_OPER semicolon{
                add_reduction_rule($5);
        }
         | syms_trans list double_arrow syms_trans_list{
         }

syms_trans_list: SYM_TRANS{
                set_sym_trans($1);
         }
         | syms_trans_list TRANS_OPER{
                set_sym_trans($2);
         }

symbol:         token {
                        //Parsing a symbol: lookup for the declared symbol, then start building the rule
                       rule_add($1); 
                }

rhs_list:       rhs_list element_separator symbol{
                               // printf("List of RHS\n"); 
                               // 
                               // rule_variable_t *rv = calloc(1, sizeof(rule_variable_t));
                               // if(rv==NULL) {
                               //         fprintf(stderr,"OOM in rule declaration\n");
                               //         exit(1);
                               // }
                               // ll_push(the_current_rule->rule->rhs,rv);
                                                                                                
                }
                | rhs_list ATT_OPER {
                        //Attribute operation must be copied in the proper string pointer, they will be handled later also 
                        //this is the end of the current rule.
                        the_current_rule->rule->attribute_operations = calloc(strlen($2)+1,sizeof(char));
                        memcpy(the_current_rule->rule->attribute_operations, $2+1, strlen($2)-2);
                        the_current_rule->rule->attribute_operations[strlen($2)-1] = '\n';
                        the_current_rule->rule->attribute_operations[strlen($2)] = '\0';
                }
                | rhs_list pipe rhs_list{
                        
                        
                }
                | symbol {
                               // printf("Matching hypervar\n");
                               // if (ll_empty(the_current_rule->rule->rhs)) {
                               //     rule_variable_t *rv = calloc(1, sizeof(rule_variable_t));
                               //     if(rv == NULL) {
                               //         fprintf(stderr,"OOM in rule declaration\n");
                               //         exit(1);
                               //     }
                               //     ll_push(the_current_rule->rule->rhs,rv);
                               // }
                }
;

declaration: 
                 | declaration TOKEN_DECL list semicolon {
                                token_add();
                                tk_free();
                        }
                 | declaration ATTRIBUTE_DECL list semicolon { 
                                attribute_add();
                                tk_free();
                        }
                 | declaration ATTRIBUTE_DECL list ATT_OPER semicolon {
                                attribute_add();
                                attribute_t *att = g_attributes + idx_atts-1;
                                att->beg_def = malloc(strlen($4));
                                memcpy(att->beg_def,$4+1,strlen($4)-2);
                                att->beg_def[strlen($4)-2] = '\0';
                                tk_free();
                 }
                 | declaration SYMBOL_DECL list semicolon {
                                symbol_add();
                                tk_free();
                        }
;






list: list element_separator token { 
                        tk_list_add($3);
                }
          | token { 
                        tk_list_add($1); 
                }
;


token: IDENTIFIER {
                }
;

semicolon: ';' {
                if(the_current_rule != NULL){
                        rule_add(NULL);
                }
                the_current_rule=NULL;
        }
;

element_separator: ','
;

pipe: '|' {
                symbol_t lhs = the_current_rule->rule->lhs;
                rule_add(NULL);
                rule_add(lhs.name);
               // rule_variable_t lhs = the_current_rule->rule->lhs;
               // the_current_rule = rule_list_add();
               // if(lhs.mv != NULL) {
               //         the_current_rule->rule->lhs.mv = malloc(sizeof(meta_variable_t*)*2);
               //         for (int i=0; i < lhs.n_mv; i++) {
               //                 the_current_rule->rule->lhs.mv[i] = lhs.mv[i];
               //         }
               //         the_current_rule->rule->lhs.n_mv = lhs.n_mv;
               // }
               // the_current_rule->rule->lhs.hv = lhs.hv;
               // the_current_rule->rule->rhs = malloc(sizeof(linked_list));
               // ll_init(the_current_rule->rule->rhs);
               // rule_variable_t *rv = calloc(1, sizeof(rule_variable_t));
               // ll_push(the_current_rule->rule->rhs, rv);
        }
;


arrow: ARROW {
               // the_current_rule->rule->rhs = malloc(sizeof(linked_list));
               // ll_init(the_current_rule->rule->rhs);
               // if (ll_empty(the_current_rule->rule->rhs)) {
               //     rule_variable_t *rv = malloc(sizeof(rule_variable_t));
               //     if(rv == NULL) {
               //         fprintf(stderr,"OOM in rule declaration\n");
               //         exit(1);
               //     }
               //     ll_push(the_current_rule->rule->rhs,rv);
               // }
        }
;

header: HEADER {
                // Add the header
               header_add($1); 
      };
reverse_arrow : REVERSE_ARROW {
        add_reduction_rule(NULL);
}

colon: ':' {
        set_sym_str(NULL);
        tk_free();
     };
double_arrow: DOUBLE_ARROW{
        set_sym_trans(NULL);
        tk_free();
     };
%%
