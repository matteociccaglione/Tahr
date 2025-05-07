#include "tahr.h"
char *sym_to_id[260] = {
	"ADD_R_R",
"SUB_R_R",
"SUBU_R_R",
"ADD_R_I",
"MUL_R_R",
"DIV_R_R",
"LOAD_DW",
"LOAD_W",
"LOAD_H",
"LOAD_B",
"STORE_D",
"STORE_W",
"STORE_H",
"STORE_B",
"MOVE_H",
"MOVE_L",
"AND_R_R",
"AND_R_I",
"OR_R_R",
"OR_R_I",
"XOR_R_R",
"NOR_R_R",
"SET_L_R_R",
"SET_L_R_R_U",
"SET_L_R_I",
"SHIFT_L",
"SHIFT_R",
"BRANCH_EQ_R_R",
"BRANCH_NEQ_R_R",
"JUMP",
"JUMP_R",
"CALL",
"CODE_LABEL",
"SYSCALL",
"LA_R_A",
"DATA",
"ADDU_R_I",
"MOVE",
"SEH",
"ADDU_R_R",
"NOP",
"DADD_R_R",
"DADDU_R_R",
"DADD_R_I",
"DADDU_R_I",
"DECL",
"LUI_R_M",
"DADDIU_R_M",
"DSLL",
"BALC",
"LOAD_I",
"BRANCH_NEZ_C",
"BRANCH_COM",
"BRANCH_NEQ_C",
"BRANCH_GTZ_C",
"BRANCH_GE_C",
"SHIFT_R_ARIT",
"BRANCH_LT_C",
"BRANCH_EQZ_C",
"DSRL",
"BRANCH_LTZ_C",
"JUMP_R_C",
"BRANCH_GEZ_C",
"TEQ",
"DSUBU_R_R",
"MUH_R_R",
"OR_R_I_HEX",
"AND_R_I_HEX",
"LOAD_DW_LAB",
"LOAD_W_LAB",
"STORE_D_LAB",
"STORE_W_LAB",
"BRANCH_EQ_C",
"BRANCH_LTU_C",
"LOAD_B_U",
"BRANCH_GEU_C",
"jump_r_c",
"teq",
"branch_ltz_c",
"dsrl",
"branch_gez_c",
"branch_eqz_c",
"branch_eq_c",
"branch_lt_c",
"branch_ltu_c",
"shift_ra",
"branch_ge_c",
"branch_geu_c",
"branch_neq_c",
"branch_gtz_c",
"subu_r_r",
"branch_c",
"branch_nez_c",
"balc",
"load_i",
"add_r_r",
"dadd_r_r",
"addu_r_r",
"daddu_r_r",
"dsubu_r_r",
"la_r_a",
"sub_r_r",
"add_r_i",
"dadd_r_i",
"daddiu_r_m",
"lui_r_m",
"dsll",
"addu_r_i",
"daddu_r_i",
"mul_r_r",
"div_r_r",
"load_dw",
"load_dw_lab",
"load_w",
"load_w_lab",
"load_h",
"load_b",
"load_b_u",
"store_d",
"store_d_lab",
"store_w",
"store_w_lab",
"store_h",
"store_b",
"muh_r_r",
"move",
"move_h",
"move_l",
"and_r_r",
"and_r_i",
"and_r_i_hex",
"or_r_r",
"or_r_i",
"or_r_i_hex",
"xor_r_r",
"nor_r_r",
"seh",
"set_l_r_r",
"set_l_r_r_u",
"set_l_r_i",
"shift_l",
"shift_r",
"branch_eq_r_r",
"branch_neq_r_r",
"jump",
"jump_r",
"call",
"syscall",
"nop",
"code_label",
"decl",
"data",
"VM_ADD_R_I",
"VM_ADD_R_R",
"VM_AND_R_I",
"VM_AND_R_R",
"VM_JMP",
"VM_JE_R_I",
"VM_JE_R_R",
"VM_JLT_R_R",
"VM_JLT_R_I",
"VM_LOAD_R_R",
"VM_LOAD_R_I",
"VM_LTGT",
"VM_NOT_R",
"VM_NEG_R",
"VM_SHL_R_I",
"VM_SHR_R_I",
"VM_SAR_R_I",
"VM_STORE_R_R",
"VM_XOR_R_I",
"VM_XOR_R_R",
"VM_CALL",
"VM_RET",
"VM_PUSH_R",
"VM_PUSH_RET",
"VM_POP_R",
"VM_LEA_R_M",
"VM_V_ARIT",
"VM_LIBC",
"vm_add_r_r",
"vm_add_r_i",
"vm_and_r_i",
"vm_and_r_r",
"vm_jmp",
"vm_je_r_i",
"vm_je_r_r",
"vm_jlt_r_i",
"vm_jlt_r_r",
"vm_load_r_r",
"vm_load_r_i",
"vm_ltgt",
"vm_not_r",
"vm_neg_r",
"vm_shl_r_i",
"vm_shr_r_i",
"vm_sar_r_i",
"vm_store_r_r",
"vm_xor_r_i",
"vm_xor_r_r",
"vm_call",
"vm_ret",
"vm_push_r",
"vm_push_ret",
"vm_pop_r",
"vm_lea_r_m",
"vm_v_arit",
"vm_syscall",
"la_r_a_t",
"vm_mov",
"vm_mov_i",
"vm_prologue",
"vm_store_mem",
"vm_load_mem",
"vm_epilogue",
"or_r_r_temp",
"vm_libc",
"seh_t",
"move_t",
"add_r_r_t",
"sub_r_r_t",
"add_r_i_t",
"mul_r_r_t",
"div_r_r_t",
"load_dw_t",
"load_w_t",
"load_h_t",
"load_b_t",
"load_b_u_t",
"store_d_t",
"store_w_t",
"store_h_t",
"store_b_t",
"move_h_t",
"move_l_t",
"and_r_r_t",
"and_r_i_t",
"or_r_r_t",
"or_r_i_t",
"xor_r_r_t",
"nor_r_r_t",
"set_l_r_r_t",
"set_l_r_i_t",
"shift_l_t",
"shift_r_t",
"branch_eq_r_r_t",
"branch_lt_t",
"branch_ge_t",
"branch_neq_r_r_t",
"jump_t",
"jump_r_t",
"call_t",
"load_i_t",
"muh_r_r_t",
"shift_ra_t",
"load_label",
"load_data_label",
"store_data_label",
"libc_t",
"vm_add_r_i_big",

};
char* reg_values[] = {"$zero","$at","$v0","$v1","$a0","$a1","$a2","$a3","$t0","$t1","$t2","$t3","$t4","$t5","$t6","$t7","$t8","$t9","$s0","$s1","$s2","$s3","$s4","$s5","$s6","$s7","$k0","$k1","$sp","$ra","$fp","HI","LO","PC"};

char* dtype_values[] = {".word",".half",".byte",".float",".asciiz",".ascii"};

char* directive_values[] = {"%highest","%hi","%lo","%higher"};

char* glob_values[] = {".globl"};

char* vreg_values[] = {"r0","r1","r2","r3","r4","r5","r6","r7","r8","r9","r10","r11","r12","r13","r14","r15","temp","rret","v0","tgt","sp","ip","rlibc","rsize","m0","m1","m2","m3","m4","m5","m6","m7","m8","m9","m10","m11","m12","m13"};

