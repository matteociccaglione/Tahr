#pragma once
#include <parser/parser.h>
#include <internal/gen_code.h>

extern char *gen_rule_flex(char *str, char *str2, char* beg);
extern char *gen_token_sym_bison(symbol_t *sym);
extern char *gen_token_bison(attribute_t *attribute);
extern char *gen_sym_rule_bison(symbol_t *sym);
extern char *gen_rule_flex_float(char *str, char *beg);
extern char *gen_rule_flex_int(char *str, char *beg);
extern char *gen_constant_sym();
extern char *gen_unkown_token_bison(symbol_t *syms, int n_syms);
extern char *gen_constant_sym_flex();
extern char *gen_rule_flex_unkown(symbol_t *syms,int n_syms);
extern char *gen_first_part_bison();
extern char *gen_rule_flex_regex(attribute_t *the_att);
extern char *gen_beg_def();
extern char *gen_red_rule(rule_t *rule,int id);
extern char *gen_red_header();
extern char *gen_red_function();
