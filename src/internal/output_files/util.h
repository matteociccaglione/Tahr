#pragma once

typedef struct __map{
        unsigned int key;
        void *data;
        unsigned int valid;
}map_t;

/*
extern void initialize_map(unsigned int n_entry);
extern int put_symbol(map_t map_entry); //Note: the key field is ignored and is assigned directly by the system
extern int remove_symbol(map_t map_entry);
*/
extern void replace_to(char *dest, char *source, char *old, char *new);
extern void replace_to_no_substring(char *dest, char *source, char *old, char *new);
extern void replace_to_mem_safe(char **dest, char *source, char *old, char *new, int *the_size);
extern int len_ph(char *str);
extern char *to_str(void *data, char *type);
