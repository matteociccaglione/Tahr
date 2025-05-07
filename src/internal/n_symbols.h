#pragma once

#include "attributes.h"
#include <stdbool.h>
#include <internal/ruledef.h>

typedef struct symbol{
    char *name;
    attribute_t *attributes;
    char **atts_name;
    unsigned int n_attr;
    unsigned char is_NT;
    struct symbol *eq;
    char **sym_str; // Only for terminal symbols
    unsigned int n_sym_str; // Only for terminal symbols
}symbol_t;

extern symbol_t* create_symbol(char *name, attribute_t *attributes, unsigned int n_attr, unsigned char is_NT, char *sym_str);
extern symbol_t* create_symbol_NT(char *name, attribute_t *attributes, unsigned int n_attr);
extern symbol_t* create_symbol_T(char *name, attribute_t *attributes, unsigned int n_attr, char *sym_str);
extern void put_atts_name(symbol_t *sym, char **atts_name);
extern bool is_NT(symbol_t* the_symbol);
extern void remove_symbol(symbol_t *the_symbol);
extern symbol_t *get_symbol_by_name(symbol_t **list,unsigned int len, char *name);
