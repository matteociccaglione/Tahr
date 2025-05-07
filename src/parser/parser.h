#pragma once

#include <internal/n_symbols.h>
#include <internal/rules.h>
#include <internal/attributes.h>
#include <internal/gen_code.h>
#include "limit.h"
#include <limits.h>
#define MAX_HEADER 10
#define MAX_DEF 100
#define MAX_IN_DEF_LENGTH 1024

extern char glob_x_def[MAX_DEF][MAX_IN_DEF_LENGTH];
extern int idx_def;
extern void beg_def_add(char *def);
extern char input_path[PATH_MAX];
extern void set_path(const char *path);
extern int parse();
extern char *headers[MAX_HEADER];
extern unsigned int idx_headers;
extern void header_add(char *str);
#define TOK_SIZE 256

typedef struct tk_list {
        char tok[TOK_SIZE];
        struct tk_list *next;
} tk_list_t;


typedef struct rule_list {
        rule_t *rule;
        struct rule_list *next;
} rule_list_t;

extern rule_list_t *the_rule_list;
extern rule_list_t *the_current_rule;

extern tk_list_t *the_list;
extern char g_token[MAX_SYMBOLS][TOK_SIZE];
extern symbol_t g_symbols[MAX_SYMBOLS];
extern attribute_t g_attributes[MAX_ATTRIBUTES];
extern rule_t g_trans_rules[MAX_RULES];
extern unsigned int idx_trans_rules;
extern rule_t g_rules[MAX_RULES];
extern unsigned int idx_red_rules;
extern rule_t g_red_rules[MAX_RULES];
extern symbol_t *the_current_token;
extern unsigned int idx_token;
extern unsigned int idx_syms;
extern unsigned int idx_atts;
extern unsigned int idx_rules;
extern void tk_list_add(char *the_token);
extern void tk_free();
extern void token_add();
extern void attribute_add();
extern void symbol_add();
extern void rule_add(char *token);
extern void rule_flush();
extern void set_sym_str(char *sym_str);
extern symbol_t* symbol_lookup(char *name);
extern void set_sym_trans(char *sym_str);
extern void add_reduction_rule(char *att_oper);
