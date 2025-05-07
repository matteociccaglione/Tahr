#include <stdio.h>
#include "rules.h"
#include <string.h>
#include <stdlib.h>

rule_t* create_rule(symbol_t lhs, symbol_t *rhs, unsigned int n_rhs, char *attribute_operations){
        rule_t *out = malloc(sizeof(rule_t));
        if (out == NULL){
                goto err;
        }
        out->lhs = lhs;
        out->rhs = rhs;
        out->n_rhs = n_rhs;
        if (attribute_operations == NULL)
                goto no_at;
        out->attribute_operations = malloc(strlen(attribute_operations)+1);
        memcpy(out->attribute_operations, attribute_operations, strlen(attribute_operations)+1);
no_at:
        return out;
err:
        printf("Unable to create a new rule, maybe memory leak (?)\n");
        return NULL;
}

void remove_rule(rule_t *the_rule){
        printf("Unhandled operation\n");
        exit(EXIT_FAILURE);
}


rule_t* get_rule_by_lhs(rule_t **rules, unsigned int len, char *lhs){
        for (int i = 0; i < len; i++){
                rule_t *the_rule = rules[i];
                if (strcmp(the_rule->lhs.name, lhs) == 0){
                        return the_rule;
                }
        }
        return NULL;
}
