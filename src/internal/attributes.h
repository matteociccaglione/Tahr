#pragma once

typedef struct attribute{
        char *name;
        char *type;
        char **values;
        int n_values;
        char *regex;
        char *beg_def;
        unsigned char infinite_set;
}attribute_t;

extern attribute_t* create_attribute(char *name, char *type, char **values, int n_values, unsigned char infinite, char *regex);
extern unsigned int remove_attribute(attribute_t* attribute);
extern attribute_t* get_attribute_by_name(attribute_t **list, unsigned int len, char *the_name);
