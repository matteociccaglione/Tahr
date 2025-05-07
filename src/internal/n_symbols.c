#include "n_symbols.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

symbol_t* create_symbol(char *name, attribute_t *attributes, unsigned int n_attr, unsigned char NT, char *sym_str){
    symbol_t* the_symbol = malloc(sizeof(symbol_t));
    if (the_symbol == NULL){
        goto err;
    }
    the_symbol->eq = NULL;

    the_symbol->name = malloc(strlen(name)+1);
    if (the_symbol->name == NULL){
        free(the_symbol);
        goto err;
    }

    strcpy(the_symbol->name, name);
    the_symbol->sym_str = NULL;
    the_symbol->n_sym_str = 0;
    the_symbol->n_attr=n_attr;
    if (attributes == NULL){
        the_symbol->n_attr = 0; 
        goto no_att;
    }

    the_symbol->attributes = malloc(sizeof(attribute_t)*n_attr);

    if(the_symbol->attributes == NULL){
        free(the_symbol->name);
        free(the_symbol);
        goto err;
    }

    for (int i = 0; i < n_attr; i++){
        the_symbol->attributes[i] = attributes[i];
    }

no_att:
    the_symbol->is_NT = NT;
    return the_symbol;

err:
    printf("An error has occured during symbol creation (may be Memory Leak)\n");
    return NULL;
}

void put_atts_name(symbol_t *sym, char **atts_name){
        sym->atts_name = atts_name;
}

symbol_t* create_symbol_NT(char *name, attribute_t *attributes, unsigned int n_attr){
    return create_symbol(name, attributes, n_attr, 0x1, NULL);
}

symbol_t* create_symbol_T(char *name, attribute_t* attributes, unsigned int n_attr, char *sym_str){
    return create_symbol(name, attributes, n_attr, 0x0, sym_str);
}

bool is_NT(symbol_t* the_symbol){
    if (the_symbol->is_NT == 0x1)
        return true;
    return false;
}

void remove_symbol(symbol_t *the_symbol){
    printf("Unimplemented function\n");
    exit(EXIT_FAILURE);
}

symbol_t* get_symbol_by_name(symbol_t **list, unsigned int len, char *name){
    if(list == NULL)
        return NULL;
    for (int i = 0; i < len; i++){
            symbol_t *the_symbol = list[i];
            if (strcmp(the_symbol->name, name)==0){
                return the_symbol;
            }
    }
    return NULL;
}
