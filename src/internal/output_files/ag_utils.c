#include "ag_utils.h"
#include <stdlib.h>
#include <stdio.h>
void symbol_init(void *var, char *type,int terminal){
        for (unsigned int i = 0; i < N_SYM; i++){
                if (strcmp(type,sym_to_id[i]) == 0){
                        int n = 0x7ffffff & i;
                        if(terminal)
                                n = 0x80000000 | i;
                        memcpy(var, &n, sizeof(n));
                        return;
                }
        }
}
void* sym_malloc(unsigned int size){
        container* the_container = malloc(sizeof(container));
        the_container->data = malloc(size);
        return the_container->data;
}

int get_sym_id(void *sym){
        int id;
        memcpy(&id,sym,sizeof(int));
        return (id & 0x7ffffff);
}

int is_terminal(int id){
    return (id >> 31 &0x3ffffff);
}