void from_la_r_a_to_LA_R_A(void *start){
	la_r_a_t* lhs = (la_r_a_t*)start;
	LA_R_A_t* LA_R_A_0 = malloc(sizeof(LA_R_A_t));
	symbol_init(LA_R_A_0,"LA_R_A",1);

	push(LA_R_A_0);


	const char *pos_str[1] = {
"la reg1,target",
};
	int the_size = strlen(pos_str[0])+1;
	LA_R_A_0->sym_str = malloc(the_size);
	strcpy(LA_R_A_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&LA_R_A_0->sym_str,LA_R_A_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&LA_R_A_0->sym_str,LA_R_A_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(LA_R_A_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_syscall_to_SYSCALL(void *start){
	syscall_t* lhs = (syscall_t*)start;
	SYSCALL_t* SYSCALL_0 = malloc(sizeof(SYSCALL_t));
	symbol_init(SYSCALL_0,"SYSCALL",1);

	push(SYSCALL_0);


	const char *pos_str[1] = {
"syscall",
};
	int the_size = strlen(pos_str[0])+1;
	SYSCALL_0->sym_str = malloc(the_size);
	strcpy(SYSCALL_0->sym_str, pos_str[0]);
	
enqueue(SYSCALL_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_call_to_CALL(void *start){
	call_t* lhs = (call_t*)start;
	CALL_t* CALL_0 = malloc(sizeof(CALL_t));
	symbol_init(CALL_0,"CALL",1);

	push(CALL_0);


	const char *pos_str[1] = {
"jal address",
};
	int the_size = strlen(pos_str[0])+1;
	CALL_0->sym_str = malloc(the_size);
	strcpy(CALL_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&CALL_0->sym_str,CALL_0->sym_str,"address",to_str(lhs->address,"char*"),&the_size);
		
enqueue(CALL_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_jump_r_to_JUMP_R(void *start){
	jump_r_t* lhs = (jump_r_t*)start;
	JUMP_R_t* JUMP_R_0 = malloc(sizeof(JUMP_R_t));
	symbol_init(JUMP_R_0,"JUMP_R",1);

	push(JUMP_R_0);


	const char *pos_str[1] = {
"jr reg1",
};
	int the_size = strlen(pos_str[0])+1;
	JUMP_R_0->sym_str = malloc(the_size);
	strcpy(JUMP_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&JUMP_R_0->sym_str,JUMP_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(JUMP_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_jump_to_JUMP(void *start){
	jump_t* lhs = (jump_t*)start;
	JUMP_t* JUMP_0 = malloc(sizeof(JUMP_t));
	symbol_init(JUMP_0,"JUMP",1);

	push(JUMP_0);


	const char *pos_str[1] = {
"j address",
};
	int the_size = strlen(pos_str[0])+1;
	JUMP_0->sym_str = malloc(the_size);
	strcpy(JUMP_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&JUMP_0->sym_str,JUMP_0->sym_str,"address",to_str(lhs->address,"char*"),&the_size);
		
enqueue(JUMP_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_neq_r_r_to_BRANCH_NEQ_R_R(void *start){
	branch_neq_r_r_t* lhs = (branch_neq_r_r_t*)start;
	BRANCH_NEQ_R_R_t* BRANCH_NEQ_R_R_0 = malloc(sizeof(BRANCH_NEQ_R_R_t));
	symbol_init(BRANCH_NEQ_R_R_0,"BRANCH_NEQ_R_R",1);

	push(BRANCH_NEQ_R_R_0);


	const char *pos_str[1] = {
"bne reg1,reg2,address",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_NEQ_R_R_0->sym_str = malloc(the_size);
	strcpy(BRANCH_NEQ_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_NEQ_R_R_0->sym_str,BRANCH_NEQ_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_NEQ_R_R_0->sym_str,BRANCH_NEQ_R_R_0->sym_str,"address",to_str(lhs->address,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_NEQ_R_R_0->sym_str,BRANCH_NEQ_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(BRANCH_NEQ_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_eq_r_r_to_BRANCH_EQ_R_R(void *start){
	branch_eq_r_r_t* lhs = (branch_eq_r_r_t*)start;
	BRANCH_EQ_R_R_t* BRANCH_EQ_R_R_0 = malloc(sizeof(BRANCH_EQ_R_R_t));
	symbol_init(BRANCH_EQ_R_R_0,"BRANCH_EQ_R_R",1);

	push(BRANCH_EQ_R_R_0);


	const char *pos_str[1] = {
"beq reg1,reg2,address",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_EQ_R_R_0->sym_str = malloc(the_size);
	strcpy(BRANCH_EQ_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_EQ_R_R_0->sym_str,BRANCH_EQ_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_EQ_R_R_0->sym_str,BRANCH_EQ_R_R_0->sym_str,"address",to_str(lhs->address,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_EQ_R_R_0->sym_str,BRANCH_EQ_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(BRANCH_EQ_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_r_to_SHIFT_R(void *start){
	shift_r_t* lhs = (shift_r_t*)start;
	SHIFT_R_t* SHIFT_R_0 = malloc(sizeof(SHIFT_R_t));
	symbol_init(SHIFT_R_0,"SHIFT_R",1);

	push(SHIFT_R_0);


	const char *pos_str[1] = {
"srl dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	SHIFT_R_0->sym_str = malloc(the_size);
	strcpy(SHIFT_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&SHIFT_R_0->sym_str,SHIFT_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&SHIFT_R_0->sym_str,SHIFT_R_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&SHIFT_R_0->sym_str,SHIFT_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(SHIFT_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_l_to_SHIFT_L(void *start){
	shift_l_t* lhs = (shift_l_t*)start;
	SHIFT_L_t* SHIFT_L_0 = malloc(sizeof(SHIFT_L_t));
	symbol_init(SHIFT_L_0,"SHIFT_L",1);

	push(SHIFT_L_0);


	const char *pos_str[1] = {
"sll dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	SHIFT_L_0->sym_str = malloc(the_size);
	strcpy(SHIFT_L_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&SHIFT_L_0->sym_str,SHIFT_L_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&SHIFT_L_0->sym_str,SHIFT_L_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&SHIFT_L_0->sym_str,SHIFT_L_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(SHIFT_L_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_set_l_r_i_to_SET_L_R_I(void *start){
	set_l_r_i_t* lhs = (set_l_r_i_t*)start;
	SET_L_R_I_t* SET_L_R_I_0 = malloc(sizeof(SET_L_R_I_t));
	symbol_init(SET_L_R_I_0,"SET_L_R_I",1);

	push(SET_L_R_I_0);


	const char *pos_str[1] = {
"slti dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	SET_L_R_I_0->sym_str = malloc(the_size);
	strcpy(SET_L_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&SET_L_R_I_0->sym_str,SET_L_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&SET_L_R_I_0->sym_str,SET_L_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&SET_L_R_I_0->sym_str,SET_L_R_I_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(SET_L_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_set_l_r_r_u_to_SET_L_R_R_U(void *start){
	set_l_r_r_u_t* lhs = (set_l_r_r_u_t*)start;
	SET_L_R_R_U_t* SET_L_R_R_U_0 = malloc(sizeof(SET_L_R_R_U_t));
	symbol_init(SET_L_R_R_U_0,"SET_L_R_R_U",1);

	push(SET_L_R_R_U_0);


	const char *pos_str[1] = {
"sltu dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	SET_L_R_R_U_0->sym_str = malloc(the_size);
	strcpy(SET_L_R_R_U_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&SET_L_R_R_U_0->sym_str,SET_L_R_R_U_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&SET_L_R_R_U_0->sym_str,SET_L_R_R_U_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&SET_L_R_R_U_0->sym_str,SET_L_R_R_U_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(SET_L_R_R_U_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_set_l_r_r_to_SET_L_R_R(void *start){
	set_l_r_r_t* lhs = (set_l_r_r_t*)start;
	SET_L_R_R_t* SET_L_R_R_0 = malloc(sizeof(SET_L_R_R_t));
	symbol_init(SET_L_R_R_0,"SET_L_R_R",1);

	push(SET_L_R_R_0);


	const char *pos_str[1] = {
"slt dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	SET_L_R_R_0->sym_str = malloc(the_size);
	strcpy(SET_L_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&SET_L_R_R_0->sym_str,SET_L_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&SET_L_R_R_0->sym_str,SET_L_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&SET_L_R_R_0->sym_str,SET_L_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(SET_L_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_nor_r_r_to_NOR_R_R(void *start){
	nor_r_r_t* lhs = (nor_r_r_t*)start;
	NOR_R_R_t* NOR_R_R_0 = malloc(sizeof(NOR_R_R_t));
	symbol_init(NOR_R_R_0,"NOR_R_R",1);

	push(NOR_R_R_0);


	const char *pos_str[1] = {
"nor dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	NOR_R_R_0->sym_str = malloc(the_size);
	strcpy(NOR_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&NOR_R_R_0->sym_str,NOR_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&NOR_R_R_0->sym_str,NOR_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&NOR_R_R_0->sym_str,NOR_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(NOR_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_xor_r_r_to_XOR_R_R(void *start){
	xor_r_r_t* lhs = (xor_r_r_t*)start;
	XOR_R_R_t* XOR_R_R_0 = malloc(sizeof(XOR_R_R_t));
	symbol_init(XOR_R_R_0,"XOR_R_R",1);

	push(XOR_R_R_0);


	const char *pos_str[1] = {
"xor dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	XOR_R_R_0->sym_str = malloc(the_size);
	strcpy(XOR_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&XOR_R_R_0->sym_str,XOR_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&XOR_R_R_0->sym_str,XOR_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&XOR_R_R_0->sym_str,XOR_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(XOR_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_i_to_OR_R_I(void *start){
	or_r_i_t* lhs = (or_r_i_t*)start;
	OR_R_I_t* OR_R_I_0 = malloc(sizeof(OR_R_I_t));
	symbol_init(OR_R_I_0,"OR_R_I",1);

	push(OR_R_I_0);


	const char *pos_str[1] = {
"ori dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	OR_R_I_0->sym_str = malloc(the_size);
	strcpy(OR_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&OR_R_I_0->sym_str,OR_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&OR_R_I_0->sym_str,OR_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&OR_R_I_0->sym_str,OR_R_I_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(OR_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_r_to_OR_R_R(void *start){
	or_r_r_t* lhs = (or_r_r_t*)start;
	OR_R_R_t* OR_R_R_0 = malloc(sizeof(OR_R_R_t));
	symbol_init(OR_R_R_0,"OR_R_R",1);

	push(OR_R_R_0);


	const char *pos_str[1] = {
"or dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	OR_R_R_0->sym_str = malloc(the_size);
	strcpy(OR_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&OR_R_R_0->sym_str,OR_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&OR_R_R_0->sym_str,OR_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&OR_R_R_0->sym_str,OR_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(OR_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_r_to_AND_R_R(void *start){
	and_r_r_t* lhs = (and_r_r_t*)start;
	AND_R_R_t* AND_R_R_0 = malloc(sizeof(AND_R_R_t));
	symbol_init(AND_R_R_0,"AND_R_R",1);

	push(AND_R_R_0);


	const char *pos_str[1] = {
"and dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	AND_R_R_0->sym_str = malloc(the_size);
	strcpy(AND_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&AND_R_R_0->sym_str,AND_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&AND_R_R_0->sym_str,AND_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&AND_R_R_0->sym_str,AND_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(AND_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_i_to_AND_R_I(void *start){
	and_r_i_t* lhs = (and_r_i_t*)start;
	AND_R_I_t* AND_R_I_0 = malloc(sizeof(AND_R_I_t));
	symbol_init(AND_R_I_0,"AND_R_I",1);

	push(AND_R_I_0);


	const char *pos_str[1] = {
"andi dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	AND_R_I_0->sym_str = malloc(the_size);
	strcpy(AND_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&AND_R_I_0->sym_str,AND_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&AND_R_I_0->sym_str,AND_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&AND_R_I_0->sym_str,AND_R_I_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(AND_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_move_l_to_MOVE_L(void *start){
	move_l_t* lhs = (move_l_t*)start;
	MOVE_L_t* MOVE_L_0 = malloc(sizeof(MOVE_L_t));
	symbol_init(MOVE_L_0,"MOVE_L",1);

	push(MOVE_L_0);


	const char *pos_str[1] = {
"mflo dest",
};
	int the_size = strlen(pos_str[0])+1;
	MOVE_L_0->sym_str = malloc(the_size);
	strcpy(MOVE_L_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&MOVE_L_0->sym_str,MOVE_L_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(MOVE_L_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_move_h_to_MOVE_H(void *start){
	move_h_t* lhs = (move_h_t*)start;
	MOVE_H_t* MOVE_H_0 = malloc(sizeof(MOVE_H_t));
	symbol_init(MOVE_H_0,"MOVE_H",1);

	push(MOVE_H_0);


	const char *pos_str[1] = {
"mfhi dest",
};
	int the_size = strlen(pos_str[0])+1;
	MOVE_H_0->sym_str = malloc(the_size);
	strcpy(MOVE_H_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&MOVE_H_0->sym_str,MOVE_H_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(MOVE_H_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_b_to_STORE_B(void *start){
	store_b_t* lhs = (store_b_t*)start;
	STORE_B_t* STORE_B_0 = malloc(sizeof(STORE_B_t));
	symbol_init(STORE_B_0,"STORE_B",1);

	push(STORE_B_0);


	const char *pos_str[1] = {
"sb source,offset(base)",
};
	int the_size = strlen(pos_str[0])+1;
	STORE_B_0->sym_str = malloc(the_size);
	strcpy(STORE_B_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&STORE_B_0->sym_str,STORE_B_0->sym_str,"source",to_str(lhs->source,"char*"),&the_size);
		replace_to_mem_safe(&STORE_B_0->sym_str,STORE_B_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		replace_to_mem_safe(&STORE_B_0->sym_str,STORE_B_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(STORE_B_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_h_to_STORE_H(void *start){
	store_h_t* lhs = (store_h_t*)start;
	STORE_H_t* STORE_H_0 = malloc(sizeof(STORE_H_t));
	symbol_init(STORE_H_0,"STORE_H",1);

	push(STORE_H_0);


	const char *pos_str[1] = {
"sh source,offset(base)",
};
	int the_size = strlen(pos_str[0])+1;
	STORE_H_0->sym_str = malloc(the_size);
	strcpy(STORE_H_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&STORE_H_0->sym_str,STORE_H_0->sym_str,"source",to_str(lhs->source,"char*"),&the_size);
		replace_to_mem_safe(&STORE_H_0->sym_str,STORE_H_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		replace_to_mem_safe(&STORE_H_0->sym_str,STORE_H_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(STORE_H_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_w_to_STORE_W(void *start){
	store_w_t* lhs = (store_w_t*)start;
	STORE_W_t* STORE_W_0 = malloc(sizeof(STORE_W_t));
	symbol_init(STORE_W_0,"STORE_W",1);

	push(STORE_W_0);


	const char *pos_str[1] = {
"sw source,offset(base)",
};
	int the_size = strlen(pos_str[0])+1;
	STORE_W_0->sym_str = malloc(the_size);
	strcpy(STORE_W_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&STORE_W_0->sym_str,STORE_W_0->sym_str,"source",to_str(lhs->source,"char*"),&the_size);
		replace_to_mem_safe(&STORE_W_0->sym_str,STORE_W_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		replace_to_mem_safe(&STORE_W_0->sym_str,STORE_W_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(STORE_W_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_d_to_STORE_D(void *start){
	store_d_t* lhs = (store_d_t*)start;
	STORE_D_t* STORE_D_0 = malloc(sizeof(STORE_D_t));
	symbol_init(STORE_D_0,"STORE_D",1);

	push(STORE_D_0);


	const char *pos_str[1] = {
"sd source,offset(base)",
};
	int the_size = strlen(pos_str[0])+1;
	STORE_D_0->sym_str = malloc(the_size);
	strcpy(STORE_D_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&STORE_D_0->sym_str,STORE_D_0->sym_str,"source",to_str(lhs->source,"char*"),&the_size);
		replace_to_mem_safe(&STORE_D_0->sym_str,STORE_D_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		replace_to_mem_safe(&STORE_D_0->sym_str,STORE_D_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(STORE_D_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_b_u_to_LOAD_B_U(void *start){
	load_b_u_t* lhs = (load_b_u_t*)start;
	LOAD_B_U_t* LOAD_B_U_0 = malloc(sizeof(LOAD_B_U_t));
	symbol_init(LOAD_B_U_0,"LOAD_B_U",1);

	push(LOAD_B_U_0);


	const char *pos_str[1] = {
"lbu dest,offset(base)",
};
	int the_size = strlen(pos_str[0])+1;
	LOAD_B_U_0->sym_str = malloc(the_size);
	strcpy(LOAD_B_U_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&LOAD_B_U_0->sym_str,LOAD_B_U_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&LOAD_B_U_0->sym_str,LOAD_B_U_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		replace_to_mem_safe(&LOAD_B_U_0->sym_str,LOAD_B_U_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(LOAD_B_U_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_b_to_LOAD_B(void *start){
	load_b_t* lhs = (load_b_t*)start;
	LOAD_B_t* LOAD_B_0 = malloc(sizeof(LOAD_B_t));
	symbol_init(LOAD_B_0,"LOAD_B",1);

	push(LOAD_B_0);


	const char *pos_str[1] = {
"lb dest,offset(base)",
};
	int the_size = strlen(pos_str[0])+1;
	LOAD_B_0->sym_str = malloc(the_size);
	strcpy(LOAD_B_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&LOAD_B_0->sym_str,LOAD_B_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&LOAD_B_0->sym_str,LOAD_B_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		replace_to_mem_safe(&LOAD_B_0->sym_str,LOAD_B_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(LOAD_B_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_h_to_LOAD_H(void *start){
	load_h_t* lhs = (load_h_t*)start;
	LOAD_H_t* LOAD_H_0 = malloc(sizeof(LOAD_H_t));
	symbol_init(LOAD_H_0,"LOAD_H",1);

	push(LOAD_H_0);


	const char *pos_str[1] = {
"lh dest,offset(base)",
};
	int the_size = strlen(pos_str[0])+1;
	LOAD_H_0->sym_str = malloc(the_size);
	strcpy(LOAD_H_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&LOAD_H_0->sym_str,LOAD_H_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&LOAD_H_0->sym_str,LOAD_H_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		replace_to_mem_safe(&LOAD_H_0->sym_str,LOAD_H_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(LOAD_H_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_w_to_LOAD_W(void *start){
	load_w_t* lhs = (load_w_t*)start;
	LOAD_W_t* LOAD_W_0 = malloc(sizeof(LOAD_W_t));
	symbol_init(LOAD_W_0,"LOAD_W",1);

	push(LOAD_W_0);


	const char *pos_str[1] = {
"lw dest,offset(base)",
};
	int the_size = strlen(pos_str[0])+1;
	LOAD_W_0->sym_str = malloc(the_size);
	strcpy(LOAD_W_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&LOAD_W_0->sym_str,LOAD_W_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&LOAD_W_0->sym_str,LOAD_W_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		replace_to_mem_safe(&LOAD_W_0->sym_str,LOAD_W_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(LOAD_W_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_dw_to_LOAD_DW(void *start){
	load_dw_t* lhs = (load_dw_t*)start;
	LOAD_DW_t* LOAD_DW_0 = malloc(sizeof(LOAD_DW_t));
	symbol_init(LOAD_DW_0,"LOAD_DW",1);

	push(LOAD_DW_0);


	const char *pos_str[1] = {
"ld dest,offset(base)",
};
	int the_size = strlen(pos_str[0])+1;
	LOAD_DW_0->sym_str = malloc(the_size);
	strcpy(LOAD_DW_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&LOAD_DW_0->sym_str,LOAD_DW_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&LOAD_DW_0->sym_str,LOAD_DW_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		replace_to_mem_safe(&LOAD_DW_0->sym_str,LOAD_DW_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(LOAD_DW_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_div_r_r_to_DIV_R_R(void *start){
	div_r_r_t* lhs = (div_r_r_t*)start;
	DIV_R_R_t* DIV_R_R_0 = malloc(sizeof(DIV_R_R_t));
	symbol_init(DIV_R_R_0,"DIV_R_R",1);

	push(DIV_R_R_0);


	const char *pos_str[1] = {
"div dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	DIV_R_R_0->sym_str = malloc(the_size);
	strcpy(DIV_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DIV_R_R_0->sym_str,DIV_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&DIV_R_R_0->sym_str,DIV_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&DIV_R_R_0->sym_str,DIV_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(DIV_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mul_r_r_to_MUL_R_R(void *start){
	mul_r_r_t* lhs = (mul_r_r_t*)start;
	MUL_R_R_t* MUL_R_R_0 = malloc(sizeof(MUL_R_R_t));
	symbol_init(MUL_R_R_0,"MUL_R_R",1);

	push(MUL_R_R_0);


	const char *pos_str[1] = {
"mul dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	MUL_R_R_0->sym_str = malloc(the_size);
	strcpy(MUL_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&MUL_R_R_0->sym_str,MUL_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&MUL_R_R_0->sym_str,MUL_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&MUL_R_R_0->sym_str,MUL_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(MUL_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_i_to_ADD_R_I(void *start){
	add_r_i_t* lhs = (add_r_i_t*)start;
	ADD_R_I_t* ADD_R_I_0 = malloc(sizeof(ADD_R_I_t));
	symbol_init(ADD_R_I_0,"ADD_R_I",1);

	push(ADD_R_I_0);


	const char *pos_str[1] = {
"addi dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	ADD_R_I_0->sym_str = malloc(the_size);
	strcpy(ADD_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&ADD_R_I_0->sym_str,ADD_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&ADD_R_I_0->sym_str,ADD_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&ADD_R_I_0->sym_str,ADD_R_I_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(ADD_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dadd_r_i_to_DADD_R_I(void *start){
	dadd_r_i_t* lhs = (dadd_r_i_t*)start;
	DADD_R_I_t* DADD_R_I_0 = malloc(sizeof(DADD_R_I_t));
	symbol_init(DADD_R_I_0,"DADD_R_I",1);

	push(DADD_R_I_0);


	const char *pos_str[1] = {
"daddi dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	DADD_R_I_0->sym_str = malloc(the_size);
	strcpy(DADD_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DADD_R_I_0->sym_str,DADD_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&DADD_R_I_0->sym_str,DADD_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&DADD_R_I_0->sym_str,DADD_R_I_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(DADD_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_sub_r_r_to_SUB_R_R(void *start){
	sub_r_r_t* lhs = (sub_r_r_t*)start;
	SUB_R_R_t* SUB_R_R_0 = malloc(sizeof(SUB_R_R_t));
	symbol_init(SUB_R_R_0,"SUB_R_R",1);

	push(SUB_R_R_0);


	const char *pos_str[1] = {
"sub dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	SUB_R_R_0->sym_str = malloc(the_size);
	strcpy(SUB_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&SUB_R_R_0->sym_str,SUB_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&SUB_R_R_0->sym_str,SUB_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&SUB_R_R_0->sym_str,SUB_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(SUB_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dadd_r_r_to_DADD_R_R(void *start){
	dadd_r_r_t* lhs = (dadd_r_r_t*)start;
	DADD_R_R_t* DADD_R_R_0 = malloc(sizeof(DADD_R_R_t));
	symbol_init(DADD_R_R_0,"DADD_R_R",1);

	push(DADD_R_R_0);


	const char *pos_str[1] = {
"dadd dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	DADD_R_R_0->sym_str = malloc(the_size);
	strcpy(DADD_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DADD_R_R_0->sym_str,DADD_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&DADD_R_R_0->sym_str,DADD_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&DADD_R_R_0->sym_str,DADD_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(DADD_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_r_to_ADD_R_R(void *start){
	add_r_r_t* lhs = (add_r_r_t*)start;
	ADD_R_R_t* ADD_R_R_0 = malloc(sizeof(ADD_R_R_t));
	symbol_init(ADD_R_R_0,"ADD_R_R",1);

	push(ADD_R_R_0);


	const char *pos_str[1] = {
"add dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	ADD_R_R_0->sym_str = malloc(the_size);
	strcpy(ADD_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&ADD_R_R_0->sym_str,ADD_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&ADD_R_R_0->sym_str,ADD_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&ADD_R_R_0->sym_str,ADD_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(ADD_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_code_label_to_CODE_LABEL(void *start){
	code_label_t* lhs = (code_label_t*)start;
	CODE_LABEL_t* CODE_LABEL_0 = malloc(sizeof(CODE_LABEL_t));
	symbol_init(CODE_LABEL_0,"CODE_LABEL",1);

	push(CODE_LABEL_0);


	const char *pos_str[1] = {
"text",
};
	int the_size = strlen(pos_str[0])+1;
	CODE_LABEL_0->sym_str = malloc(the_size);
	strcpy(CODE_LABEL_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&CODE_LABEL_0->sym_str,CODE_LABEL_0->sym_str,"text",to_str(lhs->text,"char*"),&the_size);
		
enqueue(CODE_LABEL_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_decl_to_DECL(void *start){
	decl_t* lhs = (decl_t*)start;
	DECL_t* DECL_0 = malloc(sizeof(DECL_t));
	symbol_init(DECL_0,"DECL",1);

	push(DECL_0);


	const char *pos_str[1] = {
"visibility name",
};
	int the_size = strlen(pos_str[0])+1;
	DECL_0->sym_str = malloc(the_size);
	strcpy(DECL_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DECL_0->sym_str,DECL_0->sym_str,"visibility",to_str(lhs->visibility,"char*"),&the_size);
		replace_to_mem_safe(&DECL_0->sym_str,DECL_0->sym_str,"name",to_str(lhs->name,"char*"),&the_size);
		
enqueue(DECL_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_data_to_DATA(void *start){
	data_t* lhs = (data_t*)start;
	DATA_t* DATA_0 = malloc(sizeof(DATA_t));
	symbol_init(DATA_0,"DATA",1);

	push(DATA_0);


	const char *pos_str[1] = {
"name type val",
};
	int the_size = strlen(pos_str[0])+1;
	DATA_0->sym_str = malloc(the_size);
	strcpy(DATA_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DATA_0->sym_str,DATA_0->sym_str,"name",to_str(lhs->name,"char*"),&the_size);
		replace_to_mem_safe(&DATA_0->sym_str,DATA_0->sym_str,"type",to_str(lhs->type,"char*"),&the_size);
		replace_to_mem_safe(&DATA_0->sym_str,DATA_0->sym_str,"val",to_str(lhs->val,"char*"),&the_size);
		
enqueue(DATA_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_move_to_MOVE(void *start){
	move_t* lhs = (move_t*)start;
	MOVE_t* MOVE_0 = malloc(sizeof(MOVE_t));
	symbol_init(MOVE_0,"MOVE",1);

	push(MOVE_0);


	const char *pos_str[1] = {
"move dest,src",
};
	int the_size = strlen(pos_str[0])+1;
	MOVE_0->sym_str = malloc(the_size);
	strcpy(MOVE_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&MOVE_0->sym_str,MOVE_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&MOVE_0->sym_str,MOVE_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		
enqueue(MOVE_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dsubu_r_r_to_DSUBU_R_R(void *start){
	dsubu_r_r_t* lhs = (dsubu_r_r_t*)start;
	DSUBU_R_R_t* DSUBU_R_R_0 = malloc(sizeof(DSUBU_R_R_t));
	symbol_init(DSUBU_R_R_0,"DSUBU_R_R",1);

	push(DSUBU_R_R_0);


	const char *pos_str[1] = {
"dsubu dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	DSUBU_R_R_0->sym_str = malloc(the_size);
	strcpy(DSUBU_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DSUBU_R_R_0->sym_str,DSUBU_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&DSUBU_R_R_0->sym_str,DSUBU_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&DSUBU_R_R_0->sym_str,DSUBU_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(DSUBU_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_daddu_r_r_to_DADDU_R_R(void *start){
	daddu_r_r_t* lhs = (daddu_r_r_t*)start;
	DADDU_R_R_t* DADDU_R_R_0 = malloc(sizeof(DADDU_R_R_t));
	symbol_init(DADDU_R_R_0,"DADDU_R_R",1);

	push(DADDU_R_R_0);


	const char *pos_str[1] = {
"daddu dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	DADDU_R_R_0->sym_str = malloc(the_size);
	strcpy(DADDU_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DADDU_R_R_0->sym_str,DADDU_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&DADDU_R_R_0->sym_str,DADDU_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&DADDU_R_R_0->sym_str,DADDU_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(DADDU_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_daddu_r_i_to_DADDU_R_I(void *start){
	daddu_r_i_t* lhs = (daddu_r_i_t*)start;
	DADDU_R_I_t* DADDU_R_I_0 = malloc(sizeof(DADDU_R_I_t));
	symbol_init(DADDU_R_I_0,"DADDU_R_I",1);

	push(DADDU_R_I_0);


	const char *pos_str[1] = {
"daddiu dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	DADDU_R_I_0->sym_str = malloc(the_size);
	strcpy(DADDU_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DADDU_R_I_0->sym_str,DADDU_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&DADDU_R_I_0->sym_str,DADDU_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&DADDU_R_I_0->sym_str,DADDU_R_I_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(DADDU_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_addu_r_r_to_ADDU_R_R(void *start){
	addu_r_r_t* lhs = (addu_r_r_t*)start;
	ADDU_R_R_t* ADDU_R_R_0 = malloc(sizeof(ADDU_R_R_t));
	symbol_init(ADDU_R_R_0,"ADDU_R_R",1);

	push(ADDU_R_R_0);


	const char *pos_str[1] = {
"addu dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	ADDU_R_R_0->sym_str = malloc(the_size);
	strcpy(ADDU_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&ADDU_R_R_0->sym_str,ADDU_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&ADDU_R_R_0->sym_str,ADDU_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&ADDU_R_R_0->sym_str,ADDU_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(ADDU_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_addu_r_i_to_ADDU_R_I(void *start){
	addu_r_i_t* lhs = (addu_r_i_t*)start;
	ADDU_R_I_t* ADDU_R_I_0 = malloc(sizeof(ADDU_R_I_t));
	symbol_init(ADDU_R_I_0,"ADDU_R_I",1);

	push(ADDU_R_I_0);


	const char *pos_str[1] = {
"addiu dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	ADDU_R_I_0->sym_str = malloc(the_size);
	strcpy(ADDU_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&ADDU_R_I_0->sym_str,ADDU_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&ADDU_R_I_0->sym_str,ADDU_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&ADDU_R_I_0->sym_str,ADDU_R_I_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(ADDU_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_seh_to_SEH(void *start){
	seh_t* lhs = (seh_t*)start;
	SEH_t* SEH_0 = malloc(sizeof(SEH_t));
	symbol_init(SEH_0,"SEH",1);

	push(SEH_0);


	const char *pos_str[1] = {
"seh dest,reg1",
};
	int the_size = strlen(pos_str[0])+1;
	SEH_0->sym_str = malloc(the_size);
	strcpy(SEH_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&SEH_0->sym_str,SEH_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&SEH_0->sym_str,SEH_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(SEH_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_nop_to_NOP(void *start){
	nop_t* lhs = (nop_t*)start;
	NOP_t* NOP_0 = malloc(sizeof(NOP_t));
	symbol_init(NOP_0,"NOP",1);

	push(NOP_0);


	const char *pos_str[1] = {
"nop",
};
	int the_size = strlen(pos_str[0])+1;
	NOP_0->sym_str = malloc(the_size);
	strcpy(NOP_0->sym_str, pos_str[0]);
	
enqueue(NOP_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dsll_to_DSLL(void *start){
	dsll_t* lhs = (dsll_t*)start;
	DSLL_t* DSLL_0 = malloc(sizeof(DSLL_t));
	symbol_init(DSLL_0,"DSLL",1);

	push(DSLL_0);


	const char *pos_str[1] = {
"dsll dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	DSLL_0->sym_str = malloc(the_size);
	strcpy(DSLL_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DSLL_0->sym_str,DSLL_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&DSLL_0->sym_str,DSLL_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&DSLL_0->sym_str,DSLL_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(DSLL_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_lui_r_m_to_LUI_R_M(void *start){
	lui_r_m_t* lhs = (lui_r_m_t*)start;
	LUI_R_M_t* LUI_R_M_0 = malloc(sizeof(LUI_R_M_t));
	symbol_init(LUI_R_M_0,"LUI_R_M",1);

	push(LUI_R_M_0);


	const char *pos_str[1] = {
"lui dest,dir(lab)",
};
	int the_size = strlen(pos_str[0])+1;
	LUI_R_M_0->sym_str = malloc(the_size);
	strcpy(LUI_R_M_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&LUI_R_M_0->sym_str,LUI_R_M_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&LUI_R_M_0->sym_str,LUI_R_M_0->sym_str,"dir",to_str(lhs->dir,"char*"),&the_size);
		replace_to_mem_safe(&LUI_R_M_0->sym_str,LUI_R_M_0->sym_str,"lab",to_str(lhs->lab,"char*"),&the_size);
		
enqueue(LUI_R_M_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_daddiu_r_m_to_DADDIU_R_M(void *start){
	daddiu_r_m_t* lhs = (daddiu_r_m_t*)start;
	DADDIU_R_M_t* DADDIU_R_M_0 = malloc(sizeof(DADDIU_R_M_t));
	symbol_init(DADDIU_R_M_0,"DADDIU_R_M",1);

	push(DADDIU_R_M_0);


	const char *pos_str[1] = {
"daddiu dest,reg1,dir(lab)",
};
	int the_size = strlen(pos_str[0])+1;
	DADDIU_R_M_0->sym_str = malloc(the_size);
	strcpy(DADDIU_R_M_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DADDIU_R_M_0->sym_str,DADDIU_R_M_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&DADDIU_R_M_0->sym_str,DADDIU_R_M_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&DADDIU_R_M_0->sym_str,DADDIU_R_M_0->sym_str,"dir",to_str(lhs->dir,"char*"),&the_size);
		replace_to_mem_safe(&DADDIU_R_M_0->sym_str,DADDIU_R_M_0->sym_str,"lab",to_str(lhs->lab,"char*"),&the_size);
		
enqueue(DADDIU_R_M_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_balc_to_BALC(void *start){
	balc_t* lhs = (balc_t*)start;
	BALC_t* BALC_0 = malloc(sizeof(BALC_t));
	symbol_init(BALC_0,"BALC",1);

	push(BALC_0);


	const char *pos_str[1] = {
"balc target",
};
	int the_size = strlen(pos_str[0])+1;
	BALC_0->sym_str = malloc(the_size);
	strcpy(BALC_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BALC_0->sym_str,BALC_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BALC_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_i_to_LOAD_I(void *start){
	load_i_t* lhs = (load_i_t*)start;
	LOAD_I_t* LOAD_I_0 = malloc(sizeof(LOAD_I_t));
	symbol_init(LOAD_I_0,"LOAD_I",1);

	push(LOAD_I_0);


	const char *pos_str[1] = {
"li dest,imm",
};
	int the_size = strlen(pos_str[0])+1;
	LOAD_I_0->sym_str = malloc(the_size);
	strcpy(LOAD_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&LOAD_I_0->sym_str,LOAD_I_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&LOAD_I_0->sym_str,LOAD_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(LOAD_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_nez_c_to_BRANCH_NEZ_C(void *start){
	branch_nez_c_t* lhs = (branch_nez_c_t*)start;
	BRANCH_NEZ_C_t* BRANCH_NEZ_C_0 = malloc(sizeof(BRANCH_NEZ_C_t));
	symbol_init(BRANCH_NEZ_C_0,"BRANCH_NEZ_C",1);

	push(BRANCH_NEZ_C_0);


	const char *pos_str[1] = {
"bnezc reg1,target",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_NEZ_C_0->sym_str = malloc(the_size);
	strcpy(BRANCH_NEZ_C_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_NEZ_C_0->sym_str,BRANCH_NEZ_C_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_NEZ_C_0->sym_str,BRANCH_NEZ_C_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BRANCH_NEZ_C_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_c_to_BRANCH_COM(void *start){
	branch_c_t* lhs = (branch_c_t*)start;
	BRANCH_COM_t* BRANCH_COM_0 = malloc(sizeof(BRANCH_COM_t));
	symbol_init(BRANCH_COM_0,"BRANCH_COM",1);

	push(BRANCH_COM_0);


	const char *pos_str[1] = {
"bc target",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_COM_0->sym_str = malloc(the_size);
	strcpy(BRANCH_COM_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_COM_0->sym_str,BRANCH_COM_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BRANCH_COM_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_subu_r_r_to_SUBU_R_R(void *start){
	subu_r_r_t* lhs = (subu_r_r_t*)start;
	SUBU_R_R_t* SUBU_R_R_0 = malloc(sizeof(SUBU_R_R_t));
	symbol_init(SUBU_R_R_0,"SUBU_R_R",1);

	push(SUBU_R_R_0);


	const char *pos_str[1] = {
"subu dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	SUBU_R_R_0->sym_str = malloc(the_size);
	strcpy(SUBU_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&SUBU_R_R_0->sym_str,SUBU_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&SUBU_R_R_0->sym_str,SUBU_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&SUBU_R_R_0->sym_str,SUBU_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(SUBU_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_neq_c_to_BRANCH_NEQ_C(void *start){
	branch_neq_c_t* lhs = (branch_neq_c_t*)start;
	BRANCH_NEQ_C_t* BRANCH_NEQ_C_0 = malloc(sizeof(BRANCH_NEQ_C_t));
	symbol_init(BRANCH_NEQ_C_0,"BRANCH_NEQ_C",1);

	push(BRANCH_NEQ_C_0);


	const char *pos_str[1] = {
"bnec reg1,reg2,target",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_NEQ_C_0->sym_str = malloc(the_size);
	strcpy(BRANCH_NEQ_C_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_NEQ_C_0->sym_str,BRANCH_NEQ_C_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_NEQ_C_0->sym_str,BRANCH_NEQ_C_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_NEQ_C_0->sym_str,BRANCH_NEQ_C_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BRANCH_NEQ_C_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_gtz_c_to_BRANCH_GTZ_C(void *start){
	branch_gtz_c_t* lhs = (branch_gtz_c_t*)start;
	BRANCH_GTZ_C_t* BRANCH_GTZ_C_0 = malloc(sizeof(BRANCH_GTZ_C_t));
	symbol_init(BRANCH_GTZ_C_0,"BRANCH_GTZ_C",1);

	push(BRANCH_GTZ_C_0);


	const char *pos_str[1] = {
"bgtzc reg1,target",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_GTZ_C_0->sym_str = malloc(the_size);
	strcpy(BRANCH_GTZ_C_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_GTZ_C_0->sym_str,BRANCH_GTZ_C_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_GTZ_C_0->sym_str,BRANCH_GTZ_C_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BRANCH_GTZ_C_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_geu_c_to_BRANCH_GEU_C(void *start){
	branch_geu_c_t* lhs = (branch_geu_c_t*)start;
	BRANCH_GEU_C_t* BRANCH_GEU_C_0 = malloc(sizeof(BRANCH_GEU_C_t));
	symbol_init(BRANCH_GEU_C_0,"BRANCH_GEU_C",1);

	push(BRANCH_GEU_C_0);


	const char *pos_str[1] = {
"bgeuc reg1,reg2,target",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_GEU_C_0->sym_str = malloc(the_size);
	strcpy(BRANCH_GEU_C_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_GEU_C_0->sym_str,BRANCH_GEU_C_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_GEU_C_0->sym_str,BRANCH_GEU_C_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_GEU_C_0->sym_str,BRANCH_GEU_C_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BRANCH_GEU_C_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_ge_c_to_BRANCH_GE_C(void *start){
	branch_ge_c_t* lhs = (branch_ge_c_t*)start;
	BRANCH_GE_C_t* BRANCH_GE_C_0 = malloc(sizeof(BRANCH_GE_C_t));
	symbol_init(BRANCH_GE_C_0,"BRANCH_GE_C",1);

	push(BRANCH_GE_C_0);


	const char *pos_str[1] = {
"bgec reg1,reg2,target",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_GE_C_0->sym_str = malloc(the_size);
	strcpy(BRANCH_GE_C_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_GE_C_0->sym_str,BRANCH_GE_C_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_GE_C_0->sym_str,BRANCH_GE_C_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_GE_C_0->sym_str,BRANCH_GE_C_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BRANCH_GE_C_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_ra_to_SHIFT_R_ARIT(void *start){
	shift_ra_t* lhs = (shift_ra_t*)start;
	SHIFT_R_ARIT_t* SHIFT_R_ARIT_0 = malloc(sizeof(SHIFT_R_ARIT_t));
	symbol_init(SHIFT_R_ARIT_0,"SHIFT_R_ARIT",1);

	push(SHIFT_R_ARIT_0);


	const char *pos_str[1] = {
"sra dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	SHIFT_R_ARIT_0->sym_str = malloc(the_size);
	strcpy(SHIFT_R_ARIT_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&SHIFT_R_ARIT_0->sym_str,SHIFT_R_ARIT_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&SHIFT_R_ARIT_0->sym_str,SHIFT_R_ARIT_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&SHIFT_R_ARIT_0->sym_str,SHIFT_R_ARIT_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(SHIFT_R_ARIT_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_ltu_c_to_BRANCH_LTU_C(void *start){
	branch_ltu_c_t* lhs = (branch_ltu_c_t*)start;
	BRANCH_LTU_C_t* BRANCH_LTU_C_0 = malloc(sizeof(BRANCH_LTU_C_t));
	symbol_init(BRANCH_LTU_C_0,"BRANCH_LTU_C",1);

	push(BRANCH_LTU_C_0);


	const char *pos_str[1] = {
"bltuc reg1,reg2,target",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_LTU_C_0->sym_str = malloc(the_size);
	strcpy(BRANCH_LTU_C_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_LTU_C_0->sym_str,BRANCH_LTU_C_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_LTU_C_0->sym_str,BRANCH_LTU_C_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_LTU_C_0->sym_str,BRANCH_LTU_C_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BRANCH_LTU_C_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_lt_c_to_BRANCH_LT_C(void *start){
	branch_lt_c_t* lhs = (branch_lt_c_t*)start;
	BRANCH_LT_C_t* BRANCH_LT_C_0 = malloc(sizeof(BRANCH_LT_C_t));
	symbol_init(BRANCH_LT_C_0,"BRANCH_LT_C",1);

	push(BRANCH_LT_C_0);


	const char *pos_str[1] = {
"bltc reg1,reg2,target",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_LT_C_0->sym_str = malloc(the_size);
	strcpy(BRANCH_LT_C_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_LT_C_0->sym_str,BRANCH_LT_C_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_LT_C_0->sym_str,BRANCH_LT_C_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_LT_C_0->sym_str,BRANCH_LT_C_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BRANCH_LT_C_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_eq_c_to_BRANCH_EQ_C(void *start){
	branch_eq_c_t* lhs = (branch_eq_c_t*)start;
	BRANCH_EQ_C_t* BRANCH_EQ_C_0 = malloc(sizeof(BRANCH_EQ_C_t));
	symbol_init(BRANCH_EQ_C_0,"BRANCH_EQ_C",1);

	push(BRANCH_EQ_C_0);


	const char *pos_str[1] = {
"beqc reg1,reg2,target",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_EQ_C_0->sym_str = malloc(the_size);
	strcpy(BRANCH_EQ_C_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_EQ_C_0->sym_str,BRANCH_EQ_C_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_EQ_C_0->sym_str,BRANCH_EQ_C_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_EQ_C_0->sym_str,BRANCH_EQ_C_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BRANCH_EQ_C_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_eqz_c_to_BRANCH_EQZ_C(void *start){
	branch_eqz_c_t* lhs = (branch_eqz_c_t*)start;
	BRANCH_EQZ_C_t* BRANCH_EQZ_C_0 = malloc(sizeof(BRANCH_EQZ_C_t));
	symbol_init(BRANCH_EQZ_C_0,"BRANCH_EQZ_C",1);

	push(BRANCH_EQZ_C_0);


	const char *pos_str[1] = {
"beqzc reg1,target",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_EQZ_C_0->sym_str = malloc(the_size);
	strcpy(BRANCH_EQZ_C_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_EQZ_C_0->sym_str,BRANCH_EQZ_C_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_EQZ_C_0->sym_str,BRANCH_EQZ_C_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BRANCH_EQZ_C_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dsrl_to_DSRL(void *start){
	dsrl_t* lhs = (dsrl_t*)start;
	DSRL_t* DSRL_0 = malloc(sizeof(DSRL_t));
	symbol_init(DSRL_0,"DSRL",1);

	push(DSRL_0);


	const char *pos_str[1] = {
"dsrl dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	DSRL_0->sym_str = malloc(the_size);
	strcpy(DSRL_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DSRL_0->sym_str,DSRL_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&DSRL_0->sym_str,DSRL_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&DSRL_0->sym_str,DSRL_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(DSRL_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_ltz_c_to_BRANCH_LTZ_C(void *start){
	branch_ltz_c_t* lhs = (branch_ltz_c_t*)start;
	BRANCH_LTZ_C_t* BRANCH_LTZ_C_0 = malloc(sizeof(BRANCH_LTZ_C_t));
	symbol_init(BRANCH_LTZ_C_0,"BRANCH_LTZ_C",1);

	push(BRANCH_LTZ_C_0);


	const char *pos_str[1] = {
"bltzc reg1,target",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_LTZ_C_0->sym_str = malloc(the_size);
	strcpy(BRANCH_LTZ_C_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_LTZ_C_0->sym_str,BRANCH_LTZ_C_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_LTZ_C_0->sym_str,BRANCH_LTZ_C_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BRANCH_LTZ_C_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_jump_r_c_to_JUMP_R_C(void *start){
	jump_r_c_t* lhs = (jump_r_c_t*)start;
	JUMP_R_C_t* JUMP_R_C_0 = malloc(sizeof(JUMP_R_C_t));
	symbol_init(JUMP_R_C_0,"JUMP_R_C",1);

	push(JUMP_R_C_0);


	const char *pos_str[1] = {
"jrc reg1",
};
	int the_size = strlen(pos_str[0])+1;
	JUMP_R_C_0->sym_str = malloc(the_size);
	strcpy(JUMP_R_C_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&JUMP_R_C_0->sym_str,JUMP_R_C_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(JUMP_R_C_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_gez_c_to_BRANCH_GEZ_C(void *start){
	branch_gez_c_t* lhs = (branch_gez_c_t*)start;
	BRANCH_GEZ_C_t* BRANCH_GEZ_C_0 = malloc(sizeof(BRANCH_GEZ_C_t));
	symbol_init(BRANCH_GEZ_C_0,"BRANCH_GEZ_C",1);

	push(BRANCH_GEZ_C_0);


	const char *pos_str[1] = {
"bgezc reg1,target",
};
	int the_size = strlen(pos_str[0])+1;
	BRANCH_GEZ_C_0->sym_str = malloc(the_size);
	strcpy(BRANCH_GEZ_C_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BRANCH_GEZ_C_0->sym_str,BRANCH_GEZ_C_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BRANCH_GEZ_C_0->sym_str,BRANCH_GEZ_C_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BRANCH_GEZ_C_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_teq_to_TEQ(void *start){
	teq_t* lhs = (teq_t*)start;
	TEQ_t* TEQ_0 = malloc(sizeof(TEQ_t));
	symbol_init(TEQ_0,"TEQ",1);

	push(TEQ_0);


	const char *pos_str[1] = {
"teq reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	TEQ_0->sym_str = malloc(the_size);
	strcpy(TEQ_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&TEQ_0->sym_str,TEQ_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&TEQ_0->sym_str,TEQ_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(TEQ_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_muh_r_r_to_MUH_R_R(void *start){
	muh_r_r_t* lhs = (muh_r_r_t*)start;
	MUH_R_R_t* MUH_R_R_0 = malloc(sizeof(MUH_R_R_t));
	symbol_init(MUH_R_R_0,"MUH_R_R",1);

	push(MUH_R_R_0);


	const char *pos_str[1] = {
"muh dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	MUH_R_R_0->sym_str = malloc(the_size);
	strcpy(MUH_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&MUH_R_R_0->sym_str,MUH_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&MUH_R_R_0->sym_str,MUH_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&MUH_R_R_0->sym_str,MUH_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(MUH_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_i_hex_to_AND_R_I_HEX(void *start){
	and_r_i_hex_t* lhs = (and_r_i_hex_t*)start;
	AND_R_I_HEX_t* AND_R_I_HEX_0 = malloc(sizeof(AND_R_I_HEX_t));
	symbol_init(AND_R_I_HEX_0,"AND_R_I_HEX",1);

	push(AND_R_I_HEX_0);


	const char *pos_str[1] = {
"andi dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	AND_R_I_HEX_0->sym_str = malloc(the_size);
	strcpy(AND_R_I_HEX_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&AND_R_I_HEX_0->sym_str,AND_R_I_HEX_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&AND_R_I_HEX_0->sym_str,AND_R_I_HEX_0->sym_str,"imm",to_str(&lhs->imm,"long"),&the_size);
		replace_to_mem_safe(&AND_R_I_HEX_0->sym_str,AND_R_I_HEX_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(AND_R_I_HEX_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_i_hex_to_OR_R_I_HEX(void *start){
	or_r_i_hex_t* lhs = (or_r_i_hex_t*)start;
	OR_R_I_HEX_t* OR_R_I_HEX_0 = malloc(sizeof(OR_R_I_HEX_t));
	symbol_init(OR_R_I_HEX_0,"OR_R_I_HEX",1);

	push(OR_R_I_HEX_0);


	const char *pos_str[1] = {
"ori dest,reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	OR_R_I_HEX_0->sym_str = malloc(the_size);
	strcpy(OR_R_I_HEX_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&OR_R_I_HEX_0->sym_str,OR_R_I_HEX_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&OR_R_I_HEX_0->sym_str,OR_R_I_HEX_0->sym_str,"imm",to_str(&lhs->imm,"long"),&the_size);
		replace_to_mem_safe(&OR_R_I_HEX_0->sym_str,OR_R_I_HEX_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(OR_R_I_HEX_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_dw_lab_to_LOAD_DW_LAB(void *start){
	load_dw_lab_t* lhs = (load_dw_lab_t*)start;
	LOAD_DW_LAB_t* LOAD_DW_LAB_0 = malloc(sizeof(LOAD_DW_LAB_t));
	symbol_init(LOAD_DW_LAB_0,"LOAD_DW_LAB",1);

	push(LOAD_DW_LAB_0);


	const char *pos_str[1] = {
"ld dest,dir(lab)(base)",
};
	int the_size = strlen(pos_str[0])+1;
	LOAD_DW_LAB_0->sym_str = malloc(the_size);
	strcpy(LOAD_DW_LAB_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&LOAD_DW_LAB_0->sym_str,LOAD_DW_LAB_0->sym_str,"dir",to_str(lhs->dir,"char*"),&the_size);
		replace_to_mem_safe(&LOAD_DW_LAB_0->sym_str,LOAD_DW_LAB_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&LOAD_DW_LAB_0->sym_str,LOAD_DW_LAB_0->sym_str,"lab",to_str(lhs->lab,"char*"),&the_size);
		replace_to_mem_safe(&LOAD_DW_LAB_0->sym_str,LOAD_DW_LAB_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(LOAD_DW_LAB_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_w_lab_to_LOAD_W_LAB(void *start){
	load_w_lab_t* lhs = (load_w_lab_t*)start;
	LOAD_W_LAB_t* LOAD_W_LAB_0 = malloc(sizeof(LOAD_W_LAB_t));
	symbol_init(LOAD_W_LAB_0,"LOAD_W_LAB",1);

	push(LOAD_W_LAB_0);


	const char *pos_str[1] = {
"lw dest,dir(lab)(base)",
};
	int the_size = strlen(pos_str[0])+1;
	LOAD_W_LAB_0->sym_str = malloc(the_size);
	strcpy(LOAD_W_LAB_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&LOAD_W_LAB_0->sym_str,LOAD_W_LAB_0->sym_str,"dir",to_str(lhs->dir,"char*"),&the_size);
		replace_to_mem_safe(&LOAD_W_LAB_0->sym_str,LOAD_W_LAB_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&LOAD_W_LAB_0->sym_str,LOAD_W_LAB_0->sym_str,"lab",to_str(lhs->lab,"char*"),&the_size);
		replace_to_mem_safe(&LOAD_W_LAB_0->sym_str,LOAD_W_LAB_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(LOAD_W_LAB_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_d_lab_to_STORE_D_LAB(void *start){
	store_d_lab_t* lhs = (store_d_lab_t*)start;
	STORE_D_LAB_t* STORE_D_LAB_0 = malloc(sizeof(STORE_D_LAB_t));
	symbol_init(STORE_D_LAB_0,"STORE_D_LAB",1);

	push(STORE_D_LAB_0);


	const char *pos_str[1] = {
"sd src,dir(lab)(base)",
};
	int the_size = strlen(pos_str[0])+1;
	STORE_D_LAB_0->sym_str = malloc(the_size);
	strcpy(STORE_D_LAB_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&STORE_D_LAB_0->sym_str,STORE_D_LAB_0->sym_str,"dir",to_str(lhs->dir,"char*"),&the_size);
		replace_to_mem_safe(&STORE_D_LAB_0->sym_str,STORE_D_LAB_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		replace_to_mem_safe(&STORE_D_LAB_0->sym_str,STORE_D_LAB_0->sym_str,"lab",to_str(lhs->lab,"char*"),&the_size);
		replace_to_mem_safe(&STORE_D_LAB_0->sym_str,STORE_D_LAB_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(STORE_D_LAB_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_w_lab_to_STORE_W_LAB(void *start){
	store_w_lab_t* lhs = (store_w_lab_t*)start;
	STORE_W_LAB_t* STORE_W_LAB_0 = malloc(sizeof(STORE_W_LAB_t));
	symbol_init(STORE_W_LAB_0,"STORE_W_LAB",1);

	push(STORE_W_LAB_0);


	const char *pos_str[1] = {
"sw src,dir(lab)(base)",
};
	int the_size = strlen(pos_str[0])+1;
	STORE_W_LAB_0->sym_str = malloc(the_size);
	strcpy(STORE_W_LAB_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&STORE_W_LAB_0->sym_str,STORE_W_LAB_0->sym_str,"dir",to_str(lhs->dir,"char*"),&the_size);
		replace_to_mem_safe(&STORE_W_LAB_0->sym_str,STORE_W_LAB_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		replace_to_mem_safe(&STORE_W_LAB_0->sym_str,STORE_W_LAB_0->sym_str,"lab",to_str(lhs->lab,"char*"),&the_size);
		replace_to_mem_safe(&STORE_W_LAB_0->sym_str,STORE_W_LAB_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(STORE_W_LAB_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_epilogue_to_vm_store_mem_vm_store_mem(void *start){
	vm_epilogue_t* lhs = (vm_epilogue_t*)start;
	vm_store_mem_t* vm_store_mem_0 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_0,"vm_store_mem",0);
vm_store_mem_t* vm_store_mem_1 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_1,"vm_store_mem",0);


        vm_store_mem_0->reg1 = lhs->reg1;
        vm_store_mem_1->reg1 = lhs->reg2;


	push(vm_store_mem_1);
	push(vm_store_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_prologue_to_vm_load_mem_vm_load_mem(void *start){
	vm_prologue_t* lhs = (vm_prologue_t*)start;
	vm_load_mem_t* vm_load_mem_0 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_0,"vm_load_mem",0);
vm_load_mem_t* vm_load_mem_1 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_1,"vm_load_mem",0);


        vm_load_mem_0->reg1 = lhs->reg1;
        vm_load_mem_1->reg1 = lhs->reg2;


	push(vm_load_mem_1);
	push(vm_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_mov_to_nop(void *start){
	vm_mov_t* lhs = (vm_mov_t*)start;
	nop_t* nop_0 = malloc(sizeof(nop_t));
	symbol_init(nop_0,"nop",0);

        if (lhs->reg1 != lhs->reg2){
                push(start);
	free(nop_0);
	bitmap_set(rule_bitmap,78);
return;

        }

	push(nop_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_mov_to_vm_xor_r_r_vm_add_r_r(void *start){
	vm_mov_t* lhs = (vm_mov_t*)start;
	vm_xor_r_r_t* vm_xor_r_r_0 = malloc(sizeof(vm_xor_r_r_t));
	symbol_init(vm_xor_r_r_0,"vm_xor_r_r",0);
vm_add_r_r_t* vm_add_r_r_1 = malloc(sizeof(vm_add_r_r_t));
	symbol_init(vm_add_r_r_1,"vm_add_r_r",0);

        if (lhs->reg1 == lhs->reg2){
                push(start);
	free(vm_xor_r_r_0);
free(vm_add_r_r_1);
	bitmap_set(rule_bitmap,79);
return;

        }
        vm_xor_r_r_0->reg1 = lhs->reg1;
        vm_xor_r_r_0->reg2 = lhs->reg1;
        vm_add_r_r_1->reg1 = lhs->reg1;
        vm_add_r_r_1->reg2 = lhs->reg2;

	push(vm_add_r_r_1);
	push(vm_xor_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_store_mem_to_vm_xor_r_r_vm_add_r_i_vm_store_r_r(void *start){
	vm_store_mem_t* lhs = (vm_store_mem_t*)start;
	vm_xor_r_r_t* vm_xor_r_r_0 = malloc(sizeof(vm_xor_r_r_t));
	symbol_init(vm_xor_r_r_0,"vm_xor_r_r",0);
vm_add_r_i_t* vm_add_r_i_1 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_1,"vm_add_r_i",0);
vm_store_r_r_t* vm_store_r_r_2 = malloc(sizeof(vm_store_r_r_t));
	symbol_init(vm_store_r_r_2,"vm_store_r_r",0);

        if (!is_mem_reg(lhs->reg1)){
                push(start);
	free(vm_xor_r_r_0);
free(vm_add_r_i_1);
free(vm_store_r_r_2);
	bitmap_set(rule_bitmap,80);
return;

        }
        vm_xor_r_r_0->reg1 = vreg_values[16];
        vm_xor_r_r_0->reg2 = vreg_values[16];
        vm_add_r_i_1->reg1 = vreg_values[16];
        vm_add_r_i_1->imm = get_offset(lhs->reg1);
        vm_store_r_r_2->reg2 = vreg_values[16];
        vm_store_r_r_2->reg1 = get_mem_reg(lhs->reg1);

	push(vm_store_r_r_2);
	push(vm_add_r_i_1);
	push(vm_xor_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_load_mem_to_vm_xor_r_r_vm_add_r_i_vm_load_r_r(void *start){
	vm_load_mem_t* lhs = (vm_load_mem_t*)start;
	vm_xor_r_r_t* vm_xor_r_r_0 = malloc(sizeof(vm_xor_r_r_t));
	symbol_init(vm_xor_r_r_0,"vm_xor_r_r",0);
vm_add_r_i_t* vm_add_r_i_1 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_1,"vm_add_r_i",0);
vm_load_r_r_t* vm_load_r_r_2 = malloc(sizeof(vm_load_r_r_t));
	symbol_init(vm_load_r_r_2,"vm_load_r_r",0);

        if (!is_mem_reg(lhs->reg1)){
                push(start);
	free(vm_xor_r_r_0);
free(vm_add_r_i_1);
free(vm_load_r_r_2);
	bitmap_set(rule_bitmap,81);
return;

        }
        vm_xor_r_r_0->reg1 = get_mem_reg(lhs->reg1);
        vm_xor_r_r_0->reg2 = get_mem_reg(lhs->reg1);
        vm_add_r_i_1->reg1 = get_mem_reg(lhs->reg1);
        vm_add_r_i_1->imm = get_offset(lhs->reg1);
        vm_load_r_r_2->reg1 = get_mem_reg(lhs->reg1);
        vm_load_r_r_2->reg2 = vm_xor_r_r_0->reg1;

	push(vm_load_r_r_2);
	push(vm_add_r_i_1);
	push(vm_xor_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_v_arit_to_VM_V_ARIT(void *start){
	vm_v_arit_t* lhs = (vm_v_arit_t*)start;
	VM_V_ARIT_t* VM_V_ARIT_0 = malloc(sizeof(VM_V_ARIT_t));
	symbol_init(VM_V_ARIT_0,"VM_V_ARIT",1);

	push(VM_V_ARIT_0);


	const char *pos_str[1] = {
"v_arit imm,reg1",
};
	int the_size = strlen(pos_str[0])+1;
	VM_V_ARIT_0->sym_str = malloc(the_size);
	strcpy(VM_V_ARIT_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_V_ARIT_0->sym_str,VM_V_ARIT_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&VM_V_ARIT_0->sym_str,VM_V_ARIT_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(VM_V_ARIT_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_lea_r_m_to_VM_LEA_R_M(void *start){
	vm_lea_r_m_t* lhs = (vm_lea_r_m_t*)start;
	VM_LEA_R_M_t* VM_LEA_R_M_0 = malloc(sizeof(VM_LEA_R_M_t));
	symbol_init(VM_LEA_R_M_0,"VM_LEA_R_M",1);

	push(VM_LEA_R_M_0);


	const char *pos_str[1] = {
"lea_r_m reg1,target",
};
	int the_size = strlen(pos_str[0])+1;
	VM_LEA_R_M_0->sym_str = malloc(the_size);
	strcpy(VM_LEA_R_M_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_LEA_R_M_0->sym_str,VM_LEA_R_M_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_LEA_R_M_0->sym_str,VM_LEA_R_M_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(VM_LEA_R_M_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_pop_r_to_VM_POP_R(void *start){
	vm_pop_r_t* lhs = (vm_pop_r_t*)start;
	VM_POP_R_t* VM_POP_R_0 = malloc(sizeof(VM_POP_R_t));
	symbol_init(VM_POP_R_0,"VM_POP_R",1);

	push(VM_POP_R_0);


	const char *pos_str[1] = {
"pop_r reg1",
};
	int the_size = strlen(pos_str[0])+1;
	VM_POP_R_0->sym_str = malloc(the_size);
	strcpy(VM_POP_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_POP_R_0->sym_str,VM_POP_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(VM_POP_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_push_ret_to_VM_PUSH_RET(void *start){
	vm_push_ret_t* lhs = (vm_push_ret_t*)start;
	VM_PUSH_RET_t* VM_PUSH_RET_0 = malloc(sizeof(VM_PUSH_RET_t));
	symbol_init(VM_PUSH_RET_0,"VM_PUSH_RET",1);

	push(VM_PUSH_RET_0);


	const char *pos_str[1] = {
"push_ret",
};
	int the_size = strlen(pos_str[0])+1;
	VM_PUSH_RET_0->sym_str = malloc(the_size);
	strcpy(VM_PUSH_RET_0->sym_str, pos_str[0]);
	
enqueue(VM_PUSH_RET_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_push_r_to_VM_PUSH_R(void *start){
	vm_push_r_t* lhs = (vm_push_r_t*)start;
	VM_PUSH_R_t* VM_PUSH_R_0 = malloc(sizeof(VM_PUSH_R_t));
	symbol_init(VM_PUSH_R_0,"VM_PUSH_R",1);

	push(VM_PUSH_R_0);


	const char *pos_str[1] = {
"push_r reg1",
};
	int the_size = strlen(pos_str[0])+1;
	VM_PUSH_R_0->sym_str = malloc(the_size);
	strcpy(VM_PUSH_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_PUSH_R_0->sym_str,VM_PUSH_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(VM_PUSH_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_ret_to_VM_RET(void *start){
	vm_ret_t* lhs = (vm_ret_t*)start;
	VM_RET_t* VM_RET_0 = malloc(sizeof(VM_RET_t));
	symbol_init(VM_RET_0,"VM_RET",1);

	push(VM_RET_0);


	const char *pos_str[1] = {
"ret",
};
	int the_size = strlen(pos_str[0])+1;
	VM_RET_0->sym_str = malloc(the_size);
	strcpy(VM_RET_0->sym_str, pos_str[0]);
	
enqueue(VM_RET_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_call_to_VM_CALL(void *start){
	vm_call_t* lhs = (vm_call_t*)start;
	VM_CALL_t* VM_CALL_0 = malloc(sizeof(VM_CALL_t));
	symbol_init(VM_CALL_0,"VM_CALL",1);

	push(VM_CALL_0);


	const char *pos_str[1] = {
"v_jal",
};
	int the_size = strlen(pos_str[0])+1;
	VM_CALL_0->sym_str = malloc(the_size);
	strcpy(VM_CALL_0->sym_str, pos_str[0]);
	
enqueue(VM_CALL_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_xor_r_r_to_VM_XOR_R_R(void *start){
	vm_xor_r_r_t* lhs = (vm_xor_r_r_t*)start;
	VM_XOR_R_R_t* VM_XOR_R_R_0 = malloc(sizeof(VM_XOR_R_R_t));
	symbol_init(VM_XOR_R_R_0,"VM_XOR_R_R",1);

	push(VM_XOR_R_R_0);


	const char *pos_str[1] = {
"xor_r_r reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	VM_XOR_R_R_0->sym_str = malloc(the_size);
	strcpy(VM_XOR_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_XOR_R_R_0->sym_str,VM_XOR_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_XOR_R_R_0->sym_str,VM_XOR_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(VM_XOR_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_xor_r_i_to_VM_XOR_R_I(void *start){
	vm_xor_r_i_t* lhs = (vm_xor_r_i_t*)start;
	VM_XOR_R_I_t* VM_XOR_R_I_0 = malloc(sizeof(VM_XOR_R_I_t));
	symbol_init(VM_XOR_R_I_0,"VM_XOR_R_I",1);

	push(VM_XOR_R_I_0);


	const char *pos_str[1] = {
"xor_r_i reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	VM_XOR_R_I_0->sym_str = malloc(the_size);
	strcpy(VM_XOR_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_XOR_R_I_0->sym_str,VM_XOR_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_XOR_R_I_0->sym_str,VM_XOR_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(VM_XOR_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_store_r_r_to_VM_STORE_R_R(void *start){
	vm_store_r_r_t* lhs = (vm_store_r_r_t*)start;
	VM_STORE_R_R_t* VM_STORE_R_R_0 = malloc(sizeof(VM_STORE_R_R_t));
	symbol_init(VM_STORE_R_R_0,"VM_STORE_R_R",1);

	push(VM_STORE_R_R_0);


	const char *pos_str[1] = {
"store_r_r reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	VM_STORE_R_R_0->sym_str = malloc(the_size);
	strcpy(VM_STORE_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_STORE_R_R_0->sym_str,VM_STORE_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_STORE_R_R_0->sym_str,VM_STORE_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(VM_STORE_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_sar_r_i_to_VM_SAR_R_I(void *start){
	vm_sar_r_i_t* lhs = (vm_sar_r_i_t*)start;
	VM_SAR_R_I_t* VM_SAR_R_I_0 = malloc(sizeof(VM_SAR_R_I_t));
	symbol_init(VM_SAR_R_I_0,"VM_SAR_R_I",1);

	push(VM_SAR_R_I_0);


	const char *pos_str[1] = {
"sar_r_i reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	VM_SAR_R_I_0->sym_str = malloc(the_size);
	strcpy(VM_SAR_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_SAR_R_I_0->sym_str,VM_SAR_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_SAR_R_I_0->sym_str,VM_SAR_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(VM_SAR_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_shr_r_i_to_VM_SHR_R_I(void *start){
	vm_shr_r_i_t* lhs = (vm_shr_r_i_t*)start;
	VM_SHR_R_I_t* VM_SHR_R_I_0 = malloc(sizeof(VM_SHR_R_I_t));
	symbol_init(VM_SHR_R_I_0,"VM_SHR_R_I",1);

	push(VM_SHR_R_I_0);


	const char *pos_str[1] = {
"shr_r_i reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	VM_SHR_R_I_0->sym_str = malloc(the_size);
	strcpy(VM_SHR_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_SHR_R_I_0->sym_str,VM_SHR_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_SHR_R_I_0->sym_str,VM_SHR_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(VM_SHR_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_shl_r_i_to_VM_SHL_R_I(void *start){
	vm_shl_r_i_t* lhs = (vm_shl_r_i_t*)start;
	VM_SHL_R_I_t* VM_SHL_R_I_0 = malloc(sizeof(VM_SHL_R_I_t));
	symbol_init(VM_SHL_R_I_0,"VM_SHL_R_I",1);

	push(VM_SHL_R_I_0);


	const char *pos_str[1] = {
"shl_r_i reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	VM_SHL_R_I_0->sym_str = malloc(the_size);
	strcpy(VM_SHL_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_SHL_R_I_0->sym_str,VM_SHL_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_SHL_R_I_0->sym_str,VM_SHL_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(VM_SHL_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_neg_r_to_VM_NEG_R(void *start){
	vm_neg_r_t* lhs = (vm_neg_r_t*)start;
	VM_NEG_R_t* VM_NEG_R_0 = malloc(sizeof(VM_NEG_R_t));
	symbol_init(VM_NEG_R_0,"VM_NEG_R",1);

	push(VM_NEG_R_0);


	const char *pos_str[1] = {
"neg_r reg1",
};
	int the_size = strlen(pos_str[0])+1;
	VM_NEG_R_0->sym_str = malloc(the_size);
	strcpy(VM_NEG_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_NEG_R_0->sym_str,VM_NEG_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(VM_NEG_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_not_r_to_VM_NOT_R(void *start){
	vm_not_r_t* lhs = (vm_not_r_t*)start;
	VM_NOT_R_t* VM_NOT_R_0 = malloc(sizeof(VM_NOT_R_t));
	symbol_init(VM_NOT_R_0,"VM_NOT_R",1);

	push(VM_NOT_R_0);


	const char *pos_str[1] = {
"not_r reg1",
};
	int the_size = strlen(pos_str[0])+1;
	VM_NOT_R_0->sym_str = malloc(the_size);
	strcpy(VM_NOT_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_NOT_R_0->sym_str,VM_NOT_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(VM_NOT_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_ltgt_to_VM_LTGT(void *start){
	vm_ltgt_t* lhs = (vm_ltgt_t*)start;
	VM_LTGT_t* VM_LTGT_0 = malloc(sizeof(VM_LTGT_t));
	symbol_init(VM_LTGT_0,"VM_LTGT",1);

	push(VM_LTGT_0);


	const char *pos_str[1] = {
"ltgt address",
};
	int the_size = strlen(pos_str[0])+1;
	VM_LTGT_0->sym_str = malloc(the_size);
	strcpy(VM_LTGT_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_LTGT_0->sym_str,VM_LTGT_0->sym_str,"address",to_str(lhs->address,"char*"),&the_size);
		
enqueue(VM_LTGT_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_load_r_i_to_VM_LOAD_R_I(void *start){
	vm_load_r_i_t* lhs = (vm_load_r_i_t*)start;
	VM_LOAD_R_I_t* VM_LOAD_R_I_0 = malloc(sizeof(VM_LOAD_R_I_t));
	symbol_init(VM_LOAD_R_I_0,"VM_LOAD_R_I",1);

	push(VM_LOAD_R_I_0);


	const char *pos_str[1] = {
"load_r_i reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	VM_LOAD_R_I_0->sym_str = malloc(the_size);
	strcpy(VM_LOAD_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_LOAD_R_I_0->sym_str,VM_LOAD_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_LOAD_R_I_0->sym_str,VM_LOAD_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(VM_LOAD_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_load_r_r_to_VM_LOAD_R_R(void *start){
	vm_load_r_r_t* lhs = (vm_load_r_r_t*)start;
	VM_LOAD_R_R_t* VM_LOAD_R_R_0 = malloc(sizeof(VM_LOAD_R_R_t));
	symbol_init(VM_LOAD_R_R_0,"VM_LOAD_R_R",1);

	push(VM_LOAD_R_R_0);


	const char *pos_str[1] = {
"load_r_r reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	VM_LOAD_R_R_0->sym_str = malloc(the_size);
	strcpy(VM_LOAD_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_LOAD_R_R_0->sym_str,VM_LOAD_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_LOAD_R_R_0->sym_str,VM_LOAD_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(VM_LOAD_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_jlt_r_r_to_VM_JLT_R_R(void *start){
	vm_jlt_r_r_t* lhs = (vm_jlt_r_r_t*)start;
	VM_JLT_R_R_t* VM_JLT_R_R_0 = malloc(sizeof(VM_JLT_R_R_t));
	symbol_init(VM_JLT_R_R_0,"VM_JLT_R_R",1);

	push(VM_JLT_R_R_0);


	const char *pos_str[1] = {
"jlt_r_r reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	VM_JLT_R_R_0->sym_str = malloc(the_size);
	strcpy(VM_JLT_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_JLT_R_R_0->sym_str,VM_JLT_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_JLT_R_R_0->sym_str,VM_JLT_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(VM_JLT_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_jlt_r_i_to_VM_JLT_R_I(void *start){
	vm_jlt_r_i_t* lhs = (vm_jlt_r_i_t*)start;
	VM_JLT_R_I_t* VM_JLT_R_I_0 = malloc(sizeof(VM_JLT_R_I_t));
	symbol_init(VM_JLT_R_I_0,"VM_JLT_R_I",1);

	push(VM_JLT_R_I_0);


	const char *pos_str[1] = {
"jlt_r_i reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	VM_JLT_R_I_0->sym_str = malloc(the_size);
	strcpy(VM_JLT_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_JLT_R_I_0->sym_str,VM_JLT_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_JLT_R_I_0->sym_str,VM_JLT_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(VM_JLT_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_je_r_r_to_VM_JE_R_R(void *start){
	vm_je_r_r_t* lhs = (vm_je_r_r_t*)start;
	VM_JE_R_R_t* VM_JE_R_R_0 = malloc(sizeof(VM_JE_R_R_t));
	symbol_init(VM_JE_R_R_0,"VM_JE_R_R",1);

	push(VM_JE_R_R_0);


	const char *pos_str[1] = {
"je_r_r reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	VM_JE_R_R_0->sym_str = malloc(the_size);
	strcpy(VM_JE_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_JE_R_R_0->sym_str,VM_JE_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_JE_R_R_0->sym_str,VM_JE_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(VM_JE_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_je_r_i_to_VM_JE_R_I(void *start){
	vm_je_r_i_t* lhs = (vm_je_r_i_t*)start;
	VM_JE_R_I_t* VM_JE_R_I_0 = malloc(sizeof(VM_JE_R_I_t));
	symbol_init(VM_JE_R_I_0,"VM_JE_R_I",1);

	push(VM_JE_R_I_0);


	const char *pos_str[1] = {
"je_r_i reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	VM_JE_R_I_0->sym_str = malloc(the_size);
	strcpy(VM_JE_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_JE_R_I_0->sym_str,VM_JE_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_JE_R_I_0->sym_str,VM_JE_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(VM_JE_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_jmp_to_VM_JMP(void *start){
	vm_jmp_t* lhs = (vm_jmp_t*)start;
	VM_JMP_t* VM_JMP_0 = malloc(sizeof(VM_JMP_t));
	symbol_init(VM_JMP_0,"VM_JMP",1);

	push(VM_JMP_0);


	const char *pos_str[1] = {
"jmp",
};
	int the_size = strlen(pos_str[0])+1;
	VM_JMP_0->sym_str = malloc(the_size);
	strcpy(VM_JMP_0->sym_str, pos_str[0]);
	
enqueue(VM_JMP_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_and_r_r_to_VM_AND_R_R(void *start){
	vm_and_r_r_t* lhs = (vm_and_r_r_t*)start;
	VM_AND_R_R_t* VM_AND_R_R_0 = malloc(sizeof(VM_AND_R_R_t));
	symbol_init(VM_AND_R_R_0,"VM_AND_R_R",1);

	push(VM_AND_R_R_0);


	const char *pos_str[1] = {
"and_r_r reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	VM_AND_R_R_0->sym_str = malloc(the_size);
	strcpy(VM_AND_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_AND_R_R_0->sym_str,VM_AND_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_AND_R_R_0->sym_str,VM_AND_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(VM_AND_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_and_r_i_to_VM_AND_R_I(void *start){
	vm_and_r_i_t* lhs = (vm_and_r_i_t*)start;
	VM_AND_R_I_t* VM_AND_R_I_0 = malloc(sizeof(VM_AND_R_I_t));
	symbol_init(VM_AND_R_I_0,"VM_AND_R_I",1);

	push(VM_AND_R_I_0);


	const char *pos_str[1] = {
"and_r_i reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	VM_AND_R_I_0->sym_str = malloc(the_size);
	strcpy(VM_AND_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_AND_R_I_0->sym_str,VM_AND_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_AND_R_I_0->sym_str,VM_AND_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(VM_AND_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_add_r_i_to_VM_ADD_R_I(void *start){
	vm_add_r_i_t* lhs = (vm_add_r_i_t*)start;
	VM_ADD_R_I_t* VM_ADD_R_I_0 = malloc(sizeof(VM_ADD_R_I_t));
	symbol_init(VM_ADD_R_I_0,"VM_ADD_R_I",1);

	push(VM_ADD_R_I_0);


	const char *pos_str[1] = {
"add_r_i reg1,imm",
};
	int the_size = strlen(pos_str[0])+1;
	VM_ADD_R_I_0->sym_str = malloc(the_size);
	strcpy(VM_ADD_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_ADD_R_I_0->sym_str,VM_ADD_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_ADD_R_I_0->sym_str,VM_ADD_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(VM_ADD_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_add_r_r_to_VM_ADD_R_R(void *start){
	vm_add_r_r_t* lhs = (vm_add_r_r_t*)start;
	VM_ADD_R_R_t* VM_ADD_R_R_0 = malloc(sizeof(VM_ADD_R_R_t));
	symbol_init(VM_ADD_R_R_0,"VM_ADD_R_R",1);

	push(VM_ADD_R_R_0);


	const char *pos_str[1] = {
"add_r_r reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	VM_ADD_R_R_0->sym_str = malloc(the_size);
	strcpy(VM_ADD_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_ADD_R_R_0->sym_str,VM_ADD_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&VM_ADD_R_R_0->sym_str,VM_ADD_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(VM_ADD_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_libc_to_VM_LIBC(void *start){
	vm_libc_t* lhs = (vm_libc_t*)start;
	VM_LIBC_t* VM_LIBC_0 = malloc(sizeof(VM_LIBC_t));
	symbol_init(VM_LIBC_0,"VM_LIBC",1);

	push(VM_LIBC_0);


	const char *pos_str[1] = {
"libc",
};
	int the_size = strlen(pos_str[0])+1;
	VM_LIBC_0->sym_str = malloc(the_size);
	strcpy(VM_LIBC_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&VM_LIBC_0->sym_str,VM_LIBC_0->sym_str,"code",to_str(&lhs->code,"int"),&the_size);
		
enqueue(VM_LIBC_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_set_l_r_r_t_to_vm_prologue_vm_ltgt_vm_mov_i_vm_jlt_r_r_vm_mov_i_vm_ltgt_vm_jmp_code_label_vm_mov_i_code_label_vm_store_mem(void *start){
	set_l_r_r_t_t* lhs = (set_l_r_r_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_ltgt_t* vm_ltgt_1 = malloc(sizeof(vm_ltgt_t));
	symbol_init(vm_ltgt_1,"vm_ltgt",0);
vm_mov_i_t* vm_mov_i_2 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_2,"vm_mov_i",0);
vm_jlt_r_r_t* vm_jlt_r_r_3 = malloc(sizeof(vm_jlt_r_r_t));
	symbol_init(vm_jlt_r_r_3,"vm_jlt_r_r",0);
vm_mov_i_t* vm_mov_i_4 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_4,"vm_mov_i",0);
vm_ltgt_t* vm_ltgt_5 = malloc(sizeof(vm_ltgt_t));
	symbol_init(vm_ltgt_5,"vm_ltgt",0);
vm_jmp_t* vm_jmp_6 = malloc(sizeof(vm_jmp_t));
	symbol_init(vm_jmp_6,"vm_jmp",0);
code_label_t* code_label_7 = malloc(sizeof(code_label_t));
	symbol_init(code_label_7,"code_label",0);
vm_mov_i_t* vm_mov_i_8 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_8,"vm_mov_i",0);
code_label_t* code_label_9 = malloc(sizeof(code_label_t));
	symbol_init(code_label_9,"code_label",0);
vm_store_mem_t* vm_store_mem_10 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_10,"vm_store_mem",0);

               vm_prologue_0->reg1 = lhs->dest;
               vm_prologue_0->reg2 = lhs->reg1;
               vm_ltgt_1->address = create_label();
               vm_mov_i_2->reg1 = vreg_values[23];
               vm_mov_i_2->imm = lhs->sign;
               vm_jlt_r_r_3->reg1 = get_mem_reg(lhs->reg1);
               vm_jlt_r_r_3->reg2 = get_mem_reg(lhs->reg2);
               vm_mov_i_4->reg1 = get_mem_reg(lhs->dest);
               vm_mov_i_4->imm = 0;
               vm_ltgt_5->address = create_label();
               code_label_7->text = vm_ltgt_1->address;
               vm_mov_i_8->reg1 = get_mem_reg(lhs->dest);
               vm_mov_i_8->imm = 1;
               code_label_9->text = vm_ltgt_5->address;
               vm_store_mem_10->reg1 = lhs->dest;

	push(vm_store_mem_10);
	push(code_label_9);
	push(vm_mov_i_8);
	push(code_label_7);
	push(vm_jmp_6);
	push(vm_ltgt_5);
	push(vm_mov_i_4);
	push(vm_jlt_r_r_3);
	push(vm_mov_i_2);
	push(vm_ltgt_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_set_l_r_i_t_to_vm_prologue_vm_ltgt_vm_jlt_r_i_vm_mov_i_vm_ltgt_vm_jmp_code_label_vm_mov_i_code_label_vm_store_mem(void *start){
	set_l_r_i_t_t* lhs = (set_l_r_i_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_ltgt_t* vm_ltgt_1 = malloc(sizeof(vm_ltgt_t));
	symbol_init(vm_ltgt_1,"vm_ltgt",0);
vm_jlt_r_i_t* vm_jlt_r_i_2 = malloc(sizeof(vm_jlt_r_i_t));
	symbol_init(vm_jlt_r_i_2,"vm_jlt_r_i",0);
vm_mov_i_t* vm_mov_i_3 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_3,"vm_mov_i",0);
vm_ltgt_t* vm_ltgt_4 = malloc(sizeof(vm_ltgt_t));
	symbol_init(vm_ltgt_4,"vm_ltgt",0);
vm_jmp_t* vm_jmp_5 = malloc(sizeof(vm_jmp_t));
	symbol_init(vm_jmp_5,"vm_jmp",0);
code_label_t* code_label_6 = malloc(sizeof(code_label_t));
	symbol_init(code_label_6,"code_label",0);
vm_mov_i_t* vm_mov_i_7 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_7,"vm_mov_i",0);
code_label_t* code_label_8 = malloc(sizeof(code_label_t));
	symbol_init(code_label_8,"code_label",0);
vm_store_mem_t* vm_store_mem_9 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_9,"vm_store_mem",0);

               vm_prologue_0->reg1 = lhs->dest;
               vm_prologue_0->reg2 = lhs->reg1;
               vm_ltgt_1->address = create_label();
               vm_jlt_r_i_2->reg1 = get_mem_reg(lhs->reg1);
               vm_jlt_r_i_2->imm = lhs->imm;
               vm_mov_i_3->reg1 = get_mem_reg(lhs->dest);
               vm_mov_i_3->imm = 0;
               vm_ltgt_4->address = create_label();
               code_label_6->text = vm_ltgt_1->address;
               vm_mov_i_7->reg1 = get_mem_reg(lhs->dest);
               vm_mov_i_7->imm = 1;
               code_label_8->text = vm_ltgt_4->address;
               vm_store_mem_9->reg1 = lhs->dest;

	push(vm_store_mem_9);
	push(code_label_8);
	push(vm_mov_i_7);
	push(code_label_6);
	push(vm_jmp_5);
	push(vm_ltgt_4);
	push(vm_mov_i_3);
	push(vm_jlt_r_i_2);
	push(vm_ltgt_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_la_r_a_t_to_vm_load_mem_vm_lea_r_m_vm_store_mem(void *start){
	la_r_a_t_t* lhs = (la_r_a_t_t*)start;
	vm_load_mem_t* vm_load_mem_0 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_0,"vm_load_mem",0);
vm_lea_r_m_t* vm_lea_r_m_1 = malloc(sizeof(vm_lea_r_m_t));
	symbol_init(vm_lea_r_m_1,"vm_lea_r_m",0);
vm_store_mem_t* vm_store_mem_2 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_2,"vm_store_mem",0);

        vm_load_mem_0->reg1 = lhs->reg1;
        vm_lea_r_m_1->reg1 = get_mem_reg(lhs->reg1);
        vm_lea_r_m_1->target = lhs->target;
        vm_store_mem_2->reg1 = lhs->reg1;
        release_mem_regs();

	push(vm_store_mem_2);
	push(vm_lea_r_m_1);
	push(vm_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_nor_r_r_t_to_vm_prologue_or_r_r_temp_vm_not_r_vm_store_mem(void *start){
	nor_r_r_t_t* lhs = (nor_r_r_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
or_r_r_temp_t* or_r_r_temp_1 = malloc(sizeof(or_r_r_temp_t));
	symbol_init(or_r_r_temp_1,"or_r_r_temp",0);
vm_not_r_t* vm_not_r_2 = malloc(sizeof(vm_not_r_t));
	symbol_init(vm_not_r_2,"vm_not_r",0);
vm_store_mem_t* vm_store_mem_3 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_3,"vm_store_mem",0);

        vm_prologue_0->reg1 = lhs->reg1;
        vm_prologue_0->reg2 = lhs->reg2;
        or_r_r_temp_1->reg1 = get_mem_reg(lhs->reg1);
        or_r_r_temp_1->reg2 = get_mem_reg(lhs->reg2);
        or_r_r_temp_1->dest = lhs->dest;
        vm_not_r_2->reg1 = get_mem_reg(lhs->dest);
        vm_store_mem_3->reg1 = lhs->dest;
        release_mem_regs();

	push(vm_store_mem_3);
	push(vm_not_r_2);
	push(or_r_r_temp_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_call_t_to_libc_t(void *start){
	call_t_t* lhs = (call_t_t*)start;
	libc_t_t* libc_t_0 = malloc(sizeof(libc_t_t));
	symbol_init(libc_t_0,"libc_t",0);


        if (!is_libc(lhs->address)){
                push(start);
	free(libc_t_0);
	bitmap_set(rule_bitmap,114);
return;

        }
        libc_t_0->code = get_libc_code(lhs->address);


	push(libc_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_call_t_to_vm_ltgt_vm_call(void *start){
	call_t_t* lhs = (call_t_t*)start;
	vm_ltgt_t* vm_ltgt_0 = malloc(sizeof(vm_ltgt_t));
	symbol_init(vm_ltgt_0,"vm_ltgt",0);
vm_call_t* vm_call_1 = malloc(sizeof(vm_call_t));
	symbol_init(vm_call_1,"vm_call",0);

        if (is_libc(lhs->address)){
                push(start);
	free(vm_ltgt_0);
free(vm_call_1);
	bitmap_set(rule_bitmap,115);
return;

        }
        vm_ltgt_0->address = lhs->address;


	push(vm_call_1);
	push(vm_ltgt_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_jump_r_t_to_vm_load_mem_vm_mov_vm_jmp(void *start){
	jump_r_t_t* lhs = (jump_r_t_t*)start;
	vm_load_mem_t* vm_load_mem_0 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_0,"vm_load_mem",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_jmp_t* vm_jmp_2 = malloc(sizeof(vm_jmp_t));
	symbol_init(vm_jmp_2,"vm_jmp",0);

        vm_load_mem_0->reg1 = lhs->reg1;
        vm_mov_1->reg1 = vreg_values[19];
        vm_mov_1->reg2 = get_mem_reg(lhs->reg1);
        release_mem_regs();


	push(vm_jmp_2);
	push(vm_mov_1);
	push(vm_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_jump_t_to_vm_ltgt_vm_jmp(void *start){
	jump_t_t* lhs = (jump_t_t*)start;
	vm_ltgt_t* vm_ltgt_0 = malloc(sizeof(vm_ltgt_t));
	symbol_init(vm_ltgt_0,"vm_ltgt",0);
vm_jmp_t* vm_jmp_1 = malloc(sizeof(vm_jmp_t));
	symbol_init(vm_jmp_1,"vm_jmp",0);


        vm_ltgt_0->address = lhs->address;


	push(vm_jmp_1);
	push(vm_ltgt_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_neq_r_r_t_to_vm_prologue_vm_mov_i_vm_ltgt_vm_jlt_r_r_vm_jlt_r_r(void *start){
	branch_neq_r_r_t_t* lhs = (branch_neq_r_r_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_i_t* vm_mov_i_1 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_1,"vm_mov_i",0);
vm_ltgt_t* vm_ltgt_2 = malloc(sizeof(vm_ltgt_t));
	symbol_init(vm_ltgt_2,"vm_ltgt",0);
vm_jlt_r_r_t* vm_jlt_r_r_3 = malloc(sizeof(vm_jlt_r_r_t));
	symbol_init(vm_jlt_r_r_3,"vm_jlt_r_r",0);
vm_jlt_r_r_t* vm_jlt_r_r_4 = malloc(sizeof(vm_jlt_r_r_t));
	symbol_init(vm_jlt_r_r_4,"vm_jlt_r_r",0);

        vm_prologue_0->reg1 = lhs->reg1;
        vm_prologue_0->reg2 = lhs->reg2;
        vm_mov_i_1->reg1 = vreg_values[23];
        vm_mov_i_1->imm = lhs->sign;
        vm_ltgt_2->address = lhs->address;
        vm_jlt_r_r_3->reg1 = get_mem_reg(lhs->reg1);
        vm_jlt_r_r_3->reg2 = get_mem_reg(lhs->reg2);
        vm_jlt_r_r_4->reg1 = get_mem_reg(lhs->reg2);
        vm_jlt_r_r_4->reg2 = get_mem_reg(lhs->reg1);
        release_mem_regs();

	push(vm_jlt_r_r_4);
	push(vm_jlt_r_r_3);
	push(vm_ltgt_2);
	push(vm_mov_i_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_eq_r_r_t_to_vm_prologue_vm_ltgt_vm_je_r_r(void *start){
	branch_eq_r_r_t_t* lhs = (branch_eq_r_r_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_ltgt_t* vm_ltgt_1 = malloc(sizeof(vm_ltgt_t));
	symbol_init(vm_ltgt_1,"vm_ltgt",0);
vm_je_r_r_t* vm_je_r_r_2 = malloc(sizeof(vm_je_r_r_t));
	symbol_init(vm_je_r_r_2,"vm_je_r_r",0);

        vm_prologue_0->reg1 = lhs->reg1;
        vm_prologue_0->reg2 = lhs->reg2;
        vm_ltgt_1->address = lhs->address;
        vm_je_r_r_2->reg1 = get_mem_reg(lhs->reg1);
        vm_je_r_r_2->reg2 = get_mem_reg(lhs->reg2);
        release_mem_regs();


	push(vm_je_r_r_2);
	push(vm_ltgt_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_r_t_to_vm_prologue_vm_mov_vm_shr_r_i_vm_store_mem(void *start){
	shift_r_t_t* lhs = (shift_r_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_shr_r_i_t* vm_shr_r_i_2 = malloc(sizeof(vm_shr_r_i_t));
	symbol_init(vm_shr_r_i_2,"vm_shr_r_i",0);
vm_store_mem_t* vm_store_mem_3 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_3,"vm_store_mem",0);


        vm_prologue_0->reg1 = lhs->reg1;
        vm_prologue_0->reg2 = lhs->dest;
        vm_mov_1->reg1 = get_mem_reg(lhs->dest);
        vm_mov_1->reg2 = get_mem_reg(lhs->reg1);
        vm_shr_r_i_2->reg1 = get_mem_reg(lhs->dest);
        vm_shr_r_i_2->imm = lhs->imm;
        vm_store_mem_3->reg1 = lhs->dest;
        release_mem_regs();


	push(vm_store_mem_3);
	push(vm_shr_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_l_t_to_vm_prologue_vm_mov_vm_shl_r_i_vm_store_mem(void *start){
	shift_l_t_t* lhs = (shift_l_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_shl_r_i_t* vm_shl_r_i_2 = malloc(sizeof(vm_shl_r_i_t));
	symbol_init(vm_shl_r_i_2,"vm_shl_r_i",0);
vm_store_mem_t* vm_store_mem_3 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_3,"vm_store_mem",0);

        vm_prologue_0->reg1 = lhs->reg1;
        vm_prologue_0->reg2 = lhs->dest;
        vm_mov_1->reg1 = get_mem_reg(lhs->dest);
        vm_mov_1->reg2 = get_mem_reg(lhs->reg1);
        vm_shl_r_i_2->reg1 = get_mem_reg(lhs->dest);
        vm_shl_r_i_2->imm = lhs->imm;
        vm_store_mem_3->reg1 = lhs->dest;
        release_mem_regs();


	push(vm_store_mem_3);
	push(vm_shl_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_b_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_store_r_r(void *start){
	store_b_t_t* lhs = (store_b_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_add_r_i_t* vm_add_r_i_2 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_2,"vm_add_r_i",0);
vm_mov_i_t* vm_mov_i_3 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_3,"vm_mov_i",0);
vm_store_r_r_t* vm_store_r_r_4 = malloc(sizeof(vm_store_r_r_t));
	symbol_init(vm_store_r_r_4,"vm_store_r_r",0);

        
        vm_prologue_0->reg1 = lhs->source;
        vm_prologue_0->reg2 = lhs->base;
        vm_mov_1->reg1 = vreg_values[16];
        vm_mov_1->reg2 = get_mem_reg(lhs->base);
        vm_add_r_i_2->reg1 = vreg_values[16];
        vm_add_r_i_2->imm = lhs->offset;
        vm_mov_i_3->reg1 = vreg_values[23];
        vm_mov_i_3->imm = 8;
        vm_store_r_r_4->reg1 = get_mem_reg(lhs->source);
        vm_store_r_r_4->reg2 = vreg_values[16];
        release_mem_regs();

	push(vm_store_r_r_4);
	push(vm_mov_i_3);
	push(vm_add_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_h_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_store_r_r(void *start){
	store_h_t_t* lhs = (store_h_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_add_r_i_t* vm_add_r_i_2 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_2,"vm_add_r_i",0);
vm_mov_i_t* vm_mov_i_3 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_3,"vm_mov_i",0);
vm_store_r_r_t* vm_store_r_r_4 = malloc(sizeof(vm_store_r_r_t));
	symbol_init(vm_store_r_r_4,"vm_store_r_r",0);

        
        vm_prologue_0->reg1 = lhs->source;
        vm_prologue_0->reg2 = lhs->base;
        vm_mov_1->reg1 = vreg_values[16];
        vm_mov_1->reg2 = get_mem_reg(lhs->base);
        vm_add_r_i_2->reg1 = vreg_values[16];
        vm_add_r_i_2->imm = lhs->offset;
        vm_mov_i_3->reg1 = vreg_values[23];
        vm_mov_i_3->imm = 16;
        vm_store_r_r_4->reg1 = get_mem_reg(lhs->source);
        vm_store_r_r_4->reg2 = vreg_values[16];
        release_mem_regs();

	push(vm_store_r_r_4);
	push(vm_mov_i_3);
	push(vm_add_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_w_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_store_r_r(void *start){
	store_w_t_t* lhs = (store_w_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_add_r_i_t* vm_add_r_i_2 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_2,"vm_add_r_i",0);
vm_mov_i_t* vm_mov_i_3 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_3,"vm_mov_i",0);
vm_store_r_r_t* vm_store_r_r_4 = malloc(sizeof(vm_store_r_r_t));
	symbol_init(vm_store_r_r_4,"vm_store_r_r",0);

        
        vm_prologue_0->reg1 = lhs->source;
        vm_prologue_0->reg2 = lhs->base;
        vm_mov_1->reg1 = vreg_values[16];
        vm_mov_1->reg2 = get_mem_reg(lhs->base);
        vm_add_r_i_2->reg1 = vreg_values[16];
        vm_add_r_i_2->imm = lhs->offset;
        vm_mov_i_3->reg1 = vreg_values[23];
        vm_mov_i_3->imm = 32;
        vm_store_r_r_4->reg1 = get_mem_reg(lhs->source);
        vm_store_r_r_4->reg2 = vreg_values[16];
        release_mem_regs();

	push(vm_store_r_r_4);
	push(vm_mov_i_3);
	push(vm_add_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_d_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_store_r_r(void *start){
	store_d_t_t* lhs = (store_d_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_add_r_i_t* vm_add_r_i_2 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_2,"vm_add_r_i",0);
vm_mov_i_t* vm_mov_i_3 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_3,"vm_mov_i",0);
vm_store_r_r_t* vm_store_r_r_4 = malloc(sizeof(vm_store_r_r_t));
	symbol_init(vm_store_r_r_4,"vm_store_r_r",0);

        vm_prologue_0->reg1 = lhs->source;
        vm_prologue_0->reg2 = lhs->base;
        vm_mov_1->reg1 = vreg_values[16];
        vm_mov_1->reg2 = get_mem_reg(lhs->base);
        vm_add_r_i_2->reg1 = vreg_values[16];
        vm_add_r_i_2->imm = lhs->offset;
        vm_mov_i_3->reg1 = vreg_values[23];
        vm_mov_i_3->imm = 64;
        vm_store_r_r_4->reg1 = get_mem_reg(lhs->source);
        vm_store_r_r_4->reg2 = vreg_values[16];
        release_mem_regs();

	push(vm_store_r_r_4);
	push(vm_mov_i_3);
	push(vm_add_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_xor_r_r_t_to_vm_prologue_vm_mov_vm_load_mem_vm_xor_r_r_vm_store_mem(void *start){
	xor_r_r_t_t* lhs = (xor_r_r_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_load_mem_t* vm_load_mem_2 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_2,"vm_load_mem",0);
vm_xor_r_r_t* vm_xor_r_r_3 = malloc(sizeof(vm_xor_r_r_t));
	symbol_init(vm_xor_r_r_3,"vm_xor_r_r",0);
vm_store_mem_t* vm_store_mem_4 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_4,"vm_store_mem",0);

        vm_prologue_0->reg1 = lhs->dest;
        vm_prologue_0->reg2 = lhs->reg1;
        vm_mov_1->reg1 = get_mem_reg(lhs->dest);
        vm_mov_1->reg2 = get_mem_reg(lhs->reg1);
        release_mem_reg(lhs->reg1);
        vm_load_mem_2->reg1 = lhs->reg2;
        vm_xor_r_r_3->reg1 = get_mem_reg(lhs->dest);
        vm_xor_r_r_3->reg2 = get_mem_reg(lhs->reg2);
        vm_store_mem_4->reg1 = lhs->dest;
        release_mem_regs();

	push(vm_store_mem_4);
	push(vm_xor_r_r_3);
	push(vm_load_mem_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_i_t_to_vm_prologue_vm_mov_i_or_r_r_temp_vm_mov_vm_store_mem(void *start){
	or_r_i_t_t* lhs = (or_r_i_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_i_t* vm_mov_i_1 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_1,"vm_mov_i",0);
or_r_r_temp_t* or_r_r_temp_2 = malloc(sizeof(or_r_r_temp_t));
	symbol_init(or_r_r_temp_2,"or_r_r_temp",0);
vm_mov_t* vm_mov_3 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_3,"vm_mov",0);
vm_store_mem_t* vm_store_mem_4 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_4,"vm_store_mem",0);

        vm_prologue_0->reg1 = lhs->dest;
        vm_prologue_0->reg2 = lhs->reg1;
        vm_mov_i_1->reg1 = vreg_values[16]; 
        vm_mov_i_1->imm = lhs->imm;
        or_r_r_temp_2->reg1 = vreg_values[16];
        or_r_r_temp_2->dest = vreg_values[16];
        or_r_r_temp_2->reg2 = lhs->reg1;
        vm_mov_3->reg1 = get_mem_reg(lhs->dest);
        vm_mov_3->reg2 = vreg_values[16];
        vm_store_mem_4->reg1 = lhs->dest;
        release_mem_regs();

	push(vm_store_mem_4);
	push(vm_mov_3);
	push(or_r_r_temp_2);
	push(vm_mov_i_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_r_t_to_vm_prologue_or_r_r_temp_vm_store_mem(void *start){
	or_r_r_t_t* lhs = (or_r_r_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
or_r_r_temp_t* or_r_r_temp_1 = malloc(sizeof(or_r_r_temp_t));
	symbol_init(or_r_r_temp_1,"or_r_r_temp",0);
vm_store_mem_t* vm_store_mem_2 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_2,"vm_store_mem",0);

        vm_prologue_0->reg1 = lhs->dest;
        vm_prologue_0->reg2 = lhs->reg1;
        or_r_r_temp_1->dest = lhs->dest;
        or_r_r_temp_1->reg1 = lhs->reg1;
        or_r_r_temp_1->reg2 = lhs->reg2;
        vm_store_mem_2->reg1 = lhs->dest;
        release_mem_regs();

	push(vm_store_mem_2);
	push(or_r_r_temp_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_r_temp_to_vm_mov_vm_not_r_vm_load_mem_vm_not_r_vm_and_r_r_vm_not_r_vm_not_r(void *start){
	or_r_r_temp_t* lhs = (or_r_r_temp_t*)start;
	vm_mov_t* vm_mov_0 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_0,"vm_mov",0);
vm_not_r_t* vm_not_r_1 = malloc(sizeof(vm_not_r_t));
	symbol_init(vm_not_r_1,"vm_not_r",0);
vm_load_mem_t* vm_load_mem_2 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_2,"vm_load_mem",0);
vm_not_r_t* vm_not_r_3 = malloc(sizeof(vm_not_r_t));
	symbol_init(vm_not_r_3,"vm_not_r",0);
vm_and_r_r_t* vm_and_r_r_4 = malloc(sizeof(vm_and_r_r_t));
	symbol_init(vm_and_r_r_4,"vm_and_r_r",0);
vm_not_r_t* vm_not_r_5 = malloc(sizeof(vm_not_r_t));
	symbol_init(vm_not_r_5,"vm_not_r",0);
vm_not_r_t* vm_not_r_6 = malloc(sizeof(vm_not_r_t));
	symbol_init(vm_not_r_6,"vm_not_r",0);


        vm_mov_0->reg1 = get_mem_reg(lhs->dest);
        vm_mov_0->reg2 = get_mem_reg(lhs->reg1);
        release_mem_reg(lhs->reg1);
        vm_not_r_1->reg1 = get_mem_reg(lhs->dest);
        vm_load_mem_2->reg1 = lhs->reg2;
        vm_not_r_3->reg1 = get_mem_reg(lhs->reg2);
        vm_and_r_r_4->reg1 = get_mem_reg(lhs->dest);
        vm_and_r_r_4->reg2 = get_mem_reg(lhs->reg2);
        vm_not_r_5->reg1 = get_mem_reg(lhs->reg2);
        vm_not_r_6->reg1 = get_mem_reg(lhs->dest);

	push(vm_not_r_6);
	push(vm_not_r_5);
	push(vm_and_r_r_4);
	push(vm_not_r_3);
	push(vm_load_mem_2);
	push(vm_not_r_1);
	push(vm_mov_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_i_t_to_vm_prologue_vm_mov_vm_and_r_i_vm_store_mem(void *start){
	and_r_i_t_t* lhs = (and_r_i_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_and_r_i_t* vm_and_r_i_2 = malloc(sizeof(vm_and_r_i_t));
	symbol_init(vm_and_r_i_2,"vm_and_r_i",0);
vm_store_mem_t* vm_store_mem_3 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_3,"vm_store_mem",0);

        vm_prologue_0->reg1 = lhs->dest;
        vm_prologue_0->reg2 = lhs->reg1;
        vm_mov_1->reg1 = get_mem_reg(lhs->dest);
        vm_mov_1->reg2 = get_mem_reg(lhs->reg1);
        vm_and_r_i_2->reg1 = get_mem_reg(lhs->dest);
        vm_and_r_i_2->imm =  lhs->imm;
        vm_store_mem_3->reg1 = lhs->dest;
        release_mem_regs();


	push(vm_store_mem_3);
	push(vm_and_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_r_t_to_vm_prologue_vm_mov_vm_load_mem_vm_and_r_r_vm_store_mem(void *start){
	and_r_r_t_t* lhs = (and_r_r_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_load_mem_t* vm_load_mem_2 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_2,"vm_load_mem",0);
vm_and_r_r_t* vm_and_r_r_3 = malloc(sizeof(vm_and_r_r_t));
	symbol_init(vm_and_r_r_3,"vm_and_r_r",0);
vm_store_mem_t* vm_store_mem_4 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_4,"vm_store_mem",0);

        vm_prologue_0->reg1 = lhs->dest;
        vm_prologue_0->reg2 = lhs->dest;
        vm_mov_1->reg1 = get_mem_reg(lhs->dest);
        vm_mov_1->reg2 = get_mem_reg(lhs->reg1);
        release_mem_reg(lhs->reg1);
        vm_load_mem_2->reg1 = lhs->reg2;
        vm_and_r_r_3->reg1 = get_mem_reg(lhs->dest);
        vm_and_r_r_3->reg2 = get_mem_reg(lhs->reg2);
        vm_store_mem_4->reg1 = lhs->dest;
        release_mem_regs();

	push(vm_store_mem_4);
	push(vm_and_r_r_3);
	push(vm_load_mem_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_b_u_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_load_r_r(void *start){
	load_b_u_t_t* lhs = (load_b_u_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_add_r_i_t* vm_add_r_i_2 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_2,"vm_add_r_i",0);
vm_mov_i_t* vm_mov_i_3 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_3,"vm_mov_i",0);
vm_load_r_r_t* vm_load_r_r_4 = malloc(sizeof(vm_load_r_r_t));
	symbol_init(vm_load_r_r_4,"vm_load_r_r",0);

        vm_prologue_0->reg1 = lhs->dest;
        vm_prologue_0->reg2 = lhs->base;
        vm_mov_1->reg1 = vreg_values[16];
        vm_mov_1->reg2 = get_mem_reg(lhs->base);
        vm_add_r_i_2->reg1 = vreg_values[16];
        vm_add_r_i_2->imm = lhs->offset;
        vm_mov_i_3->reg1 = vreg_values[23];
        vm_mov_i_3->imm = 9;
        vm_load_r_r_4->reg1 = get_mem_reg(lhs->dest);
        vm_load_r_r_4->reg2 = vreg_values[16];
        release_mem_regs();

	push(vm_load_r_r_4);
	push(vm_mov_i_3);
	push(vm_add_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_b_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_load_r_r(void *start){
	load_b_t_t* lhs = (load_b_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_add_r_i_t* vm_add_r_i_2 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_2,"vm_add_r_i",0);
vm_mov_i_t* vm_mov_i_3 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_3,"vm_mov_i",0);
vm_load_r_r_t* vm_load_r_r_4 = malloc(sizeof(vm_load_r_r_t));
	symbol_init(vm_load_r_r_4,"vm_load_r_r",0);

        vm_prologue_0->reg1 = lhs->dest;
        vm_prologue_0->reg2 = lhs->base;
        vm_mov_1->reg1 = vreg_values[16];
        vm_mov_1->reg2 = get_mem_reg(lhs->base);
        vm_add_r_i_2->reg1 = vreg_values[16];
        vm_add_r_i_2->imm = lhs->offset;
        vm_mov_i_3->reg1 = vreg_values[23];
        vm_mov_i_3->imm = 8;
        vm_load_r_r_4->reg1 = get_mem_reg(lhs->dest);
        vm_load_r_r_4->reg2 = vreg_values[16];
        release_mem_regs();

	push(vm_load_r_r_4);
	push(vm_mov_i_3);
	push(vm_add_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_h_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_load_r_r(void *start){
	load_h_t_t* lhs = (load_h_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_add_r_i_t* vm_add_r_i_2 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_2,"vm_add_r_i",0);
vm_mov_i_t* vm_mov_i_3 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_3,"vm_mov_i",0);
vm_load_r_r_t* vm_load_r_r_4 = malloc(sizeof(vm_load_r_r_t));
	symbol_init(vm_load_r_r_4,"vm_load_r_r",0);

        vm_prologue_0->reg1 = lhs->dest;
        vm_prologue_0->reg2 = lhs->base;
        vm_mov_1->reg1 = vreg_values[16];
        vm_mov_1->reg2 = get_mem_reg(lhs->base);
        vm_add_r_i_2->reg1 = vreg_values[16];
        vm_add_r_i_2->imm = lhs->offset;
        vm_mov_i_3->reg1 = vreg_values[23];
        vm_mov_i_3->imm = 16;
        vm_load_r_r_4->reg1 = get_mem_reg(lhs->dest);
        vm_load_r_r_4->reg2 = vreg_values[16];
        release_mem_regs();

	push(vm_load_r_r_4);
	push(vm_mov_i_3);
	push(vm_add_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_w_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_load_r_r(void *start){
	load_w_t_t* lhs = (load_w_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_add_r_i_t* vm_add_r_i_2 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_2,"vm_add_r_i",0);
vm_mov_i_t* vm_mov_i_3 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_3,"vm_mov_i",0);
vm_load_r_r_t* vm_load_r_r_4 = malloc(sizeof(vm_load_r_r_t));
	symbol_init(vm_load_r_r_4,"vm_load_r_r",0);

        vm_prologue_0->reg1 = lhs->dest;
        vm_prologue_0->reg2 = lhs->base;
        vm_mov_1->reg1 = vreg_values[16];
        vm_mov_1->reg2 = get_mem_reg(lhs->base);
        vm_add_r_i_2->reg1 = vreg_values[16];
        vm_add_r_i_2->imm = lhs->offset;
        vm_mov_i_3->reg1 = vreg_values[23];
        vm_mov_i_3->imm = 32;
        vm_load_r_r_4->reg1 = get_mem_reg(lhs->dest);
        vm_load_r_r_4->reg2 = vreg_values[16];
        release_mem_regs();

	push(vm_load_r_r_4);
	push(vm_mov_i_3);
	push(vm_add_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_dw_t_to_vm_prologue_vm_mov_i_vm_add_r_r_vm_mov_i_vm_load_r_r(void *start){
	load_dw_t_t* lhs = (load_dw_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_i_t* vm_mov_i_1 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_1,"vm_mov_i",0);
vm_add_r_r_t* vm_add_r_r_2 = malloc(sizeof(vm_add_r_r_t));
	symbol_init(vm_add_r_r_2,"vm_add_r_r",0);
vm_mov_i_t* vm_mov_i_3 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_3,"vm_mov_i",0);
vm_load_r_r_t* vm_load_r_r_4 = malloc(sizeof(vm_load_r_r_t));
	symbol_init(vm_load_r_r_4,"vm_load_r_r",0);

        vm_prologue_0->reg1 = lhs->dest;
        vm_prologue_0->reg2 = lhs->base;
        vm_mov_i_1->reg1 = vreg_values[16];
        vm_mov_i_1->imm = lhs->offset;
        vm_add_r_r_2->reg2 = get_mem_reg(lhs->base);
        vm_add_r_r_2->reg1 = vreg_values[16];
        vm_mov_i_3->reg1 = vreg_values[23];
        vm_mov_i_3->imm = 64;
        vm_load_r_r_4->reg1 = get_mem_reg(lhs->dest);
        vm_load_r_r_4->reg2 = vreg_values[16];
        release_mem_regs();

	push(vm_load_r_r_4);
	push(vm_mov_i_3);
	push(vm_add_r_r_2);
	push(vm_mov_i_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_div_r_r_t_to_vm_prologue_vm_mov_vm_v_arit(void *start){
	div_r_r_t_t* lhs = (div_r_r_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_v_arit_t* vm_v_arit_2 = malloc(sizeof(vm_v_arit_t));
	symbol_init(vm_v_arit_2,"vm_v_arit",0);

        vm_prologue_0->reg1 = lhs->reg1;
        vm_prologue_0->reg2 = lhs->reg2;
        vm_mov_1->reg1 = map_register(reg_values[31]);
        vm_mov_1->reg2 = get_mem_reg(lhs->reg1);        
        vm_v_arit_2->imm = 1;
        vm_v_arit_2->reg1 = get_mem_reg(lhs->reg2);
        release_mem_regs();

	push(vm_v_arit_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mul_r_r_t_to_vm_mov_vm_mov_vm_v_arit_vm_mov_vm_shr_r_i_vm_and_r_i(void *start){
	mul_r_r_t_t* lhs = (mul_r_r_t_t*)start;
	vm_mov_t* vm_mov_0 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_0,"vm_mov",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_v_arit_t* vm_v_arit_2 = malloc(sizeof(vm_v_arit_t));
	symbol_init(vm_v_arit_2,"vm_v_arit",0);
vm_mov_t* vm_mov_3 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_3,"vm_mov",0);
vm_shr_r_i_t* vm_shr_r_i_4 = malloc(sizeof(vm_shr_r_i_t));
	symbol_init(vm_shr_r_i_4,"vm_shr_r_i",0);
vm_and_r_i_t* vm_and_r_i_5 = malloc(sizeof(vm_and_r_i_t));
	symbol_init(vm_and_r_i_5,"vm_and_r_i",0);

        vm_mov_0->reg2 = lhs->reg2;
        vm_mov_0->reg1 = map_register(reg_values[31]);
        vm_mov_1->reg2 = lhs->reg2;
        vm_mov_1->reg1 = vreg_values[16];
        vm_v_arit_2->imm = 0;
        vm_v_arit_2->reg1 = vm_mov_0->reg1;
        vm_mov_3->reg1 = map_register(reg_values[30]);
        vm_mov_3->reg2 = vm_mov_0->reg1;
        vm_shr_r_i_4->reg1 = vm_mov_3->reg1;
        vm_shr_r_i_4->imm = 32;
        vm_and_r_i_5->reg1 = vm_mov_0->reg1;
        vm_and_r_i_5->imm = 4294967295;

	push(vm_and_r_i_5);
	push(vm_shr_r_i_4);
	push(vm_mov_3);
	push(vm_v_arit_2);
	push(vm_mov_1);
	push(vm_mov_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_i_t_to_add_r_i_t_add_r_i_t(void *start){
	add_r_i_t_t* lhs = (add_r_i_t_t*)start;
	add_r_i_t_t* add_r_i_t_0 = malloc(sizeof(add_r_i_t_t));
	symbol_init(add_r_i_t_0,"add_r_i_t",0);
add_r_i_t_t* add_r_i_t_1 = malloc(sizeof(add_r_i_t_t));
	symbol_init(add_r_i_t_1,"add_r_i_t",0);

        if (lhs->imm < 65536){
                push(start);
	free(add_r_i_t_0);
free(add_r_i_t_1);
	bitmap_set(rule_bitmap,139);
return;

        }
        add_r_i_t_0->imm = 65535;
        add_r_i_t_1->imm = lhs->imm - add_r_i_t_0->imm;
        add_r_i_t_0->dest = lhs->dest;
        add_r_i_t_0->reg1 = lhs->reg1;
        add_r_i_t_1->dest = lhs->dest;
        add_r_i_t_1->reg1 = lhs->reg1;

	push(add_r_i_t_1);
	push(add_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_i_t_to_vm_prologue_vm_mov_vm_mov_i_vm_neg_r_vm_add_r_r_vm_store_mem(void *start){
	add_r_i_t_t* lhs = (add_r_i_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_mov_i_t* vm_mov_i_2 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_2,"vm_mov_i",0);
vm_neg_r_t* vm_neg_r_3 = malloc(sizeof(vm_neg_r_t));
	symbol_init(vm_neg_r_3,"vm_neg_r",0);
vm_add_r_r_t* vm_add_r_r_4 = malloc(sizeof(vm_add_r_r_t));
	symbol_init(vm_add_r_r_4,"vm_add_r_r",0);
vm_store_mem_t* vm_store_mem_5 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_5,"vm_store_mem",0);

        if (lhs->imm >= 0){
                push(start);
	free(vm_prologue_0);
free(vm_mov_1);
free(vm_mov_i_2);
free(vm_neg_r_3);
free(vm_add_r_r_4);
free(vm_store_mem_5);
	bitmap_set(rule_bitmap,140);
return;

        }
        lhs->imm = lhs->imm*(-1);
        vm_prologue_0->reg1 = lhs->dest;
        vm_prologue_0->reg2 = lhs->reg1;
        vm_mov_1->reg1 = get_mem_reg(lhs->dest);
        vm_mov_1->reg2 = get_mem_reg(lhs->reg1);
        vm_mov_i_2->imm = lhs->imm;
        vm_mov_i_2->reg1 = vreg_values[16];
        vm_neg_r_3->reg1 = vreg_values[16];
        vm_add_r_r_4->reg2 = vreg_values[16];
        vm_add_r_r_4->reg1 = get_mem_reg(lhs->dest);
        vm_store_mem_5->reg1 = lhs->dest;

	push(vm_store_mem_5);
	push(vm_add_r_r_4);
	push(vm_neg_r_3);
	push(vm_mov_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_i_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_store_mem(void *start){
	add_r_i_t_t* lhs = (add_r_i_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_add_r_i_t* vm_add_r_i_2 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_2,"vm_add_r_i",0);
vm_store_mem_t* vm_store_mem_3 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_3,"vm_store_mem",0);

        if (lhs->imm < 0 || lhs->imm >= 65536){
                push(start);
	free(vm_prologue_0);
free(vm_mov_1);
free(vm_add_r_i_2);
free(vm_store_mem_3);
	bitmap_set(rule_bitmap,141);
return;

        }
        vm_prologue_0->reg1 = lhs->dest;
        vm_prologue_0->reg2 = lhs->reg1;
        vm_mov_1->reg1 = get_mem_reg(lhs->dest);
        vm_mov_1->reg2 = get_mem_reg(lhs->reg1);
        vm_add_r_i_2->reg1 = get_mem_reg(lhs->dest);
        vm_add_r_i_2->imm = lhs->imm;
        vm_store_mem_3->reg1 = lhs->dest;
        release_mem_regs();

	push(vm_store_mem_3);
	push(vm_add_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_sub_r_r_t_to_vm_xor_r_r_vm_load_mem_vm_add_r_r_vm_load_mem_vm_neg_r_vm_add_r_r_vm_mov_vm_store_mem(void *start){
	sub_r_r_t_t* lhs = (sub_r_r_t_t*)start;
	vm_xor_r_r_t* vm_xor_r_r_0 = malloc(sizeof(vm_xor_r_r_t));
	symbol_init(vm_xor_r_r_0,"vm_xor_r_r",0);
vm_load_mem_t* vm_load_mem_1 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_1,"vm_load_mem",0);
vm_add_r_r_t* vm_add_r_r_2 = malloc(sizeof(vm_add_r_r_t));
	symbol_init(vm_add_r_r_2,"vm_add_r_r",0);
vm_load_mem_t* vm_load_mem_3 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_3,"vm_load_mem",0);
vm_neg_r_t* vm_neg_r_4 = malloc(sizeof(vm_neg_r_t));
	symbol_init(vm_neg_r_4,"vm_neg_r",0);
vm_add_r_r_t* vm_add_r_r_5 = malloc(sizeof(vm_add_r_r_t));
	symbol_init(vm_add_r_r_5,"vm_add_r_r",0);
vm_mov_t* vm_mov_6 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_6,"vm_mov",0);
vm_store_mem_t* vm_store_mem_7 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_7,"vm_store_mem",0);

        vm_xor_r_r_0->reg1 = vreg_values[16];
        vm_xor_r_r_0->reg2 = vreg_values[16];
        vm_load_mem_1->reg1 = lhs->reg2;
        vm_add_r_r_2->reg1 = vreg_values[16];
        vm_add_r_r_2->reg2 = get_mem_reg(lhs->reg2);
        vm_load_mem_3->reg1 = get_mem_reg(lhs->reg1);
        vm_neg_r_4->reg1 = vreg_values[16];
        vm_add_r_r_5->reg1 = vreg_values[16];
        vm_add_r_r_5->reg2 = get_mem_reg(lhs->reg1);
        release_mem_regs();
        vm_mov_6->reg1=get_mem_reg(lhs->dest);
        vm_mov_6->reg2 = vreg_values[16];
        vm_store_mem_7->reg1 = lhs->dest;

	push(vm_store_mem_7);
	push(vm_mov_6);
	push(vm_add_r_r_5);
	push(vm_neg_r_4);
	push(vm_load_mem_3);
	push(vm_add_r_r_2);
	push(vm_load_mem_1);
	push(vm_xor_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_r_t_to_vm_add_r_r(void *start){
	add_r_r_t_t* lhs = (add_r_r_t_t*)start;
	vm_add_r_r_t* vm_add_r_r_0 = malloc(sizeof(vm_add_r_r_t));
	symbol_init(vm_add_r_r_0,"vm_add_r_r",0);

        if (lhs->dest != lhs->reg1 && lhs->dest!=lhs->reg2){
                push(start);
	free(vm_add_r_r_0);
	bitmap_set(rule_bitmap,143);
return;

        }
        if (lhs->dest == lhs->reg1){
                vm_add_r_r_0->reg1 = lhs->dest;
                vm_add_r_r_0->reg2 = lhs->reg2;
        }
        if (lhs->dest == lhs->reg2){
                vm_add_r_r_0->reg1 = lhs->dest;
                vm_add_r_r_0->reg2 = lhs->reg1;
        }
        if (lhs->reg1 == lhs->reg2){
                vm_add_r_r_0->reg1 = lhs->dest;
                vm_add_r_r_0->reg2 = lhs->dest;
        }

	push(vm_add_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_r_t_to_vm_prologue_vm_mov_vm_load_mem_vm_add_r_r_vm_store_mem(void *start){
	add_r_r_t_t* lhs = (add_r_r_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_load_mem_t* vm_load_mem_2 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_2,"vm_load_mem",0);
vm_add_r_r_t* vm_add_r_r_3 = malloc(sizeof(vm_add_r_r_t));
	symbol_init(vm_add_r_r_3,"vm_add_r_r",0);
vm_store_mem_t* vm_store_mem_4 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_4,"vm_store_mem",0);

        if (lhs->dest == lhs->reg1 || lhs->dest == lhs->reg2){
                push(start);
	free(vm_prologue_0);
free(vm_mov_1);
free(vm_load_mem_2);
free(vm_add_r_r_3);
free(vm_store_mem_4);
	bitmap_set(rule_bitmap,144);
return;

        }
        vm_prologue_0->reg1 = lhs->dest;
        vm_prologue_0->reg2 = lhs->reg1;
        vm_mov_1->reg1 = get_mem_reg(lhs->dest);
        vm_mov_1->reg2 = get_mem_reg(lhs->reg1);
        release_mem_reg(lhs->reg1);
        vm_load_mem_2->reg1 = lhs->reg2;
        vm_add_r_r_3->reg1 = get_mem_reg(lhs->dest);
        vm_add_r_r_3->reg2 = get_mem_reg(lhs->reg2);
        vm_store_mem_4->reg1 = lhs->dest;

	push(vm_store_mem_4);
	push(vm_add_r_r_3);
	push(vm_load_mem_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_muh_r_r_t_to_vm_prologue_vm_mov_vm_load_mem_vm_mov_vm_v_arit_vm_shr_r_i_vm_store_mem(void *start){
	muh_r_r_t_t* lhs = (muh_r_r_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_load_mem_t* vm_load_mem_2 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_2,"vm_load_mem",0);
vm_mov_t* vm_mov_3 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_3,"vm_mov",0);
vm_v_arit_t* vm_v_arit_4 = malloc(sizeof(vm_v_arit_t));
	symbol_init(vm_v_arit_4,"vm_v_arit",0);
vm_shr_r_i_t* vm_shr_r_i_5 = malloc(sizeof(vm_shr_r_i_t));
	symbol_init(vm_shr_r_i_5,"vm_shr_r_i",0);
vm_store_mem_t* vm_store_mem_6 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_6,"vm_store_mem",0);

        vm_prologue_0->reg1 = lhs->reg1;
        vm_prologue_0->reg2 = lhs->reg2;
        vm_mov_1->reg1 = vreg_values[16];
        vm_mov_1->reg2 = get_mem_reg(lhs->reg1);
        release_mem_reg(lhs->reg1);
        vm_load_mem_2->reg1 = lhs->dest;
        vm_mov_3->reg1 = get_mem_reg(lhs->dest);
        vm_mov_3->reg2 = get_mem_reg(lhs->reg2);
        vm_v_arit_4->imm = 0;
        vm_v_arit_4->reg1 = get_mem_reg(lhs->dest);
        vm_shr_r_i_5->reg1 = vm_v_arit_4->reg1;
        vm_shr_r_i_5->imm = 32;
        vm_store_mem_6->reg1 = lhs->dest; 

	push(vm_store_mem_6);
	push(vm_shr_r_i_5);
	push(vm_v_arit_4);
	push(vm_mov_3);
	push(vm_load_mem_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_lt_t_to_vm_prologue_vm_ltgt_vm_mov_i_vm_jlt_r_r(void *start){
	branch_lt_t_t* lhs = (branch_lt_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_ltgt_t* vm_ltgt_1 = malloc(sizeof(vm_ltgt_t));
	symbol_init(vm_ltgt_1,"vm_ltgt",0);
vm_mov_i_t* vm_mov_i_2 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_2,"vm_mov_i",0);
vm_jlt_r_r_t* vm_jlt_r_r_3 = malloc(sizeof(vm_jlt_r_r_t));
	symbol_init(vm_jlt_r_r_3,"vm_jlt_r_r",0);

        vm_prologue_0->reg1 = lhs->reg1;
        vm_prologue_0->reg2 = lhs->reg2;
        vm_mov_i_2->reg1 = vreg_values[23];
        vm_mov_i_2->imm = lhs->sign;
        vm_ltgt_1->address = lhs->address;
        vm_jlt_r_r_3->reg1 = get_mem_reg(lhs->reg1);
        vm_jlt_r_r_3->reg2 = get_mem_reg(lhs->reg2);

	push(vm_jlt_r_r_3);
	push(vm_mov_i_2);
	push(vm_ltgt_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_ge_t_to_vm_prologue_vm_mov_i_vm_ltgt_vm_je_r_r_vm_jlt_r_r(void *start){
	branch_ge_t_t* lhs = (branch_ge_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_i_t* vm_mov_i_1 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_1,"vm_mov_i",0);
vm_ltgt_t* vm_ltgt_2 = malloc(sizeof(vm_ltgt_t));
	symbol_init(vm_ltgt_2,"vm_ltgt",0);
vm_je_r_r_t* vm_je_r_r_3 = malloc(sizeof(vm_je_r_r_t));
	symbol_init(vm_je_r_r_3,"vm_je_r_r",0);
vm_jlt_r_r_t* vm_jlt_r_r_4 = malloc(sizeof(vm_jlt_r_r_t));
	symbol_init(vm_jlt_r_r_4,"vm_jlt_r_r",0);

        vm_prologue_0->reg1 = lhs->reg1;
        vm_prologue_0->reg2 = lhs->reg2;
        vm_mov_i_1->reg1 = vreg_values[23];
        vm_mov_i_1->imm = lhs->sign;
        vm_ltgt_2->address = lhs->address;
        vm_je_r_r_3->reg1 = get_mem_reg(lhs->reg1);
        vm_je_r_r_3->reg2 = get_mem_reg(lhs->reg2);
        vm_jlt_r_r_4->reg1 = get_mem_reg(lhs->reg2);
        vm_jlt_r_r_4->reg2 = get_mem_reg(lhs->reg1);

	push(vm_jlt_r_r_4);
	push(vm_je_r_r_3);
	push(vm_ltgt_2);
	push(vm_mov_i_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_seh_t_to_vm_prologue_vm_mov_vm_shl_r_i_vm_sar_r_i_vm_store_mem(void *start){
	seh_t_t* lhs = (seh_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_shl_r_i_t* vm_shl_r_i_2 = malloc(sizeof(vm_shl_r_i_t));
	symbol_init(vm_shl_r_i_2,"vm_shl_r_i",0);
vm_sar_r_i_t* vm_sar_r_i_3 = malloc(sizeof(vm_sar_r_i_t));
	symbol_init(vm_sar_r_i_3,"vm_sar_r_i",0);
vm_store_mem_t* vm_store_mem_4 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_4,"vm_store_mem",0);

        vm_prologue_0->reg1 = lhs->reg1;
        vm_prologue_0->reg2 = lhs->dest;
        vm_mov_1->reg1 = get_mem_reg(lhs->dest);
        vm_mov_1->reg2 = get_mem_reg(lhs->reg1);
        vm_shl_r_i_2->reg1 = get_mem_reg(lhs->dest);
        vm_shl_r_i_2->imm = 16;
        vm_sar_r_i_3->reg1 = get_mem_reg(lhs->dest);
        vm_sar_r_i_3->imm = 16;
        vm_store_mem_4->reg1 = lhs->dest;

	push(vm_store_mem_4);
	push(vm_sar_r_i_3);
	push(vm_shl_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_i_t_to_vm_load_mem_vm_mov_i_vm_store_mem(void *start){
	load_i_t_t* lhs = (load_i_t_t*)start;
	vm_load_mem_t* vm_load_mem_0 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_0,"vm_load_mem",0);
vm_mov_i_t* vm_mov_i_1 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_1,"vm_mov_i",0);
vm_store_mem_t* vm_store_mem_2 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_2,"vm_store_mem",0);

        vm_load_mem_0->reg1 = lhs->dest;
        vm_mov_i_1->reg1 = vm_load_mem_0->reg1;
        vm_mov_i_1->imm = lhs->imm;
        vm_store_mem_2->reg1 = lhs->dest;

	push(vm_store_mem_2);
	push(vm_mov_i_1);
	push(vm_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_data_label_to_vm_load_mem_vm_lea_r_m_vm_mov_i_vm_store_r_r(void *start){
	store_data_label_t* lhs = (store_data_label_t*)start;
	vm_load_mem_t* vm_load_mem_0 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_0,"vm_load_mem",0);
vm_lea_r_m_t* vm_lea_r_m_1 = malloc(sizeof(vm_lea_r_m_t));
	symbol_init(vm_lea_r_m_1,"vm_lea_r_m",0);
vm_mov_i_t* vm_mov_i_2 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_2,"vm_mov_i",0);
vm_store_r_r_t* vm_store_r_r_3 = malloc(sizeof(vm_store_r_r_t));
	symbol_init(vm_store_r_r_3,"vm_store_r_r",0);

        vm_load_mem_0->reg1 = lhs->src;
        vm_lea_r_m_1->reg1 = vreg_values[16];
        vm_lea_r_m_1->target = lhs->lab;
        vm_mov_i_2->reg1 = vreg_values[23];
        vm_mov_i_2->imm = lhs->size;
        vm_store_r_r_3->reg1 = get_mem_reg(lhs->src);
        vm_store_r_r_3->reg2 = vm_lea_r_m_1->reg1;

	push(vm_store_r_r_3);
	push(vm_mov_i_2);
	push(vm_lea_r_m_1);
	push(vm_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_data_label_to_vm_load_mem_vm_lea_r_m_vm_mov_i_vm_load_r_r_vm_store_mem(void *start){
	load_data_label_t* lhs = (load_data_label_t*)start;
	vm_load_mem_t* vm_load_mem_0 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_0,"vm_load_mem",0);
vm_lea_r_m_t* vm_lea_r_m_1 = malloc(sizeof(vm_lea_r_m_t));
	symbol_init(vm_lea_r_m_1,"vm_lea_r_m",0);
vm_mov_i_t* vm_mov_i_2 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_2,"vm_mov_i",0);
vm_load_r_r_t* vm_load_r_r_3 = malloc(sizeof(vm_load_r_r_t));
	symbol_init(vm_load_r_r_3,"vm_load_r_r",0);
vm_store_mem_t* vm_store_mem_4 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_4,"vm_store_mem",0);

        vm_load_mem_0->reg1 = lhs->dest;
        vm_lea_r_m_1->reg1 = get_mem_reg(lhs->dest);
        vm_lea_r_m_1->target = lhs->lab;
        vm_mov_i_2->reg1 = vreg_values[23];
        vm_mov_i_2->imm = lhs->size;
        vm_load_r_r_3->reg1 = vm_lea_r_m_1->reg1;
        vm_load_r_r_3->reg2 = vm_lea_r_m_1->reg1;
        vm_store_mem_4->reg1 = lhs->dest;

	push(vm_store_mem_4);
	push(vm_load_r_r_3);
	push(vm_mov_i_2);
	push(vm_lea_r_m_1);
	push(vm_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_label_to_vm_load_mem_vm_lea_r_m_vm_store_mem(void *start){
	load_label_t* lhs = (load_label_t*)start;
	vm_load_mem_t* vm_load_mem_0 = malloc(sizeof(vm_load_mem_t));
	symbol_init(vm_load_mem_0,"vm_load_mem",0);
vm_lea_r_m_t* vm_lea_r_m_1 = malloc(sizeof(vm_lea_r_m_t));
	symbol_init(vm_lea_r_m_1,"vm_lea_r_m",0);
vm_store_mem_t* vm_store_mem_2 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_2,"vm_store_mem",0);

        vm_load_mem_0->reg1 = lhs->dest;
        vm_lea_r_m_1->reg1 = get_mem_reg(lhs->dest);
        vm_lea_r_m_1->target = lhs->lab;
        vm_store_mem_2->reg1 = lhs->dest;

	push(vm_store_mem_2);
	push(vm_lea_r_m_1);
	push(vm_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_ra_t_to_vm_prologue_vm_mov_vm_sar_r_i_vm_store_mem(void *start){
	shift_ra_t_t* lhs = (shift_ra_t_t*)start;
	vm_prologue_t* vm_prologue_0 = malloc(sizeof(vm_prologue_t));
	symbol_init(vm_prologue_0,"vm_prologue",0);
vm_mov_t* vm_mov_1 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_1,"vm_mov",0);
vm_sar_r_i_t* vm_sar_r_i_2 = malloc(sizeof(vm_sar_r_i_t));
	symbol_init(vm_sar_r_i_2,"vm_sar_r_i",0);
vm_store_mem_t* vm_store_mem_3 = malloc(sizeof(vm_store_mem_t));
	symbol_init(vm_store_mem_3,"vm_store_mem",0);


        vm_prologue_0->reg1 = lhs->reg1;
        vm_prologue_0->reg2 = lhs->dest;
        vm_mov_1->reg1 = get_mem_reg(lhs->dest);
        vm_mov_1->reg2 = get_mem_reg(lhs->reg1);
        vm_sar_r_i_2->reg1 = vm_mov_1->reg1;
        vm_sar_r_i_2->imm = lhs->imm;
        vm_store_mem_3->reg1 = lhs->dest;

	push(vm_store_mem_3);
	push(vm_sar_r_i_2);
	push(vm_mov_1);
	push(vm_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_libc_t_to_vm_mov_i_vm_libc(void *start){
	libc_t_t* lhs = (libc_t_t*)start;
	vm_mov_i_t* vm_mov_i_0 = malloc(sizeof(vm_mov_i_t));
	symbol_init(vm_mov_i_0,"vm_mov_i",0);
vm_libc_t* vm_libc_1 = malloc(sizeof(vm_libc_t));
	symbol_init(vm_libc_1,"vm_libc",0);

        vm_mov_i_0->reg1 = vreg_values[22];
        vm_mov_i_0->imm = lhs->code;

	push(vm_libc_1);
	push(vm_mov_i_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_mov_i_to_vm_xor_r_r_vm_add_r_i_vm_add_r_i_big(void *start){
	vm_mov_i_t* lhs = (vm_mov_i_t*)start;
	vm_xor_r_r_t* vm_xor_r_r_0 = malloc(sizeof(vm_xor_r_r_t));
	symbol_init(vm_xor_r_r_0,"vm_xor_r_r",0);
vm_add_r_i_t* vm_add_r_i_1 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_1,"vm_add_r_i",0);
vm_add_r_i_big_t* vm_add_r_i_big_2 = malloc(sizeof(vm_add_r_i_big_t));
	symbol_init(vm_add_r_i_big_2,"vm_add_r_i_big",0);

        if (lhs->imm < 65536){
                push(start);
	free(vm_xor_r_r_0);
free(vm_add_r_i_1);
free(vm_add_r_i_big_2);
	bitmap_set(rule_bitmap,155);
return;

        }
        vm_xor_r_r_0->reg1 = lhs->reg1;
        vm_xor_r_r_0->reg2 = lhs->reg1;
        vm_add_r_i_1->reg1 = lhs->reg1;
        vm_add_r_i_1->imm = 60000;
        vm_add_r_i_big_2->reg1 = lhs->reg1;
        vm_add_r_i_big_2->imm = lhs->imm - 60000;

	push(vm_add_r_i_big_2);
	push(vm_add_r_i_1);
	push(vm_xor_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_mov_i_to_vm_xor_r_r_vm_add_r_i(void *start){
	vm_mov_i_t* lhs = (vm_mov_i_t*)start;
	vm_xor_r_r_t* vm_xor_r_r_0 = malloc(sizeof(vm_xor_r_r_t));
	symbol_init(vm_xor_r_r_0,"vm_xor_r_r",0);
vm_add_r_i_t* vm_add_r_i_1 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_1,"vm_add_r_i",0);

        if (lhs->imm >= 65536){
                push(start);
	free(vm_xor_r_r_0);
free(vm_add_r_i_1);
	bitmap_set(rule_bitmap,156);
return;

        }
        vm_xor_r_r_0->reg1 = lhs->reg1;
        vm_xor_r_r_0->reg2 = lhs->reg1;
        vm_add_r_i_1->reg1 = lhs->reg1;
        vm_add_r_i_1->imm = lhs->imm;

	push(vm_add_r_i_1);
	push(vm_xor_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_add_r_i_big_to_vm_add_r_i(void *start){
	vm_add_r_i_big_t* lhs = (vm_add_r_i_big_t*)start;
	vm_add_r_i_t* vm_add_r_i_0 = malloc(sizeof(vm_add_r_i_t));
	symbol_init(vm_add_r_i_0,"vm_add_r_i",0);

        if (lhs->imm >= 65536){
                push(start);
	free(vm_add_r_i_0);
	bitmap_set(rule_bitmap,157);
return;

        }
        vm_add_r_i_0->reg1 = lhs->reg1;
        vm_add_r_i_0->imm = lhs->imm;


	push(vm_add_r_i_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_vm_add_r_i_big_to_vm_add_r_i_big_vm_add_r_i_big(void *start){
	vm_add_r_i_big_t* lhs = (vm_add_r_i_big_t*)start;
	vm_add_r_i_big_t* vm_add_r_i_big_0 = malloc(sizeof(vm_add_r_i_big_t));
	symbol_init(vm_add_r_i_big_0,"vm_add_r_i_big",0);
vm_add_r_i_big_t* vm_add_r_i_big_1 = malloc(sizeof(vm_add_r_i_big_t));
	symbol_init(vm_add_r_i_big_1,"vm_add_r_i_big",0);

        if (lhs->imm < 65536){
                push(start);
	free(vm_add_r_i_big_0);
free(vm_add_r_i_big_1);
	bitmap_set(rule_bitmap,158);
return;

        }
        vm_add_r_i_big_0->reg1 = lhs->reg1;
        vm_add_r_i_big_0->imm = 65535;
        vm_add_r_i_big_1->reg1 = lhs->reg1;
        vm_add_r_i_big_1->imm = lhs->imm - vm_add_r_i_big_0->imm;


	push(vm_add_r_i_big_1);
	push(vm_add_r_i_big_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_r_to_add_r_r_t(void *start){
	add_r_r_t* lhs = (add_r_r_t*)start;
	add_r_r_t_t* add_r_r_t_0 = malloc(sizeof(add_r_r_t_t));
	symbol_init(add_r_r_t_0,"add_r_r_t",0);

        add_r_r_t_0->reg1 = map_register(lhs->reg1);
        add_r_r_t_0->reg2 = map_register(lhs->reg2);
        add_r_r_t_0->dest = map_register(lhs->dest);

	push(add_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dadd_r_r_to_add_r_r_t(void *start){
	dadd_r_r_t* lhs = (dadd_r_r_t*)start;
	add_r_r_t_t* add_r_r_t_0 = malloc(sizeof(add_r_r_t_t));
	symbol_init(add_r_r_t_0,"add_r_r_t",0);

        add_r_r_t_0->reg1 = map_register(lhs->reg1);
        add_r_r_t_0->reg2 = map_register(lhs->reg2);
        add_r_r_t_0->dest = map_register(lhs->dest);

	push(add_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_addu_r_r_to_add_r_r_t(void *start){
	addu_r_r_t* lhs = (addu_r_r_t*)start;
	add_r_r_t_t* add_r_r_t_0 = malloc(sizeof(add_r_r_t_t));
	symbol_init(add_r_r_t_0,"add_r_r_t",0);

        add_r_r_t_0->reg1 = map_register(lhs->reg1);
        add_r_r_t_0->reg2 = map_register(lhs->reg2);
        add_r_r_t_0->dest = map_register(lhs->dest);

	push(add_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_daddu_r_r_to_add_r_r_t(void *start){
	daddu_r_r_t* lhs = (daddu_r_r_t*)start;
	add_r_r_t_t* add_r_r_t_0 = malloc(sizeof(add_r_r_t_t));
	symbol_init(add_r_r_t_0,"add_r_r_t",0);

        add_r_r_t_0->reg1 = map_register(lhs->reg1);
        add_r_r_t_0->reg2 = map_register(lhs->reg2);
        add_r_r_t_0->dest = map_register(lhs->dest);

	push(add_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_sub_r_r_to_sub_r_r_t(void *start){
	sub_r_r_t* lhs = (sub_r_r_t*)start;
	sub_r_r_t_t* sub_r_r_t_0 = malloc(sizeof(sub_r_r_t_t));
	symbol_init(sub_r_r_t_0,"sub_r_r_t",0);

        sub_r_r_t_0->reg1 = map_register(lhs->reg1);
        sub_r_r_t_0->reg2 = map_register(lhs->reg2);
        sub_r_r_t_0->dest = map_register(lhs->dest);
 

	push(sub_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_subu_r_r_to_sub_r_r_t(void *start){
	subu_r_r_t* lhs = (subu_r_r_t*)start;
	sub_r_r_t_t* sub_r_r_t_0 = malloc(sizeof(sub_r_r_t_t));
	symbol_init(sub_r_r_t_0,"sub_r_r_t",0);

        sub_r_r_t_0->reg1 = map_register(lhs->reg1);
        sub_r_r_t_0->reg2 = map_register(lhs->reg2);
        sub_r_r_t_0->dest = map_register(lhs->dest);
 

	push(sub_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dsubu_r_r_to_sub_r_r_t(void *start){
	dsubu_r_r_t* lhs = (dsubu_r_r_t*)start;
	sub_r_r_t_t* sub_r_r_t_0 = malloc(sizeof(sub_r_r_t_t));
	symbol_init(sub_r_r_t_0,"sub_r_r_t",0);

        sub_r_r_t_0->reg1 = map_register(lhs->reg1);
        sub_r_r_t_0->reg2 = map_register(lhs->reg2);
        sub_r_r_t_0->dest = map_register(lhs->dest);
 

	push(sub_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_i_to_add_r_i_t(void *start){
	add_r_i_t* lhs = (add_r_i_t*)start;
	add_r_i_t_t* add_r_i_t_0 = malloc(sizeof(add_r_i_t_t));
	symbol_init(add_r_i_t_0,"add_r_i_t",0);

        
        add_r_i_t_0->reg1 = map_register(lhs->reg1);
        add_r_i_t_0->imm = lhs->imm;
        add_r_i_t_0->dest = map_register(lhs->dest);

	push(add_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dadd_r_i_to_add_r_i_t(void *start){
	dadd_r_i_t* lhs = (dadd_r_i_t*)start;
	add_r_i_t_t* add_r_i_t_0 = malloc(sizeof(add_r_i_t_t));
	symbol_init(add_r_i_t_0,"add_r_i_t",0);

        
        add_r_i_t_0->reg1 = map_register(lhs->reg1);
        add_r_i_t_0->imm = lhs->imm;
        add_r_i_t_0->dest = map_register(lhs->dest);

	push(add_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_daddu_r_i_to_add_r_i_t(void *start){
	daddu_r_i_t* lhs = (daddu_r_i_t*)start;
	add_r_i_t_t* add_r_i_t_0 = malloc(sizeof(add_r_i_t_t));
	symbol_init(add_r_i_t_0,"add_r_i_t",0);

        
        add_r_i_t_0->reg1 = map_register(lhs->reg1);
        add_r_i_t_0->imm = lhs->imm;
        add_r_i_t_0->dest = map_register(lhs->dest);

	push(add_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_i_to_load_i_t(void *start){
	load_i_t* lhs = (load_i_t*)start;
	load_i_t_t* load_i_t_0 = malloc(sizeof(load_i_t_t));
	symbol_init(load_i_t_0,"load_i_t",0);

        load_i_t_0->dest = map_register(lhs->dest);
        load_i_t_0->imm = lhs->imm;

	push(load_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_muh_r_r_to_muh_r_r_t(void *start){
	muh_r_r_t* lhs = (muh_r_r_t*)start;
	muh_r_r_t_t* muh_r_r_t_0 = malloc(sizeof(muh_r_r_t_t));
	symbol_init(muh_r_r_t_0,"muh_r_r_t",0);

        muh_r_r_t_0->reg1 = map_register(lhs->reg1);
        muh_r_r_t_0->reg2 = map_register(lhs->reg2);
        muh_r_r_t_0->dest = map_register(lhs->dest);

	push(muh_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mul_r_r_to_mul_r_r_t(void *start){
	mul_r_r_t* lhs = (mul_r_r_t*)start;
	mul_r_r_t_t* mul_r_r_t_0 = malloc(sizeof(mul_r_r_t_t));
	symbol_init(mul_r_r_t_0,"mul_r_r_t",0);

        mul_r_r_t_0->reg1 = map_register(lhs->reg1);
        mul_r_r_t_0->reg2 = map_register(lhs->reg2);

	push(mul_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_div_r_r_to_div_r_r_t(void *start){
	div_r_r_t* lhs = (div_r_r_t*)start;
	div_r_r_t_t* div_r_r_t_0 = malloc(sizeof(div_r_r_t_t));
	symbol_init(div_r_r_t_0,"div_r_r_t",0);

        div_r_r_t_0->reg1 = map_register(lhs->reg1);
        div_r_r_t_0->reg2 = map_register(lhs->reg2);

	push(div_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_dw_to_load_dw_t(void *start){
	load_dw_t* lhs = (load_dw_t*)start;
	load_dw_t_t* load_dw_t_0 = malloc(sizeof(load_dw_t_t));
	symbol_init(load_dw_t_0,"load_dw_t",0);

        load_dw_t_0->dest = map_register(lhs->dest);
        load_dw_t_0->offset = lhs->offset;
        load_dw_t_0->base = map_register(lhs->base);

	push(load_dw_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_w_to_load_w_t(void *start){
	load_w_t* lhs = (load_w_t*)start;
	load_w_t_t* load_w_t_0 = malloc(sizeof(load_w_t_t));
	symbol_init(load_w_t_0,"load_w_t",0);

        
        load_w_t_0->dest = map_register(lhs->dest);
        load_w_t_0->offset = lhs->offset;
        load_w_t_0->base = map_register(lhs->base);

	push(load_w_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_h_to_load_h_t(void *start){
	load_h_t* lhs = (load_h_t*)start;
	load_h_t_t* load_h_t_0 = malloc(sizeof(load_h_t_t));
	symbol_init(load_h_t_0,"load_h_t",0);

        
        load_h_t_0->dest = map_register(lhs->dest);
        load_h_t_0->offset = lhs->offset;
        load_h_t_0->base = map_register(lhs->base);


	push(load_h_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_b_to_load_b_t(void *start){
	load_b_t* lhs = (load_b_t*)start;
	load_b_t_t* load_b_t_0 = malloc(sizeof(load_b_t_t));
	symbol_init(load_b_t_0,"load_b_t",0);

        
        load_b_t_0->dest = map_register(lhs->dest);
        load_b_t_0->offset = lhs->offset;
        load_b_t_0->base = map_register(lhs->base);


	push(load_b_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_b_u_to_load_b_u_t(void *start){
	load_b_u_t* lhs = (load_b_u_t*)start;
	load_b_u_t_t* load_b_u_t_0 = malloc(sizeof(load_b_u_t_t));
	symbol_init(load_b_u_t_0,"load_b_u_t",0);

        
        load_b_u_t_0->dest = map_register(lhs->dest);
        load_b_u_t_0->offset = lhs->offset;
        load_b_u_t_0->base = map_register(lhs->base);


	push(load_b_u_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_r_to_and_r_r_t(void *start){
	and_r_r_t* lhs = (and_r_r_t*)start;
	and_r_r_t_t* and_r_r_t_0 = malloc(sizeof(and_r_r_t_t));
	symbol_init(and_r_r_t_0,"and_r_r_t",0);

        and_r_r_t_0->reg1 = map_register(lhs->reg1);
        and_r_r_t_0->reg2 = map_register(lhs->reg2);
        and_r_r_t_0->dest = map_register(lhs->dest);

	push(and_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_i_to_and_r_i_t(void *start){
	and_r_i_t* lhs = (and_r_i_t*)start;
	and_r_i_t_t* and_r_i_t_0 = malloc(sizeof(and_r_i_t_t));
	symbol_init(and_r_i_t_0,"and_r_i_t",0);

        
        and_r_i_t_0->reg1 = map_register(lhs->reg1);
        and_r_i_t_0->imm  = lhs->imm;
        and_r_i_t_0->dest = map_register(lhs->dest);

	push(and_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_i_hex_to_and_r_i_t(void *start){
	and_r_i_hex_t* lhs = (and_r_i_hex_t*)start;
	and_r_i_t_t* and_r_i_t_0 = malloc(sizeof(and_r_i_t_t));
	symbol_init(and_r_i_t_0,"and_r_i_t",0);

        
        and_r_i_t_0->reg1 = map_register(lhs->reg1);
        and_r_i_t_0->imm  = lhs->imm;
        and_r_i_t_0->dest = map_register(lhs->dest);

	push(and_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_r_to_or_r_r_t(void *start){
	or_r_r_t* lhs = (or_r_r_t*)start;
	or_r_r_t_t* or_r_r_t_0 = malloc(sizeof(or_r_r_t_t));
	symbol_init(or_r_r_t_0,"or_r_r_t",0);


        or_r_r_t_0->reg1 = map_register(lhs->reg1);
        or_r_r_t_0->reg2 = map_register(lhs->reg2);
        or_r_r_t_0->dest = map_register(lhs->dest);

	push(or_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_i_to_or_r_i_t(void *start){
	or_r_i_t* lhs = (or_r_i_t*)start;
	or_r_i_t_t* or_r_i_t_0 = malloc(sizeof(or_r_i_t_t));
	symbol_init(or_r_i_t_0,"or_r_i_t",0);


        or_r_i_t_0->reg1 = map_register(lhs->reg1);
        or_r_i_t_0->imm  = lhs->imm;
        or_r_i_t_0->dest = map_register(lhs->dest);


	push(or_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_i_hex_to_or_r_i_t(void *start){
	or_r_i_hex_t* lhs = (or_r_i_hex_t*)start;
	or_r_i_t_t* or_r_i_t_0 = malloc(sizeof(or_r_i_t_t));
	symbol_init(or_r_i_t_0,"or_r_i_t",0);


        or_r_i_t_0->reg1 = map_register(lhs->reg1);
        or_r_i_t_0->imm  = lhs->imm;
        or_r_i_t_0->dest = map_register(lhs->dest);


	push(or_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_xor_r_r_to_xor_r_r_t(void *start){
	xor_r_r_t* lhs = (xor_r_r_t*)start;
	xor_r_r_t_t* xor_r_r_t_0 = malloc(sizeof(xor_r_r_t_t));
	symbol_init(xor_r_r_t_0,"xor_r_r_t",0);

        
        xor_r_r_t_0->reg1 = map_register(lhs->reg1);
        xor_r_r_t_0->reg2 = map_register(lhs->reg2);
        xor_r_r_t_0->dest = map_register(lhs->dest);


	push(xor_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_d_to_store_d_t(void *start){
	store_d_t* lhs = (store_d_t*)start;
	store_d_t_t* store_d_t_0 = malloc(sizeof(store_d_t_t));
	symbol_init(store_d_t_0,"store_d_t",0);


        store_d_t_0->source = map_register(lhs->source);
        store_d_t_0->base = map_register(lhs->base);
        store_d_t_0->offset = lhs->offset;

	push(store_d_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_w_to_store_w_t(void *start){
	store_w_t* lhs = (store_w_t*)start;
	store_w_t_t* store_w_t_0 = malloc(sizeof(store_w_t_t));
	symbol_init(store_w_t_0,"store_w_t",0);


        store_w_t_0->source = map_register(lhs->source);
        store_w_t_0->base = map_register(lhs->base);
        store_w_t_0->offset = lhs->offset;

	push(store_w_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_h_to_store_h_t(void *start){
	store_h_t* lhs = (store_h_t*)start;
	store_h_t_t* store_h_t_0 = malloc(sizeof(store_h_t_t));
	symbol_init(store_h_t_0,"store_h_t",0);


        store_h_t_0->source = map_register(lhs->source);
        store_h_t_0->base = map_register(lhs->base);
        store_h_t_0->offset = lhs->offset;

	push(store_h_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_b_to_store_b_t(void *start){
	store_b_t* lhs = (store_b_t*)start;
	store_b_t_t* store_b_t_0 = malloc(sizeof(store_b_t_t));
	symbol_init(store_b_t_0,"store_b_t",0);


        store_b_t_0->source = map_register(lhs->source);
        store_b_t_0->base = map_register(lhs->base);
        store_b_t_0->offset = lhs->offset;

	push(store_b_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_move_h_to_vm_mov(void *start){
	move_h_t* lhs = (move_h_t*)start;
	vm_mov_t* vm_mov_0 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_0,"vm_mov",0);

        vm_mov_0->reg1 = map_register(lhs->dest);
        vm_mov_0->reg2 = map_register(reg_values[31]);

	push(vm_mov_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_move_l_to_vm_mov(void *start){
	move_l_t* lhs = (move_l_t*)start;
	vm_mov_t* vm_mov_0 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_0,"vm_mov",0);


        vm_mov_0->reg1 = map_register(lhs->dest);
        vm_mov_0->reg2 = map_register(reg_values[32]);

	push(vm_mov_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_nor_r_r_to_nor_r_r_t(void *start){
	nor_r_r_t* lhs = (nor_r_r_t*)start;
	nor_r_r_t_t* nor_r_r_t_0 = malloc(sizeof(nor_r_r_t_t));
	symbol_init(nor_r_r_t_0,"nor_r_r_t",0);

        nor_r_r_t_0->reg1 = map_register(lhs->reg1);
        nor_r_r_t_0->reg2 = map_register(lhs->reg2);
        nor_r_r_t_0->dest = map_register(lhs->dest);

	push(nor_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_l_to_shift_l_t(void *start){
	shift_l_t* lhs = (shift_l_t*)start;
	shift_l_t_t* shift_l_t_0 = malloc(sizeof(shift_l_t_t));
	symbol_init(shift_l_t_0,"shift_l_t",0);

        shift_l_t_0->reg1 = map_register(lhs->reg1);
        shift_l_t_0->imm = lhs->imm;
        shift_l_t_0->dest = map_register(lhs->dest);

	push(shift_l_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dsll_to_shift_l_t(void *start){
	dsll_t* lhs = (dsll_t*)start;
	shift_l_t_t* shift_l_t_0 = malloc(sizeof(shift_l_t_t));
	symbol_init(shift_l_t_0,"shift_l_t",0);

        shift_l_t_0->reg1 = map_register(lhs->reg1);
        shift_l_t_0->imm = lhs->imm;
        shift_l_t_0->dest = map_register(lhs->dest);

	push(shift_l_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_r_to_shift_r_t(void *start){
	shift_r_t* lhs = (shift_r_t*)start;
	shift_r_t_t* shift_r_t_0 = malloc(sizeof(shift_r_t_t));
	symbol_init(shift_r_t_0,"shift_r_t",0);

        shift_r_t_0->reg1 = map_register(lhs->reg1);
        shift_r_t_0->imm = lhs->imm;
        shift_r_t_0->dest = map_register(lhs->dest);

	push(shift_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dsrl_to_shift_r_t(void *start){
	dsrl_t* lhs = (dsrl_t*)start;
	shift_r_t_t* shift_r_t_0 = malloc(sizeof(shift_r_t_t));
	symbol_init(shift_r_t_0,"shift_r_t",0);

        shift_r_t_0->reg1 = map_register(lhs->reg1);
        shift_r_t_0->imm = lhs->imm;
        shift_r_t_0->dest = map_register(lhs->dest);

	push(shift_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_eq_r_r_to_branch_eq_r_r_t(void *start){
	branch_eq_r_r_t* lhs = (branch_eq_r_r_t*)start;
	branch_eq_r_r_t_t* branch_eq_r_r_t_0 = malloc(sizeof(branch_eq_r_r_t_t));
	symbol_init(branch_eq_r_r_t_0,"branch_eq_r_r_t",0);

        branch_eq_r_r_t_0->reg1 = map_register(lhs->reg1);
        branch_eq_r_r_t_0->reg2 = map_register(lhs->reg2);
        branch_eq_r_r_t_0->address = lhs->address;
        branch_eq_r_r_t_0->sign = 1;

	push(branch_eq_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_eq_c_to_branch_eq_r_r_t(void *start){
	branch_eq_c_t* lhs = (branch_eq_c_t*)start;
	branch_eq_r_r_t_t* branch_eq_r_r_t_0 = malloc(sizeof(branch_eq_r_r_t_t));
	symbol_init(branch_eq_r_r_t_0,"branch_eq_r_r_t",0);

        branch_eq_r_r_t_0->reg1 = map_register(lhs->reg1);
        branch_eq_r_r_t_0->reg2 = map_register(lhs->reg2);
        branch_eq_r_r_t_0->address = lhs->target;
        branch_eq_r_r_t_0->sign = 1;

	push(branch_eq_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_eqz_c_to_branch_eq_r_r_t(void *start){
	branch_eqz_c_t* lhs = (branch_eqz_c_t*)start;
	branch_eq_r_r_t_t* branch_eq_r_r_t_0 = malloc(sizeof(branch_eq_r_r_t_t));
	symbol_init(branch_eq_r_r_t_0,"branch_eq_r_r_t",0);

        branch_eq_r_r_t_0->reg1 = map_register(lhs->reg1);
        branch_eq_r_r_t_0->reg2 = map_register(reg_values[0]);
        branch_eq_r_r_t_0->address = lhs->target;
        branch_eq_r_r_t_0->sign = 1;

	push(branch_eq_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_gez_c_to_branch_ge_t(void *start){
	branch_gez_c_t* lhs = (branch_gez_c_t*)start;
	branch_ge_t_t* branch_ge_t_0 = malloc(sizeof(branch_ge_t_t));
	symbol_init(branch_ge_t_0,"branch_ge_t",0);

        branch_ge_t_0->reg1 = map_register(lhs->reg1);
        branch_ge_t_0->reg2 = map_register(reg_values[0]);
        branch_ge_t_0->address = lhs->target;
        branch_ge_t_0->sign = 1;

	push(branch_ge_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_gtz_c_to_branch_lt_t(void *start){
	branch_gtz_c_t* lhs = (branch_gtz_c_t*)start;
	branch_lt_t_t* branch_lt_t_0 = malloc(sizeof(branch_lt_t_t));
	symbol_init(branch_lt_t_0,"branch_lt_t",0);

        branch_lt_t_0->reg2 = map_register(lhs->reg1);
        branch_lt_t_0->reg1 = map_register(reg_values[0]);
        branch_lt_t_0->address = lhs->target;
        branch_lt_t_0->sign = 1;

	push(branch_lt_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_ge_c_to_branch_ge_t(void *start){
	branch_ge_c_t* lhs = (branch_ge_c_t*)start;
	branch_ge_t_t* branch_ge_t_0 = malloc(sizeof(branch_ge_t_t));
	symbol_init(branch_ge_t_0,"branch_ge_t",0);

        branch_ge_t_0->reg1 = map_register(lhs->reg1);
        branch_ge_t_0->reg2 = map_register(lhs->reg2);
        branch_ge_t_0->address = lhs->target;
        branch_ge_t_0->sign = 1;

	push(branch_ge_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_geu_c_to_branch_ge_t(void *start){
	branch_geu_c_t* lhs = (branch_geu_c_t*)start;
	branch_ge_t_t* branch_ge_t_0 = malloc(sizeof(branch_ge_t_t));
	symbol_init(branch_ge_t_0,"branch_ge_t",0);

        branch_ge_t_0->reg1 = map_register(lhs->reg1);
        branch_ge_t_0->reg2 = map_register(lhs->reg2);
        branch_ge_t_0->address = lhs->target;
        branch_ge_t_0->sign = 0;

	push(branch_ge_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_neq_r_r_to_branch_neq_r_r_t(void *start){
	branch_neq_r_r_t* lhs = (branch_neq_r_r_t*)start;
	branch_neq_r_r_t_t* branch_neq_r_r_t_0 = malloc(sizeof(branch_neq_r_r_t_t));
	symbol_init(branch_neq_r_r_t_0,"branch_neq_r_r_t",0);

        branch_neq_r_r_t_0->reg1 = map_register(lhs->reg1);
        branch_neq_r_r_t_0->reg2 = map_register(lhs->reg2);
        branch_neq_r_r_t_0->address = lhs->address;
        branch_neq_r_r_t_0->sign = 1;

	push(branch_neq_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_neq_c_to_branch_neq_r_r_t(void *start){
	branch_neq_c_t* lhs = (branch_neq_c_t*)start;
	branch_neq_r_r_t_t* branch_neq_r_r_t_0 = malloc(sizeof(branch_neq_r_r_t_t));
	symbol_init(branch_neq_r_r_t_0,"branch_neq_r_r_t",0);

        branch_neq_r_r_t_0->reg1 = map_register(lhs->reg1);
        branch_neq_r_r_t_0->reg2 = map_register(lhs->reg2);
        branch_neq_r_r_t_0->address = lhs->target;
        branch_neq_r_r_t_0->sign = 1;

	push(branch_neq_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_nez_c_to_branch_neq_r_r_t(void *start){
	branch_nez_c_t* lhs = (branch_nez_c_t*)start;
	branch_neq_r_r_t_t* branch_neq_r_r_t_0 = malloc(sizeof(branch_neq_r_r_t_t));
	symbol_init(branch_neq_r_r_t_0,"branch_neq_r_r_t",0);

        branch_neq_r_r_t_0->reg1 = map_register(lhs->reg1);
        branch_neq_r_r_t_0->reg2 = map_register(reg_values[0]);
        branch_neq_r_r_t_0->address = lhs->target;
        branch_neq_r_r_t_0->sign = 1;

	push(branch_neq_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_jump_to_jump_t(void *start){
	jump_t* lhs = (jump_t*)start;
	jump_t_t* jump_t_0 = malloc(sizeof(jump_t_t));
	symbol_init(jump_t_0,"jump_t",0);


        jump_t_0->address = lhs->address;


	push(jump_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_c_to_jump_t(void *start){
	branch_c_t* lhs = (branch_c_t*)start;
	jump_t_t* jump_t_0 = malloc(sizeof(jump_t_t));
	symbol_init(jump_t_0,"jump_t",0);


        jump_t_0->address = lhs->target;


	push(jump_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_jump_r_to_jump_r_t(void *start){
	jump_r_t* lhs = (jump_r_t*)start;
	jump_r_t_t* jump_r_t_0 = malloc(sizeof(jump_r_t_t));
	symbol_init(jump_r_t_0,"jump_r_t",0);


        jump_r_t_0->reg1 = map_register(lhs->reg1);


	push(jump_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_jump_r_c_to_jump_r_t(void *start){
	jump_r_c_t* lhs = (jump_r_c_t*)start;
	jump_r_t_t* jump_r_t_0 = malloc(sizeof(jump_r_t_t));
	symbol_init(jump_r_t_0,"jump_r_t",0);


        jump_r_t_0->reg1 = map_register(lhs->reg1);


	push(jump_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_teq_to_libc_t(void *start){
	teq_t* lhs = (teq_t*)start;
	libc_t_t* libc_t_0 = malloc(sizeof(libc_t_t));
	symbol_init(libc_t_0,"libc_t",0);

        libc_t_0->code = get_libc_code("abort"); 

	push(libc_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_ltz_c_to_branch_lt_t(void *start){
	branch_ltz_c_t* lhs = (branch_ltz_c_t*)start;
	branch_lt_t_t* branch_lt_t_0 = malloc(sizeof(branch_lt_t_t));
	symbol_init(branch_lt_t_0,"branch_lt_t",0);

        branch_lt_t_0->reg1 = map_register(lhs->reg1);
        branch_lt_t_0->reg2 = map_register(reg_values[0]);
        branch_lt_t_0->address = lhs->target;
        branch_lt_t_0->sign = 1;

	push(branch_lt_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_lt_c_to_branch_lt_t(void *start){
	branch_lt_c_t* lhs = (branch_lt_c_t*)start;
	branch_lt_t_t* branch_lt_t_0 = malloc(sizeof(branch_lt_t_t));
	symbol_init(branch_lt_t_0,"branch_lt_t",0);

        branch_lt_t_0->reg1 = map_register(lhs->reg1);
        branch_lt_t_0->reg2 = map_register(lhs->reg2);
        branch_lt_t_0->address = lhs->target;
        branch_lt_t_0->sign = 1;

	push(branch_lt_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_ltu_c_to_branch_lt_t(void *start){
	branch_ltu_c_t* lhs = (branch_ltu_c_t*)start;
	branch_lt_t_t* branch_lt_t_0 = malloc(sizeof(branch_lt_t_t));
	symbol_init(branch_lt_t_0,"branch_lt_t",0);

        branch_lt_t_0->reg1 = map_register(lhs->reg1);
        branch_lt_t_0->reg2 = map_register(lhs->reg2);
        branch_lt_t_0->address = lhs->target;
        branch_lt_t_0->sign = 0;

	push(branch_lt_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_ra_to_shift_ra_t(void *start){
	shift_ra_t* lhs = (shift_ra_t*)start;
	shift_ra_t_t* shift_ra_t_0 = malloc(sizeof(shift_ra_t_t));
	symbol_init(shift_ra_t_0,"shift_ra_t",0);

        shift_ra_t_0->reg1 = map_register(lhs->reg1);
        shift_ra_t_0->dest = map_register(lhs->dest);
        shift_ra_t_0->imm = lhs->imm;

	push(shift_ra_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_call_to_call_t(void *start){
	call_t* lhs = (call_t*)start;
	call_t_t* call_t_0 = malloc(sizeof(call_t_t));
	symbol_init(call_t_0,"call_t",0);


       call_t_0->address = lhs->address; 


	push(call_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_balc_to_call_t(void *start){
	balc_t* lhs = (balc_t*)start;
	call_t_t* call_t_0 = malloc(sizeof(call_t_t));
	symbol_init(call_t_0,"call_t",0);


       call_t_0->address = lhs->target; 


	push(call_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_la_r_a_to_la_r_a_t(void *start){
	la_r_a_t* lhs = (la_r_a_t*)start;
	la_r_a_t_t* la_r_a_t_0 = malloc(sizeof(la_r_a_t_t));
	symbol_init(la_r_a_t_0,"la_r_a_t",0);

        la_r_a_t_0->reg1 = map_register(lhs->reg1);
        la_r_a_t_0->target = lhs->target;

	push(la_r_a_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_addu_r_i_to_add_r_i_t(void *start){
	addu_r_i_t* lhs = (addu_r_i_t*)start;
	add_r_i_t_t* add_r_i_t_0 = malloc(sizeof(add_r_i_t_t));
	symbol_init(add_r_i_t_0,"add_r_i_t",0);

        
        add_r_i_t_0->reg1 = map_register(lhs->reg1);
        add_r_i_t_0->imm = lhs->imm;
        add_r_i_t_0->dest = map_register(lhs->dest);

	push(add_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_set_l_r_i_to_set_l_r_i_t(void *start){
	set_l_r_i_t* lhs = (set_l_r_i_t*)start;
	set_l_r_i_t_t* set_l_r_i_t_0 = malloc(sizeof(set_l_r_i_t_t));
	symbol_init(set_l_r_i_t_0,"set_l_r_i_t",0);

        set_l_r_i_t_0->reg1 = map_register(lhs->reg1);
        set_l_r_i_t_0->dest = map_register(lhs->dest);
        set_l_r_i_t_0->imm = lhs->imm;

	push(set_l_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_set_l_r_r_to_set_l_r_r_t(void *start){
	set_l_r_r_t* lhs = (set_l_r_r_t*)start;
	set_l_r_r_t_t* set_l_r_r_t_0 = malloc(sizeof(set_l_r_r_t_t));
	symbol_init(set_l_r_r_t_0,"set_l_r_r_t",0);

        set_l_r_r_t_0->reg1 = map_register(lhs->reg1);
        set_l_r_r_t_0->dest = map_register(lhs->dest);
        set_l_r_r_t_0->reg2 = map_register(lhs->reg2);
        set_l_r_r_t_0->sign = 1;

	push(set_l_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_set_l_r_r_u_to_set_l_r_r_t(void *start){
	set_l_r_r_u_t* lhs = (set_l_r_r_u_t*)start;
	set_l_r_r_t_t* set_l_r_r_t_0 = malloc(sizeof(set_l_r_r_t_t));
	symbol_init(set_l_r_r_t_0,"set_l_r_r_t",0);

        set_l_r_r_t_0->reg1 = map_register(lhs->reg1);
        set_l_r_r_t_0->dest = map_register(lhs->dest);
        set_l_r_r_t_0->reg2 = map_register(lhs->reg2);
        set_l_r_r_t_0->sign = 0;

	push(set_l_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_move_to_vm_mov(void *start){
	move_t* lhs = (move_t*)start;
	vm_mov_t* vm_mov_0 = malloc(sizeof(vm_mov_t));
	symbol_init(vm_mov_0,"vm_mov",0);

        vm_mov_0->reg2 = map_register(lhs->src);
        vm_mov_0->reg1 = map_register(lhs->dest);

	push(vm_mov_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_seh_to_seh_t(void *start){
	seh_t* lhs = (seh_t*)start;
	seh_t_t* seh_t_0 = malloc(sizeof(seh_t_t));
	symbol_init(seh_t_0,"seh_t",0);

        seh_t_0->reg1 = map_register(lhs->reg1);
        seh_t_0->dest = map_register(lhs->dest);

	push(seh_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
rule_func rule_functions[MAX_RULE];

void init_rule_array(void){
	
rule_functions[0] = from_la_r_a_to_LA_R_A;
rule_functions[1] = from_syscall_to_SYSCALL;
rule_functions[2] = from_call_to_CALL;
rule_functions[3] = from_jump_r_to_JUMP_R;
rule_functions[4] = from_jump_to_JUMP;
rule_functions[5] = from_branch_neq_r_r_to_BRANCH_NEQ_R_R;
rule_functions[6] = from_branch_eq_r_r_to_BRANCH_EQ_R_R;
rule_functions[7] = from_shift_r_to_SHIFT_R;
rule_functions[8] = from_shift_l_to_SHIFT_L;
rule_functions[9] = from_set_l_r_i_to_SET_L_R_I;
rule_functions[10] = from_set_l_r_r_u_to_SET_L_R_R_U;
rule_functions[11] = from_set_l_r_r_to_SET_L_R_R;
rule_functions[12] = from_nor_r_r_to_NOR_R_R;
rule_functions[13] = from_xor_r_r_to_XOR_R_R;
rule_functions[14] = from_or_r_i_to_OR_R_I;
rule_functions[15] = from_or_r_r_to_OR_R_R;
rule_functions[16] = from_and_r_r_to_AND_R_R;
rule_functions[17] = from_and_r_i_to_AND_R_I;
rule_functions[18] = from_move_l_to_MOVE_L;
rule_functions[19] = from_move_h_to_MOVE_H;
rule_functions[20] = from_store_b_to_STORE_B;
rule_functions[21] = from_store_h_to_STORE_H;
rule_functions[22] = from_store_w_to_STORE_W;
rule_functions[23] = from_store_d_to_STORE_D;
rule_functions[24] = from_load_b_u_to_LOAD_B_U;
rule_functions[25] = from_load_b_to_LOAD_B;
rule_functions[26] = from_load_h_to_LOAD_H;
rule_functions[27] = from_load_w_to_LOAD_W;
rule_functions[28] = from_load_dw_to_LOAD_DW;
rule_functions[29] = from_div_r_r_to_DIV_R_R;
rule_functions[30] = from_mul_r_r_to_MUL_R_R;
rule_functions[31] = from_add_r_i_to_ADD_R_I;
rule_functions[32] = from_dadd_r_i_to_DADD_R_I;
rule_functions[33] = from_sub_r_r_to_SUB_R_R;
rule_functions[34] = from_dadd_r_r_to_DADD_R_R;
rule_functions[35] = from_add_r_r_to_ADD_R_R;
rule_functions[36] = from_code_label_to_CODE_LABEL;
rule_functions[37] = from_decl_to_DECL;
rule_functions[38] = from_data_to_DATA;
rule_functions[39] = from_move_to_MOVE;
rule_functions[40] = from_dsubu_r_r_to_DSUBU_R_R;
rule_functions[41] = from_daddu_r_r_to_DADDU_R_R;
rule_functions[42] = from_daddu_r_i_to_DADDU_R_I;
rule_functions[43] = from_addu_r_r_to_ADDU_R_R;
rule_functions[44] = from_addu_r_i_to_ADDU_R_I;
rule_functions[45] = from_seh_to_SEH;
rule_functions[46] = from_nop_to_NOP;
rule_functions[47] = from_dsll_to_DSLL;
rule_functions[48] = from_lui_r_m_to_LUI_R_M;
rule_functions[49] = from_daddiu_r_m_to_DADDIU_R_M;
rule_functions[50] = from_balc_to_BALC;
rule_functions[51] = from_load_i_to_LOAD_I;
rule_functions[52] = from_branch_nez_c_to_BRANCH_NEZ_C;
rule_functions[53] = from_branch_c_to_BRANCH_COM;
rule_functions[54] = from_subu_r_r_to_SUBU_R_R;
rule_functions[55] = from_branch_neq_c_to_BRANCH_NEQ_C;
rule_functions[56] = from_branch_gtz_c_to_BRANCH_GTZ_C;
rule_functions[57] = from_branch_geu_c_to_BRANCH_GEU_C;
rule_functions[58] = from_branch_ge_c_to_BRANCH_GE_C;
rule_functions[59] = from_shift_ra_to_SHIFT_R_ARIT;
rule_functions[60] = from_branch_ltu_c_to_BRANCH_LTU_C;
rule_functions[61] = from_branch_lt_c_to_BRANCH_LT_C;
rule_functions[62] = from_branch_eq_c_to_BRANCH_EQ_C;
rule_functions[63] = from_branch_eqz_c_to_BRANCH_EQZ_C;
rule_functions[64] = from_dsrl_to_DSRL;
rule_functions[65] = from_branch_ltz_c_to_BRANCH_LTZ_C;
rule_functions[66] = from_jump_r_c_to_JUMP_R_C;
rule_functions[67] = from_branch_gez_c_to_BRANCH_GEZ_C;
rule_functions[68] = from_teq_to_TEQ;
rule_functions[69] = from_muh_r_r_to_MUH_R_R;
rule_functions[70] = from_and_r_i_hex_to_AND_R_I_HEX;
rule_functions[71] = from_or_r_i_hex_to_OR_R_I_HEX;
rule_functions[72] = from_load_dw_lab_to_LOAD_DW_LAB;
rule_functions[73] = from_load_w_lab_to_LOAD_W_LAB;
rule_functions[74] = from_store_d_lab_to_STORE_D_LAB;
rule_functions[75] = from_store_w_lab_to_STORE_W_LAB;
rule_functions[76] = from_vm_epilogue_to_vm_store_mem_vm_store_mem;
rule_functions[77] = from_vm_prologue_to_vm_load_mem_vm_load_mem;
rule_functions[78] = from_vm_mov_to_nop;
rule_functions[79] = from_vm_mov_to_vm_xor_r_r_vm_add_r_r;
rule_functions[80] = from_vm_store_mem_to_vm_xor_r_r_vm_add_r_i_vm_store_r_r;
rule_functions[81] = from_vm_load_mem_to_vm_xor_r_r_vm_add_r_i_vm_load_r_r;
rule_functions[82] = from_vm_v_arit_to_VM_V_ARIT;
rule_functions[83] = from_vm_lea_r_m_to_VM_LEA_R_M;
rule_functions[84] = from_vm_pop_r_to_VM_POP_R;
rule_functions[85] = from_vm_push_ret_to_VM_PUSH_RET;
rule_functions[86] = from_vm_push_r_to_VM_PUSH_R;
rule_functions[87] = from_vm_ret_to_VM_RET;
rule_functions[88] = from_vm_call_to_VM_CALL;
rule_functions[89] = from_vm_xor_r_r_to_VM_XOR_R_R;
rule_functions[90] = from_vm_xor_r_i_to_VM_XOR_R_I;
rule_functions[91] = from_vm_store_r_r_to_VM_STORE_R_R;
rule_functions[92] = from_vm_sar_r_i_to_VM_SAR_R_I;
rule_functions[93] = from_vm_shr_r_i_to_VM_SHR_R_I;
rule_functions[94] = from_vm_shl_r_i_to_VM_SHL_R_I;
rule_functions[95] = from_vm_neg_r_to_VM_NEG_R;
rule_functions[96] = from_vm_not_r_to_VM_NOT_R;
rule_functions[97] = from_vm_ltgt_to_VM_LTGT;
rule_functions[98] = from_vm_load_r_i_to_VM_LOAD_R_I;
rule_functions[99] = from_vm_load_r_r_to_VM_LOAD_R_R;
rule_functions[100] = from_vm_jlt_r_r_to_VM_JLT_R_R;
rule_functions[101] = from_vm_jlt_r_i_to_VM_JLT_R_I;
rule_functions[102] = from_vm_je_r_r_to_VM_JE_R_R;
rule_functions[103] = from_vm_je_r_i_to_VM_JE_R_I;
rule_functions[104] = from_vm_jmp_to_VM_JMP;
rule_functions[105] = from_vm_and_r_r_to_VM_AND_R_R;
rule_functions[106] = from_vm_and_r_i_to_VM_AND_R_I;
rule_functions[107] = from_vm_add_r_i_to_VM_ADD_R_I;
rule_functions[108] = from_vm_add_r_r_to_VM_ADD_R_R;
rule_functions[109] = from_vm_libc_to_VM_LIBC;
rule_functions[110] = from_set_l_r_r_t_to_vm_prologue_vm_ltgt_vm_mov_i_vm_jlt_r_r_vm_mov_i_vm_ltgt_vm_jmp_code_label_vm_mov_i_code_label_vm_store_mem;
rule_functions[111] = from_set_l_r_i_t_to_vm_prologue_vm_ltgt_vm_jlt_r_i_vm_mov_i_vm_ltgt_vm_jmp_code_label_vm_mov_i_code_label_vm_store_mem;
rule_functions[112] = from_la_r_a_t_to_vm_load_mem_vm_lea_r_m_vm_store_mem;
rule_functions[113] = from_nor_r_r_t_to_vm_prologue_or_r_r_temp_vm_not_r_vm_store_mem;
rule_functions[114] = from_call_t_to_libc_t;
rule_functions[115] = from_call_t_to_vm_ltgt_vm_call;
rule_functions[116] = from_jump_r_t_to_vm_load_mem_vm_mov_vm_jmp;
rule_functions[117] = from_jump_t_to_vm_ltgt_vm_jmp;
rule_functions[118] = from_branch_neq_r_r_t_to_vm_prologue_vm_mov_i_vm_ltgt_vm_jlt_r_r_vm_jlt_r_r;
rule_functions[119] = from_branch_eq_r_r_t_to_vm_prologue_vm_ltgt_vm_je_r_r;
rule_functions[120] = from_shift_r_t_to_vm_prologue_vm_mov_vm_shr_r_i_vm_store_mem;
rule_functions[121] = from_shift_l_t_to_vm_prologue_vm_mov_vm_shl_r_i_vm_store_mem;
rule_functions[122] = from_store_b_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_store_r_r;
rule_functions[123] = from_store_h_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_store_r_r;
rule_functions[124] = from_store_w_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_store_r_r;
rule_functions[125] = from_store_d_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_store_r_r;
rule_functions[126] = from_xor_r_r_t_to_vm_prologue_vm_mov_vm_load_mem_vm_xor_r_r_vm_store_mem;
rule_functions[127] = from_or_r_i_t_to_vm_prologue_vm_mov_i_or_r_r_temp_vm_mov_vm_store_mem;
rule_functions[128] = from_or_r_r_t_to_vm_prologue_or_r_r_temp_vm_store_mem;
rule_functions[129] = from_or_r_r_temp_to_vm_mov_vm_not_r_vm_load_mem_vm_not_r_vm_and_r_r_vm_not_r_vm_not_r;
rule_functions[130] = from_and_r_i_t_to_vm_prologue_vm_mov_vm_and_r_i_vm_store_mem;
rule_functions[131] = from_and_r_r_t_to_vm_prologue_vm_mov_vm_load_mem_vm_and_r_r_vm_store_mem;
rule_functions[132] = from_load_b_u_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_load_r_r;
rule_functions[133] = from_load_b_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_load_r_r;
rule_functions[134] = from_load_h_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_load_r_r;
rule_functions[135] = from_load_w_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_mov_i_vm_load_r_r;
rule_functions[136] = from_load_dw_t_to_vm_prologue_vm_mov_i_vm_add_r_r_vm_mov_i_vm_load_r_r;
rule_functions[137] = from_div_r_r_t_to_vm_prologue_vm_mov_vm_v_arit;
rule_functions[138] = from_mul_r_r_t_to_vm_mov_vm_mov_vm_v_arit_vm_mov_vm_shr_r_i_vm_and_r_i;
rule_functions[139] = from_add_r_i_t_to_add_r_i_t_add_r_i_t;
rule_functions[140] = from_add_r_i_t_to_vm_prologue_vm_mov_vm_mov_i_vm_neg_r_vm_add_r_r_vm_store_mem;
rule_functions[141] = from_add_r_i_t_to_vm_prologue_vm_mov_vm_add_r_i_vm_store_mem;
rule_functions[142] = from_sub_r_r_t_to_vm_xor_r_r_vm_load_mem_vm_add_r_r_vm_load_mem_vm_neg_r_vm_add_r_r_vm_mov_vm_store_mem;
rule_functions[143] = from_add_r_r_t_to_vm_add_r_r;
rule_functions[144] = from_add_r_r_t_to_vm_prologue_vm_mov_vm_load_mem_vm_add_r_r_vm_store_mem;
rule_functions[145] = from_muh_r_r_t_to_vm_prologue_vm_mov_vm_load_mem_vm_mov_vm_v_arit_vm_shr_r_i_vm_store_mem;
rule_functions[146] = from_branch_lt_t_to_vm_prologue_vm_ltgt_vm_mov_i_vm_jlt_r_r;
rule_functions[147] = from_branch_ge_t_to_vm_prologue_vm_mov_i_vm_ltgt_vm_je_r_r_vm_jlt_r_r;
rule_functions[148] = from_seh_t_to_vm_prologue_vm_mov_vm_shl_r_i_vm_sar_r_i_vm_store_mem;
rule_functions[149] = from_load_i_t_to_vm_load_mem_vm_mov_i_vm_store_mem;
rule_functions[150] = from_store_data_label_to_vm_load_mem_vm_lea_r_m_vm_mov_i_vm_store_r_r;
rule_functions[151] = from_load_data_label_to_vm_load_mem_vm_lea_r_m_vm_mov_i_vm_load_r_r_vm_store_mem;
rule_functions[152] = from_load_label_to_vm_load_mem_vm_lea_r_m_vm_store_mem;
rule_functions[153] = from_shift_ra_t_to_vm_prologue_vm_mov_vm_sar_r_i_vm_store_mem;
rule_functions[154] = from_libc_t_to_vm_mov_i_vm_libc;
rule_functions[155] = from_vm_mov_i_to_vm_xor_r_r_vm_add_r_i_vm_add_r_i_big;
rule_functions[156] = from_vm_mov_i_to_vm_xor_r_r_vm_add_r_i;
rule_functions[157] = from_vm_add_r_i_big_to_vm_add_r_i;
rule_functions[158] = from_vm_add_r_i_big_to_vm_add_r_i_big_vm_add_r_i_big;


}
unsigned int terminal_rules[MAX_RULE];

void init_terminal_rules(void){

terminal_rules[0] = 1;
terminal_rules[1] = 1;
terminal_rules[2] = 1;
terminal_rules[3] = 1;
terminal_rules[4] = 1;
terminal_rules[5] = 1;
terminal_rules[6] = 1;
terminal_rules[7] = 1;
terminal_rules[8] = 1;
terminal_rules[9] = 1;
terminal_rules[10] = 1;
terminal_rules[11] = 1;
terminal_rules[12] = 1;
terminal_rules[13] = 1;
terminal_rules[14] = 1;
terminal_rules[15] = 1;
terminal_rules[16] = 1;
terminal_rules[17] = 1;
terminal_rules[18] = 1;
terminal_rules[19] = 1;
terminal_rules[20] = 1;
terminal_rules[21] = 1;
terminal_rules[22] = 1;
terminal_rules[23] = 1;
terminal_rules[24] = 1;
terminal_rules[25] = 1;
terminal_rules[26] = 1;
terminal_rules[27] = 1;
terminal_rules[28] = 1;
terminal_rules[29] = 1;
terminal_rules[30] = 1;
terminal_rules[31] = 1;
terminal_rules[32] = 1;
terminal_rules[33] = 1;
terminal_rules[34] = 1;
terminal_rules[35] = 1;
terminal_rules[36] = 1;
terminal_rules[37] = 1;
terminal_rules[38] = 1;
terminal_rules[39] = 1;
terminal_rules[40] = 1;
terminal_rules[41] = 1;
terminal_rules[42] = 1;
terminal_rules[43] = 1;
terminal_rules[44] = 1;
terminal_rules[45] = 1;
terminal_rules[46] = 1;
terminal_rules[47] = 1;
terminal_rules[48] = 1;
terminal_rules[49] = 1;
terminal_rules[50] = 1;
terminal_rules[51] = 1;
terminal_rules[52] = 1;
terminal_rules[53] = 1;
terminal_rules[54] = 1;
terminal_rules[55] = 1;
terminal_rules[56] = 1;
terminal_rules[57] = 1;
terminal_rules[58] = 1;
terminal_rules[59] = 1;
terminal_rules[60] = 1;
terminal_rules[61] = 1;
terminal_rules[62] = 1;
terminal_rules[63] = 1;
terminal_rules[64] = 1;
terminal_rules[65] = 1;
terminal_rules[66] = 1;
terminal_rules[67] = 1;
terminal_rules[68] = 1;
terminal_rules[69] = 1;
terminal_rules[70] = 1;
terminal_rules[71] = 1;
terminal_rules[72] = 1;
terminal_rules[73] = 1;
terminal_rules[74] = 1;
terminal_rules[75] = 1;
terminal_rules[76] = 0;
terminal_rules[77] = 0;
terminal_rules[78] = 0;
terminal_rules[79] = 0;
terminal_rules[80] = 0;
terminal_rules[81] = 0;
terminal_rules[82] = 1;
terminal_rules[83] = 1;
terminal_rules[84] = 1;
terminal_rules[85] = 1;
terminal_rules[86] = 1;
terminal_rules[87] = 1;
terminal_rules[88] = 1;
terminal_rules[89] = 1;
terminal_rules[90] = 1;
terminal_rules[91] = 1;
terminal_rules[92] = 1;
terminal_rules[93] = 1;
terminal_rules[94] = 1;
terminal_rules[95] = 1;
terminal_rules[96] = 1;
terminal_rules[97] = 1;
terminal_rules[98] = 1;
terminal_rules[99] = 1;
terminal_rules[100] = 1;
terminal_rules[101] = 1;
terminal_rules[102] = 1;
terminal_rules[103] = 1;
terminal_rules[104] = 1;
terminal_rules[105] = 1;
terminal_rules[106] = 1;
terminal_rules[107] = 1;
terminal_rules[108] = 1;
terminal_rules[109] = 1;
terminal_rules[110] = 0;
terminal_rules[111] = 0;
terminal_rules[112] = 0;
terminal_rules[113] = 0;
terminal_rules[114] = 0;
terminal_rules[115] = 0;
terminal_rules[116] = 0;
terminal_rules[117] = 0;
terminal_rules[118] = 0;
terminal_rules[119] = 0;
terminal_rules[120] = 0;
terminal_rules[121] = 0;
terminal_rules[122] = 0;
terminal_rules[123] = 0;
terminal_rules[124] = 0;
terminal_rules[125] = 0;
terminal_rules[126] = 0;
terminal_rules[127] = 0;
terminal_rules[128] = 0;
terminal_rules[129] = 0;
terminal_rules[130] = 0;
terminal_rules[131] = 0;
terminal_rules[132] = 0;
terminal_rules[133] = 0;
terminal_rules[134] = 0;
terminal_rules[135] = 0;
terminal_rules[136] = 0;
terminal_rules[137] = 0;
terminal_rules[138] = 0;
terminal_rules[139] = 0;
terminal_rules[140] = 0;
terminal_rules[141] = 0;
terminal_rules[142] = 0;
terminal_rules[143] = 0;
terminal_rules[144] = 0;
terminal_rules[145] = 0;
terminal_rules[146] = 0;
terminal_rules[147] = 0;
terminal_rules[148] = 0;
terminal_rules[149] = 0;
terminal_rules[150] = 0;
terminal_rules[151] = 0;
terminal_rules[152] = 0;
terminal_rules[153] = 0;
terminal_rules[154] = 0;
terminal_rules[155] = 0;
terminal_rules[156] = 0;
terminal_rules[157] = 0;
terminal_rules[158] = 0;


}
int sym_to_rules[N_SYM][MAX_RULE];

void init_sym_to_rules(void){
for(int i = 0; i < N_SYM; i++){
	for(int j =0; j < MAX_RULE; j++){
		 sym_to_rules[i][j] = -1;
	}
}
sym_to_rules[100][0] = 0;
sym_to_rules[147][0] = 1;
sym_to_rules[146][0] = 2;
sym_to_rules[145][0] = 3;
sym_to_rules[144][0] = 4;
sym_to_rules[143][0] = 5;
sym_to_rules[142][0] = 6;
sym_to_rules[141][0] = 7;
sym_to_rules[140][0] = 8;
sym_to_rules[139][0] = 9;
sym_to_rules[138][0] = 10;
sym_to_rules[137][0] = 11;
sym_to_rules[135][0] = 12;
sym_to_rules[134][0] = 13;
sym_to_rules[132][0] = 14;
sym_to_rules[131][0] = 15;
sym_to_rules[128][0] = 16;
sym_to_rules[129][0] = 17;
sym_to_rules[127][0] = 18;
sym_to_rules[126][0] = 19;
sym_to_rules[123][0] = 20;
sym_to_rules[122][0] = 21;
sym_to_rules[120][0] = 22;
sym_to_rules[118][0] = 23;
sym_to_rules[117][0] = 24;
sym_to_rules[116][0] = 25;
sym_to_rules[115][0] = 26;
sym_to_rules[113][0] = 27;
sym_to_rules[111][0] = 28;
sym_to_rules[110][0] = 29;
sym_to_rules[109][0] = 30;
sym_to_rules[102][0] = 31;
sym_to_rules[103][0] = 32;
sym_to_rules[101][0] = 33;
sym_to_rules[96][0] = 34;
sym_to_rules[95][0] = 35;
sym_to_rules[149][0] = 36;
sym_to_rules[150][0] = 37;
sym_to_rules[151][0] = 38;
sym_to_rules[125][0] = 39;
sym_to_rules[99][0] = 40;
sym_to_rules[98][0] = 41;
sym_to_rules[108][0] = 42;
sym_to_rules[97][0] = 43;
sym_to_rules[107][0] = 44;
sym_to_rules[136][0] = 45;
sym_to_rules[148][0] = 46;
sym_to_rules[106][0] = 47;
sym_to_rules[105][0] = 48;
sym_to_rules[104][0] = 49;
sym_to_rules[93][0] = 50;
sym_to_rules[94][0] = 51;
sym_to_rules[92][0] = 52;
sym_to_rules[91][0] = 53;
sym_to_rules[90][0] = 54;
sym_to_rules[88][0] = 55;
sym_to_rules[89][0] = 56;
sym_to_rules[87][0] = 57;
sym_to_rules[86][0] = 58;
sym_to_rules[85][0] = 59;
sym_to_rules[84][0] = 60;
sym_to_rules[83][0] = 61;
sym_to_rules[82][0] = 62;
sym_to_rules[81][0] = 63;
sym_to_rules[79][0] = 64;
sym_to_rules[78][0] = 65;
sym_to_rules[76][0] = 66;
sym_to_rules[80][0] = 67;
sym_to_rules[77][0] = 68;
sym_to_rules[124][0] = 69;
sym_to_rules[130][0] = 70;
sym_to_rules[133][0] = 71;
sym_to_rules[112][0] = 72;
sym_to_rules[114][0] = 73;
sym_to_rules[119][0] = 74;
sym_to_rules[121][0] = 75;
sym_to_rules[214][0] = 76;
sym_to_rules[211][0] = 77;
sym_to_rules[209][0] = 78;
sym_to_rules[209][1] = 79;
sym_to_rules[212][0] = 80;
sym_to_rules[213][0] = 81;
sym_to_rules[206][0] = 82;
sym_to_rules[205][0] = 83;
sym_to_rules[204][0] = 84;
sym_to_rules[203][0] = 85;
sym_to_rules[202][0] = 86;
sym_to_rules[201][0] = 87;
sym_to_rules[200][0] = 88;
sym_to_rules[199][0] = 89;
sym_to_rules[198][0] = 90;
sym_to_rules[197][0] = 91;
sym_to_rules[196][0] = 92;
sym_to_rules[195][0] = 93;
sym_to_rules[194][0] = 94;
sym_to_rules[193][0] = 95;
sym_to_rules[192][0] = 96;
sym_to_rules[191][0] = 97;
sym_to_rules[190][0] = 98;
sym_to_rules[189][0] = 99;
sym_to_rules[188][0] = 100;
sym_to_rules[187][0] = 101;
sym_to_rules[186][0] = 102;
sym_to_rules[185][0] = 103;
sym_to_rules[184][0] = 104;
sym_to_rules[183][0] = 105;
sym_to_rules[182][0] = 106;
sym_to_rules[181][0] = 107;
sym_to_rules[180][0] = 108;
sym_to_rules[216][0] = 109;
sym_to_rules[241][0] = 110;
sym_to_rules[242][0] = 111;
sym_to_rules[208][0] = 112;
sym_to_rules[240][0] = 113;
sym_to_rules[251][0] = 114;
sym_to_rules[251][1] = 115;
sym_to_rules[250][0] = 116;
sym_to_rules[249][0] = 117;
sym_to_rules[248][0] = 118;
sym_to_rules[245][0] = 119;
sym_to_rules[244][0] = 120;
sym_to_rules[243][0] = 121;
sym_to_rules[232][0] = 122;
sym_to_rules[231][0] = 123;
sym_to_rules[230][0] = 124;
sym_to_rules[229][0] = 125;
sym_to_rules[239][0] = 126;
sym_to_rules[238][0] = 127;
sym_to_rules[237][0] = 128;
sym_to_rules[215][0] = 129;
sym_to_rules[236][0] = 130;
sym_to_rules[235][0] = 131;
sym_to_rules[228][0] = 132;
sym_to_rules[227][0] = 133;
sym_to_rules[226][0] = 134;
sym_to_rules[225][0] = 135;
sym_to_rules[224][0] = 136;
sym_to_rules[223][0] = 137;
sym_to_rules[222][0] = 138;
sym_to_rules[221][0] = 139;
sym_to_rules[221][1] = 140;
sym_to_rules[221][2] = 141;
sym_to_rules[220][0] = 142;
sym_to_rules[219][0] = 143;
sym_to_rules[219][1] = 144;
sym_to_rules[253][0] = 145;
sym_to_rules[246][0] = 146;
sym_to_rules[247][0] = 147;
sym_to_rules[217][0] = 148;
sym_to_rules[252][0] = 149;
sym_to_rules[257][0] = 150;
sym_to_rules[256][0] = 151;
sym_to_rules[255][0] = 152;
sym_to_rules[254][0] = 153;
sym_to_rules[258][0] = 154;
sym_to_rules[210][0] = 155;
sym_to_rules[210][1] = 156;
sym_to_rules[259][0] = 157;
sym_to_rules[259][1] = 158;


}
rule_func trans_rules[N_SYM][MAX_RULE];

void init_trans_rules(void){
for(int i = 0; i < N_SYM; i++){
	for(int j =0; j < MAX_RULE; j++){
		 trans_rules[i][j] = NULL;
	}
}
trans_rules[95][0] = from_add_r_r_to_add_r_r_t;
trans_rules[96][0] = from_dadd_r_r_to_add_r_r_t;
trans_rules[97][0] = from_addu_r_r_to_add_r_r_t;
trans_rules[98][0] = from_daddu_r_r_to_add_r_r_t;
trans_rules[101][0] = from_sub_r_r_to_sub_r_r_t;
trans_rules[90][0] = from_subu_r_r_to_sub_r_r_t;
trans_rules[99][0] = from_dsubu_r_r_to_sub_r_r_t;
trans_rules[102][0] = from_add_r_i_to_add_r_i_t;
trans_rules[103][0] = from_dadd_r_i_to_add_r_i_t;
trans_rules[108][0] = from_daddu_r_i_to_add_r_i_t;
trans_rules[94][0] = from_load_i_to_load_i_t;
trans_rules[124][0] = from_muh_r_r_to_muh_r_r_t;
trans_rules[109][0] = from_mul_r_r_to_mul_r_r_t;
trans_rules[110][0] = from_div_r_r_to_div_r_r_t;
trans_rules[111][0] = from_load_dw_to_load_dw_t;
trans_rules[113][0] = from_load_w_to_load_w_t;
trans_rules[115][0] = from_load_h_to_load_h_t;
trans_rules[116][0] = from_load_b_to_load_b_t;
trans_rules[117][0] = from_load_b_u_to_load_b_u_t;
trans_rules[128][0] = from_and_r_r_to_and_r_r_t;
trans_rules[129][0] = from_and_r_i_to_and_r_i_t;
trans_rules[130][0] = from_and_r_i_hex_to_and_r_i_t;
trans_rules[131][0] = from_or_r_r_to_or_r_r_t;
trans_rules[132][0] = from_or_r_i_to_or_r_i_t;
trans_rules[133][0] = from_or_r_i_hex_to_or_r_i_t;
trans_rules[134][0] = from_xor_r_r_to_xor_r_r_t;
trans_rules[118][0] = from_store_d_to_store_d_t;
trans_rules[120][0] = from_store_w_to_store_w_t;
trans_rules[122][0] = from_store_h_to_store_h_t;
trans_rules[123][0] = from_store_b_to_store_b_t;
trans_rules[126][0] = from_move_h_to_vm_mov;
trans_rules[127][0] = from_move_l_to_vm_mov;
trans_rules[135][0] = from_nor_r_r_to_nor_r_r_t;
trans_rules[140][0] = from_shift_l_to_shift_l_t;
trans_rules[106][0] = from_dsll_to_shift_l_t;
trans_rules[141][0] = from_shift_r_to_shift_r_t;
trans_rules[79][0] = from_dsrl_to_shift_r_t;
trans_rules[142][0] = from_branch_eq_r_r_to_branch_eq_r_r_t;
trans_rules[82][0] = from_branch_eq_c_to_branch_eq_r_r_t;
trans_rules[81][0] = from_branch_eqz_c_to_branch_eq_r_r_t;
trans_rules[80][0] = from_branch_gez_c_to_branch_ge_t;
trans_rules[89][0] = from_branch_gtz_c_to_branch_lt_t;
trans_rules[86][0] = from_branch_ge_c_to_branch_ge_t;
trans_rules[87][0] = from_branch_geu_c_to_branch_ge_t;
trans_rules[143][0] = from_branch_neq_r_r_to_branch_neq_r_r_t;
trans_rules[88][0] = from_branch_neq_c_to_branch_neq_r_r_t;
trans_rules[92][0] = from_branch_nez_c_to_branch_neq_r_r_t;
trans_rules[144][0] = from_jump_to_jump_t;
trans_rules[91][0] = from_branch_c_to_jump_t;
trans_rules[145][0] = from_jump_r_to_jump_r_t;
trans_rules[76][0] = from_jump_r_c_to_jump_r_t;
trans_rules[77][0] = from_teq_to_libc_t;
trans_rules[78][0] = from_branch_ltz_c_to_branch_lt_t;
trans_rules[83][0] = from_branch_lt_c_to_branch_lt_t;
trans_rules[84][0] = from_branch_ltu_c_to_branch_lt_t;
trans_rules[85][0] = from_shift_ra_to_shift_ra_t;
trans_rules[146][0] = from_call_to_call_t;
trans_rules[93][0] = from_balc_to_call_t;
trans_rules[100][0] = from_la_r_a_to_la_r_a_t;
trans_rules[107][0] = from_addu_r_i_to_add_r_i_t;
trans_rules[139][0] = from_set_l_r_i_to_set_l_r_i_t;
trans_rules[137][0] = from_set_l_r_r_to_set_l_r_r_t;
trans_rules[138][0] = from_set_l_r_r_u_to_set_l_r_r_t;
trans_rules[125][0] = from_move_to_vm_mov;
trans_rules[136][0] = from_seh_to_seh_t;


}
block_bitmap *rule_bitmap;
void library_init(){
	init_rule_array();
	 init_sym_to_rules();
	 init_terminal_rules();
init_trans_rules();
rule_bitmap = malloc(bitmap_required_size(MAX_RULE));
bitmap_initialize(rule_bitmap,MAX_RULE);
}
