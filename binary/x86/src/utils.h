#pragma once

extern void release_mem_regs();
extern void release_mem_reg(char *reg);
extern char* create_label();
extern char* map_register(char *reg,int size);
extern char* get_mul_reg(char *reg, int id);
extern char* get_mem_reg(char *reg);
extern int get_offset(char *reg);
extern unsigned char is_mem_reg(char *reg);
extern int is_mul_reg(char *reg);
extern char* get_suffix(char *reg);
extern char* empty_string();
extern char *print_as_a_label(char *lab);
extern char* fp_map_register(char *fpreg);
extern char* negate(char *con);
extern int is_unordered(char *con);
extern char get_float_size(char *fmt);
extern char get_condition(char *con);
extern char* get_fun(char *fun);
extern char* get_mul_reg_size(char *reg, int id);
extern int byte_align(int num,int align);
