#pragma once
#include <string.h>
#include <stddef.h>
#include "ruledef.h"
extern char *sym_to_id[N_SYM];


extern void symbol_init(void *var, char *type, int terminal);

typedef struct{
        int uid;
        void *data;
}container;

extern void* sym_malloc(unsigned int size);

extern int get_sym_id(void *sym);
extern int is_terminal(int id);
