#pragma once
#include<stdio.h>
#include<stdlib.h>
#include "util.h"
#include"grow.h"
#include"stack.h"
#include"ruledef.h"
#include"ag_utils.h"

        #include "utils.h"


extern void trans(void *sym);
typedef char* reg;
extern reg reg_values[34];

typedef char* dtype;
extern dtype dtype_values[6];

typedef char* directive;
extern directive directive_values[4];

typedef int num;
typedef long hex;
typedef char* label;
typedef char* glob;
extern glob glob_values[1];

typedef char* labg;
typedef char* dvalue;
typedef char* ireg;
extern ireg ireg_values[142];

typedef char* suf;
extern suf suf_values[4];

typedef char* fpreg;
extern fpreg fpreg_values[32];

typedef char* condn;
extern condn condn_values[15];

typedef char* fmtsuf;
extern fmtsuf fmtsuf_values[3];

typedef char* ifpreg;
extern ifpreg ifpreg_values[16];

typedef struct __ADD_R_R{
	unsigned int id;
	char *sym_str;
}ADD_R_R_t;
typedef struct __SUB_R_R{
	unsigned int id;
	char *sym_str;
}SUB_R_R_t;
typedef struct __SUBU_R_R{
	unsigned int id;
	char *sym_str;
}SUBU_R_R_t;
typedef struct __ADD_R_I{
	unsigned int id;
	char *sym_str;
}ADD_R_I_t;
typedef struct __MUL_R_R{
	unsigned int id;
	char *sym_str;
}MUL_R_R_t;
typedef struct __DIV_R_R{
	unsigned int id;
	char *sym_str;
}DIV_R_R_t;
typedef struct __LOAD_DW{
	unsigned int id;
	char *sym_str;
}LOAD_DW_t;
typedef struct __LOAD_W{
	unsigned int id;
	char *sym_str;
}LOAD_W_t;
typedef struct __LOAD_H{
	unsigned int id;
	char *sym_str;
}LOAD_H_t;
typedef struct __LOAD_B{
	unsigned int id;
	char *sym_str;
}LOAD_B_t;
typedef struct __STORE_D{
	unsigned int id;
	char *sym_str;
}STORE_D_t;
typedef struct __STORE_W{
	unsigned int id;
	char *sym_str;
}STORE_W_t;
typedef struct __STORE_H{
	unsigned int id;
	char *sym_str;
}STORE_H_t;
typedef struct __STORE_B{
	unsigned int id;
	char *sym_str;
}STORE_B_t;
typedef struct __MOVE_H{
	unsigned int id;
	char *sym_str;
}MOVE_H_t;
typedef struct __MOVE_L{
	unsigned int id;
	char *sym_str;
}MOVE_L_t;
typedef struct __AND_R_R{
	unsigned int id;
	char *sym_str;
}AND_R_R_t;
typedef struct __AND_R_I{
	unsigned int id;
	char *sym_str;
}AND_R_I_t;
typedef struct __OR_R_R{
	unsigned int id;
	char *sym_str;
}OR_R_R_t;
typedef struct __OR_R_I{
	unsigned int id;
	char *sym_str;
}OR_R_I_t;
typedef struct __XOR_R_R{
	unsigned int id;
	char *sym_str;
}XOR_R_R_t;
typedef struct __NOR_R_R{
	unsigned int id;
	char *sym_str;
}NOR_R_R_t;
typedef struct __SET_L_R_R{
	unsigned int id;
	char *sym_str;
}SET_L_R_R_t;
typedef struct __SET_L_R_R_U{
	unsigned int id;
	char *sym_str;
}SET_L_R_R_U_t;
typedef struct __SET_L_R_I{
	unsigned int id;
	char *sym_str;
}SET_L_R_I_t;
typedef struct __SHIFT_L{
	unsigned int id;
	char *sym_str;
}SHIFT_L_t;
typedef struct __SHIFT_R{
	unsigned int id;
	char *sym_str;
}SHIFT_R_t;
typedef struct __BRANCH_EQ_R_R{
	unsigned int id;
	char *sym_str;
}BRANCH_EQ_R_R_t;
typedef struct __BRANCH_NEQ_R_R{
	unsigned int id;
	char *sym_str;
}BRANCH_NEQ_R_R_t;
typedef struct __JUMP{
	unsigned int id;
	char *sym_str;
}JUMP_t;
typedef struct __JUMP_R{
	unsigned int id;
	char *sym_str;
}JUMP_R_t;
typedef struct __CALL{
	unsigned int id;
	char *sym_str;
}CALL_t;
typedef struct __CODE_LABEL{
	unsigned int id;
	char *sym_str;
}CODE_LABEL_t;
typedef struct __SYSCALL{
	unsigned int id;
	char *sym_str;
}SYSCALL_t;
typedef struct __LA_R_A{
	unsigned int id;
	char *sym_str;
}LA_R_A_t;
typedef struct __DATA{
	unsigned int id;
	char *sym_str;
}DATA_t;
typedef struct __ADDU_R_I{
	unsigned int id;
	char *sym_str;
}ADDU_R_I_t;
typedef struct __MOVE{
	unsigned int id;
	char *sym_str;
}MOVE_t;
typedef struct __SEH{
	unsigned int id;
	char *sym_str;
}SEH_t;
typedef struct __ADDU_R_R{
	unsigned int id;
	char *sym_str;
}ADDU_R_R_t;
typedef struct __NOP{
	unsigned int id;
	char *sym_str;
}NOP_t;
typedef struct __DADD_R_R{
	unsigned int id;
	char *sym_str;
}DADD_R_R_t;
typedef struct __DADDU_R_R{
	unsigned int id;
	char *sym_str;
}DADDU_R_R_t;
typedef struct __DADD_R_I{
	unsigned int id;
	char *sym_str;
}DADD_R_I_t;
typedef struct __DADDU_R_I{
	unsigned int id;
	char *sym_str;
}DADDU_R_I_t;
typedef struct __DECL{
	unsigned int id;
	char *sym_str;
}DECL_t;
typedef struct __LUI_R_M{
	unsigned int id;
	char *sym_str;
}LUI_R_M_t;
typedef struct __DADDIU_R_M{
	unsigned int id;
	char *sym_str;
}DADDIU_R_M_t;
typedef struct __DSLL{
	unsigned int id;
	char *sym_str;
}DSLL_t;
typedef struct __BALC{
	unsigned int id;
	char *sym_str;
}BALC_t;
typedef struct __LOAD_I{
	unsigned int id;
	char *sym_str;
}LOAD_I_t;
typedef struct __BRANCH_NEZ_C{
	unsigned int id;
	char *sym_str;
}BRANCH_NEZ_C_t;
typedef struct __BRANCH_COM{
	unsigned int id;
	char *sym_str;
}BRANCH_COM_t;
typedef struct __BRANCH_NEQ_C{
	unsigned int id;
	char *sym_str;
}BRANCH_NEQ_C_t;
typedef struct __BRANCH_GTZ_C{
	unsigned int id;
	char *sym_str;
}BRANCH_GTZ_C_t;
typedef struct __BRANCH_GE_C{
	unsigned int id;
	char *sym_str;
}BRANCH_GE_C_t;
typedef struct __SHIFT_R_ARIT{
	unsigned int id;
	char *sym_str;
}SHIFT_R_ARIT_t;
typedef struct __BRANCH_LT_C{
	unsigned int id;
	char *sym_str;
}BRANCH_LT_C_t;
typedef struct __BRANCH_EQZ_C{
	unsigned int id;
	char *sym_str;
}BRANCH_EQZ_C_t;
typedef struct __DSRL{
	unsigned int id;
	char *sym_str;
}DSRL_t;
typedef struct __BRANCH_LTZ_C{
	unsigned int id;
	char *sym_str;
}BRANCH_LTZ_C_t;
typedef struct __JUMP_R_C{
	unsigned int id;
	char *sym_str;
}JUMP_R_C_t;
typedef struct __BRANCH_GEZ_C{
	unsigned int id;
	char *sym_str;
}BRANCH_GEZ_C_t;
typedef struct __TEQ{
	unsigned int id;
	char *sym_str;
}TEQ_t;
typedef struct __DSUBU_R_R{
	unsigned int id;
	char *sym_str;
}DSUBU_R_R_t;
typedef struct __MUH_R_R{
	unsigned int id;
	char *sym_str;
}MUH_R_R_t;
typedef struct __OR_R_I_HEX{
	unsigned int id;
	char *sym_str;
}OR_R_I_HEX_t;
typedef struct __AND_R_I_HEX{
	unsigned int id;
	char *sym_str;
}AND_R_I_HEX_t;
typedef struct __LOAD_DW_LAB{
	unsigned int id;
	char *sym_str;
}LOAD_DW_LAB_t;
typedef struct __LOAD_W_LAB{
	unsigned int id;
	char *sym_str;
}LOAD_W_LAB_t;
typedef struct __STORE_D_LAB{
	unsigned int id;
	char *sym_str;
}STORE_D_LAB_t;
typedef struct __STORE_W_LAB{
	unsigned int id;
	char *sym_str;
}STORE_W_LAB_t;
typedef struct __BRANCH_EQ_C{
	unsigned int id;
	char *sym_str;
}BRANCH_EQ_C_t;
typedef struct __BRANCH_LTU_C{
	unsigned int id;
	char *sym_str;
}BRANCH_LTU_C_t;
typedef struct __LOAD_B_U{
	unsigned int id;
	char *sym_str;
}LOAD_B_U_t;
typedef struct __BRANCH_GEU_C{
	unsigned int id;
	char *sym_str;
}BRANCH_GEU_C_t;
typedef struct __jump_r_c{
	unsigned int id;
	reg reg1;
}jump_r_c_t;
typedef struct __teq{
	unsigned int id;
	reg reg1;
	reg reg2;
}teq_t;
typedef struct __branch_ltz_c{
	unsigned int id;
	reg reg1;
	label target;
}branch_ltz_c_t;
typedef struct __dsrl{
	unsigned int id;
	reg dest;
	reg reg1;
	num imm;
}dsrl_t;
typedef struct __branch_gez_c{
	unsigned int id;
	reg reg1;
	label target;
}branch_gez_c_t;
typedef struct __branch_eqz_c{
	unsigned int id;
	reg reg1;
	label target;
}branch_eqz_c_t;
typedef struct __branch_eq_c{
	unsigned int id;
	reg reg1;
	reg reg2;
	label target;
}branch_eq_c_t;
typedef struct __branch_lt_c{
	unsigned int id;
	reg reg1;
	reg reg2;
	label target;
}branch_lt_c_t;
typedef struct __branch_ltu_c{
	unsigned int id;
	reg reg1;
	reg reg2;
	label target;
}branch_ltu_c_t;
typedef struct __shift_ra{
	unsigned int id;
	reg dest;
	reg reg1;
	num imm;
}shift_ra_t;
typedef struct __branch_ge_c{
	unsigned int id;
	reg reg1;
	reg reg2;
	label target;
}branch_ge_c_t;
typedef struct __branch_geu_c{
	unsigned int id;
	reg reg1;
	reg reg2;
	label target;
}branch_geu_c_t;
typedef struct __branch_neq_c{
	unsigned int id;
	reg reg1;
	reg reg2;
	label target;
}branch_neq_c_t;
typedef struct __branch_gtz_c{
	unsigned int id;
	reg reg1;
	label target;
}branch_gtz_c_t;
typedef struct __subu_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}subu_r_r_t;
typedef struct __branch_c{
	unsigned int id;
	label target;
}branch_c_t;
typedef struct __branch_nez_c{
	unsigned int id;
	reg reg1;
	label target;
}branch_nez_c_t;
typedef struct __balc{
	unsigned int id;
	label target;
}balc_t;
typedef struct __load_i{
	unsigned int id;
	reg dest;
	num imm;
}load_i_t;
typedef struct __add_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}add_r_r_t;
typedef struct __dadd_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}dadd_r_r_t;
typedef struct __addu_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}addu_r_r_t;
typedef struct __daddu_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}daddu_r_r_t;
typedef struct __dsubu_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}dsubu_r_r_t;
typedef struct __la_r_a{
	unsigned int id;
	reg reg1;
	label target;
}la_r_a_t;
typedef struct __sub_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}sub_r_r_t;
typedef struct __add_r_i{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}add_r_i_t;
typedef struct __dadd_r_i{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}dadd_r_i_t;
typedef struct __daddiu_r_m{
	unsigned int id;
	reg dest;
	reg reg1;
	directive dir;
	label lab;
}daddiu_r_m_t;
typedef struct __lui_r_m{
	unsigned int id;
	reg dest;
	directive dir;
	label lab;
}lui_r_m_t;
typedef struct __dsll{
	unsigned int id;
	reg dest;
	reg reg1;
	num imm;
}dsll_t;
typedef struct __addu_r_i{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}addu_r_i_t;
typedef struct __daddu_r_i{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}daddu_r_i_t;
typedef struct __mul_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}mul_r_r_t;
typedef struct __div_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}div_r_r_t;
typedef struct __load_dw{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
}load_dw_t;
typedef struct __load_dw_lab{
	unsigned int id;
	directive dir;
	reg dest;
	label lab;
	reg base;
}load_dw_lab_t;
typedef struct __load_w{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
}load_w_t;
typedef struct __load_w_lab{
	unsigned int id;
	directive dir;
	reg dest;
	label lab;
	reg base;
}load_w_lab_t;
typedef struct __load_h{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
}load_h_t;
typedef struct __load_b{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
}load_b_t;
typedef struct __load_b_u{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
}load_b_u_t;
typedef struct __store_d{
	unsigned int id;
	reg source;
	num offset;
	reg base;
}store_d_t;
typedef struct __store_d_lab{
	unsigned int id;
	directive dir;
	reg src;
	label lab;
	reg base;
}store_d_lab_t;
typedef struct __store_w{
	unsigned int id;
	reg source;
	num offset;
	reg base;
}store_w_t;
typedef struct __store_w_lab{
	unsigned int id;
	directive dir;
	reg src;
	label lab;
	reg base;
}store_w_lab_t;
typedef struct __store_h{
	unsigned int id;
	reg source;
	num offset;
	reg base;
}store_h_t;
typedef struct __store_b{
	unsigned int id;
	reg source;
	num offset;
	reg base;
}store_b_t;
typedef struct __muh_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}muh_r_r_t;
typedef struct __move{
	unsigned int id;
	reg dest;
	reg src;
}move_t;
typedef struct __move_h{
	unsigned int id;
	reg dest;
}move_h_t;
typedef struct __move_l{
	unsigned int id;
	reg dest;
}move_l_t;
typedef struct __and_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}and_r_r_t;
typedef struct __and_r_i{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}and_r_i_t;
typedef struct __and_r_i_hex{
	unsigned int id;
	reg reg1;
	hex imm;
	reg dest;
}and_r_i_hex_t;
typedef struct __or_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}or_r_r_t;
typedef struct __or_r_i{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}or_r_i_t;
typedef struct __or_r_i_hex{
	unsigned int id;
	reg reg1;
	hex imm;
	reg dest;
}or_r_i_hex_t;
typedef struct __xor_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}xor_r_r_t;
typedef struct __nor_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}nor_r_r_t;
typedef struct __seh{
	unsigned int id;
	reg dest;
	reg reg1;
}seh_t;
typedef struct __set_l_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}set_l_r_r_t;
typedef struct __set_l_r_r_u{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}set_l_r_r_u_t;
typedef struct __set_l_r_i{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}set_l_r_i_t;
typedef struct __shift_l{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}shift_l_t;
typedef struct __shift_r{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}shift_r_t;
typedef struct __branch_eq_r_r{
	unsigned int id;
	reg reg1;
	label address;
	reg reg2;
}branch_eq_r_r_t;
typedef struct __branch_neq_r_r{
	unsigned int id;
	reg reg1;
	label address;
	reg reg2;
}branch_neq_r_r_t;
typedef struct __jump{
	unsigned int id;
	label address;
}jump_t;
typedef struct __jump_r{
	unsigned int id;
	reg reg1;
}jump_r_t;
typedef struct __call{
	unsigned int id;
	label address;
}call_t;
typedef struct __syscall{
	unsigned int id;
	char *sym_str;
}syscall_t;
typedef struct __nop{
	unsigned int id;
	char *sym_str;
}nop_t;
typedef struct __code_label{
	unsigned int id;
	label text;
}code_label_t;
typedef struct __decl{
	unsigned int id;
	glob visibility;
	labg name;
}decl_t;
typedef struct __data{
	unsigned int id;
	label name;
	dtype type;
	dvalue val;
}data_t;
typedef struct __I_ADD_R_R{
	unsigned int id;
	char *sym_str;
}I_ADD_R_R_t;
typedef struct __I_ADD_I_R{
	unsigned int id;
	char *sym_str;
}I_ADD_I_R_t;
typedef struct __I_AND_R_R{
	unsigned int id;
	char *sym_str;
}I_AND_R_R_t;
typedef struct __I_AND_I_R{
	unsigned int id;
	char *sym_str;
}I_AND_I_R_t;
typedef struct __I_CALL{
	unsigned int id;
	char *sym_str;
}I_CALL_t;
typedef struct __I_CALL_R{
	unsigned int id;
	char *sym_str;
}I_CALL_R_t;
typedef struct __I_CMP_R_R{
	unsigned int id;
	char *sym_str;
}I_CMP_R_R_t;
typedef struct __I_CMP_R_I{
	unsigned int id;
	char *sym_str;
}I_CMP_R_I_t;
typedef struct __I_DIV_R{
	unsigned int id;
	char *sym_str;
}I_DIV_R_t;
typedef struct __I_JB{
	unsigned int id;
	char *sym_str;
}I_JB_t;
typedef struct __I_JBE{
	unsigned int id;
	char *sym_str;
}I_JBE_t;
typedef struct __I_JA{
	unsigned int id;
	char *sym_str;
}I_JA_t;
typedef struct __I_JAE{
	unsigned int id;
	char *sym_str;
}I_JAE_t;
typedef struct __I_JMP{
	unsigned int id;
	char *sym_str;
}I_JMP_t;
typedef struct __I_JMP_R{
	unsigned int id;
	char *sym_str;
}I_JMP_R_t;
typedef struct __I_LEA_M_R{
	unsigned int id;
	char *sym_str;
}I_LEA_M_R_t;
typedef struct __I_MOV_R_R{
	unsigned int id;
	char *sym_str;
}I_MOV_R_R_t;
typedef struct __I_MOV_M_R{
	unsigned int id;
	char *sym_str;
}I_MOV_M_R_t;
typedef struct __I_MOV_R_M{
	unsigned int id;
	char *sym_str;
}I_MOV_R_M_t;
typedef struct __I_MUL_R{
	unsigned int id;
	char *sym_str;
}I_MUL_R_t;
typedef struct __I_NEG_R{
	unsigned int id;
	char *sym_str;
}I_NEG_R_t;
typedef struct __I_NOT_R{
	unsigned int id;
	char *sym_str;
}I_NOT_R_t;
typedef struct __I_OR_R_R{
	unsigned int id;
	char *sym_str;
}I_OR_R_R_t;
typedef struct __I_SAR_I_R{
	unsigned int id;
	char *sym_str;
}I_SAR_I_R_t;
typedef struct __I_SAL_I_R{
	unsigned int id;
	char *sym_str;
}I_SAL_I_R_t;
typedef struct __I_SHL_I_R{
	unsigned int id;
	char *sym_str;
}I_SHL_I_R_t;
typedef struct __I_SHR_I_R{
	unsigned int id;
	char *sym_str;
}I_SHR_I_R_t;
typedef struct __I_SUB_R_R{
	unsigned int id;
	char *sym_str;
}I_SUB_R_R_t;
typedef struct __I_JZ{
	unsigned int id;
	char *sym_str;
}I_JZ_t;
typedef struct __I_JNZ{
	unsigned int id;
	char *sym_str;
}I_JNZ_t;
typedef struct __I_MOV_I_R{
	unsigned int id;
	char *sym_str;
}I_MOV_I_R_t;
typedef struct __I_PUSH_R{
	unsigned int id;
	char *sym_str;
}I_PUSH_R_t;
typedef struct __I_POP_R{
	unsigned int id;
	char *sym_str;
}I_POP_R_t;
typedef struct __I_JP{
	unsigned int id;
	char *sym_str;
}I_JP_t;
typedef struct __I_JNP{
	unsigned int id;
	char *sym_str;
}I_JNP_t;
typedef struct __I_RET{
	unsigned int id;
	char *sym_str;
}I_RET_t;
typedef struct __I_UD2{
	unsigned int id;
	char *sym_str;
}I_UD2_t;
typedef struct __I_XOR_R_R{
	unsigned int id;
	char *sym_str;
}I_XOR_R_R_t;
typedef struct __I_LEA_LAB_R{
	unsigned int id;
	char *sym_str;
}I_LEA_LAB_R_t;
typedef struct __I_OR_I_R{
	unsigned int id;
	char *sym_str;
}I_OR_I_R_t;
typedef struct __I_MOV_R_M_LAB{
	unsigned int id;
	char *sym_str;
}I_MOV_R_M_LAB_t;
typedef struct __I_MOV_M_R_LAB{
	unsigned int id;
	char *sym_str;
}I_MOV_M_R_LAB_t;
typedef struct __I_JBU{
	unsigned int id;
	char *sym_str;
}I_JBU_t;
typedef struct __I_JAE_U{
	unsigned int id;
	char *sym_str;
}I_JAE_U_t;
typedef struct __i_ret{
	unsigned int id;
	char *sym_str;
}i_ret_t;
typedef struct __i_ud2{
	unsigned int id;
	char *sym_str;
}i_ud2_t;
typedef struct __i_push_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
}i_push_r_t;
typedef struct __i_pop_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
}i_pop_r_t;
typedef struct __i_add_r_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
	ireg dest;
}i_add_r_r_t;
typedef struct __i_sub_r_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
	ireg dest;
}i_sub_r_r_t;
typedef struct __i_add_i_r{
	unsigned int id;
	suf suffix;
	num imm;
	ireg dest;
}i_add_i_r_t;
typedef struct __i_and_r_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
	ireg dest;
}i_and_r_r_t;
typedef struct __i_and_i_r{
	unsigned int id;
	suf suffix;
	num imm;
	ireg dest;
}i_and_i_r_t;
typedef struct __i_call{
	unsigned int id;
	label text;
}i_call_t;
typedef struct __i_call_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
}i_call_r_t;
typedef struct __i_cmp_r_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
	ireg reg2;
}i_cmp_r_r_t;
typedef struct __i_cmp_r_i{
	unsigned int id;
	suf suffix;
	ireg reg1;
	num imm;
}i_cmp_r_i_t;
typedef struct __i_div_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
}i_div_r_t;
typedef struct __i_jb{
	unsigned int id;
	label text;
}i_jb_t;
typedef struct __i_jbu{
	unsigned int id;
	label text;
}i_jbu_t;
typedef struct __i_jbe{
	unsigned int id;
	label text;
}i_jbe_t;
typedef struct __i_ja{
	unsigned int id;
	label text;
}i_ja_t;
typedef struct __i_jz{
	unsigned int id;
	label text;
}i_jz_t;
typedef struct __i_jp{
	unsigned int id;
	label text;
}i_jp_t;
typedef struct __i_jnp{
	unsigned int id;
	label text;
}i_jnp_t;
typedef struct __i_jnz{
	unsigned int id;
	label text;
}i_jnz_t;
typedef struct __i_jae{
	unsigned int id;
	label text;
}i_jae_t;
typedef struct __i_jae_u{
	unsigned int id;
	label text;
}i_jae_u_t;
typedef struct __i_jmp{
	unsigned int id;
	label text;
}i_jmp_t;
typedef struct __i_jmp_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
}i_jmp_r_t;
typedef struct __i_lea_lab_r{
	unsigned int id;
	suf suffix;
	label lab;
	ireg dest;
	ireg base;
}i_lea_lab_r_t;
typedef struct __i_lea_m_r{
	unsigned int id;
	suf suffix;
	label offset;
	ireg base;
	ireg dest;
}i_lea_m_r_t;
typedef struct __i_mov_i_r{
	unsigned int id;
	suf suffix;
	ireg dest;
	num imm;
}i_mov_i_r_t;
typedef struct __i_mov_r_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
	ireg dest;
}i_mov_r_r_t;
typedef struct __i_mov_m_r{
	unsigned int id;
	suf suffix;
	num offset;
	ireg base;
	ireg dest;
}i_mov_m_r_t;
typedef struct __i_mov_m_r_lab{
	unsigned int id;
	suf suffix;
	label lab;
	ireg base;
	ireg dest;
}i_mov_m_r_lab_t;
typedef struct __i_mov_r_m{
	unsigned int id;
	suf suffix;
	num offset;
	ireg base;
	ireg src;
}i_mov_r_m_t;
typedef struct __i_mov_r_m_lab{
	unsigned int id;
	suf suffix;
	label lab;
	ireg base;
	ireg src;
}i_mov_r_m_lab_t;
typedef struct __i_mul_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
}i_mul_r_t;
typedef struct __i_neg_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
}i_neg_r_t;
typedef struct __i_not_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
}i_not_r_t;
typedef struct __i_or_r_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
	ireg dest;
}i_or_r_r_t;
typedef struct __i_or_i_r{
	unsigned int id;
	suf suffix;
	num imm;
	ireg dest;
}i_or_i_r_t;
typedef struct __i_xor_r_r{
	unsigned int id;
	suf suffix;
	ireg reg1;
	ireg dest;
}i_xor_r_r_t;
typedef struct __i_sar_i_r{
	unsigned int id;
	suf suffix;
	num imm;
	ireg reg1;
}i_sar_i_r_t;
typedef struct __i_sal_i_r{
	unsigned int id;
	suf suffix;
	num imm;
	ireg reg1;
}i_sal_i_r_t;
typedef struct __i_shl_i_r{
	unsigned int id;
	suf suffix;
	num imm;
	ireg reg1;
}i_shl_i_r_t;
typedef struct __i_shr_i_r{
	unsigned int id;
	suf suffix;
	num imm;
	ireg reg1;
}i_shr_i_r_t;
typedef struct __SDC1{
	unsigned int id;
	char *sym_str;
}SDC1_t;
typedef struct __LDC1{
	unsigned int id;
	char *sym_str;
}LDC1_t;
typedef struct __SUBD{
	unsigned int id;
	char *sym_str;
}SUBD_t;
typedef struct __CVTDW{
	unsigned int id;
	char *sym_str;
}CVTDW_t;
typedef struct __CVTDL{
	unsigned int id;
	char *sym_str;
}CVTDL_t;
typedef struct __MTC1{
	unsigned int id;
	char *sym_str;
}MTC1_t;
typedef struct __MFC1{
	unsigned int id;
	char *sym_str;
}MFC1_t;
typedef struct __MFHC1{
	unsigned int id;
	char *sym_str;
}MFHC1_t;
typedef struct __DIVD{
	unsigned int id;
	char *sym_str;
}DIVD_t;
typedef struct __MULD{
	unsigned int id;
	char *sym_str;
}MULD_t;
typedef struct __CMPCONFMT{
	unsigned int id;
	char *sym_str;
}CMPCONFMT_t;
typedef struct __BC1EQZ{
	unsigned int id;
	char *sym_str;
}BC1EQZ_t;
typedef struct __BC1NEZ{
	unsigned int id;
	char *sym_str;
}BC1NEZ_t;
typedef struct __DMFC1{
	unsigned int id;
	char *sym_str;
}DMFC1_t;
typedef struct __LDC1_M{
	unsigned int id;
	char *sym_str;
}LDC1_M_t;
typedef struct __TRUNC_W_D{
	unsigned int id;
	char *sym_str;
}TRUNC_W_D_t;
typedef struct __ADDD{
	unsigned int id;
	char *sym_str;
}ADDD_t;
typedef struct __DMTC1{
	unsigned int id;
	char *sym_str;
}DMTC1_t;
typedef struct __MOVD{
	unsigned int id;
	char *sym_str;
}MOVD_t;
typedef struct __ABSD{
	unsigned int id;
	char *sym_str;
}ABSD_t;
typedef struct __sdc1_r_m{
	unsigned int id;
	fpreg src;
	reg base;
	num offset;
}sdc1_r_m_t;
typedef struct __ldc1_r_m{
	unsigned int id;
	fpreg dest;
	reg base;
	num offset;
}ldc1_r_m_t;
typedef struct __ldc1_r_m_d{
	unsigned int id;
	fpreg dest;
	reg base;
	directive dir;
	label offset;
}ldc1_r_m_d_t;
typedef struct __subd_r_r{
	unsigned int id;
	fpreg reg1;
	fpreg reg2;
	fpreg dest;
}subd_r_r_t;
typedef struct __cvtdw{
	unsigned int id;
	fpreg dest;
	fpreg src;
}cvtdw_t;
typedef struct __cvtdl{
	unsigned int id;
	fpreg dest;
	fpreg src;
}cvtdl_t;
typedef struct __add_d{
	unsigned int id;
	fpreg dest;
	fpreg reg1;
	fpreg reg2;
}add_d_t;
typedef struct __trunc_w_d{
	unsigned int id;
	fpreg dest;
	fpreg src;
}trunc_w_d_t;
typedef struct __mov_d{
	unsigned int id;
	fpreg dest;
	fpreg src;
}mov_d_t;
typedef struct __mtc1{
	unsigned int id;
	reg src;
	fpreg dest;
}mtc1_t;
typedef struct __mfc1{
	unsigned int id;
	reg dest;
	fpreg src;
}mfc1_t;
typedef struct __mfhc1{
	unsigned int id;
	reg dest;
	fpreg src;
}mfhc1_t;
typedef struct __dmfc1{
	unsigned int id;
	reg dest;
	fpreg src;
}dmfc1_t;
typedef struct __dmtc1{
	unsigned int id;
	fpreg dest;
	reg src;
}dmtc1_t;
typedef struct __divd{
	unsigned int id;
	fpreg dest;
	fpreg reg1;
	fpreg reg2;
}divd_t;
typedef struct __muld{
	unsigned int id;
	fpreg dest;
	fpreg reg1;
	fpreg reg2;
}muld_t;
typedef struct __cmpconfmt{
	unsigned int id;
	fpreg dest;
	fpreg reg1;
	fpreg reg2;
	fmtsuf fmt;
	condn con;
}cmpconfmt_t;
typedef struct __bc1eqz{
	unsigned int id;
	fpreg reg1;
	label target;
}bc1eqz_t;
typedef struct __bc1nez{
	unsigned int id;
	fpreg reg1;
	label target;
}bc1nez_t;
typedef struct __absd{
	unsigned int id;
	fpreg dest;
	fpreg src;
}absd_t;
typedef struct __IMOVSD_R_M{
	unsigned int id;
	char *sym_str;
}IMOVSD_R_M_t;
typedef struct __IMOVSD_M_R{
	unsigned int id;
	char *sym_str;
}IMOVSD_M_R_t;
typedef struct __ISUBSD_R_R{
	unsigned int id;
	char *sym_str;
}ISUBSD_R_R_t;
typedef struct __ICVTSI2SD_R_R{
	unsigned int id;
	char *sym_str;
}ICVTSI2SD_R_R_t;
typedef struct __IMOVD_F_R{
	unsigned int id;
	char *sym_str;
}IMOVD_F_R_t;
typedef struct __IMOVD_R_F{
	unsigned int id;
	char *sym_str;
}IMOVD_R_F_t;
typedef struct __IDIVSD_R_R{
	unsigned int id;
	char *sym_str;
}IDIVSD_R_R_t;
typedef struct __IMULSD_R_R{
	unsigned int id;
	char *sym_str;
}IMULSD_R_R_t;
typedef struct __IUCOMISS{
	unsigned int id;
	char *sym_str;
}IUCOMISS_t;
typedef struct __ICOMISS{
	unsigned int id;
	char *sym_str;
}ICOMISS_t;
typedef struct __IUCOMISD{
	unsigned int id;
	char *sym_str;
}IUCOMISD_t;
typedef struct __ICOMISD{
	unsigned int id;
	char *sym_str;
}ICOMISD_t;
typedef struct __ICVTTSD2SI{
	unsigned int id;
	char *sym_str;
}ICVTTSD2SI_t;
typedef struct __IMOVAPD_R_R{
	unsigned int id;
	char *sym_str;
}IMOVAPD_R_R_t;
typedef struct __IADDSD_R_R{
	unsigned int id;
	char *sym_str;
}IADDSD_R_R_t;
typedef struct __IMOVSD_LAB_R{
	unsigned int id;
	char *sym_str;
}IMOVSD_LAB_R_t;
typedef struct __IMOVSD_R_R{
	unsigned int id;
	char *sym_str;
}IMOVSD_R_R_t;
typedef struct __ANDPD_M{
	unsigned int id;
	char *sym_str;
}ANDPD_M_t;
typedef struct __imovsd_r_m{
	unsigned int id;
	ifpreg src;
	num offset;
	ireg base;
}imovsd_r_m_t;
typedef struct __imovsd_r_r{
	unsigned int id;
	ifpreg src;
	ifpreg dest;
}imovsd_r_r_t;
typedef struct __andpd_m{
	unsigned int id;
	ifpreg dest;
	hex mask;
}andpd_m_t;
typedef struct __imovsd_m_r{
	unsigned int id;
	ifpreg dest;
	num offset;
	ireg base;
}imovsd_m_r_t;
typedef struct __imovsd_lab_r{
	unsigned int id;
	ifpreg dest;
	label offset;
	ireg base;
}imovsd_lab_r_t;
typedef struct __imovapd_r_r{
	unsigned int id;
	ifpreg src;
	ifpreg dest;
}imovapd_r_r_t;
typedef struct __iaddsd_r_r{
	unsigned int id;
	ifpreg reg1;
	ifpreg dest;
}iaddsd_r_r_t;
typedef struct __isubsd_r_r{
	unsigned int id;
	ifpreg reg1;
	ifpreg dest;
}isubsd_r_r_t;
typedef struct __icvtsi2sd_r_r{
	unsigned int id;
	ifpreg reg1;
	ifpreg dest;
}icvtsi2sd_r_r_t;
typedef struct __icvttsd2si_r_r{
	unsigned int id;
	ifpreg reg1;
	ireg dest;
}icvttsd2si_r_r_t;
typedef struct __imovd_f_r{
	unsigned int id;
	ifpreg dest;
	ireg src;
}imovd_f_r_t;
typedef struct __imovd_r_f{
	unsigned int id;
	ifpreg src;
	ireg dest;
}imovd_r_f_t;
typedef struct __idivsd_r_r{
	unsigned int id;
	ifpreg reg1;
	ifpreg dest;
}idivsd_r_r_t;
typedef struct __imulsd_r_r{
	unsigned int id;
	ifpreg reg1;
	ifpreg dest;
}imulsd_r_r_t;
typedef struct __iucomiss_r_r{
	unsigned int id;
	ifpreg reg1;
	ifpreg reg2;
}iucomiss_r_r_t;
typedef struct __icomiss_r_r{
	unsigned int id;
	ifpreg reg1;
	ifpreg reg2;
}icomiss_r_r_t;
typedef struct __iucomisd_r_r{
	unsigned int id;
	ifpreg reg1;
	ifpreg reg2;
}iucomisd_r_r_t;
typedef struct __icomisd_r_r{
	unsigned int id;
	ifpreg reg1;
	ifpreg reg2;
}icomisd_r_r_t;
typedef struct __muh_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
	suf suffix;
}muh_r_r_t_t;
typedef struct __seh_t{
	unsigned int id;
	reg reg1;
	reg dest;
	suf suffix;
}seh_t_t;
typedef struct __move_t{
	unsigned int id;
	reg reg1;
	reg dest;
	suf suffix;
}move_t_t;
typedef struct __add_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
	suf suffix;
}add_r_r_t_t;
typedef struct __sub_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
	suf suffix;
}sub_r_r_t_t;
typedef struct __add_r_i_t{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
	suf suffix;
}add_r_i_t_t;
typedef struct __mul_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
	suf suffix;
}mul_r_r_t_t;
typedef struct __div_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
	suf suffix;
}div_r_r_t_t;
typedef struct __load_dw_t{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
	suf suffix;
}load_dw_t_t;
typedef struct __load_w_t{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
	suf suffix;
}load_w_t_t;
typedef struct __load_h_t{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
	suf suffix;
}load_h_t_t;
typedef struct __load_b_t{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
	suf suffix;
}load_b_t_t;
typedef struct __store_d_t{
	unsigned int id;
	reg source;
	num offset;
	reg base;
	suf suffix;
}store_d_t_t;
typedef struct __store_w_t{
	unsigned int id;
	reg source;
	num offset;
	reg base;
	suf suffix;
}store_w_t_t;
typedef struct __store_h_t{
	unsigned int id;
	reg source;
	num offset;
	reg base;
	suf suffix;
}store_h_t_t;
typedef struct __store_b_t{
	unsigned int id;
	reg source;
	num offset;
	reg base;
	suf suffix;
}store_b_t_t;
typedef struct __move_h_t{
	unsigned int id;
	reg dest;
	suf suffix;
}move_h_t_t;
typedef struct __move_l_t{
	unsigned int id;
	reg dest;
	suf suffix;
}move_l_t_t;
typedef struct __and_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
	suf suffix;
}and_r_r_t_t;
typedef struct __and_r_i_t{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
	suf suffix;
}and_r_i_t_t;
typedef struct __or_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
	suf suffix;
}or_r_r_t_t;
typedef struct __or_r_i_t{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
	suf suffix;
}or_r_i_t_t;
typedef struct __xor_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
	suf suffix;
}xor_r_r_t_t;
typedef struct __nor_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
	suf suffix;
}nor_r_r_t_t;
typedef struct __set_l_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
	suf suffix;
}set_l_r_r_t_t;
typedef struct __set_l_r_i_t{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
	suf suffix;
}set_l_r_i_t_t;
typedef struct __shift_l_t{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
	suf suffix;
}shift_l_t_t;
typedef struct __shift_r_t{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
	suf suffix;
}shift_r_t_t;
typedef struct __branch_eq_r_r_t{
	unsigned int id;
	reg reg1;
	label address;
	reg reg2;
	suf suffix;
}branch_eq_r_r_t_t;
typedef struct __branch_neq_r_r_t{
	unsigned int id;
	reg reg1;
	label address;
	reg reg2;
	suf suffix;
}branch_neq_r_r_t_t;
typedef struct __jump_t{
	unsigned int id;
	label address;
	suf suffix;
}jump_t_t;
typedef struct __jump_r_t{
	unsigned int id;
	reg reg1;
	suf suffix;
}jump_r_t_t;
typedef struct __call_t{
	unsigned int id;
	label address;
	suf suffix;
}call_t_t;
typedef struct __i_preserve{
	unsigned int id;
	reg reg1;
	suf suffix;
}i_preserve_t;
typedef struct __i_restore{
	unsigned int id;
	reg reg1;
	suf suffix;
}i_restore_t;
typedef struct __i_prologue{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg old1;
	reg old2;
	suf suffix;
}i_prologue_t;
typedef struct __i_load_mem{
	unsigned int id;
	reg reg1;
	reg old1;
	suf suffix;
}i_load_mem_t;
typedef struct __i_store_mem{
	unsigned int id;
	reg reg1;
	reg old1;
	suf suffix;
}i_store_mem_t;
typedef struct __i_lea_address{
	unsigned int id;
	reg dest;
	label target;
}i_lea_address_t;
typedef struct __branch_nez_c_t{
	unsigned int id;
	reg reg1;
	label target;
}branch_nez_c_t_t;
typedef struct __subu_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}subu_r_r_t_t;
typedef struct __branch_gtz_c_t{
	unsigned int id;
	reg reg1;
	label target;
}branch_gtz_c_t_t;
typedef struct __branch_ge_c_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	label target;
}branch_ge_c_t_t;
typedef struct __branch_geu_c_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	label target;
}branch_geu_c_t_t;
typedef struct __shift_ra_t{
	unsigned int id;
	reg reg1;
	reg dest;
	num imm;
}shift_ra_t_t;
typedef struct __branch_lt_c_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	label target;
}branch_lt_c_t_t;
typedef struct __dsrl_t{
	unsigned int id;
	reg reg1;
	reg dest;
	num imm;
}dsrl_t_t;
typedef struct __branch_ltz_c_t{
	unsigned int id;
	reg reg1;
	label target;
}branch_ltz_c_t_t;
typedef struct __teq_t{
	unsigned int id;
	reg reg1;
	reg reg2;
}teq_t_t;
typedef struct __branch_ltu_c_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	label target;
}branch_ltu_c_t_t;
typedef struct __lea_label{
	unsigned int id;
	ireg dest;
	label lab;
	suf suffix;
}lea_label_t;
typedef struct __load_data_label{
	unsigned int id;
	ireg dest;
	label lab;
	suf suffix;
	ireg base;
}load_data_label_t;
typedef struct __store_data_label{
	unsigned int id;
	ireg src;
	label lab;
	suf suffix;
	ireg base;
}store_data_label_t;
typedef struct __sdc1_r_m_t{
	unsigned int id;
	ifpreg src;
	ireg base;
	num offset;
}sdc1_r_m_t_t;
typedef struct __ldc1_r_m_t{
	unsigned int id;
	ifpreg dest;
	ireg base;
	num offset;
}ldc1_r_m_t_t;
typedef struct __subd_r_r_t{
	unsigned int id;
	ifpreg reg1;
	ifpreg reg2;
	ifpreg dest;
}subd_r_r_t_t;
typedef struct __cvtdw_t{
	unsigned int id;
	ifpreg dest;
	ifpreg src;
}cvtdw_t_t;
typedef struct __mtc1_t{
	unsigned int id;
	ireg src;
	ifpreg dest;
}mtc1_t_t;
typedef struct __mfc1_t{
	unsigned int id;
	ireg dest;
	ifpreg src;
}mfc1_t_t;
typedef struct __mfhc1_t{
	unsigned int id;
	ireg dest;
	ifpreg src;
}mfhc1_t_t;
typedef struct __dmfc1_t{
	unsigned int id;
	ireg dest;
	ifpreg src;
}dmfc1_t_t;
typedef struct __divd_t{
	unsigned int id;
	ifpreg dest;
	ifpreg reg1;
	ifpreg reg2;
}divd_t_t;
typedef struct __muld_t{
	unsigned int id;
	ifpreg dest;
	ifpreg reg1;
	ifpreg reg2;
}muld_t_t;
typedef struct __cmpconfmt_t{
	unsigned int id;
	ifpreg dest;
	ifpreg reg1;
	ifpreg reg2;
	fmtsuf fmt;
	condn con;
}cmpconfmt_t_t;
typedef struct __cmp_jmp{
	unsigned int id;
	ifpreg reg1;
	ifpreg reg2;
	fmtsuf fmt;
	condn con;
	label target;
}cmp_jmp_t;
typedef struct __cmp_neg{
	unsigned int id;
	ifpreg reg1;
	ifpreg reg2;
	fmtsuf fmt;
	condn con;
	label target;
}cmp_neg_t;
typedef struct __lea_label_f{
	unsigned int id;
	ifpreg dest;
	label lab;
	suf suffix;
	ireg base;
}lea_label_f_t;
typedef struct __truncwd_t{
	unsigned int id;
	fpreg dest;
	fpreg src;
}truncwd_t_t;
typedef struct __cvtdl_t{
	unsigned int id;
	fpreg dest;
	fpreg src;
}cvtdl_t_t;
typedef struct __add_d_t{
	unsigned int id;
	fpreg reg1;
	fpreg reg2;
	fpreg dest;
}add_d_t_t;
typedef struct __dmtc1_t{
	unsigned int id;
	fpreg dest;
	reg src;
}dmtc1_t_t;
typedef struct __absd_t{
	unsigned int id;
	ifpreg dest;
	ifpreg src;
}absd_t_t;
extern void library_init();
