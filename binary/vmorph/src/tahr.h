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
typedef char* vreg;
extern vreg vreg_values[38];

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
typedef struct __VM_ADD_R_I{
	unsigned int id;
	char *sym_str;
}VM_ADD_R_I_t;
typedef struct __VM_ADD_R_R{
	unsigned int id;
	char *sym_str;
}VM_ADD_R_R_t;
typedef struct __VM_AND_R_I{
	unsigned int id;
	char *sym_str;
}VM_AND_R_I_t;
typedef struct __VM_AND_R_R{
	unsigned int id;
	char *sym_str;
}VM_AND_R_R_t;
typedef struct __VM_JMP{
	unsigned int id;
	char *sym_str;
}VM_JMP_t;
typedef struct __VM_JE_R_I{
	unsigned int id;
	char *sym_str;
}VM_JE_R_I_t;
typedef struct __VM_JE_R_R{
	unsigned int id;
	char *sym_str;
}VM_JE_R_R_t;
typedef struct __VM_JLT_R_R{
	unsigned int id;
	char *sym_str;
}VM_JLT_R_R_t;
typedef struct __VM_JLT_R_I{
	unsigned int id;
	char *sym_str;
}VM_JLT_R_I_t;
typedef struct __VM_LOAD_R_R{
	unsigned int id;
	char *sym_str;
}VM_LOAD_R_R_t;
typedef struct __VM_LOAD_R_I{
	unsigned int id;
	char *sym_str;
}VM_LOAD_R_I_t;
typedef struct __VM_LTGT{
	unsigned int id;
	char *sym_str;
}VM_LTGT_t;
typedef struct __VM_NOT_R{
	unsigned int id;
	char *sym_str;
}VM_NOT_R_t;
typedef struct __VM_NEG_R{
	unsigned int id;
	char *sym_str;
}VM_NEG_R_t;
typedef struct __VM_SHL_R_I{
	unsigned int id;
	char *sym_str;
}VM_SHL_R_I_t;
typedef struct __VM_SHR_R_I{
	unsigned int id;
	char *sym_str;
}VM_SHR_R_I_t;
typedef struct __VM_SAR_R_I{
	unsigned int id;
	char *sym_str;
}VM_SAR_R_I_t;
typedef struct __VM_STORE_R_R{
	unsigned int id;
	char *sym_str;
}VM_STORE_R_R_t;
typedef struct __VM_XOR_R_I{
	unsigned int id;
	char *sym_str;
}VM_XOR_R_I_t;
typedef struct __VM_XOR_R_R{
	unsigned int id;
	char *sym_str;
}VM_XOR_R_R_t;
typedef struct __VM_CALL{
	unsigned int id;
	char *sym_str;
}VM_CALL_t;
typedef struct __VM_RET{
	unsigned int id;
	char *sym_str;
}VM_RET_t;
typedef struct __VM_PUSH_R{
	unsigned int id;
	char *sym_str;
}VM_PUSH_R_t;
typedef struct __VM_PUSH_RET{
	unsigned int id;
	char *sym_str;
}VM_PUSH_RET_t;
typedef struct __VM_POP_R{
	unsigned int id;
	char *sym_str;
}VM_POP_R_t;
typedef struct __VM_LEA_R_M{
	unsigned int id;
	char *sym_str;
}VM_LEA_R_M_t;
typedef struct __VM_V_ARIT{
	unsigned int id;
	char *sym_str;
}VM_V_ARIT_t;
typedef struct __VM_LIBC{
	unsigned int id;
	char *sym_str;
}VM_LIBC_t;
typedef struct __vm_add_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
}vm_add_r_r_t;
typedef struct __vm_add_r_i{
	unsigned int id;
	reg reg1;
	num imm;
}vm_add_r_i_t;
typedef struct __vm_and_r_i{
	unsigned int id;
	reg reg1;
	num imm;
}vm_and_r_i_t;
typedef struct __vm_and_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
}vm_and_r_r_t;
typedef struct __vm_jmp{
	unsigned int id;
	char *sym_str;
}vm_jmp_t;
typedef struct __vm_je_r_i{
	unsigned int id;
	reg reg1;
	num imm;
}vm_je_r_i_t;
typedef struct __vm_je_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
}vm_je_r_r_t;
typedef struct __vm_jlt_r_i{
	unsigned int id;
	reg reg1;
	num imm;
}vm_jlt_r_i_t;
typedef struct __vm_jlt_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
}vm_jlt_r_r_t;
typedef struct __vm_load_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
}vm_load_r_r_t;
typedef struct __vm_load_r_i{
	unsigned int id;
	reg reg1;
	num imm;
}vm_load_r_i_t;
typedef struct __vm_ltgt{
	unsigned int id;
	label address;
}vm_ltgt_t;
typedef struct __vm_not_r{
	unsigned int id;
	reg reg1;
}vm_not_r_t;
typedef struct __vm_neg_r{
	unsigned int id;
	reg reg1;
}vm_neg_r_t;
typedef struct __vm_shl_r_i{
	unsigned int id;
	reg reg1;
	num imm;
}vm_shl_r_i_t;
typedef struct __vm_shr_r_i{
	unsigned int id;
	reg reg1;
	num imm;
}vm_shr_r_i_t;
typedef struct __vm_sar_r_i{
	unsigned int id;
	reg reg1;
	num imm;
}vm_sar_r_i_t;
typedef struct __vm_store_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
}vm_store_r_r_t;
typedef struct __vm_xor_r_i{
	unsigned int id;
	reg reg1;
	num imm;
}vm_xor_r_i_t;
typedef struct __vm_xor_r_r{
	unsigned int id;
	reg reg1;
	reg reg2;
}vm_xor_r_r_t;
typedef struct __vm_call{
	unsigned int id;
	char *sym_str;
}vm_call_t;
typedef struct __vm_ret{
	unsigned int id;
	char *sym_str;
}vm_ret_t;
typedef struct __vm_push_r{
	unsigned int id;
	reg reg1;
}vm_push_r_t;
typedef struct __vm_push_ret{
	unsigned int id;
	char *sym_str;
}vm_push_ret_t;
typedef struct __vm_pop_r{
	unsigned int id;
	reg reg1;
}vm_pop_r_t;
typedef struct __vm_lea_r_m{
	unsigned int id;
	reg reg1;
	label target;
}vm_lea_r_m_t;
typedef struct __vm_v_arit{
	unsigned int id;
	num imm;
	reg reg1;
}vm_v_arit_t;
typedef struct __vm_syscall{
	unsigned int id;
	char *sym_str;
}vm_syscall_t;
typedef struct __la_r_a_t{
	unsigned int id;
	reg reg1;
	label target;
}la_r_a_t_t;
typedef struct __vm_mov{
	unsigned int id;
	reg reg1;
	reg reg2;
}vm_mov_t;
typedef struct __vm_mov_i{
	unsigned int id;
	reg reg1;
	num imm;
}vm_mov_i_t;
typedef struct __vm_prologue{
	unsigned int id;
	reg reg1;
	reg reg2;
}vm_prologue_t;
typedef struct __vm_store_mem{
	unsigned int id;
	reg reg1;
}vm_store_mem_t;
typedef struct __vm_load_mem{
	unsigned int id;
	reg reg1;
}vm_load_mem_t;
typedef struct __vm_epilogue{
	unsigned int id;
	reg reg1;
	reg reg2;
}vm_epilogue_t;
typedef struct __or_r_r_temp{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}or_r_r_temp_t;
typedef struct __vm_libc{
	unsigned int id;
	num code;
}vm_libc_t;
typedef struct __seh_t{
	unsigned int id;
	reg reg1;
	reg dest;
}seh_t_t;
typedef struct __move_t{
	unsigned int id;
	reg reg1;
	reg dest;
}move_t_t;
typedef struct __add_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}add_r_r_t_t;
typedef struct __sub_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}sub_r_r_t_t;
typedef struct __add_r_i_t{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}add_r_i_t_t;
typedef struct __mul_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
}mul_r_r_t_t;
typedef struct __div_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
}div_r_r_t_t;
typedef struct __load_dw_t{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
}load_dw_t_t;
typedef struct __load_w_t{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
}load_w_t_t;
typedef struct __load_h_t{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
}load_h_t_t;
typedef struct __load_b_t{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
}load_b_t_t;
typedef struct __load_b_u_t{
	unsigned int id;
	reg dest;
	num offset;
	reg base;
}load_b_u_t_t;
typedef struct __store_d_t{
	unsigned int id;
	reg source;
	num offset;
	reg base;
}store_d_t_t;
typedef struct __store_w_t{
	unsigned int id;
	reg source;
	num offset;
	reg base;
}store_w_t_t;
typedef struct __store_h_t{
	unsigned int id;
	reg source;
	num offset;
	reg base;
}store_h_t_t;
typedef struct __store_b_t{
	unsigned int id;
	reg source;
	num offset;
	reg base;
}store_b_t_t;
typedef struct __move_h_t{
	unsigned int id;
	reg dest;
}move_h_t_t;
typedef struct __move_l_t{
	unsigned int id;
	reg dest;
}move_l_t_t;
typedef struct __and_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}and_r_r_t_t;
typedef struct __and_r_i_t{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}and_r_i_t_t;
typedef struct __or_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}or_r_r_t_t;
typedef struct __or_r_i_t{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}or_r_i_t_t;
typedef struct __xor_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}xor_r_r_t_t;
typedef struct __nor_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
}nor_r_r_t_t;
typedef struct __set_l_r_r_t{
	unsigned int id;
	reg reg1;
	reg reg2;
	reg dest;
	num sign;
}set_l_r_r_t_t;
typedef struct __set_l_r_i_t{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}set_l_r_i_t_t;
typedef struct __shift_l_t{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}shift_l_t_t;
typedef struct __shift_r_t{
	unsigned int id;
	reg reg1;
	num imm;
	reg dest;
}shift_r_t_t;
typedef struct __branch_eq_r_r_t{
	unsigned int id;
	reg reg1;
	label address;
	reg reg2;
	num sign;
}branch_eq_r_r_t_t;
typedef struct __branch_lt_t{
	unsigned int id;
	reg reg1;
	label address;
	reg reg2;
	num sign;
}branch_lt_t_t;
typedef struct __branch_ge_t{
	unsigned int id;
	reg reg1;
	label address;
	reg reg2;
	num sign;
}branch_ge_t_t;
typedef struct __branch_neq_r_r_t{
	unsigned int id;
	reg reg1;
	label address;
	reg reg2;
	num sign;
}branch_neq_r_r_t_t;
typedef struct __jump_t{
	unsigned int id;
	label address;
}jump_t_t;
typedef struct __jump_r_t{
	unsigned int id;
	reg reg1;
}jump_r_t_t;
typedef struct __call_t{
	unsigned int id;
	label address;
}call_t_t;
typedef struct __load_i_t{
	unsigned int id;
	reg dest;
	num imm;
}load_i_t_t;
typedef struct __muh_r_r_t{
	unsigned int id;
	reg dest;
	reg reg1;
	reg reg2;
}muh_r_r_t_t;
typedef struct __shift_ra_t{
	unsigned int id;
	reg dest;
	reg reg1;
	num imm;
}shift_ra_t_t;
typedef struct __load_label{
	unsigned int id;
	reg dest;
	label lab;
}load_label_t;
typedef struct __load_data_label{
	unsigned int id;
	reg dest;
	label lab;
	num size;
}load_data_label_t;
typedef struct __store_data_label{
	unsigned int id;
	reg src;
	label lab;
	num size;
}store_data_label_t;
typedef struct __libc_t{
	unsigned int id;
	num code;
}libc_t_t;
typedef struct __vm_add_r_i_big{
	unsigned int id;
	reg reg1;
	num imm;
}vm_add_r_i_big_t;
extern void library_init();
