#pragma once

#include "n_symbols.h"

typedef struct _rule{
    symbol_t lhs;
    symbol_t *rhs;
    unsigned int n_rhs;
    char* attribute_operations;
    char* red_rule;
}rule_t;

extern rule_t* create_rule(symbol_t lhs, symbol_t *rhs, unsigned int n_rhs, char *attribute_operations);
extern void remove_rule(rule_t *the_rule);
extern rule_t* get_rule_by_lhs(rule_t **rules, unsigned int len, char *lhs);
