#pragma once
#include "limit.h"
#include "bitmap.h"

typedef void (*rule_func)(void *lhs);

extern rule_func rule_functions[MAX_RULE];
extern unsigned int terminal_rules[MAX_RULE];
extern int sym_to_rules[N_SYM][MAX_RULE];
extern rule_func trans_rules[N_SYM][MAX_RULE];
extern block_bitmap *rule_bitmap; 
