#pragma once
#include<stdio.h>
#include <reduce.h>
#include<stdlib.h>
#include<string.h>

extern void* get_next_sym(void *arr, void *old);
extern void **out_stream;
extern int out_size;
extern size_t strip(char *dest, char *source, char the_char);
extern int save_symbol(char *str, void *sym);
extern void set_out_stream(void **stream, int size);
extern void set_in_stream(char *stream);
extern int get_size(void *sym);
extern int parse();
extern void no_start_space(char *str);
extern void set_in_file(char *file_name);
extern int save_and_fix(void* sym,int n);
extern void retrieve(void **out, int* n);
