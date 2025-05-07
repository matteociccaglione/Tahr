#include "attributes.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "debug/debug.h"

attribute_t* create_attribute(char *name, char *type, char **values, int n_values, unsigned char infinite,char *regex){
        attribute_t* out = calloc(1,sizeof(attribute_t));
        out->beg_def = NULL;
        out->regex = regex;
        if (out == NULL){
                printd("Memory leak occurs during attribute creation\n");
                return NULL;
        }
        out->name = malloc(strlen(name)+1);
        if (out->name == NULL){
                goto err;
        }
        memcpy(out->name, name, strlen(name)+1);
        
        out->type = malloc(strlen(type)+1);
        if (out->type == NULL){
                goto err;
        }
        memcpy(out->type, type, strlen(type)+1);
        if (infinite==0x1){
                out->infinite_set = infinite;
                goto no_val;
        }
        out->n_values = n_values;
        out->values = malloc(sizeof(char*)*n_values);
        if (out->values == NULL){
                goto err;
        }
        for (int i = 0; i < n_values; i++){
                out->values[i] = malloc(strlen(values[i])+1);
                if (out->values[i] == NULL){
                        for (int j = 0; j < i; j++){
                                free(out->values[j]);
                        }
                        goto err;
                }
                memcpy(out->values[i], values[i], strlen(values[i])+1);
        }
no_val:
       return out; 
err:
        printd("Memory leak occurs during attribute initialization\n");
        return NULL;
}

unsigned int remove_attribute(attribute_t* the_attribute){
    free(the_attribute->name);
    free(the_attribute->type);
    if (the_attribute->infinite_set)
        goto end;
    for (int i = 0; i < the_attribute->n_values; i++){
        free(the_attribute->values[i]);
    }
end:
    free(the_attribute->values);
    return 0x1;
}


attribute_t* get_attribute_by_name(attribute_t **list, unsigned int len, char *the_name){
    if (list == NULL){
        return NULL;
    }
    for (int i = 0; i < len; i++){
        attribute_t *the_attribute = list[i];
        if (strcmp(the_attribute->name, the_name) == 0){
            return the_attribute;
        }
    }
    return NULL;
}
