#pragma once
#include "n_symbols.h"
#include "rules.h"
#include "attributes.h"
#include <parser/limit.h>
 
extern char *i_sym_to_id[MAX_SYMBOLS];
#include "util.h"
extern char* generate_symbol(symbol_t *sym);
extern char *generate_attribute_values(attribute_t *the_attribute);
extern char *generate_attribute(attribute_t *the_attribute);
extern char* generate_rule(rule_t* the_rule,int id);
extern char* generate_rule_functions_array(rule_t rules[], int n_rules);
extern char* generate_symbol_enum(char **names);
extern char *generate_sym_to_rules_array(rule_t rules[], int n_rules);
extern char *generate_terminal_rule_array(rule_t rules[],  int n_rules);
extern char *to_lower_case(char *str);
extern char *gen_get_size_sym(symbol_t *syms, int n_sym);
extern char *gen_sym_to_id_array();
extern char *gen_lib_init();
extern char *write_limit(int n_syms, int n_rules);
extern char *generate_header_include(char **headers);
extern char *generate_trans_functions();
extern char *generate_sym_to_rules_trans_array(rule_t rules[], int n_rules);
