#pragma once

extern char* map_register(char *reg);
extern unsigned char is_mem_reg(char *reg);
extern char* get_mem_reg(char *reg);
extern int get_offset(char *reg);
extern void release_mem_reg(char *reg);
extern void release_mem_regs();
extern char* create_label();
extern int is_libc(char *label);
extern int get_libc_code(char *fun);
