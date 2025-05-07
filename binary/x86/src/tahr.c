#include "tahr.h"
char *sym_to_id[388] = {
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
"I_ADD_R_R",
"I_ADD_I_R",
"I_AND_R_R",
"I_AND_I_R",
"I_CALL",
"I_CALL_R",
"I_CMP_R_R",
"I_CMP_R_I",
"I_DIV_R",
"I_JB",
"I_JBE",
"I_JA",
"I_JAE",
"I_JMP",
"I_JMP_R",
"I_LEA_M_R",
"I_MOV_R_R",
"I_MOV_M_R",
"I_MOV_R_M",
"I_MUL_R",
"I_NEG_R",
"I_NOT_R",
"I_OR_R_R",
"I_SAR_I_R",
"I_SAL_I_R",
"I_SHL_I_R",
"I_SHR_I_R",
"I_SUB_R_R",
"I_JZ",
"I_JNZ",
"I_MOV_I_R",
"I_PUSH_R",
"I_POP_R",
"I_JP",
"I_JNP",
"I_RET",
"I_UD2",
"I_XOR_R_R",
"I_LEA_LAB_R",
"I_OR_I_R",
"I_MOV_R_M_LAB",
"I_MOV_M_R_LAB",
"I_JBU",
"I_JAE_U",
"i_ret",
"i_ud2",
"i_push_r",
"i_pop_r",
"i_add_r_r",
"i_sub_r_r",
"i_add_i_r",
"i_and_r_r",
"i_and_i_r",
"i_call",
"i_call_r",
"i_cmp_r_r",
"i_cmp_r_i",
"i_div_r",
"i_jb",
"i_jbu",
"i_jbe",
"i_ja",
"i_jz",
"i_jp",
"i_jnp",
"i_jnz",
"i_jae",
"i_jae_u",
"i_jmp",
"i_jmp_r",
"i_lea_lab_r",
"i_lea_m_r",
"i_mov_i_r",
"i_mov_r_r",
"i_mov_m_r",
"i_mov_m_r_lab",
"i_mov_r_m",
"i_mov_r_m_lab",
"i_mul_r",
"i_neg_r",
"i_not_r",
"i_or_r_r",
"i_or_i_r",
"i_xor_r_r",
"i_sar_i_r",
"i_sal_i_r",
"i_shl_i_r",
"i_shr_i_r",
"SDC1",
"LDC1",
"SUBD",
"CVTDW",
"CVTDL",
"MTC1",
"MFC1",
"MFHC1",
"DIVD",
"MULD",
"CMPCONFMT",
"BC1EQZ",
"BC1NEZ",
"DMFC1",
"LDC1_M",
"TRUNC_W_D",
"ADDD",
"DMTC1",
"MOVD",
"ABSD",
"sdc1_r_m",
"ldc1_r_m",
"ldc1_r_m_d",
"subd_r_r",
"cvtdw",
"cvtdl",
"add_d",
"trunc_w_d",
"mov_d",
"mtc1",
"mfc1",
"mfhc1",
"dmfc1",
"dmtc1",
"divd",
"muld",
"cmpconfmt",
"bc1eqz",
"bc1nez",
"absd",
"IMOVSD_R_M",
"IMOVSD_M_R",
"ISUBSD_R_R",
"ICVTSI2SD_R_R",
"IMOVD_F_R",
"IMOVD_R_F",
"IDIVSD_R_R",
"IMULSD_R_R",
"IUCOMISS",
"ICOMISS",
"IUCOMISD",
"ICOMISD",
"ICVTTSD2SI",
"IMOVAPD_R_R",
"IADDSD_R_R",
"IMOVSD_LAB_R",
"IMOVSD_R_R",
"ANDPD_M",
"imovsd_r_m",
"imovsd_r_r",
"andpd_m",
"imovsd_m_r",
"imovsd_lab_r",
"imovapd_r_r",
"iaddsd_r_r",
"isubsd_r_r",
"icvtsi2sd_r_r",
"icvttsd2si_r_r",
"imovd_f_r",
"imovd_r_f",
"idivsd_r_r",
"imulsd_r_r",
"iucomiss_r_r",
"icomiss_r_r",
"iucomisd_r_r",
"icomisd_r_r",
"muh_r_r_t",
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
"branch_neq_r_r_t",
"jump_t",
"jump_r_t",
"call_t",
"i_preserve",
"i_restore",
"i_prologue",
"i_load_mem",
"i_store_mem",
"i_lea_address",
"branch_nez_c_t",
"subu_r_r_t",
"branch_gtz_c_t",
"branch_ge_c_t",
"branch_geu_c_t",
"shift_ra_t",
"branch_lt_c_t",
"dsrl_t",
"branch_ltz_c_t",
"teq_t",
"branch_ltu_c_t",
"lea_label",
"load_data_label",
"store_data_label",
"sdc1_r_m_t",
"ldc1_r_m_t",
"subd_r_r_t",
"cvtdw_t",
"mtc1_t",
"mfc1_t",
"mfhc1_t",
"dmfc1_t",
"divd_t",
"muld_t",
"cmpconfmt_t",
"cmp_jmp",
"cmp_neg",
"lea_label_f",
"truncwd_t",
"cvtdl_t",
"add_d_t",
"dmtc1_t",
"absd_t",

};
char* reg_values[] = {"$zero","$at","$v0","$v1","$a0","$a1","$a2","$a3","$t0","$t1","$t2","$t3","$t4","$t5","$t6","$t7","$t8","$t9","$s0","$s1","$s2","$s3","$s4","$s5","$s6","$s7","$k0","$k1","$sp","$ra","$fp","HI","LO","PC"};

char* dtype_values[] = {".word",".half",".byte",".float",".asciiz",".ascii"};

char* directive_values[] = {"%highest","%hi","%lo","%higher"};

char* glob_values[] = {".globl"};

char* ireg_values[] = {"%rax","%rbx","%rcx","%rdx","%rsp","%rbp","%rsi","%rdi","%r8","%r9","%r10","%r11","%r12","%r13","%r14","%r15","%m0","%m1","%m2","%m3","%m4","%m5","%m6","%m7","%m8","%m9","%m10","%m11","%m12","%m13","%m14","%m15","%m16","%m17","%m18","%eax","%ebx","%ecx","%edx","%esp","%ebp","%esi","%edi","%r8d","%r9d","%r10d","%r11d","%r12d","%r13d","%r14d","%r15d","%m0d","%m1d","%m2d","%m3d","%m4d","%m5d","%m6d","%m7d","%m8d","%m9d","%m10d","%m11d","%m12d","%m13d","%m14d","%m15d","%m16d","%m17d","%m18d","%eip","%ax","%bx","%cx","%dx","%sp","%bp","%si","%di","%r8w","%r9w","%r10w","%r11w","%r12w","%r13w","%r14w","%r15w","%m0w","%m1w","%m2w","%m3w","%m4w","%m5w","%m6w","%m7w","%m8w","%m9w","%m10w","%m11w","%m12w","%m13w","%m14w","%m15w","%m16w","%m17w","%m18w","%al","%bl","%cl","%dl","%spl","%bpl","%sil","%dil","%r8b","%r9b","%r10b","%r11b","%r12b","%r13b","%r14b","%r15b","%m0b","%m1b","%m2b","%m3b","%m4b","%m5b","%m6b","%m7b","%m8b","%m9b","%m10b","%m11b","%m12b","%m13b","%m14b","%m15b","%m16b","%m17b","%m18b","%rip"};

char* suf_values[] = {"q","l","w","b"};

char* fpreg_values[] = {"$f0","$f1","$f2","$f3","$f4","$f5","$f6","$f7","$f8","$f9","$f10","$f11","$f12","$f13","$f14","$f15","$f16","$f17","$f18","$f19","$f20","$f21","$f22","$f23","$f24","$f25","$f26","$f27","$f28","$f29","$f30","$f31"};

char* condn_values[] = {"af.","un.","eq.","ueq.","lt.","ult.","le.","ule.","at.","une.","ne.","uge.","oge.","ugt.","ogt."};

char* fmtsuf_values[] = {"d","s","w"};

char* ifpreg_values[] = {"%xmm0","%xmm1","%xmm2","%xmm3","%xmm4","%xmm5","%xmm6","%xmm7","%xmm8","%xmm9","%xmm10","%xmm11","%xmm12","%xmm13","%xmm14","%xmm15"};

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
void from_i_jbu_to_I_JBU(void *start){
	i_jbu_t* lhs = (i_jbu_t*)start;
	I_JBU_t* I_JBU_0 = malloc(sizeof(I_JBU_t));
	symbol_init(I_JBU_0,"I_JBU",1);

	push(I_JBU_0);


	const char *pos_str[1] = {
"jb text",
};
	int the_size = strlen(pos_str[0])+1;
	I_JBU_0->sym_str = malloc(the_size);
	strcpy(I_JBU_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_JBU_0->sym_str,I_JBU_0->sym_str,"text",to_str(lhs->text,"char*"),&the_size);
		
enqueue(I_JBU_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_mov_r_m_lab_to_I_MOV_R_M_LAB(void *start){
	i_mov_r_m_lab_t* lhs = (i_mov_r_m_lab_t*)start;
	I_MOV_R_M_LAB_t* I_MOV_R_M_LAB_0 = malloc(sizeof(I_MOV_R_M_LAB_t));
	symbol_init(I_MOV_R_M_LAB_0,"I_MOV_R_M_LAB",1);

	push(I_MOV_R_M_LAB_0);


	const char *pos_str[1] = {
"movsuffix src,lab(base)",
};
	int the_size = strlen(pos_str[0])+1;
	I_MOV_R_M_LAB_0->sym_str = malloc(the_size);
	strcpy(I_MOV_R_M_LAB_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_MOV_R_M_LAB_0->sym_str,I_MOV_R_M_LAB_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_R_M_LAB_0->sym_str,I_MOV_R_M_LAB_0->sym_str,"lab",to_str(lhs->lab,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_R_M_LAB_0->sym_str,I_MOV_R_M_LAB_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_R_M_LAB_0->sym_str,I_MOV_R_M_LAB_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		
enqueue(I_MOV_R_M_LAB_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_mov_m_r_lab_to_I_MOV_M_R_LAB(void *start){
	i_mov_m_r_lab_t* lhs = (i_mov_m_r_lab_t*)start;
	I_MOV_M_R_LAB_t* I_MOV_M_R_LAB_0 = malloc(sizeof(I_MOV_M_R_LAB_t));
	symbol_init(I_MOV_M_R_LAB_0,"I_MOV_M_R_LAB",1);

	push(I_MOV_M_R_LAB_0);


	const char *pos_str[1] = {
"movsuffix lab(base),dest",
};
	int the_size = strlen(pos_str[0])+1;
	I_MOV_M_R_LAB_0->sym_str = malloc(the_size);
	strcpy(I_MOV_M_R_LAB_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_MOV_M_R_LAB_0->sym_str,I_MOV_M_R_LAB_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_M_R_LAB_0->sym_str,I_MOV_M_R_LAB_0->sym_str,"lab",to_str(lhs->lab,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_M_R_LAB_0->sym_str,I_MOV_M_R_LAB_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_M_R_LAB_0->sym_str,I_MOV_M_R_LAB_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(I_MOV_M_R_LAB_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_xor_r_r_to_I_XOR_R_R(void *start){
	i_xor_r_r_t* lhs = (i_xor_r_r_t*)start;
	I_XOR_R_R_t* I_XOR_R_R_0 = malloc(sizeof(I_XOR_R_R_t));
	symbol_init(I_XOR_R_R_0,"I_XOR_R_R",1);

	push(I_XOR_R_R_0);


	const char *pos_str[1] = {
"xorsuffix reg1,dest",
};
	int the_size = strlen(pos_str[0])+1;
	I_XOR_R_R_0->sym_str = malloc(the_size);
	strcpy(I_XOR_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_XOR_R_R_0->sym_str,I_XOR_R_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_XOR_R_R_0->sym_str,I_XOR_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&I_XOR_R_R_0->sym_str,I_XOR_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(I_XOR_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_ud2_to_I_UD2(void *start){
	i_ud2_t* lhs = (i_ud2_t*)start;
	I_UD2_t* I_UD2_0 = malloc(sizeof(I_UD2_t));
	symbol_init(I_UD2_0,"I_UD2",1);

	push(I_UD2_0);


	const char *pos_str[1] = {
"ud2",
};
	int the_size = strlen(pos_str[0])+1;
	I_UD2_0->sym_str = malloc(the_size);
	strcpy(I_UD2_0->sym_str, pos_str[0]);
	
enqueue(I_UD2_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_shr_i_r_to_I_SHR_I_R(void *start){
	i_shr_i_r_t* lhs = (i_shr_i_r_t*)start;
	I_SHR_I_R_t* I_SHR_I_R_0 = malloc(sizeof(I_SHR_I_R_t));
	symbol_init(I_SHR_I_R_0,"I_SHR_I_R",1);

	push(I_SHR_I_R_0);


	const char *pos_str[1] = {
"shrsuffix $imm,reg1",
};
	int the_size = strlen(pos_str[0])+1;
	I_SHR_I_R_0->sym_str = malloc(the_size);
	strcpy(I_SHR_I_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_SHR_I_R_0->sym_str,I_SHR_I_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_SHR_I_R_0->sym_str,I_SHR_I_R_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&I_SHR_I_R_0->sym_str,I_SHR_I_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(I_SHR_I_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_shl_i_r_to_I_SHL_I_R(void *start){
	i_shl_i_r_t* lhs = (i_shl_i_r_t*)start;
	I_SHL_I_R_t* I_SHL_I_R_0 = malloc(sizeof(I_SHL_I_R_t));
	symbol_init(I_SHL_I_R_0,"I_SHL_I_R",1);

	push(I_SHL_I_R_0);


	const char *pos_str[1] = {
"shlsuffix $imm,reg1",
};
	int the_size = strlen(pos_str[0])+1;
	I_SHL_I_R_0->sym_str = malloc(the_size);
	strcpy(I_SHL_I_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_SHL_I_R_0->sym_str,I_SHL_I_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_SHL_I_R_0->sym_str,I_SHL_I_R_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&I_SHL_I_R_0->sym_str,I_SHL_I_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(I_SHL_I_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_sal_i_r_to_I_SAL_I_R(void *start){
	i_sal_i_r_t* lhs = (i_sal_i_r_t*)start;
	I_SAL_I_R_t* I_SAL_I_R_0 = malloc(sizeof(I_SAL_I_R_t));
	symbol_init(I_SAL_I_R_0,"I_SAL_I_R",1);

	push(I_SAL_I_R_0);


	const char *pos_str[1] = {
"salsuffix $imm,reg1",
};
	int the_size = strlen(pos_str[0])+1;
	I_SAL_I_R_0->sym_str = malloc(the_size);
	strcpy(I_SAL_I_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_SAL_I_R_0->sym_str,I_SAL_I_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_SAL_I_R_0->sym_str,I_SAL_I_R_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&I_SAL_I_R_0->sym_str,I_SAL_I_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(I_SAL_I_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_sar_i_r_to_I_SAR_I_R(void *start){
	i_sar_i_r_t* lhs = (i_sar_i_r_t*)start;
	I_SAR_I_R_t* I_SAR_I_R_0 = malloc(sizeof(I_SAR_I_R_t));
	symbol_init(I_SAR_I_R_0,"I_SAR_I_R",1);

	push(I_SAR_I_R_0);


	const char *pos_str[1] = {
"sarsuffix $imm,reg1",
};
	int the_size = strlen(pos_str[0])+1;
	I_SAR_I_R_0->sym_str = malloc(the_size);
	strcpy(I_SAR_I_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_SAR_I_R_0->sym_str,I_SAR_I_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_SAR_I_R_0->sym_str,I_SAR_I_R_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&I_SAR_I_R_0->sym_str,I_SAR_I_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(I_SAR_I_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_or_r_r_to_I_OR_R_R(void *start){
	i_or_r_r_t* lhs = (i_or_r_r_t*)start;
	I_OR_R_R_t* I_OR_R_R_0 = malloc(sizeof(I_OR_R_R_t));
	symbol_init(I_OR_R_R_0,"I_OR_R_R",1);

	push(I_OR_R_R_0);


	const char *pos_str[1] = {
"orsuffix reg1,dest",
};
	int the_size = strlen(pos_str[0])+1;
	I_OR_R_R_0->sym_str = malloc(the_size);
	strcpy(I_OR_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_OR_R_R_0->sym_str,I_OR_R_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_OR_R_R_0->sym_str,I_OR_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&I_OR_R_R_0->sym_str,I_OR_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(I_OR_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_not_r_to_I_NOT_R(void *start){
	i_not_r_t* lhs = (i_not_r_t*)start;
	I_NOT_R_t* I_NOT_R_0 = malloc(sizeof(I_NOT_R_t));
	symbol_init(I_NOT_R_0,"I_NOT_R",1);

	push(I_NOT_R_0);


	const char *pos_str[1] = {
"notsuffix reg1",
};
	int the_size = strlen(pos_str[0])+1;
	I_NOT_R_0->sym_str = malloc(the_size);
	strcpy(I_NOT_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_NOT_R_0->sym_str,I_NOT_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_NOT_R_0->sym_str,I_NOT_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(I_NOT_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_neg_r_to_I_NEG_R(void *start){
	i_neg_r_t* lhs = (i_neg_r_t*)start;
	I_NEG_R_t* I_NEG_R_0 = malloc(sizeof(I_NEG_R_t));
	symbol_init(I_NEG_R_0,"I_NEG_R",1);

	push(I_NEG_R_0);


	const char *pos_str[1] = {
"negsuffix reg1",
};
	int the_size = strlen(pos_str[0])+1;
	I_NEG_R_0->sym_str = malloc(the_size);
	strcpy(I_NEG_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_NEG_R_0->sym_str,I_NEG_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_NEG_R_0->sym_str,I_NEG_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(I_NEG_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_mul_r_to_I_MUL_R(void *start){
	i_mul_r_t* lhs = (i_mul_r_t*)start;
	I_MUL_R_t* I_MUL_R_0 = malloc(sizeof(I_MUL_R_t));
	symbol_init(I_MUL_R_0,"I_MUL_R",1);

	push(I_MUL_R_0);


	const char *pos_str[1] = {
"mulsuffix reg1",
};
	int the_size = strlen(pos_str[0])+1;
	I_MUL_R_0->sym_str = malloc(the_size);
	strcpy(I_MUL_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_MUL_R_0->sym_str,I_MUL_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_MUL_R_0->sym_str,I_MUL_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(I_MUL_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_mov_r_m_to_I_MOV_R_M(void *start){
	i_mov_r_m_t* lhs = (i_mov_r_m_t*)start;
	I_MOV_R_M_t* I_MOV_R_M_0 = malloc(sizeof(I_MOV_R_M_t));
	symbol_init(I_MOV_R_M_0,"I_MOV_R_M",1);

	push(I_MOV_R_M_0);


	const char *pos_str[1] = {
"movsuffix src,offset(base)",
};
	int the_size = strlen(pos_str[0])+1;
	I_MOV_R_M_0->sym_str = malloc(the_size);
	strcpy(I_MOV_R_M_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_MOV_R_M_0->sym_str,I_MOV_R_M_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_R_M_0->sym_str,I_MOV_R_M_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		replace_to_mem_safe(&I_MOV_R_M_0->sym_str,I_MOV_R_M_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_R_M_0->sym_str,I_MOV_R_M_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		
enqueue(I_MOV_R_M_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_mov_m_r_to_I_MOV_M_R(void *start){
	i_mov_m_r_t* lhs = (i_mov_m_r_t*)start;
	I_MOV_M_R_t* I_MOV_M_R_0 = malloc(sizeof(I_MOV_M_R_t));
	symbol_init(I_MOV_M_R_0,"I_MOV_M_R",1);

	push(I_MOV_M_R_0);


	const char *pos_str[1] = {
"movsuffix offset(base),dest",
};
	int the_size = strlen(pos_str[0])+1;
	I_MOV_M_R_0->sym_str = malloc(the_size);
	strcpy(I_MOV_M_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_MOV_M_R_0->sym_str,I_MOV_M_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_M_R_0->sym_str,I_MOV_M_R_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		replace_to_mem_safe(&I_MOV_M_R_0->sym_str,I_MOV_M_R_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_M_R_0->sym_str,I_MOV_M_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(I_MOV_M_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_mov_r_r_to_I_MOV_R_R(void *start){
	i_mov_r_r_t* lhs = (i_mov_r_r_t*)start;
	I_MOV_R_R_t* I_MOV_R_R_0 = malloc(sizeof(I_MOV_R_R_t));
	symbol_init(I_MOV_R_R_0,"I_MOV_R_R",1);

	push(I_MOV_R_R_0);


	const char *pos_str[1] = {
"movsuffix reg1,dest",
};
	int the_size = strlen(pos_str[0])+1;
	I_MOV_R_R_0->sym_str = malloc(the_size);
	strcpy(I_MOV_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_MOV_R_R_0->sym_str,I_MOV_R_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_R_R_0->sym_str,I_MOV_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_R_R_0->sym_str,I_MOV_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(I_MOV_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_mov_r_r_to_i_push_r_i_pop_r(void *start){
	i_mov_r_r_t* lhs = (i_mov_r_r_t*)start;
	i_push_r_t* i_push_r_0 = malloc(sizeof(i_push_r_t));
	symbol_init(i_push_r_0,"i_push_r",0);
i_pop_r_t* i_pop_r_1 = malloc(sizeof(i_pop_r_t));
	symbol_init(i_pop_r_1,"i_pop_r",0);

        //Only for movq instruction
        if (lhs->suffix != suf_values[0]){
                push(start);
	free(i_push_r_0);
free(i_pop_r_1);
	bitmap_set(rule_bitmap,92);
return;
 
        }
        i_push_r_0->suffix = suf_values[0];
        i_pop_r_1->suffix = suf_values[0];
        i_push_r_0->reg1 = lhs->reg1;
        i_pop_r_1->reg1 = lhs->dest;

	push(i_pop_r_1);
	push(i_push_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_lea_m_r_to_I_LEA_M_R(void *start){
	i_lea_m_r_t* lhs = (i_lea_m_r_t*)start;
	I_LEA_M_R_t* I_LEA_M_R_0 = malloc(sizeof(I_LEA_M_R_t));
	symbol_init(I_LEA_M_R_0,"I_LEA_M_R",1);

	push(I_LEA_M_R_0);


	const char *pos_str[1] = {
"leasuffix offset(base),dest",
};
	int the_size = strlen(pos_str[0])+1;
	I_LEA_M_R_0->sym_str = malloc(the_size);
	strcpy(I_LEA_M_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_LEA_M_R_0->sym_str,I_LEA_M_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_LEA_M_R_0->sym_str,I_LEA_M_R_0->sym_str,"offset",to_str(lhs->offset,"char*"),&the_size);
		replace_to_mem_safe(&I_LEA_M_R_0->sym_str,I_LEA_M_R_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		replace_to_mem_safe(&I_LEA_M_R_0->sym_str,I_LEA_M_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(I_LEA_M_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_jmp_r_to_I_JMP_R(void *start){
	i_jmp_r_t* lhs = (i_jmp_r_t*)start;
	I_JMP_R_t* I_JMP_R_0 = malloc(sizeof(I_JMP_R_t));
	symbol_init(I_JMP_R_0,"I_JMP_R",1);

	push(I_JMP_R_0);


	const char *pos_str[1] = {
"jmpsuffix *reg1",
};
	int the_size = strlen(pos_str[0])+1;
	I_JMP_R_0->sym_str = malloc(the_size);
	strcpy(I_JMP_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_JMP_R_0->sym_str,I_JMP_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_JMP_R_0->sym_str,I_JMP_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(I_JMP_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_jmp_to_I_JMP(void *start){
	i_jmp_t* lhs = (i_jmp_t*)start;
	I_JMP_t* I_JMP_0 = malloc(sizeof(I_JMP_t));
	symbol_init(I_JMP_0,"I_JMP",1);

	push(I_JMP_0);


	const char *pos_str[1] = {
"jmp text",
};
	int the_size = strlen(pos_str[0])+1;
	I_JMP_0->sym_str = malloc(the_size);
	strcpy(I_JMP_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_JMP_0->sym_str,I_JMP_0->sym_str,"text",to_str(lhs->text,"char*"),&the_size);
		
enqueue(I_JMP_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_jae_u_to_I_JAE_U(void *start){
	i_jae_u_t* lhs = (i_jae_u_t*)start;
	I_JAE_U_t* I_JAE_U_0 = malloc(sizeof(I_JAE_U_t));
	symbol_init(I_JAE_U_0,"I_JAE_U",1);

	push(I_JAE_U_0);


	const char *pos_str[1] = {
"jae text",
};
	int the_size = strlen(pos_str[0])+1;
	I_JAE_U_0->sym_str = malloc(the_size);
	strcpy(I_JAE_U_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_JAE_U_0->sym_str,I_JAE_U_0->sym_str,"text",to_str(lhs->text,"char*"),&the_size);
		
enqueue(I_JAE_U_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_jae_to_I_JAE(void *start){
	i_jae_t* lhs = (i_jae_t*)start;
	I_JAE_t* I_JAE_0 = malloc(sizeof(I_JAE_t));
	symbol_init(I_JAE_0,"I_JAE",1);

	push(I_JAE_0);


	const char *pos_str[1] = {
"jge text",
};
	int the_size = strlen(pos_str[0])+1;
	I_JAE_0->sym_str = malloc(the_size);
	strcpy(I_JAE_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_JAE_0->sym_str,I_JAE_0->sym_str,"text",to_str(lhs->text,"char*"),&the_size);
		
enqueue(I_JAE_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_ja_to_I_JA(void *start){
	i_ja_t* lhs = (i_ja_t*)start;
	I_JA_t* I_JA_0 = malloc(sizeof(I_JA_t));
	symbol_init(I_JA_0,"I_JA",1);

	push(I_JA_0);


	const char *pos_str[1] = {
"jg text",
};
	int the_size = strlen(pos_str[0])+1;
	I_JA_0->sym_str = malloc(the_size);
	strcpy(I_JA_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_JA_0->sym_str,I_JA_0->sym_str,"text",to_str(lhs->text,"char*"),&the_size);
		
enqueue(I_JA_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_jbe_to_I_JBE(void *start){
	i_jbe_t* lhs = (i_jbe_t*)start;
	I_JBE_t* I_JBE_0 = malloc(sizeof(I_JBE_t));
	symbol_init(I_JBE_0,"I_JBE",1);

	push(I_JBE_0);


	const char *pos_str[1] = {
"jbe text",
};
	int the_size = strlen(pos_str[0])+1;
	I_JBE_0->sym_str = malloc(the_size);
	strcpy(I_JBE_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_JBE_0->sym_str,I_JBE_0->sym_str,"text",to_str(lhs->text,"char*"),&the_size);
		
enqueue(I_JBE_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_jb_to_I_JB(void *start){
	i_jb_t* lhs = (i_jb_t*)start;
	I_JB_t* I_JB_0 = malloc(sizeof(I_JB_t));
	symbol_init(I_JB_0,"I_JB",1);

	push(I_JB_0);


	const char *pos_str[1] = {
"jl text",
};
	int the_size = strlen(pos_str[0])+1;
	I_JB_0->sym_str = malloc(the_size);
	strcpy(I_JB_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_JB_0->sym_str,I_JB_0->sym_str,"text",to_str(lhs->text,"char*"),&the_size);
		
enqueue(I_JB_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_div_r_to_I_DIV_R(void *start){
	i_div_r_t* lhs = (i_div_r_t*)start;
	I_DIV_R_t* I_DIV_R_0 = malloc(sizeof(I_DIV_R_t));
	symbol_init(I_DIV_R_0,"I_DIV_R",1);

	push(I_DIV_R_0);


	const char *pos_str[1] = {
"divsuffix reg1",
};
	int the_size = strlen(pos_str[0])+1;
	I_DIV_R_0->sym_str = malloc(the_size);
	strcpy(I_DIV_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_DIV_R_0->sym_str,I_DIV_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_DIV_R_0->sym_str,I_DIV_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(I_DIV_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_cmp_r_i_to_I_CMP_R_I(void *start){
	i_cmp_r_i_t* lhs = (i_cmp_r_i_t*)start;
	I_CMP_R_I_t* I_CMP_R_I_0 = malloc(sizeof(I_CMP_R_I_t));
	symbol_init(I_CMP_R_I_0,"I_CMP_R_I",1);

	push(I_CMP_R_I_0);


	const char *pos_str[1] = {
"cmpsuffix $imm,reg1",
};
	int the_size = strlen(pos_str[0])+1;
	I_CMP_R_I_0->sym_str = malloc(the_size);
	strcpy(I_CMP_R_I_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_CMP_R_I_0->sym_str,I_CMP_R_I_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_CMP_R_I_0->sym_str,I_CMP_R_I_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&I_CMP_R_I_0->sym_str,I_CMP_R_I_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(I_CMP_R_I_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_cmp_r_r_to_I_CMP_R_R(void *start){
	i_cmp_r_r_t* lhs = (i_cmp_r_r_t*)start;
	I_CMP_R_R_t* I_CMP_R_R_0 = malloc(sizeof(I_CMP_R_R_t));
	symbol_init(I_CMP_R_R_0,"I_CMP_R_R",1);

	push(I_CMP_R_R_0);


	const char *pos_str[1] = {
"cmpsuffix reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	I_CMP_R_R_0->sym_str = malloc(the_size);
	strcpy(I_CMP_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_CMP_R_R_0->sym_str,I_CMP_R_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_CMP_R_R_0->sym_str,I_CMP_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&I_CMP_R_R_0->sym_str,I_CMP_R_R_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(I_CMP_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_call_r_to_I_CALL_R(void *start){
	i_call_r_t* lhs = (i_call_r_t*)start;
	I_CALL_R_t* I_CALL_R_0 = malloc(sizeof(I_CALL_R_t));
	symbol_init(I_CALL_R_0,"I_CALL_R",1);

	push(I_CALL_R_0);


	const char *pos_str[1] = {
"callsuffix reg1",
};
	int the_size = strlen(pos_str[0])+1;
	I_CALL_R_0->sym_str = malloc(the_size);
	strcpy(I_CALL_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_CALL_R_0->sym_str,I_CALL_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_CALL_R_0->sym_str,I_CALL_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(I_CALL_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_call_to_I_CALL(void *start){
	i_call_t* lhs = (i_call_t*)start;
	I_CALL_t* I_CALL_0 = malloc(sizeof(I_CALL_t));
	symbol_init(I_CALL_0,"I_CALL",1);

	push(I_CALL_0);


	const char *pos_str[1] = {
"call text",
};
	int the_size = strlen(pos_str[0])+1;
	I_CALL_0->sym_str = malloc(the_size);
	strcpy(I_CALL_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_CALL_0->sym_str,I_CALL_0->sym_str,"text",to_str(lhs->text,"char*"),&the_size);
		
enqueue(I_CALL_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_and_i_r_to_I_AND_I_R(void *start){
	i_and_i_r_t* lhs = (i_and_i_r_t*)start;
	I_AND_I_R_t* I_AND_I_R_0 = malloc(sizeof(I_AND_I_R_t));
	symbol_init(I_AND_I_R_0,"I_AND_I_R",1);

	push(I_AND_I_R_0);


	const char *pos_str[1] = {
"andsuffix $imm,dest",
};
	int the_size = strlen(pos_str[0])+1;
	I_AND_I_R_0->sym_str = malloc(the_size);
	strcpy(I_AND_I_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_AND_I_R_0->sym_str,I_AND_I_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_AND_I_R_0->sym_str,I_AND_I_R_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&I_AND_I_R_0->sym_str,I_AND_I_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(I_AND_I_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_and_r_r_to_I_AND_R_R(void *start){
	i_and_r_r_t* lhs = (i_and_r_r_t*)start;
	I_AND_R_R_t* I_AND_R_R_0 = malloc(sizeof(I_AND_R_R_t));
	symbol_init(I_AND_R_R_0,"I_AND_R_R",1);

	push(I_AND_R_R_0);


	const char *pos_str[1] = {
"andsuffix reg1,dest",
};
	int the_size = strlen(pos_str[0])+1;
	I_AND_R_R_0->sym_str = malloc(the_size);
	strcpy(I_AND_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_AND_R_R_0->sym_str,I_AND_R_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_AND_R_R_0->sym_str,I_AND_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&I_AND_R_R_0->sym_str,I_AND_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(I_AND_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_add_i_r_to_I_ADD_I_R(void *start){
	i_add_i_r_t* lhs = (i_add_i_r_t*)start;
	I_ADD_I_R_t* I_ADD_I_R_0 = malloc(sizeof(I_ADD_I_R_t));
	symbol_init(I_ADD_I_R_0,"I_ADD_I_R",1);

	push(I_ADD_I_R_0);


	const char *pos_str[1] = {
"addsuffix $imm,dest",
};
	int the_size = strlen(pos_str[0])+1;
	I_ADD_I_R_0->sym_str = malloc(the_size);
	strcpy(I_ADD_I_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_ADD_I_R_0->sym_str,I_ADD_I_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_ADD_I_R_0->sym_str,I_ADD_I_R_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&I_ADD_I_R_0->sym_str,I_ADD_I_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(I_ADD_I_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_add_r_r_to_I_ADD_R_R(void *start){
	i_add_r_r_t* lhs = (i_add_r_r_t*)start;
	I_ADD_R_R_t* I_ADD_R_R_0 = malloc(sizeof(I_ADD_R_R_t));
	symbol_init(I_ADD_R_R_0,"I_ADD_R_R",1);

	push(I_ADD_R_R_0);


	const char *pos_str[1] = {
"addsuffix reg1,dest",
};
	int the_size = strlen(pos_str[0])+1;
	I_ADD_R_R_0->sym_str = malloc(the_size);
	strcpy(I_ADD_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_ADD_R_R_0->sym_str,I_ADD_R_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_ADD_R_R_0->sym_str,I_ADD_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&I_ADD_R_R_0->sym_str,I_ADD_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(I_ADD_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_sub_r_r_to_I_SUB_R_R(void *start){
	i_sub_r_r_t* lhs = (i_sub_r_r_t*)start;
	I_SUB_R_R_t* I_SUB_R_R_0 = malloc(sizeof(I_SUB_R_R_t));
	symbol_init(I_SUB_R_R_0,"I_SUB_R_R",1);

	push(I_SUB_R_R_0);


	const char *pos_str[1] = {
"subsuffix reg1,dest",
};
	int the_size = strlen(pos_str[0])+1;
	I_SUB_R_R_0->sym_str = malloc(the_size);
	strcpy(I_SUB_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_SUB_R_R_0->sym_str,I_SUB_R_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_SUB_R_R_0->sym_str,I_SUB_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&I_SUB_R_R_0->sym_str,I_SUB_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(I_SUB_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_or_i_r_to_I_OR_I_R(void *start){
	i_or_i_r_t* lhs = (i_or_i_r_t*)start;
	I_OR_I_R_t* I_OR_I_R_0 = malloc(sizeof(I_OR_I_R_t));
	symbol_init(I_OR_I_R_0,"I_OR_I_R",1);

	push(I_OR_I_R_0);


	const char *pos_str[1] = {
"orsuffix $imm,dest",
};
	int the_size = strlen(pos_str[0])+1;
	I_OR_I_R_0->sym_str = malloc(the_size);
	strcpy(I_OR_I_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_OR_I_R_0->sym_str,I_OR_I_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_OR_I_R_0->sym_str,I_OR_I_R_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		replace_to_mem_safe(&I_OR_I_R_0->sym_str,I_OR_I_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(I_OR_I_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_jnz_to_I_JNZ(void *start){
	i_jnz_t* lhs = (i_jnz_t*)start;
	I_JNZ_t* I_JNZ_0 = malloc(sizeof(I_JNZ_t));
	symbol_init(I_JNZ_0,"I_JNZ",1);

	push(I_JNZ_0);


	const char *pos_str[1] = {
"jnz text",
};
	int the_size = strlen(pos_str[0])+1;
	I_JNZ_0->sym_str = malloc(the_size);
	strcpy(I_JNZ_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_JNZ_0->sym_str,I_JNZ_0->sym_str,"text",to_str(lhs->text,"char*"),&the_size);
		
enqueue(I_JNZ_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_jz_to_I_JZ(void *start){
	i_jz_t* lhs = (i_jz_t*)start;
	I_JZ_t* I_JZ_0 = malloc(sizeof(I_JZ_t));
	symbol_init(I_JZ_0,"I_JZ",1);

	push(I_JZ_0);


	const char *pos_str[1] = {
"jz text",
};
	int the_size = strlen(pos_str[0])+1;
	I_JZ_0->sym_str = malloc(the_size);
	strcpy(I_JZ_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_JZ_0->sym_str,I_JZ_0->sym_str,"text",to_str(lhs->text,"char*"),&the_size);
		
enqueue(I_JZ_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_mov_i_r_to_I_MOV_I_R(void *start){
	i_mov_i_r_t* lhs = (i_mov_i_r_t*)start;
	I_MOV_I_R_t* I_MOV_I_R_0 = malloc(sizeof(I_MOV_I_R_t));
	symbol_init(I_MOV_I_R_0,"I_MOV_I_R",1);

	push(I_MOV_I_R_0);


	const char *pos_str[1] = {
"movsuffix $imm,dest",
};
	int the_size = strlen(pos_str[0])+1;
	I_MOV_I_R_0->sym_str = malloc(the_size);
	strcpy(I_MOV_I_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_MOV_I_R_0->sym_str,I_MOV_I_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_I_R_0->sym_str,I_MOV_I_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&I_MOV_I_R_0->sym_str,I_MOV_I_R_0->sym_str,"imm",to_str(&lhs->imm,"int"),&the_size);
		
enqueue(I_MOV_I_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_pop_r_to_I_POP_R(void *start){
	i_pop_r_t* lhs = (i_pop_r_t*)start;
	I_POP_R_t* I_POP_R_0 = malloc(sizeof(I_POP_R_t));
	symbol_init(I_POP_R_0,"I_POP_R",1);

	push(I_POP_R_0);


	const char *pos_str[1] = {
"popsuffix reg1",
};
	int the_size = strlen(pos_str[0])+1;
	I_POP_R_0->sym_str = malloc(the_size);
	strcpy(I_POP_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_POP_R_0->sym_str,I_POP_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_POP_R_0->sym_str,I_POP_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(I_POP_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_pop_r_to_i_mov_m_r_i_add_i_r(void *start){
	i_pop_r_t* lhs = (i_pop_r_t*)start;
	i_mov_m_r_t* i_mov_m_r_0 = malloc(sizeof(i_mov_m_r_t));
	symbol_init(i_mov_m_r_0,"i_mov_m_r",0);
i_add_i_r_t* i_add_i_r_1 = malloc(sizeof(i_add_i_r_t));
	symbol_init(i_add_i_r_1,"i_add_i_r",0);

        i_mov_m_r_0->suffix = lhs->suffix;
        i_add_i_r_1->suffix = lhs->suffix;
        i_add_i_r_1->imm = 8;
        i_add_i_r_1->dest = ireg_values[4];
        i_mov_m_r_0->dest = lhs->reg1;
        i_mov_m_r_0->base = ireg_values[4];
        i_mov_m_r_0->offset = 0;

	push(i_add_i_r_1);
	push(i_mov_m_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_push_r_to_I_PUSH_R(void *start){
	i_push_r_t* lhs = (i_push_r_t*)start;
	I_PUSH_R_t* I_PUSH_R_0 = malloc(sizeof(I_PUSH_R_t));
	symbol_init(I_PUSH_R_0,"I_PUSH_R",1);

	push(I_PUSH_R_0);


	const char *pos_str[1] = {
"pushsuffix reg1",
};
	int the_size = strlen(pos_str[0])+1;
	I_PUSH_R_0->sym_str = malloc(the_size);
	strcpy(I_PUSH_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_PUSH_R_0->sym_str,I_PUSH_R_0->sym_str,"suffix",to_str(lhs->suffix,"char*"),&the_size);
		replace_to_mem_safe(&I_PUSH_R_0->sym_str,I_PUSH_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		
enqueue(I_PUSH_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_push_r_to_i_add_i_r_i_mov_r_m(void *start){
	i_push_r_t* lhs = (i_push_r_t*)start;
	i_add_i_r_t* i_add_i_r_0 = malloc(sizeof(i_add_i_r_t));
	symbol_init(i_add_i_r_0,"i_add_i_r",0);
i_mov_r_m_t* i_mov_r_m_1 = malloc(sizeof(i_mov_r_m_t));
	symbol_init(i_mov_r_m_1,"i_mov_r_m",0);

        i_add_i_r_0->suffix = lhs->suffix;
        i_mov_r_m_1->suffix = lhs->suffix;
        i_add_i_r_0->imm = -8;
        i_add_i_r_0->dest = ireg_values[4];
        i_mov_r_m_1->src = lhs->reg1;
        i_mov_r_m_1->base = ireg_values[4];
        i_mov_r_m_1->offset = 0;

	push(i_mov_r_m_1);
	push(i_add_i_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_jnp_to_I_JNP(void *start){
	i_jnp_t* lhs = (i_jnp_t*)start;
	I_JNP_t* I_JNP_0 = malloc(sizeof(I_JNP_t));
	symbol_init(I_JNP_0,"I_JNP",1);

	push(I_JNP_0);


	const char *pos_str[1] = {
"jnp text",
};
	int the_size = strlen(pos_str[0])+1;
	I_JNP_0->sym_str = malloc(the_size);
	strcpy(I_JNP_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_JNP_0->sym_str,I_JNP_0->sym_str,"text",to_str(lhs->text,"char*"),&the_size);
		
enqueue(I_JNP_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_jp_to_I_JP(void *start){
	i_jp_t* lhs = (i_jp_t*)start;
	I_JP_t* I_JP_0 = malloc(sizeof(I_JP_t));
	symbol_init(I_JP_0,"I_JP",1);

	push(I_JP_0);


	const char *pos_str[1] = {
"jp text",
};
	int the_size = strlen(pos_str[0])+1;
	I_JP_0->sym_str = malloc(the_size);
	strcpy(I_JP_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&I_JP_0->sym_str,I_JP_0->sym_str,"text",to_str(lhs->text,"char*"),&the_size);
		
enqueue(I_JP_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_ret_to_I_RET(void *start){
	i_ret_t* lhs = (i_ret_t*)start;
	I_RET_t* I_RET_0 = malloc(sizeof(I_RET_t));
	symbol_init(I_RET_0,"I_RET",1);

	push(I_RET_0);


	const char *pos_str[1] = {
"ret",
};
	int the_size = strlen(pos_str[0])+1;
	I_RET_0->sym_str = malloc(the_size);
	strcpy(I_RET_0->sym_str, pos_str[0]);
	
enqueue(I_RET_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dmtc1_to_DMTC1(void *start){
	dmtc1_t* lhs = (dmtc1_t*)start;
	DMTC1_t* DMTC1_0 = malloc(sizeof(DMTC1_t));
	symbol_init(DMTC1_0,"DMTC1",1);

	push(DMTC1_0);


	const char *pos_str[1] = {
"dmtc1 src,dest",
};
	int the_size = strlen(pos_str[0])+1;
	DMTC1_0->sym_str = malloc(the_size);
	strcpy(DMTC1_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DMTC1_0->sym_str,DMTC1_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&DMTC1_0->sym_str,DMTC1_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		
enqueue(DMTC1_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_bc1nez_to_BC1NEZ(void *start){
	bc1nez_t* lhs = (bc1nez_t*)start;
	BC1NEZ_t* BC1NEZ_0 = malloc(sizeof(BC1NEZ_t));
	symbol_init(BC1NEZ_0,"BC1NEZ",1);

	push(BC1NEZ_0);


	const char *pos_str[1] = {
"bc1nez reg1,target",
};
	int the_size = strlen(pos_str[0])+1;
	BC1NEZ_0->sym_str = malloc(the_size);
	strcpy(BC1NEZ_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BC1NEZ_0->sym_str,BC1NEZ_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BC1NEZ_0->sym_str,BC1NEZ_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BC1NEZ_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_bc1eqz_to_BC1EQZ(void *start){
	bc1eqz_t* lhs = (bc1eqz_t*)start;
	BC1EQZ_t* BC1EQZ_0 = malloc(sizeof(BC1EQZ_t));
	symbol_init(BC1EQZ_0,"BC1EQZ",1);

	push(BC1EQZ_0);


	const char *pos_str[1] = {
"bc1eqz reg1,target",
};
	int the_size = strlen(pos_str[0])+1;
	BC1EQZ_0->sym_str = malloc(the_size);
	strcpy(BC1EQZ_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&BC1EQZ_0->sym_str,BC1EQZ_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&BC1EQZ_0->sym_str,BC1EQZ_0->sym_str,"target",to_str(lhs->target,"char*"),&the_size);
		
enqueue(BC1EQZ_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmpconfmt_to_CMPCONFMT(void *start){
	cmpconfmt_t* lhs = (cmpconfmt_t*)start;
	CMPCONFMT_t* CMPCONFMT_0 = malloc(sizeof(CMPCONFMT_t));
	symbol_init(CMPCONFMT_0,"CMPCONFMT",1);

	push(CMPCONFMT_0);


	const char *pos_str[1] = {
"cmp.confmt dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	CMPCONFMT_0->sym_str = malloc(the_size);
	strcpy(CMPCONFMT_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&CMPCONFMT_0->sym_str,CMPCONFMT_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&CMPCONFMT_0->sym_str,CMPCONFMT_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&CMPCONFMT_0->sym_str,CMPCONFMT_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&CMPCONFMT_0->sym_str,CMPCONFMT_0->sym_str,"fmt",to_str(lhs->fmt,"char*"),&the_size);
		replace_to_mem_safe(&CMPCONFMT_0->sym_str,CMPCONFMT_0->sym_str,"con",to_str(lhs->con,"char*"),&the_size);
		
enqueue(CMPCONFMT_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_muld_to_MULD(void *start){
	muld_t* lhs = (muld_t*)start;
	MULD_t* MULD_0 = malloc(sizeof(MULD_t));
	symbol_init(MULD_0,"MULD",1);

	push(MULD_0);


	const char *pos_str[1] = {
"mul.d dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	MULD_0->sym_str = malloc(the_size);
	strcpy(MULD_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&MULD_0->sym_str,MULD_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&MULD_0->sym_str,MULD_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&MULD_0->sym_str,MULD_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(MULD_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_divd_to_DIVD(void *start){
	divd_t* lhs = (divd_t*)start;
	DIVD_t* DIVD_0 = malloc(sizeof(DIVD_t));
	symbol_init(DIVD_0,"DIVD",1);

	push(DIVD_0);


	const char *pos_str[1] = {
"div.d dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	DIVD_0->sym_str = malloc(the_size);
	strcpy(DIVD_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DIVD_0->sym_str,DIVD_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&DIVD_0->sym_str,DIVD_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&DIVD_0->sym_str,DIVD_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(DIVD_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dmfc1_to_DMFC1(void *start){
	dmfc1_t* lhs = (dmfc1_t*)start;
	DMFC1_t* DMFC1_0 = malloc(sizeof(DMFC1_t));
	symbol_init(DMFC1_0,"DMFC1",1);

	push(DMFC1_0);


	const char *pos_str[1] = {
"dmfc1 dest,src",
};
	int the_size = strlen(pos_str[0])+1;
	DMFC1_0->sym_str = malloc(the_size);
	strcpy(DMFC1_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&DMFC1_0->sym_str,DMFC1_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&DMFC1_0->sym_str,DMFC1_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		
enqueue(DMFC1_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mfhc1_to_MFHC1(void *start){
	mfhc1_t* lhs = (mfhc1_t*)start;
	MFHC1_t* MFHC1_0 = malloc(sizeof(MFHC1_t));
	symbol_init(MFHC1_0,"MFHC1",1);

	push(MFHC1_0);


	const char *pos_str[1] = {
"mfhc1 dest,src",
};
	int the_size = strlen(pos_str[0])+1;
	MFHC1_0->sym_str = malloc(the_size);
	strcpy(MFHC1_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&MFHC1_0->sym_str,MFHC1_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&MFHC1_0->sym_str,MFHC1_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		
enqueue(MFHC1_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mfc1_to_MFC1(void *start){
	mfc1_t* lhs = (mfc1_t*)start;
	MFC1_t* MFC1_0 = malloc(sizeof(MFC1_t));
	symbol_init(MFC1_0,"MFC1",1);

	push(MFC1_0);


	const char *pos_str[1] = {
"mfc1 dest,src",
};
	int the_size = strlen(pos_str[0])+1;
	MFC1_0->sym_str = malloc(the_size);
	strcpy(MFC1_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&MFC1_0->sym_str,MFC1_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&MFC1_0->sym_str,MFC1_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		
enqueue(MFC1_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mtc1_to_MTC1(void *start){
	mtc1_t* lhs = (mtc1_t*)start;
	MTC1_t* MTC1_0 = malloc(sizeof(MTC1_t));
	symbol_init(MTC1_0,"MTC1",1);

	push(MTC1_0);


	const char *pos_str[1] = {
"mtc1 src,dest",
};
	int the_size = strlen(pos_str[0])+1;
	MTC1_0->sym_str = malloc(the_size);
	strcpy(MTC1_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&MTC1_0->sym_str,MTC1_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		replace_to_mem_safe(&MTC1_0->sym_str,MTC1_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(MTC1_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cvtdw_to_CVTDW(void *start){
	cvtdw_t* lhs = (cvtdw_t*)start;
	CVTDW_t* CVTDW_0 = malloc(sizeof(CVTDW_t));
	symbol_init(CVTDW_0,"CVTDW",1);

	push(CVTDW_0);


	const char *pos_str[1] = {
"cvt.d.w dest,src",
};
	int the_size = strlen(pos_str[0])+1;
	CVTDW_0->sym_str = malloc(the_size);
	strcpy(CVTDW_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&CVTDW_0->sym_str,CVTDW_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&CVTDW_0->sym_str,CVTDW_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		
enqueue(CVTDW_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_subd_r_r_to_SUBD(void *start){
	subd_r_r_t* lhs = (subd_r_r_t*)start;
	SUBD_t* SUBD_0 = malloc(sizeof(SUBD_t));
	symbol_init(SUBD_0,"SUBD",1);

	push(SUBD_0);


	const char *pos_str[1] = {
"sub.d dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	SUBD_0->sym_str = malloc(the_size);
	strcpy(SUBD_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&SUBD_0->sym_str,SUBD_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&SUBD_0->sym_str,SUBD_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		replace_to_mem_safe(&SUBD_0->sym_str,SUBD_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(SUBD_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_ldc1_r_m_to_LDC1(void *start){
	ldc1_r_m_t* lhs = (ldc1_r_m_t*)start;
	LDC1_t* LDC1_0 = malloc(sizeof(LDC1_t));
	symbol_init(LDC1_0,"LDC1",1);

	push(LDC1_0);


	const char *pos_str[1] = {
"ldc1 dest,offset(base)",
};
	int the_size = strlen(pos_str[0])+1;
	LDC1_0->sym_str = malloc(the_size);
	strcpy(LDC1_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&LDC1_0->sym_str,LDC1_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&LDC1_0->sym_str,LDC1_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		replace_to_mem_safe(&LDC1_0->sym_str,LDC1_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		
enqueue(LDC1_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_sdc1_r_m_to_SDC1(void *start){
	sdc1_r_m_t* lhs = (sdc1_r_m_t*)start;
	SDC1_t* SDC1_0 = malloc(sizeof(SDC1_t));
	symbol_init(SDC1_0,"SDC1",1);

	push(SDC1_0);


	const char *pos_str[1] = {
"sdc1 src,offset(base)",
};
	int the_size = strlen(pos_str[0])+1;
	SDC1_0->sym_str = malloc(the_size);
	strcpy(SDC1_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&SDC1_0->sym_str,SDC1_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		replace_to_mem_safe(&SDC1_0->sym_str,SDC1_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		replace_to_mem_safe(&SDC1_0->sym_str,SDC1_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		
enqueue(SDC1_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_ldc1_r_m_d_to_LDC1_M(void *start){
	ldc1_r_m_d_t* lhs = (ldc1_r_m_d_t*)start;
	LDC1_M_t* LDC1_M_0 = malloc(sizeof(LDC1_M_t));
	symbol_init(LDC1_M_0,"LDC1_M",1);

	push(LDC1_M_0);


	const char *pos_str[1] = {
"ldc1 dest,dir(offset)(base)",
};
	int the_size = strlen(pos_str[0])+1;
	LDC1_M_0->sym_str = malloc(the_size);
	strcpy(LDC1_M_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&LDC1_M_0->sym_str,LDC1_M_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&LDC1_M_0->sym_str,LDC1_M_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		replace_to_mem_safe(&LDC1_M_0->sym_str,LDC1_M_0->sym_str,"dir",to_str(lhs->dir,"char*"),&the_size);
		replace_to_mem_safe(&LDC1_M_0->sym_str,LDC1_M_0->sym_str,"offset",to_str(lhs->offset,"char*"),&the_size);
		
enqueue(LDC1_M_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_trunc_w_d_to_TRUNC_W_D(void *start){
	trunc_w_d_t* lhs = (trunc_w_d_t*)start;
	TRUNC_W_D_t* TRUNC_W_D_0 = malloc(sizeof(TRUNC_W_D_t));
	symbol_init(TRUNC_W_D_0,"TRUNC_W_D",1);

	push(TRUNC_W_D_0);


	const char *pos_str[1] = {
"trunc.w.d dest,src",
};
	int the_size = strlen(pos_str[0])+1;
	TRUNC_W_D_0->sym_str = malloc(the_size);
	strcpy(TRUNC_W_D_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&TRUNC_W_D_0->sym_str,TRUNC_W_D_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&TRUNC_W_D_0->sym_str,TRUNC_W_D_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		
enqueue(TRUNC_W_D_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cvtdl_to_CVTDL(void *start){
	cvtdl_t* lhs = (cvtdl_t*)start;
	CVTDL_t* CVTDL_0 = malloc(sizeof(CVTDL_t));
	symbol_init(CVTDL_0,"CVTDL",1);

	push(CVTDL_0);


	const char *pos_str[1] = {
"cvt.d.l dest,src",
};
	int the_size = strlen(pos_str[0])+1;
	CVTDL_0->sym_str = malloc(the_size);
	strcpy(CVTDL_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&CVTDL_0->sym_str,CVTDL_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&CVTDL_0->sym_str,CVTDL_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		
enqueue(CVTDL_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_d_to_ADDD(void *start){
	add_d_t* lhs = (add_d_t*)start;
	ADDD_t* ADDD_0 = malloc(sizeof(ADDD_t));
	symbol_init(ADDD_0,"ADDD",1);

	push(ADDD_0);


	const char *pos_str[1] = {
"add.d dest,reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	ADDD_0->sym_str = malloc(the_size);
	strcpy(ADDD_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&ADDD_0->sym_str,ADDD_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&ADDD_0->sym_str,ADDD_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&ADDD_0->sym_str,ADDD_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(ADDD_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mov_d_to_MOVD(void *start){
	mov_d_t* lhs = (mov_d_t*)start;
	MOVD_t* MOVD_0 = malloc(sizeof(MOVD_t));
	symbol_init(MOVD_0,"MOVD",1);

	push(MOVD_0);


	const char *pos_str[1] = {
"mov.d dest,src",
};
	int the_size = strlen(pos_str[0])+1;
	MOVD_0->sym_str = malloc(the_size);
	strcpy(MOVD_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&MOVD_0->sym_str,MOVD_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&MOVD_0->sym_str,MOVD_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		
enqueue(MOVD_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_absd_to_ABSD(void *start){
	absd_t* lhs = (absd_t*)start;
	ABSD_t* ABSD_0 = malloc(sizeof(ABSD_t));
	symbol_init(ABSD_0,"ABSD",1);

	push(ABSD_0);


	const char *pos_str[1] = {
"abs.d dest,src",
};
	int the_size = strlen(pos_str[0])+1;
	ABSD_0->sym_str = malloc(the_size);
	strcpy(ABSD_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&ABSD_0->sym_str,ABSD_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&ABSD_0->sym_str,ABSD_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		
enqueue(ABSD_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_imovsd_r_r_to_IMOVSD_R_R(void *start){
	imovsd_r_r_t* lhs = (imovsd_r_r_t*)start;
	IMOVSD_R_R_t* IMOVSD_R_R_0 = malloc(sizeof(IMOVSD_R_R_t));
	symbol_init(IMOVSD_R_R_0,"IMOVSD_R_R",1);

	push(IMOVSD_R_R_0);


	const char *pos_str[1] = {
"movsd src,dest",
};
	int the_size = strlen(pos_str[0])+1;
	IMOVSD_R_R_0->sym_str = malloc(the_size);
	strcpy(IMOVSD_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&IMOVSD_R_R_0->sym_str,IMOVSD_R_R_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		replace_to_mem_safe(&IMOVSD_R_R_0->sym_str,IMOVSD_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(IMOVSD_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_icomisd_r_r_to_ICOMISD(void *start){
	icomisd_r_r_t* lhs = (icomisd_r_r_t*)start;
	ICOMISD_t* ICOMISD_0 = malloc(sizeof(ICOMISD_t));
	symbol_init(ICOMISD_0,"ICOMISD",1);

	push(ICOMISD_0);


	const char *pos_str[1] = {
"comisd reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	ICOMISD_0->sym_str = malloc(the_size);
	strcpy(ICOMISD_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&ICOMISD_0->sym_str,ICOMISD_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&ICOMISD_0->sym_str,ICOMISD_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(ICOMISD_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_iucomisd_r_r_to_IUCOMISD(void *start){
	iucomisd_r_r_t* lhs = (iucomisd_r_r_t*)start;
	IUCOMISD_t* IUCOMISD_0 = malloc(sizeof(IUCOMISD_t));
	symbol_init(IUCOMISD_0,"IUCOMISD",1);

	push(IUCOMISD_0);


	const char *pos_str[1] = {
"ucomisd reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	IUCOMISD_0->sym_str = malloc(the_size);
	strcpy(IUCOMISD_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&IUCOMISD_0->sym_str,IUCOMISD_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&IUCOMISD_0->sym_str,IUCOMISD_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(IUCOMISD_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_icomiss_r_r_to_ICOMISS(void *start){
	icomiss_r_r_t* lhs = (icomiss_r_r_t*)start;
	ICOMISS_t* ICOMISS_0 = malloc(sizeof(ICOMISS_t));
	symbol_init(ICOMISS_0,"ICOMISS",1);

	push(ICOMISS_0);


	const char *pos_str[1] = {
"comiss reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	ICOMISS_0->sym_str = malloc(the_size);
	strcpy(ICOMISS_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&ICOMISS_0->sym_str,ICOMISS_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&ICOMISS_0->sym_str,ICOMISS_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(ICOMISS_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_iucomiss_r_r_to_IUCOMISS(void *start){
	iucomiss_r_r_t* lhs = (iucomiss_r_r_t*)start;
	IUCOMISS_t* IUCOMISS_0 = malloc(sizeof(IUCOMISS_t));
	symbol_init(IUCOMISS_0,"IUCOMISS",1);

	push(IUCOMISS_0);


	const char *pos_str[1] = {
"ucomiss reg1,reg2",
};
	int the_size = strlen(pos_str[0])+1;
	IUCOMISS_0->sym_str = malloc(the_size);
	strcpy(IUCOMISS_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&IUCOMISS_0->sym_str,IUCOMISS_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&IUCOMISS_0->sym_str,IUCOMISS_0->sym_str,"reg2",to_str(lhs->reg2,"char*"),&the_size);
		
enqueue(IUCOMISS_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_imulsd_r_r_to_IMULSD_R_R(void *start){
	imulsd_r_r_t* lhs = (imulsd_r_r_t*)start;
	IMULSD_R_R_t* IMULSD_R_R_0 = malloc(sizeof(IMULSD_R_R_t));
	symbol_init(IMULSD_R_R_0,"IMULSD_R_R",1);

	push(IMULSD_R_R_0);


	const char *pos_str[1] = {
"mulsd reg1,dest",
};
	int the_size = strlen(pos_str[0])+1;
	IMULSD_R_R_0->sym_str = malloc(the_size);
	strcpy(IMULSD_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&IMULSD_R_R_0->sym_str,IMULSD_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&IMULSD_R_R_0->sym_str,IMULSD_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(IMULSD_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_idivsd_r_r_to_IDIVSD_R_R(void *start){
	idivsd_r_r_t* lhs = (idivsd_r_r_t*)start;
	IDIVSD_R_R_t* IDIVSD_R_R_0 = malloc(sizeof(IDIVSD_R_R_t));
	symbol_init(IDIVSD_R_R_0,"IDIVSD_R_R",1);

	push(IDIVSD_R_R_0);


	const char *pos_str[1] = {
"divsd reg1,dest",
};
	int the_size = strlen(pos_str[0])+1;
	IDIVSD_R_R_0->sym_str = malloc(the_size);
	strcpy(IDIVSD_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&IDIVSD_R_R_0->sym_str,IDIVSD_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&IDIVSD_R_R_0->sym_str,IDIVSD_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(IDIVSD_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_imovd_r_f_to_IMOVD_R_F(void *start){
	imovd_r_f_t* lhs = (imovd_r_f_t*)start;
	IMOVD_R_F_t* IMOVD_R_F_0 = malloc(sizeof(IMOVD_R_F_t));
	symbol_init(IMOVD_R_F_0,"IMOVD_R_F",1);

	push(IMOVD_R_F_0);


	const char *pos_str[1] = {
"movd src,dest",
};
	int the_size = strlen(pos_str[0])+1;
	IMOVD_R_F_0->sym_str = malloc(the_size);
	strcpy(IMOVD_R_F_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&IMOVD_R_F_0->sym_str,IMOVD_R_F_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		replace_to_mem_safe(&IMOVD_R_F_0->sym_str,IMOVD_R_F_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(IMOVD_R_F_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_imovd_f_r_to_IMOVD_F_R(void *start){
	imovd_f_r_t* lhs = (imovd_f_r_t*)start;
	IMOVD_F_R_t* IMOVD_F_R_0 = malloc(sizeof(IMOVD_F_R_t));
	symbol_init(IMOVD_F_R_0,"IMOVD_F_R",1);

	push(IMOVD_F_R_0);


	const char *pos_str[1] = {
"movd src,dest",
};
	int the_size = strlen(pos_str[0])+1;
	IMOVD_F_R_0->sym_str = malloc(the_size);
	strcpy(IMOVD_F_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&IMOVD_F_R_0->sym_str,IMOVD_F_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&IMOVD_F_R_0->sym_str,IMOVD_F_R_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		
enqueue(IMOVD_F_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_icvtsi2sd_r_r_to_ICVTSI2SD_R_R(void *start){
	icvtsi2sd_r_r_t* lhs = (icvtsi2sd_r_r_t*)start;
	ICVTSI2SD_R_R_t* ICVTSI2SD_R_R_0 = malloc(sizeof(ICVTSI2SD_R_R_t));
	symbol_init(ICVTSI2SD_R_R_0,"ICVTSI2SD_R_R",1);

	push(ICVTSI2SD_R_R_0);


	const char *pos_str[1] = {
"cvtsi2sd reg1,dest",
};
	int the_size = strlen(pos_str[0])+1;
	ICVTSI2SD_R_R_0->sym_str = malloc(the_size);
	strcpy(ICVTSI2SD_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&ICVTSI2SD_R_R_0->sym_str,ICVTSI2SD_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&ICVTSI2SD_R_R_0->sym_str,ICVTSI2SD_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(ICVTSI2SD_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_isubsd_r_r_to_ISUBSD_R_R(void *start){
	isubsd_r_r_t* lhs = (isubsd_r_r_t*)start;
	ISUBSD_R_R_t* ISUBSD_R_R_0 = malloc(sizeof(ISUBSD_R_R_t));
	symbol_init(ISUBSD_R_R_0,"ISUBSD_R_R",1);

	push(ISUBSD_R_R_0);


	const char *pos_str[1] = {
"subsd reg1,dest",
};
	int the_size = strlen(pos_str[0])+1;
	ISUBSD_R_R_0->sym_str = malloc(the_size);
	strcpy(ISUBSD_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&ISUBSD_R_R_0->sym_str,ISUBSD_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&ISUBSD_R_R_0->sym_str,ISUBSD_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(ISUBSD_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_imovsd_m_r_to_IMOVSD_M_R(void *start){
	imovsd_m_r_t* lhs = (imovsd_m_r_t*)start;
	IMOVSD_M_R_t* IMOVSD_M_R_0 = malloc(sizeof(IMOVSD_M_R_t));
	symbol_init(IMOVSD_M_R_0,"IMOVSD_M_R",1);

	push(IMOVSD_M_R_0);


	const char *pos_str[1] = {
"movsd offset(base),dest",
};
	int the_size = strlen(pos_str[0])+1;
	IMOVSD_M_R_0->sym_str = malloc(the_size);
	strcpy(IMOVSD_M_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&IMOVSD_M_R_0->sym_str,IMOVSD_M_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&IMOVSD_M_R_0->sym_str,IMOVSD_M_R_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		replace_to_mem_safe(&IMOVSD_M_R_0->sym_str,IMOVSD_M_R_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(IMOVSD_M_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_imovsd_r_m_to_IMOVSD_R_M(void *start){
	imovsd_r_m_t* lhs = (imovsd_r_m_t*)start;
	IMOVSD_R_M_t* IMOVSD_R_M_0 = malloc(sizeof(IMOVSD_R_M_t));
	symbol_init(IMOVSD_R_M_0,"IMOVSD_R_M",1);

	push(IMOVSD_R_M_0);


	const char *pos_str[1] = {
"movsd src,offset(base)",
};
	int the_size = strlen(pos_str[0])+1;
	IMOVSD_R_M_0->sym_str = malloc(the_size);
	strcpy(IMOVSD_R_M_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&IMOVSD_R_M_0->sym_str,IMOVSD_R_M_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		replace_to_mem_safe(&IMOVSD_R_M_0->sym_str,IMOVSD_R_M_0->sym_str,"offset",to_str(&lhs->offset,"int"),&the_size);
		replace_to_mem_safe(&IMOVSD_R_M_0->sym_str,IMOVSD_R_M_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(IMOVSD_R_M_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_imovapd_r_r_to_IMOVAPD_R_R(void *start){
	imovapd_r_r_t* lhs = (imovapd_r_r_t*)start;
	IMOVAPD_R_R_t* IMOVAPD_R_R_0 = malloc(sizeof(IMOVAPD_R_R_t));
	symbol_init(IMOVAPD_R_R_0,"IMOVAPD_R_R",1);

	push(IMOVAPD_R_R_0);


	const char *pos_str[1] = {
"movapd src,dest",
};
	int the_size = strlen(pos_str[0])+1;
	IMOVAPD_R_R_0->sym_str = malloc(the_size);
	strcpy(IMOVAPD_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&IMOVAPD_R_R_0->sym_str,IMOVAPD_R_R_0->sym_str,"src",to_str(lhs->src,"char*"),&the_size);
		replace_to_mem_safe(&IMOVAPD_R_R_0->sym_str,IMOVAPD_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(IMOVAPD_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_iaddsd_r_r_to_IADDSD_R_R(void *start){
	iaddsd_r_r_t* lhs = (iaddsd_r_r_t*)start;
	IADDSD_R_R_t* IADDSD_R_R_0 = malloc(sizeof(IADDSD_R_R_t));
	symbol_init(IADDSD_R_R_0,"IADDSD_R_R",1);

	push(IADDSD_R_R_0);


	const char *pos_str[1] = {
"addsd reg1,dest",
};
	int the_size = strlen(pos_str[0])+1;
	IADDSD_R_R_0->sym_str = malloc(the_size);
	strcpy(IADDSD_R_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&IADDSD_R_R_0->sym_str,IADDSD_R_R_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&IADDSD_R_R_0->sym_str,IADDSD_R_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(IADDSD_R_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_icvttsd2si_r_r_to_ICVTTSD2SI(void *start){
	icvttsd2si_r_r_t* lhs = (icvttsd2si_r_r_t*)start;
	ICVTTSD2SI_t* ICVTTSD2SI_0 = malloc(sizeof(ICVTTSD2SI_t));
	symbol_init(ICVTTSD2SI_0,"ICVTTSD2SI",1);

	push(ICVTTSD2SI_0);


	const char *pos_str[1] = {
"cvttsd2si reg1,dest",
};
	int the_size = strlen(pos_str[0])+1;
	ICVTTSD2SI_0->sym_str = malloc(the_size);
	strcpy(ICVTTSD2SI_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&ICVTTSD2SI_0->sym_str,ICVTTSD2SI_0->sym_str,"reg1",to_str(lhs->reg1,"char*"),&the_size);
		replace_to_mem_safe(&ICVTTSD2SI_0->sym_str,ICVTTSD2SI_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		
enqueue(ICVTTSD2SI_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_imovsd_lab_r_to_IMOVSD_LAB_R(void *start){
	imovsd_lab_r_t* lhs = (imovsd_lab_r_t*)start;
	IMOVSD_LAB_R_t* IMOVSD_LAB_R_0 = malloc(sizeof(IMOVSD_LAB_R_t));
	symbol_init(IMOVSD_LAB_R_0,"IMOVSD_LAB_R",1);

	push(IMOVSD_LAB_R_0);


	const char *pos_str[1] = {
"movsd offset(base),dest",
};
	int the_size = strlen(pos_str[0])+1;
	IMOVSD_LAB_R_0->sym_str = malloc(the_size);
	strcpy(IMOVSD_LAB_R_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&IMOVSD_LAB_R_0->sym_str,IMOVSD_LAB_R_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&IMOVSD_LAB_R_0->sym_str,IMOVSD_LAB_R_0->sym_str,"offset",to_str(lhs->offset,"char*"),&the_size);
		replace_to_mem_safe(&IMOVSD_LAB_R_0->sym_str,IMOVSD_LAB_R_0->sym_str,"base",to_str(lhs->base,"char*"),&the_size);
		
enqueue(IMOVSD_LAB_R_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_andpd_m_to_ANDPD_M(void *start){
	andpd_m_t* lhs = (andpd_m_t*)start;
	ANDPD_M_t* ANDPD_M_0 = malloc(sizeof(ANDPD_M_t));
	symbol_init(ANDPD_M_0,"ANDPD_M",1);

	push(ANDPD_M_0);


	const char *pos_str[1] = {
"andpd mask,dest",
};
	int the_size = strlen(pos_str[0])+1;
	ANDPD_M_0->sym_str = malloc(the_size);
	strcpy(ANDPD_M_0->sym_str, pos_str[0]);
	replace_to_mem_safe(&ANDPD_M_0->sym_str,ANDPD_M_0->sym_str,"dest",to_str(lhs->dest,"char*"),&the_size);
		replace_to_mem_safe(&ANDPD_M_0->sym_str,ANDPD_M_0->sym_str,"mask",to_str(&lhs->mask,"long"),&the_size);
		
enqueue(ANDPD_M_0->sym_str);


bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_teq_t_to_i_prologue_i_cmp_r_r_i_jnz_i_ud2_code_label(void *start){
	teq_t_t* lhs = (teq_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_cmp_r_r_t* i_cmp_r_r_1 = malloc(sizeof(i_cmp_r_r_t));
	symbol_init(i_cmp_r_r_1,"i_cmp_r_r",0);
i_jnz_t* i_jnz_2 = malloc(sizeof(i_jnz_t));
	symbol_init(i_jnz_2,"i_jnz",0);
i_ud2_t* i_ud2_3 = malloc(sizeof(i_ud2_t));
	symbol_init(i_ud2_3,"i_ud2",0);
code_label_t* code_label_4 = malloc(sizeof(code_label_t));
	symbol_init(code_label_4,"code_label",0);

        i_prologue_0->reg1 = get_mem_reg(lhs->reg1);
        i_prologue_0->old1 = lhs->reg1;
        i_prologue_0->reg2 = get_mem_reg(lhs->reg2);
        i_prologue_0->old2 = lhs->reg2;
        i_cmp_r_r_1->suffix = suf_values[1];
        i_cmp_r_r_1->reg1 = i_prologue_0->reg1;
        i_cmp_r_r_1->reg2 = i_prologue_0->reg2;
        i_jnz_2->text = create_label();
        code_label_4->text = i_jnz_2->text;
        release_mem_regs();

	push(code_label_4);
	push(i_ud2_3);
	push(i_jnz_2);
	push(i_cmp_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_ra_t_to_i_prologue_i_mov_r_r_i_sar_i_r_i_store_mem(void *start){
	shift_ra_t_t* lhs = (shift_ra_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_sar_i_r_t* i_sar_i_r_2 = malloc(sizeof(i_sar_i_r_t));
	symbol_init(i_sar_i_r_2,"i_sar_i_r",0);
i_store_mem_t* i_store_mem_3 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_3,"i_store_mem",0);

        i_prologue_0->reg1 = get_mem_reg(lhs->reg1);
        i_prologue_0->old1 = lhs->reg1;
        i_prologue_0->reg2 = get_mem_reg(lhs->dest);
        i_prologue_0->old2 = lhs->dest;
        i_mov_r_r_1->dest = i_prologue_0->reg2;
        i_mov_r_r_1->reg1 = i_prologue_0->reg1;
        i_mov_r_r_1->suffix = suf_values[1];
        i_sar_i_r_2->reg1 = i_prologue_0->reg2;
        i_sar_i_r_2->imm = lhs->imm;
        i_sar_i_r_2->suffix = suf_values[1];
        i_store_mem_3->reg1 = i_prologue_0->reg2;
        i_store_mem_3->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_3);
	push(i_sar_i_r_2);
	push(i_mov_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_ltu_c_t_to_i_prologue_i_cmp_r_r_i_jbu(void *start){
	branch_ltu_c_t_t* lhs = (branch_ltu_c_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_cmp_r_r_t* i_cmp_r_r_1 = malloc(sizeof(i_cmp_r_r_t));
	symbol_init(i_cmp_r_r_1,"i_cmp_r_r",0);
i_jbu_t* i_jbu_2 = malloc(sizeof(i_jbu_t));
	symbol_init(i_jbu_2,"i_jbu",0);

        i_prologue_0->reg1 = get_mem_reg(lhs->reg1);
        i_prologue_0->old1 = lhs->reg1;
        i_prologue_0->reg2 = get_mem_reg(lhs->reg2);
        i_prologue_0->old2 = lhs->reg2;
        i_cmp_r_r_1->reg2 = i_prologue_0->reg1;
        i_cmp_r_r_1->reg1 = i_prologue_0->reg2;
        i_cmp_r_r_1->suffix = suf_values[1];
        i_jbu_2->text = lhs->target;
        release_mem_regs();


	push(i_jbu_2);
	push(i_cmp_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_lt_c_t_to_i_prologue_i_cmp_r_r_i_jb(void *start){
	branch_lt_c_t_t* lhs = (branch_lt_c_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_cmp_r_r_t* i_cmp_r_r_1 = malloc(sizeof(i_cmp_r_r_t));
	symbol_init(i_cmp_r_r_1,"i_cmp_r_r",0);
i_jb_t* i_jb_2 = malloc(sizeof(i_jb_t));
	symbol_init(i_jb_2,"i_jb",0);

        i_prologue_0->reg1 = get_mem_reg(lhs->reg1);
        i_prologue_0->old1 = lhs->reg1;
        i_prologue_0->reg2 = get_mem_reg(lhs->reg2);
        i_prologue_0->old2 = lhs->reg2;
        i_cmp_r_r_1->reg2 = i_prologue_0->reg1;
        i_cmp_r_r_1->reg1 = i_prologue_0->reg2;
        i_cmp_r_r_1->suffix = suf_values[1];
        i_jb_2->text = lhs->target;
        release_mem_regs();


	push(i_jb_2);
	push(i_cmp_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_geu_c_t_to_i_prologue_i_cmp_r_r_i_jae_u(void *start){
	branch_geu_c_t_t* lhs = (branch_geu_c_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_cmp_r_r_t* i_cmp_r_r_1 = malloc(sizeof(i_cmp_r_r_t));
	symbol_init(i_cmp_r_r_1,"i_cmp_r_r",0);
i_jae_u_t* i_jae_u_2 = malloc(sizeof(i_jae_u_t));
	symbol_init(i_jae_u_2,"i_jae_u",0);

        i_prologue_0->reg1 = get_mem_reg(lhs->reg1);
        i_prologue_0->old1 = lhs->reg1;
        i_prologue_0->reg2 = get_mem_reg(lhs->reg2);
        i_prologue_0->old2 = lhs->reg2;
        i_cmp_r_r_1->reg2 = i_prologue_0->reg1;
        i_cmp_r_r_1->reg1 = i_prologue_0->reg2;
        i_cmp_r_r_1->suffix = suf_values[1];
        i_jae_u_2->text = lhs->target;
        release_mem_regs();


	push(i_jae_u_2);
	push(i_cmp_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_ge_c_t_to_i_prologue_i_cmp_r_r_i_jae(void *start){
	branch_ge_c_t_t* lhs = (branch_ge_c_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_cmp_r_r_t* i_cmp_r_r_1 = malloc(sizeof(i_cmp_r_r_t));
	symbol_init(i_cmp_r_r_1,"i_cmp_r_r",0);
i_jae_t* i_jae_2 = malloc(sizeof(i_jae_t));
	symbol_init(i_jae_2,"i_jae",0);

        i_prologue_0->reg1 = get_mem_reg(lhs->reg1);
        i_prologue_0->old1 = lhs->reg1;
        i_prologue_0->reg2 = get_mem_reg(lhs->reg2);
        i_prologue_0->old2 = lhs->reg2;
        i_cmp_r_r_1->reg2 = i_prologue_0->reg1;
        i_cmp_r_r_1->reg1 = i_prologue_0->reg2;
        i_cmp_r_r_1->suffix = suf_values[1];
        i_jae_2->text = lhs->target;
        release_mem_regs();


	push(i_jae_2);
	push(i_cmp_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_gtz_c_t_to_i_load_mem_i_cmp_r_r_i_ja(void *start){
	branch_gtz_c_t_t* lhs = (branch_gtz_c_t_t*)start;
	i_load_mem_t* i_load_mem_0 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_0,"i_load_mem",0);
i_cmp_r_r_t* i_cmp_r_r_1 = malloc(sizeof(i_cmp_r_r_t));
	symbol_init(i_cmp_r_r_1,"i_cmp_r_r",0);
i_ja_t* i_ja_2 = malloc(sizeof(i_ja_t));
	symbol_init(i_ja_2,"i_ja",0);

               i_load_mem_0->reg1 = get_mem_reg(lhs->reg1); 
               i_load_mem_0->old1 = lhs->reg1;
               i_cmp_r_r_1->suffix = suf_values[1]; 
               i_cmp_r_r_1->reg2 = i_load_mem_0->reg1;
               i_cmp_r_r_1->reg1 = map_register(reg_values[0],32);
               i_ja_2->text = lhs->target;
               release_mem_regs();

	push(i_ja_2);
	push(i_cmp_r_r_1);
	push(i_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_set_l_r_i_t_to_i_prologue_i_cmp_r_i_i_jb_i_mov_i_r_i_jmp_code_label_i_mov_i_r_code_label_i_store_mem(void *start){
	set_l_r_i_t_t* lhs = (set_l_r_i_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_cmp_r_i_t* i_cmp_r_i_1 = malloc(sizeof(i_cmp_r_i_t));
	symbol_init(i_cmp_r_i_1,"i_cmp_r_i",0);
i_jb_t* i_jb_2 = malloc(sizeof(i_jb_t));
	symbol_init(i_jb_2,"i_jb",0);
i_mov_i_r_t* i_mov_i_r_3 = malloc(sizeof(i_mov_i_r_t));
	symbol_init(i_mov_i_r_3,"i_mov_i_r",0);
i_jmp_t* i_jmp_4 = malloc(sizeof(i_jmp_t));
	symbol_init(i_jmp_4,"i_jmp",0);
code_label_t* code_label_5 = malloc(sizeof(code_label_t));
	symbol_init(code_label_5,"code_label",0);
i_mov_i_r_t* i_mov_i_r_6 = malloc(sizeof(i_mov_i_r_t));
	symbol_init(i_mov_i_r_6,"i_mov_i_r",0);
code_label_t* code_label_7 = malloc(sizeof(code_label_t));
	symbol_init(code_label_7,"code_label",0);
i_store_mem_t* i_store_mem_8 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_8,"i_store_mem",0);

        i_cmp_r_i_1->suffix = lhs->suffix;
        i_mov_i_r_3->suffix = lhs->suffix;
        i_mov_i_r_6->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->reg1);
        i_prologue_0->reg2 = get_mem_reg(lhs->dest);
        i_prologue_0->old1 = lhs->reg1;
        i_prologue_0->old2 = lhs->dest;
        i_cmp_r_i_1->reg1 = i_prologue_0->reg1;
        i_cmp_r_i_1->imm = lhs->imm;
        i_jb_2->text = create_label();
        i_mov_i_r_3->imm = 0;
        i_mov_i_r_3->dest = i_prologue_0->reg2;
        i_jmp_4->text = create_label();
        code_label_5->text = print_as_a_label(i_jb_2->text);
        i_mov_i_r_6->dest = i_prologue_0->reg2;
        i_mov_i_r_6->imm = 1;
        code_label_7->text = print_as_a_label(i_jmp_4->text);
        i_store_mem_8->reg1 = i_prologue_0->reg2;
        i_store_mem_8->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_8);
	push(code_label_7);
	push(i_mov_i_r_6);
	push(code_label_5);
	push(i_jmp_4);
	push(i_mov_i_r_3);
	push(i_jb_2);
	push(i_cmp_r_i_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_set_l_r_r_t_to_i_prologue_i_cmp_r_r_i_jb_i_load_mem_i_mov_i_r_i_jmp_code_label_i_load_mem_i_mov_i_r_code_label_i_store_mem(void *start){
	set_l_r_r_t_t* lhs = (set_l_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_cmp_r_r_t* i_cmp_r_r_1 = malloc(sizeof(i_cmp_r_r_t));
	symbol_init(i_cmp_r_r_1,"i_cmp_r_r",0);
i_jb_t* i_jb_2 = malloc(sizeof(i_jb_t));
	symbol_init(i_jb_2,"i_jb",0);
i_load_mem_t* i_load_mem_3 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_3,"i_load_mem",0);
i_mov_i_r_t* i_mov_i_r_4 = malloc(sizeof(i_mov_i_r_t));
	symbol_init(i_mov_i_r_4,"i_mov_i_r",0);
i_jmp_t* i_jmp_5 = malloc(sizeof(i_jmp_t));
	symbol_init(i_jmp_5,"i_jmp",0);
code_label_t* code_label_6 = malloc(sizeof(code_label_t));
	symbol_init(code_label_6,"code_label",0);
i_load_mem_t* i_load_mem_7 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_7,"i_load_mem",0);
i_mov_i_r_t* i_mov_i_r_8 = malloc(sizeof(i_mov_i_r_t));
	symbol_init(i_mov_i_r_8,"i_mov_i_r",0);
code_label_t* code_label_9 = malloc(sizeof(code_label_t));
	symbol_init(code_label_9,"code_label",0);
i_store_mem_t* i_store_mem_10 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_10,"i_store_mem",0);

        i_cmp_r_r_1->suffix = lhs->suffix;
        i_mov_i_r_4->suffix = lhs->suffix;
        i_mov_i_r_8->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->reg1);
        i_prologue_0->reg2 = get_mem_reg(lhs->reg2);
        i_prologue_0->old1 = lhs->reg1;
        i_prologue_0->old2 = lhs->reg2;
        i_cmp_r_r_1->reg2 = i_prologue_0->reg1;
        i_cmp_r_r_1->reg1 = i_prologue_0->reg2;
        release_mem_regs();
        i_jb_2->text = create_label();
        i_load_mem_3->reg1 = get_mem_reg(lhs->dest);
        i_load_mem_3->old1 = lhs->dest;
        i_mov_i_r_4->imm = 0;
        i_mov_i_r_4->dest = i_load_mem_3->reg1;
        i_jmp_5->text = create_label();
        code_label_6->text = print_as_a_label(i_jb_2->text);
        i_load_mem_7->reg1 = i_load_mem_3->reg1;
        i_mov_i_r_8->dest = i_load_mem_7->reg1;
        i_mov_i_r_8->imm = 1;
        code_label_9->text = print_as_a_label(i_jmp_5->text);
        i_store_mem_10->reg1 = i_load_mem_7->reg1;
        i_store_mem_10->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_10);
	push(code_label_9);
	push(i_mov_i_r_8);
	push(i_load_mem_7);
	push(code_label_6);
	push(i_jmp_5);
	push(i_mov_i_r_4);
	push(i_load_mem_3);
	push(i_jb_2);
	push(i_cmp_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_call_t_to_i_call(void *start){
	call_t_t* lhs = (call_t_t*)start;
	i_call_t* i_call_0 = malloc(sizeof(i_call_t));
	symbol_init(i_call_0,"i_call",0);

        i_call_0->text = get_fun(lhs->address);

	push(i_call_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_jump_r_t_to_i_ret(void *start){
	jump_r_t_t* lhs = (jump_r_t_t*)start;
	i_ret_t* i_ret_0 = malloc(sizeof(i_ret_t));
	symbol_init(i_ret_0,"i_ret",0);

        if (strcmp(lhs->reg1,map_register("$ra",64)) != 0){
                push(start);
	free(i_ret_0);
	bitmap_set(rule_bitmap,170);
return;

        }

	push(i_ret_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_jump_r_t_to_i_load_mem_i_jmp_r(void *start){
	jump_r_t_t* lhs = (jump_r_t_t*)start;
	i_load_mem_t* i_load_mem_0 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_0,"i_load_mem",0);
i_jmp_r_t* i_jmp_r_1 = malloc(sizeof(i_jmp_r_t));
	symbol_init(i_jmp_r_1,"i_jmp_r",0);

        if (strcmp(lhs->reg1,map_register("$ra",64)) == 0){
                push(start);
	free(i_load_mem_0);
free(i_jmp_r_1);
	bitmap_set(rule_bitmap,171);
return;

        }
        i_load_mem_0->reg1 = get_mem_reg(lhs->reg1);
        i_load_mem_0->old1 = lhs->reg1;
        i_jmp_r_1->reg1 = i_load_mem_0->reg1;
        i_jmp_r_1->suffix = lhs->suffix;
        release_mem_regs();

	push(i_jmp_r_1);
	push(i_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_jump_t_to_i_jmp(void *start){
	jump_t_t* lhs = (jump_t_t*)start;
	i_jmp_t* i_jmp_0 = malloc(sizeof(i_jmp_t));
	symbol_init(i_jmp_0,"i_jmp",0);

        i_jmp_0->text = lhs->address;

	push(i_jmp_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_neq_r_r_t_to_i_prologue_i_cmp_r_r_i_jnz(void *start){
	branch_neq_r_r_t_t* lhs = (branch_neq_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_cmp_r_r_t* i_cmp_r_r_1 = malloc(sizeof(i_cmp_r_r_t));
	symbol_init(i_cmp_r_r_1,"i_cmp_r_r",0);
i_jnz_t* i_jnz_2 = malloc(sizeof(i_jnz_t));
	symbol_init(i_jnz_2,"i_jnz",0);

        i_cmp_r_r_1->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->reg1);
        i_prologue_0->reg2 = get_mem_reg(lhs->reg2);
        i_prologue_0->old1 = lhs->reg1;
        i_prologue_0->old2 = lhs->reg2;
        i_cmp_r_r_1->reg1 = i_prologue_0->reg1;
        i_cmp_r_r_1->reg2 = i_prologue_0->reg2;
        i_jnz_2->text = lhs->address;
        release_mem_regs();

	push(i_jnz_2);
	push(i_cmp_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_eq_r_r_t_to_i_prologue_i_cmp_r_r_i_jz(void *start){
	branch_eq_r_r_t_t* lhs = (branch_eq_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_cmp_r_r_t* i_cmp_r_r_1 = malloc(sizeof(i_cmp_r_r_t));
	symbol_init(i_cmp_r_r_1,"i_cmp_r_r",0);
i_jz_t* i_jz_2 = malloc(sizeof(i_jz_t));
	symbol_init(i_jz_2,"i_jz",0);

        i_cmp_r_r_1->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->reg1);
        i_prologue_0->reg2 = get_mem_reg(lhs->reg2);
        i_prologue_0->old1 = lhs->reg1;
        i_prologue_0->old2 = lhs->reg2;
        i_cmp_r_r_1->reg1 = i_prologue_0->reg1;
        i_cmp_r_r_1->reg2 = i_prologue_0->reg2;
        i_jz_2->text = lhs->address;
        release_mem_regs();

	push(i_jz_2);
	push(i_cmp_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_r_t_to_i_prologue_i_mov_r_r_i_shr_i_r_i_store_mem(void *start){
	shift_r_t_t* lhs = (shift_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_shr_i_r_t* i_shr_i_r_2 = malloc(sizeof(i_shr_i_r_t));
	symbol_init(i_shr_i_r_2,"i_shr_i_r",0);
i_store_mem_t* i_store_mem_3 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_3,"i_store_mem",0);

        i_mov_r_r_1->suffix = lhs->suffix;
        i_shr_i_r_2->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->reg2 = get_mem_reg(lhs->reg1);
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->reg1;
        i_mov_r_r_1->reg1 = i_prologue_0->reg2;
        i_mov_r_r_1->dest = i_prologue_0->reg1;
        i_shr_i_r_2->reg1 = i_mov_r_r_1->dest;
        i_shr_i_r_2->imm = lhs->imm;
        i_store_mem_3->reg1 = i_shr_i_r_2->reg1;
        i_store_mem_3->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_3);
	push(i_shr_i_r_2);
	push(i_mov_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_l_t_to_i_prologue_i_mov_r_r_i_shl_i_r_i_store_mem(void *start){
	shift_l_t_t* lhs = (shift_l_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_shl_i_r_t* i_shl_i_r_2 = malloc(sizeof(i_shl_i_r_t));
	symbol_init(i_shl_i_r_2,"i_shl_i_r",0);
i_store_mem_t* i_store_mem_3 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_3,"i_store_mem",0);

        i_mov_r_r_1->suffix = lhs->suffix;
        i_shl_i_r_2->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->reg2 = get_mem_reg(lhs->reg1);
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->reg1;
        i_mov_r_r_1->reg1 = i_prologue_0->reg2;
        i_mov_r_r_1->dest = i_prologue_0->reg1;
        i_shl_i_r_2->reg1 = i_mov_r_r_1->dest;
        i_shl_i_r_2->imm = lhs->imm;
        i_store_mem_3->reg1 = i_shl_i_r_2->reg1;
        i_store_mem_3->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_3);
	push(i_shl_i_r_2);
	push(i_mov_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_nor_r_r_t_to_i_load_mem_i_not_r_i_store_mem(void *start){
	nor_r_r_t_t* lhs = (nor_r_r_t_t*)start;
	i_load_mem_t* i_load_mem_0 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_0,"i_load_mem",0);
i_not_r_t* i_not_r_1 = malloc(sizeof(i_not_r_t));
	symbol_init(i_not_r_1,"i_not_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

        if (lhs->dest != lhs->reg1 || lhs->dest != lhs->reg2){
                push(start);
	free(i_load_mem_0);
free(i_not_r_1);
free(i_store_mem_2);
	bitmap_set(rule_bitmap,177);
return;

        }
        i_not_r_1->suffix = lhs->suffix;
        i_load_mem_0->reg1 = get_mem_reg(lhs->dest);
        i_load_mem_0->old1 = lhs->dest;
        i_not_r_1->reg1 = i_load_mem_0->reg1;
        i_store_mem_2->reg1 = i_not_r_1->reg1;
        i_store_mem_2->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_2);
	push(i_not_r_1);
	push(i_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_nor_r_r_t_to_i_prologue_i_or_r_r_i_not_r_i_store_mem(void *start){
	nor_r_r_t_t* lhs = (nor_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_or_r_r_t* i_or_r_r_1 = malloc(sizeof(i_or_r_r_t));
	symbol_init(i_or_r_r_1,"i_or_r_r",0);
i_not_r_t* i_not_r_2 = malloc(sizeof(i_not_r_t));
	symbol_init(i_not_r_2,"i_not_r",0);
i_store_mem_t* i_store_mem_3 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_3,"i_store_mem",0);

        if ((lhs->dest != lhs->reg1 && lhs->dest != lhs->reg2) || (lhs->dest == lhs->reg1 && lhs->dest == lhs->reg2)){
                push(start);
	free(i_prologue_0);
free(i_or_r_r_1);
free(i_not_r_2);
free(i_store_mem_3);
	bitmap_set(rule_bitmap,178);
return;

        }
        i_or_r_r_1->suffix = lhs->suffix;
        i_not_r_2->suffix = lhs->suffix;
        if (lhs->dest == lhs->reg1){
                i_prologue_0->reg1 = get_mem_reg(lhs->dest);
                i_prologue_0->reg2 = get_mem_reg(lhs->reg1);
                i_prologue_0->old1 = lhs->dest;
                i_prologue_0->old2 = lhs->reg1;
                i_or_r_r_1->reg1 = i_prologue_0->reg2;
                i_or_r_r_1->dest = i_prologue_0->reg1;
                i_not_r_2->reg1 = i_or_r_r_1->dest;
                i_store_mem_3->reg1 = i_or_r_r_1->dest;
                i_store_mem_3->old1 = lhs->dest;
        }
        if (lhs->dest == lhs->reg2){
                i_prologue_0->reg1 = get_mem_reg(lhs->dest);
                i_prologue_0->reg2 = get_mem_reg(lhs->reg2);
                i_prologue_0->old1 = lhs->dest;
                i_prologue_0->old2 = lhs->reg2;
                i_or_r_r_1->reg1 = i_prologue_0->reg2;
                i_or_r_r_1->dest = i_prologue_0->reg1;
                i_not_r_2->reg1 = i_or_r_r_1->dest;
                i_store_mem_3->reg1 = i_or_r_r_1->dest;
                i_store_mem_3->old1 = lhs->dest;
        }
        release_mem_regs();

	push(i_store_mem_3);
	push(i_not_r_2);
	push(i_or_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_nor_r_r_t_to_i_prologue_i_mov_r_r_i_load_mem_i_or_r_r_i_not_r_i_store_mem(void *start){
	nor_r_r_t_t* lhs = (nor_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_load_mem_t* i_load_mem_2 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_2,"i_load_mem",0);
i_or_r_r_t* i_or_r_r_3 = malloc(sizeof(i_or_r_r_t));
	symbol_init(i_or_r_r_3,"i_or_r_r",0);
i_not_r_t* i_not_r_4 = malloc(sizeof(i_not_r_t));
	symbol_init(i_not_r_4,"i_not_r",0);
i_store_mem_t* i_store_mem_5 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_5,"i_store_mem",0);

        if (lhs->dest == lhs->reg1 || lhs->dest == lhs->reg2){
                push(start);
	free(i_prologue_0);
free(i_mov_r_r_1);
free(i_load_mem_2);
free(i_or_r_r_3);
free(i_not_r_4);
free(i_store_mem_5);
	bitmap_set(rule_bitmap,179);
return;

        }
        i_mov_r_r_1->suffix = lhs->suffix;
        i_or_r_r_3->suffix = lhs->suffix;
        i_not_r_4->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->reg2 = get_mem_reg(lhs->reg1);
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->reg1;
        i_mov_r_r_1->reg1 = i_prologue_0->reg2;
        i_mov_r_r_1->dest = i_prologue_0->reg1;
        release_mem_reg(i_prologue_0->reg2);
        i_load_mem_2->reg1 = get_mem_reg(lhs->reg2);
        i_load_mem_2->old1 = lhs->reg2;
        i_or_r_r_3->reg1 = i_load_mem_2->reg1;
        i_or_r_r_3->dest = i_mov_r_r_1->dest;
        i_not_r_4->reg1 = i_or_r_r_3->dest;
        i_store_mem_5->reg1 = i_or_r_r_3->dest;
        i_store_mem_5->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_5);
	push(i_not_r_4);
	push(i_or_r_r_3);
	push(i_load_mem_2);
	push(i_mov_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_xor_r_r_t_to_i_prologue_i_xor_r_r_i_store_mem(void *start){
	xor_r_r_t_t* lhs = (xor_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_xor_r_r_t* i_xor_r_r_1 = malloc(sizeof(i_xor_r_r_t));
	symbol_init(i_xor_r_r_1,"i_xor_r_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

        if (lhs->dest != lhs->reg1 && lhs->dest != lhs->reg2){
                push(start);
	free(i_prologue_0);
free(i_xor_r_r_1);
free(i_store_mem_2);
	bitmap_set(rule_bitmap,180);
return;

        }
        i_xor_r_r_1->suffix = lhs->suffix;
        if (lhs->dest == lhs->reg1){
                i_prologue_0->reg1 = get_mem_reg(lhs->dest);
                i_prologue_0->reg2 = get_mem_reg(lhs->reg1);
                i_prologue_0->old1 = lhs->dest;
                i_prologue_0->old2 = lhs->reg1;
                i_xor_r_r_1->reg1 = i_prologue_0->reg2;
                i_xor_r_r_1->dest = i_prologue_0->reg1;
                i_store_mem_2->reg1 = i_xor_r_r_1->dest;
                i_store_mem_2->old1 = lhs->dest;
        }
        if (lhs->dest == lhs->reg2){
                i_prologue_0->reg1 = get_mem_reg(lhs->dest);
                i_prologue_0->reg2 = get_mem_reg(lhs->reg2);
                i_prologue_0->old1 = lhs->dest;
                i_prologue_0->old2 = lhs->reg2;
                i_xor_r_r_1->reg1 = i_prologue_0->reg2;
                i_xor_r_r_1->dest = i_prologue_0->reg1;
                i_store_mem_2->reg1 = i_xor_r_r_1->dest;
                i_store_mem_2->old1 = lhs->dest;
        }
        if (lhs->dest == lhs->reg1 && lhs->dest == lhs->reg2){
                i_prologue_0->reg1 = get_mem_reg(lhs->dest);
                i_prologue_0->reg2 = get_mem_reg(lhs->dest);
                i_prologue_0->old1 = lhs->dest;
                i_prologue_0->old2 = lhs->dest;
                i_xor_r_r_1->reg1 = i_prologue_0->reg1;
                i_xor_r_r_1->dest = i_xor_r_r_1->reg1;
                i_store_mem_2->reg1 = i_xor_r_r_1->reg1;
                i_store_mem_2->old1 = lhs->dest;
        }
        release_mem_regs();

	push(i_store_mem_2);
	push(i_xor_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_xor_r_r_t_to_i_prologue_i_mov_r_r_i_load_mem_i_xor_r_r_i_store_mem(void *start){
	xor_r_r_t_t* lhs = (xor_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_load_mem_t* i_load_mem_2 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_2,"i_load_mem",0);
i_xor_r_r_t* i_xor_r_r_3 = malloc(sizeof(i_xor_r_r_t));
	symbol_init(i_xor_r_r_3,"i_xor_r_r",0);
i_store_mem_t* i_store_mem_4 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_4,"i_store_mem",0);


        if (lhs->dest == lhs->reg1 || lhs->dest == lhs->reg2){
                push(start);
	free(i_prologue_0);
free(i_mov_r_r_1);
free(i_load_mem_2);
free(i_xor_r_r_3);
free(i_store_mem_4);
	bitmap_set(rule_bitmap,181);
return;

        }
        i_mov_r_r_1->suffix = lhs->suffix;
        i_xor_r_r_3->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->reg1);
        i_prologue_0->reg2 = get_mem_reg(lhs->dest);
        i_prologue_0->old1 = lhs->reg1;
        i_prologue_0->old2 = lhs->dest;
        i_mov_r_r_1->dest = get_mem_reg(lhs->dest); 
        i_mov_r_r_1->reg1 = get_mem_reg(lhs->reg1);
        release_mem_reg(lhs->reg1);
        i_load_mem_2->reg1 = get_mem_reg(lhs->reg2);
        i_load_mem_2->old1 = lhs->reg2;
        i_xor_r_r_3->reg1 = get_mem_reg(lhs->reg2);
        i_xor_r_r_3->dest = get_mem_reg(lhs->dest);
        i_store_mem_4->reg1 = get_mem_reg(lhs->dest);
        i_store_mem_4->old1 = lhs->dest;
        release_mem_regs();
         

	push(i_store_mem_4);
	push(i_xor_r_r_3);
	push(i_load_mem_2);
	push(i_mov_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_i_t_to_i_load_mem_i_or_i_r_i_store_mem(void *start){
	or_r_i_t_t* lhs = (or_r_i_t_t*)start;
	i_load_mem_t* i_load_mem_0 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_0,"i_load_mem",0);
i_or_i_r_t* i_or_i_r_1 = malloc(sizeof(i_or_i_r_t));
	symbol_init(i_or_i_r_1,"i_or_i_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

        if (lhs->dest != lhs->reg1){
                push(start);
	free(i_load_mem_0);
free(i_or_i_r_1);
free(i_store_mem_2);
	bitmap_set(rule_bitmap,182);
return;

        }
        i_or_i_r_1->suffix = lhs->suffix;
        i_load_mem_0->reg1 = get_mem_reg(lhs->dest);
        i_load_mem_0->old1 = lhs->dest;
        i_or_i_r_1->dest = i_load_mem_0->reg1;
        i_or_i_r_1->imm = lhs->imm;
        i_store_mem_2->reg1 = i_load_mem_0->reg1;
        i_store_mem_2->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_2);
	push(i_or_i_r_1);
	push(i_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_i_t_to_i_prologue_i_mov_r_r_i_or_i_r_i_store_mem(void *start){
	or_r_i_t_t* lhs = (or_r_i_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_or_i_r_t* i_or_i_r_2 = malloc(sizeof(i_or_i_r_t));
	symbol_init(i_or_i_r_2,"i_or_i_r",0);
i_store_mem_t* i_store_mem_3 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_3,"i_store_mem",0);

        if (lhs->dest == lhs->reg1){
                push(start);
	free(i_prologue_0);
free(i_mov_r_r_1);
free(i_or_i_r_2);
free(i_store_mem_3);
	bitmap_set(rule_bitmap,183);
return;

        }
        i_mov_r_r_1->suffix = lhs->suffix;
        i_or_i_r_2->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->reg2 = get_mem_reg(lhs->reg1);
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->reg1;
        i_mov_r_r_1->dest = i_prologue_0->reg1;
        i_mov_r_r_1->reg1 = i_prologue_0->reg2;
        i_or_i_r_2->dest = i_prologue_0->reg1;
        i_or_i_r_2->imm = lhs->imm;
        i_store_mem_3->reg1 = i_prologue_0->reg1;
        i_store_mem_3->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_3);
	push(i_or_i_r_2);
	push(i_mov_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_r_t_to_nop(void *start){
	or_r_r_t_t* lhs = (or_r_r_t_t*)start;
	nop_t* nop_0 = malloc(sizeof(nop_t));
	symbol_init(nop_0,"nop",0);


        if (!(lhs->dest == lhs->reg1 && lhs->dest == lhs->reg2)){
                push(start);
	free(nop_0);
	bitmap_set(rule_bitmap,184);
return;

        }

	push(nop_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_r_t_to_i_prologue_i_or_r_r_i_store_mem(void *start){
	or_r_r_t_t* lhs = (or_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_or_r_r_t* i_or_r_r_1 = malloc(sizeof(i_or_r_r_t));
	symbol_init(i_or_r_r_1,"i_or_r_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);


        if ((lhs->dest != lhs->reg1 && lhs->dest != lhs->reg2) || (lhs->dest == lhs->reg1 && lhs->dest == lhs->reg2)){
                push(start);
	free(i_prologue_0);
free(i_or_r_r_1);
free(i_store_mem_2);
	bitmap_set(rule_bitmap,185);
return;

        }
        i_or_r_r_1->suffix = lhs->suffix;
        if (lhs->dest == lhs->reg1){
                i_prologue_0->reg1 = get_mem_reg(lhs->dest);
                i_prologue_0->reg2 = get_mem_reg(lhs->reg2);
                i_prologue_0->old1 = lhs->dest;
                i_prologue_0->old2 = lhs->reg2;
                i_or_r_r_1->reg1 = i_prologue_0->reg2;
                i_or_r_r_1->dest = i_prologue_0->reg1;
                i_store_mem_2->reg1 = i_or_r_r_1->dest;
                i_store_mem_2->old1 = lhs->dest;
        }
        if (lhs->dest == lhs->reg2){
                i_prologue_0->reg1 = get_mem_reg(lhs->dest);
                i_prologue_0->reg2 = get_mem_reg(lhs->reg1);
                i_prologue_0->old1 = lhs->dest;
                i_prologue_0->old2 = lhs->reg1;
                i_or_r_r_1->reg1 = i_prologue_0->reg2;
                i_or_r_r_1->dest = i_prologue_0->reg1;
                i_store_mem_2->reg1 = i_or_r_r_1->dest;
                i_store_mem_2->old1 = lhs->dest;
        }
        release_mem_regs();

	push(i_store_mem_2);
	push(i_or_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_r_t_to_i_prologue_i_mov_r_r_i_load_mem_i_or_r_r_i_store_mem(void *start){
	or_r_r_t_t* lhs = (or_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_load_mem_t* i_load_mem_2 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_2,"i_load_mem",0);
i_or_r_r_t* i_or_r_r_3 = malloc(sizeof(i_or_r_r_t));
	symbol_init(i_or_r_r_3,"i_or_r_r",0);
i_store_mem_t* i_store_mem_4 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_4,"i_store_mem",0);

        if (lhs->dest == lhs->reg1 || lhs->dest == lhs->reg2){
                push(start);
	free(i_prologue_0);
free(i_mov_r_r_1);
free(i_load_mem_2);
free(i_or_r_r_3);
free(i_store_mem_4);
	bitmap_set(rule_bitmap,186);
return;

        }
        i_mov_r_r_1->suffix = lhs->suffix;
        i_or_r_r_3->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->reg1);
        i_prologue_0->reg2 = get_mem_reg(lhs->dest);
        i_prologue_0->old1 = lhs->reg1;
        i_prologue_0->old2 = lhs->dest;
        i_mov_r_r_1->dest = get_mem_reg(lhs->dest); 
        i_mov_r_r_1->reg1 = get_mem_reg(lhs->reg1);
        release_mem_reg(lhs->reg1);
        i_load_mem_2->reg1 = get_mem_reg(lhs->reg2);
        i_load_mem_2->old1 = lhs->reg2;
        i_or_r_r_3->reg1 = get_mem_reg(lhs->reg2);
        i_or_r_r_3->dest = get_mem_reg(lhs->dest);
        i_store_mem_4->reg1 = get_mem_reg(lhs->dest);
        i_store_mem_4->old1 = lhs->dest;
        release_mem_regs();
        

	push(i_store_mem_4);
	push(i_or_r_r_3);
	push(i_load_mem_2);
	push(i_mov_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_i_t_to_i_load_mem_i_and_i_r_i_store_mem(void *start){
	and_r_i_t_t* lhs = (and_r_i_t_t*)start;
	i_load_mem_t* i_load_mem_0 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_0,"i_load_mem",0);
i_and_i_r_t* i_and_i_r_1 = malloc(sizeof(i_and_i_r_t));
	symbol_init(i_and_i_r_1,"i_and_i_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

        if (lhs->dest != lhs->reg1){
                push(start);
	free(i_load_mem_0);
free(i_and_i_r_1);
free(i_store_mem_2);
	bitmap_set(rule_bitmap,187);
return;

        }
        i_and_i_r_1->suffix = lhs->suffix;
        i_load_mem_0->reg1 = get_mem_reg(lhs->dest);
        i_load_mem_0->old1 = lhs->dest;
        i_and_i_r_1->dest = i_load_mem_0->reg1;
        i_and_i_r_1->imm = lhs->imm;
        i_store_mem_2->reg1 = i_load_mem_0->reg1;
        i_store_mem_2->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_2);
	push(i_and_i_r_1);
	push(i_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_i_t_to_i_prologue_i_mov_r_r_i_and_i_r_i_store_mem(void *start){
	and_r_i_t_t* lhs = (and_r_i_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_and_i_r_t* i_and_i_r_2 = malloc(sizeof(i_and_i_r_t));
	symbol_init(i_and_i_r_2,"i_and_i_r",0);
i_store_mem_t* i_store_mem_3 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_3,"i_store_mem",0);

        if (lhs->dest == lhs->reg1){
                push(start);
	free(i_prologue_0);
free(i_mov_r_r_1);
free(i_and_i_r_2);
free(i_store_mem_3);
	bitmap_set(rule_bitmap,188);
return;

        }
        i_mov_r_r_1->suffix = lhs->suffix;
        i_and_i_r_2->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->reg2 = get_mem_reg(lhs->reg1);
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->reg1;
        i_mov_r_r_1->dest = i_prologue_0->reg1;
        i_mov_r_r_1->reg1 = i_prologue_0->reg2;
        i_and_i_r_2->dest = i_prologue_0->reg1;
        i_and_i_r_2->imm = lhs->imm;
        i_store_mem_3->reg1 = i_prologue_0->reg1;
        i_store_mem_3->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_3);
	push(i_and_i_r_2);
	push(i_mov_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_r_t_to_nop(void *start){
	and_r_r_t_t* lhs = (and_r_r_t_t*)start;
	nop_t* nop_0 = malloc(sizeof(nop_t));
	symbol_init(nop_0,"nop",0);

        if (!(lhs->dest == lhs->reg1 && lhs->dest == lhs->reg2)){
                push(start);
	free(nop_0);
	bitmap_set(rule_bitmap,189);
return;

        }

	push(nop_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_r_t_to_i_prologue_i_and_r_r_i_store_mem(void *start){
	and_r_r_t_t* lhs = (and_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_and_r_r_t* i_and_r_r_1 = malloc(sizeof(i_and_r_r_t));
	symbol_init(i_and_r_r_1,"i_and_r_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

        if ((lhs->dest != lhs->reg1 && lhs->dest != lhs->reg2) || (lhs->dest == lhs->reg1 && lhs->dest == lhs->reg2)){
                push(start);
	free(i_prologue_0);
free(i_and_r_r_1);
free(i_store_mem_2);
	bitmap_set(rule_bitmap,190);
return;

        }
        i_and_r_r_1->suffix = lhs->suffix;
        if (lhs->dest == lhs->reg1){
                i_prologue_0->reg1 = get_mem_reg(lhs->dest);
                i_prologue_0->reg2 = get_mem_reg(lhs->reg2);
                i_prologue_0->old1 = lhs->dest;
                i_prologue_0->old2 = lhs->reg2;
                i_and_r_r_1->reg1 = i_prologue_0->reg2;
                i_and_r_r_1->dest = i_prologue_0->reg1;
                i_store_mem_2->reg1 = i_and_r_r_1->dest;
                i_store_mem_2->old1 = lhs->dest;
        }
        if (lhs->dest == lhs->reg2){
                i_prologue_0->reg1 = get_mem_reg(lhs->dest);
                i_prologue_0->reg2 = get_mem_reg(lhs->reg1);
                i_prologue_0->old1 = lhs->dest;
                i_prologue_0->old2 = lhs->reg1;
                i_and_r_r_1->reg1 = i_prologue_0->reg2;
                i_and_r_r_1->dest = i_prologue_0->reg1;
                i_store_mem_2->reg1 = i_and_r_r_1->dest;
                i_store_mem_2->old1 = lhs->dest;
        }
        release_mem_regs();

	push(i_store_mem_2);
	push(i_and_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_r_t_to_i_prologue_i_mov_r_r_i_load_mem_i_and_r_r_i_store_mem(void *start){
	and_r_r_t_t* lhs = (and_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_load_mem_t* i_load_mem_2 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_2,"i_load_mem",0);
i_and_r_r_t* i_and_r_r_3 = malloc(sizeof(i_and_r_r_t));
	symbol_init(i_and_r_r_3,"i_and_r_r",0);
i_store_mem_t* i_store_mem_4 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_4,"i_store_mem",0);

        i_mov_r_r_1->suffix = lhs->suffix;
        i_and_r_r_3->suffix = lhs->suffix;
        if (lhs->dest == lhs->reg1 || lhs->dest == lhs->reg2){
                push(start);
	free(i_prologue_0);
free(i_mov_r_r_1);
free(i_load_mem_2);
free(i_and_r_r_3);
free(i_store_mem_4);
	bitmap_set(rule_bitmap,191);
return;

        }       
        i_prologue_0->reg1 = get_mem_reg(lhs->reg1);
        i_prologue_0->reg2 = get_mem_reg(lhs->dest);
        i_prologue_0->old1 = lhs->reg1;
        i_prologue_0->old2 = lhs->dest;
        i_mov_r_r_1->dest = get_mem_reg(lhs->dest); 
        i_mov_r_r_1->reg1 = get_mem_reg(lhs->reg1);
        release_mem_reg(lhs->reg1);
        i_load_mem_2->reg1 = get_mem_reg(lhs->reg2);
        i_load_mem_2->old1 = lhs->reg2;
        i_and_r_r_3->reg1 = get_mem_reg(lhs->reg2);
        i_and_r_r_3->dest = get_mem_reg(lhs->dest);
        i_store_mem_4->reg1 = get_mem_reg(lhs->dest);
        i_store_mem_4->reg1 = lhs->dest;
        release_mem_regs();
        

	push(i_store_mem_4);
	push(i_and_r_r_3);
	push(i_load_mem_2);
	push(i_mov_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_b_t_to_i_prologue_i_mov_r_m(void *start){
	store_b_t_t* lhs = (store_b_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_m_t* i_mov_r_m_1 = malloc(sizeof(i_mov_r_m_t));
	symbol_init(i_mov_r_m_1,"i_mov_r_m",0);

        i_mov_r_m_1->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->source);
        i_prologue_0->reg2 = get_mem_reg(lhs->base);
        i_prologue_0->old1 = lhs->source;
        i_prologue_0->old2 = lhs->base;
        i_mov_r_m_1->base = get_mem_reg(lhs->base);
        i_mov_r_m_1->src = get_mem_reg(lhs->source);
        i_mov_r_m_1->offset = lhs->offset;
        release_mem_regs();

	push(i_mov_r_m_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_h_t_to_i_prologue_i_mov_r_m(void *start){
	store_h_t_t* lhs = (store_h_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_m_t* i_mov_r_m_1 = malloc(sizeof(i_mov_r_m_t));
	symbol_init(i_mov_r_m_1,"i_mov_r_m",0);

        i_mov_r_m_1->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->source);
        i_prologue_0->reg2 = get_mem_reg(lhs->base);
        i_prologue_0->old1 = lhs->source;
        i_prologue_0->old2 = lhs->base;
        i_mov_r_m_1->base = get_mem_reg(lhs->base);
        i_mov_r_m_1->src = get_mem_reg(lhs->source);
        i_mov_r_m_1->offset = lhs->offset;
        release_mem_regs();

	push(i_mov_r_m_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_w_t_to_i_prologue_i_mov_r_m(void *start){
	store_w_t_t* lhs = (store_w_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_m_t* i_mov_r_m_1 = malloc(sizeof(i_mov_r_m_t));
	symbol_init(i_mov_r_m_1,"i_mov_r_m",0);

        i_mov_r_m_1->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->source);
        i_prologue_0->reg2 = get_mem_reg(lhs->base);
        i_prologue_0->old1 = lhs->source;
        i_prologue_0->old2 = lhs->base;
        i_mov_r_m_1->base = get_mem_reg(lhs->base);
        i_mov_r_m_1->src = get_mem_reg(lhs->source);
        i_mov_r_m_1->offset = lhs->offset;
        release_mem_regs();

	push(i_mov_r_m_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_d_t_to_i_prologue_i_mov_r_m(void *start){
	store_d_t_t* lhs = (store_d_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_m_t* i_mov_r_m_1 = malloc(sizeof(i_mov_r_m_t));
	symbol_init(i_mov_r_m_1,"i_mov_r_m",0);

        i_mov_r_m_1->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->source);
        i_prologue_0->reg2 = get_mem_reg(lhs->base);
        i_prologue_0->old1 = lhs->source;
        i_prologue_0->old2 = lhs->base;
        i_mov_r_m_1->base = get_mem_reg(lhs->base);
        i_mov_r_m_1->src = get_mem_reg(lhs->source);
        i_mov_r_m_1->offset = lhs->offset;
        release_mem_regs();

	push(i_mov_r_m_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_b_t_to_i_prologue_i_mov_m_r_i_store_mem(void *start){
	load_b_t_t* lhs = (load_b_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_m_r_t* i_mov_m_r_1 = malloc(sizeof(i_mov_m_r_t));
	symbol_init(i_mov_m_r_1,"i_mov_m_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

        i_mov_m_r_1->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->reg2 = get_mem_reg(lhs->base);
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->base;
        i_mov_m_r_1->base = get_mem_reg(lhs->base);
        i_mov_m_r_1->dest = get_mem_reg(lhs->dest);
        i_mov_m_r_1->offset = lhs->offset;
        i_store_mem_2->reg1 = get_mem_reg(lhs->dest);
        i_store_mem_2->old1 = lhs->dest;
        release_mem_regs();
        

	push(i_store_mem_2);
	push(i_mov_m_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_h_t_to_i_prologue_i_mov_m_r_i_store_mem(void *start){
	load_h_t_t* lhs = (load_h_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_m_r_t* i_mov_m_r_1 = malloc(sizeof(i_mov_m_r_t));
	symbol_init(i_mov_m_r_1,"i_mov_m_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

        i_mov_m_r_1->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->reg2 = get_mem_reg(lhs->base);
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->base;
        i_mov_m_r_1->base = get_mem_reg(lhs->base);
        i_mov_m_r_1->dest = get_mem_reg(lhs->dest);
        i_mov_m_r_1->offset = lhs->offset;
        i_store_mem_2->reg1 = get_mem_reg(lhs->dest);
        i_store_mem_2->old1 = lhs->dest;
        release_mem_regs();
        

	push(i_store_mem_2);
	push(i_mov_m_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_w_t_to_i_prologue_i_mov_m_r_i_store_mem(void *start){
	load_w_t_t* lhs = (load_w_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_m_r_t* i_mov_m_r_1 = malloc(sizeof(i_mov_m_r_t));
	symbol_init(i_mov_m_r_1,"i_mov_m_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

        i_mov_m_r_1->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->reg2 = get_mem_reg(lhs->base);
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->base;
        i_mov_m_r_1->base = get_mem_reg(lhs->base);
        i_mov_m_r_1->dest = get_mem_reg(lhs->dest);
        i_mov_m_r_1->offset = lhs->offset;
        i_store_mem_2->reg1 = get_mem_reg(lhs->dest);
        i_store_mem_2->old1 = lhs->dest;
        release_mem_regs();
        

	push(i_store_mem_2);
	push(i_mov_m_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_dw_t_to_i_prologue_i_mov_m_r_i_store_mem(void *start){
	load_dw_t_t* lhs = (load_dw_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_m_r_t* i_mov_m_r_1 = malloc(sizeof(i_mov_m_r_t));
	symbol_init(i_mov_m_r_1,"i_mov_m_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

        i_mov_m_r_1->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->reg2 = get_mem_reg(lhs->base);
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->base;
        i_mov_m_r_1->base = get_mem_reg(lhs->base);
        i_mov_m_r_1->dest = get_mem_reg(lhs->dest);
        i_mov_m_r_1->offset = lhs->offset;
        i_store_mem_2->reg1 = get_mem_reg(lhs->dest);
        i_store_mem_2->old1 = lhs->dest;
        
        release_mem_regs();

	push(i_store_mem_2);
	push(i_mov_m_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_i_t_to_i_load_mem_i_add_i_r_i_store_mem(void *start){
	add_r_i_t_t* lhs = (add_r_i_t_t*)start;
	i_load_mem_t* i_load_mem_0 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_0,"i_load_mem",0);
i_add_i_r_t* i_add_i_r_1 = malloc(sizeof(i_add_i_r_t));
	symbol_init(i_add_i_r_1,"i_add_i_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

    
        i_add_i_r_1->suffix = lhs->suffix;
        if (lhs->dest != lhs->reg1){
            push(start);
	free(i_load_mem_0);
free(i_add_i_r_1);
free(i_store_mem_2);
	bitmap_set(rule_bitmap,200);
return;

        }
        i_load_mem_0->reg1 = get_mem_reg(lhs->dest);
        i_load_mem_0->old1 = lhs->dest;
        i_add_i_r_1->dest = get_mem_reg(lhs->dest);
        i_add_i_r_1->imm = lhs->imm;
        i_store_mem_2->old1 = lhs->dest;
        i_store_mem_2->reg1 = get_mem_reg(lhs->dest);
        release_mem_regs();

	push(i_store_mem_2);
	push(i_add_i_r_1);
	push(i_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_i_t_to_i_prologue_i_mov_r_r_i_add_i_r_i_store_mem(void *start){
	add_r_i_t_t* lhs = (add_r_i_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_add_i_r_t* i_add_i_r_2 = malloc(sizeof(i_add_i_r_t));
	symbol_init(i_add_i_r_2,"i_add_i_r",0);
i_store_mem_t* i_store_mem_3 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_3,"i_store_mem",0);

        if (lhs->dest == lhs->reg1){
            push(start);
	free(i_prologue_0);
free(i_mov_r_r_1);
free(i_add_i_r_2);
free(i_store_mem_3);
	bitmap_set(rule_bitmap,201);
return;

        }
        i_mov_r_r_1->suffix = lhs->suffix;
        i_add_i_r_2->suffix = lhs->suffix;
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->reg1;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->reg2 = get_mem_reg(lhs->reg1);
        i_mov_r_r_1->dest = get_mem_reg(lhs->dest);
        i_mov_r_r_1->reg1 = get_mem_reg(lhs->reg1);
        i_add_i_r_2->dest = get_mem_reg(lhs->dest);
        i_add_i_r_2->imm = lhs->imm;
        i_store_mem_3->reg1 = get_mem_reg(lhs->dest);
        i_store_mem_3->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_3);
	push(i_add_i_r_2);
	push(i_mov_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_sub_r_r_t_to_i_load_mem_i_sub_r_r_i_store_mem(void *start){
	sub_r_r_t_t* lhs = (sub_r_r_t_t*)start;
	i_load_mem_t* i_load_mem_0 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_0,"i_load_mem",0);
i_sub_r_r_t* i_sub_r_r_1 = malloc(sizeof(i_sub_r_r_t));
	symbol_init(i_sub_r_r_1,"i_sub_r_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

        if (!(lhs->dest == lhs->reg1 && lhs->reg1 == lhs->reg2)){
                push(start);
	free(i_load_mem_0);
free(i_sub_r_r_1);
free(i_store_mem_2);
	bitmap_set(rule_bitmap,202);
return;

        }
        i_sub_r_r_1->suffix = lhs->suffix;
        i_load_mem_0->reg1 = get_mem_reg(lhs->dest);
        i_load_mem_0->old1 = lhs->dest;
        i_sub_r_r_1->reg1 = i_load_mem_0->reg1;
        i_sub_r_r_1->dest = i_load_mem_0->reg1;
        i_store_mem_2->reg1 = i_load_mem_0->reg1;
        i_store_mem_2->old1 = i_load_mem_0->old1;
        release_mem_regs();

	push(i_store_mem_2);
	push(i_sub_r_r_1);
	push(i_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_sub_r_r_t_to_i_prologue_i_neg_r_i_add_r_r_i_store_mem(void *start){
	sub_r_r_t_t* lhs = (sub_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_neg_r_t* i_neg_r_1 = malloc(sizeof(i_neg_r_t));
	symbol_init(i_neg_r_1,"i_neg_r",0);
i_add_r_r_t* i_add_r_r_2 = malloc(sizeof(i_add_r_r_t));
	symbol_init(i_add_r_r_2,"i_add_r_r",0);
i_store_mem_t* i_store_mem_3 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_3,"i_store_mem",0);

        if (lhs->dest!=lhs->reg2 || (lhs->reg1 == lhs->reg2)){
                push(start);
	free(i_prologue_0);
free(i_neg_r_1);
free(i_add_r_r_2);
free(i_store_mem_3);
	bitmap_set(rule_bitmap,203);
return;

        }
        i_neg_r_1->suffix = lhs->suffix;
        i_add_r_r_2->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->reg2;
        i_prologue_0->reg2 = get_mem_reg(lhs->reg1);
        i_neg_r_1->reg1 = i_prologue_0->reg1;
        i_add_r_r_2->reg1 = i_prologue_0->reg2;
        i_add_r_r_2->dest = i_prologue_0->reg1;
        i_store_mem_3->reg1 = i_prologue_0->reg1;
        i_store_mem_3->old1 = i_prologue_0->old1;

	push(i_store_mem_3);
	push(i_add_r_r_2);
	push(i_neg_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_sub_r_r_t_to_i_prologue_i_neg_r_i_add_r_r_i_neg_r_i_store_mem(void *start){
	sub_r_r_t_t* lhs = (sub_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_neg_r_t* i_neg_r_1 = malloc(sizeof(i_neg_r_t));
	symbol_init(i_neg_r_1,"i_neg_r",0);
i_add_r_r_t* i_add_r_r_2 = malloc(sizeof(i_add_r_r_t));
	symbol_init(i_add_r_r_2,"i_add_r_r",0);
i_neg_r_t* i_neg_r_3 = malloc(sizeof(i_neg_r_t));
	symbol_init(i_neg_r_3,"i_neg_r",0);
i_store_mem_t* i_store_mem_4 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_4,"i_store_mem",0);

    if (lhs->dest != lhs->reg1 || (lhs->reg1 == lhs->reg2)){
        push(start);
	free(i_prologue_0);
free(i_neg_r_1);
free(i_add_r_r_2);
free(i_neg_r_3);
free(i_store_mem_4);
	bitmap_set(rule_bitmap,204);
return;

    }
        i_neg_r_1->suffix = lhs->suffix;
        i_add_r_r_2->suffix = lhs->suffix;
        i_neg_r_3->suffix = lhs->suffix;
        i_prologue_0->reg1 = lhs->dest;
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->reg1;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->reg2 = get_mem_reg(lhs->reg2);
        i_neg_r_1->reg1 = get_mem_reg(lhs->reg2);
        i_add_r_r_2->dest = get_mem_reg(lhs->dest);
        i_add_r_r_2->reg1 = get_mem_reg(lhs->reg2);
        i_neg_r_3->reg1 = get_mem_reg(lhs->reg2);
        i_store_mem_4->reg1 = get_mem_reg(lhs->dest);
        i_store_mem_4->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_4);
	push(i_neg_r_3);
	push(i_add_r_r_2);
	push(i_neg_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_sub_r_r_t_to_i_prologue_i_mov_r_r_i_load_mem_i_sub_r_r_i_store_mem(void *start){
	sub_r_r_t_t* lhs = (sub_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_load_mem_t* i_load_mem_2 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_2,"i_load_mem",0);
i_sub_r_r_t* i_sub_r_r_3 = malloc(sizeof(i_sub_r_r_t));
	symbol_init(i_sub_r_r_3,"i_sub_r_r",0);
i_store_mem_t* i_store_mem_4 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_4,"i_store_mem",0);

        if (lhs->dest==lhs->reg1 || lhs->dest==lhs->reg2){
            push(start);
	free(i_prologue_0);
free(i_mov_r_r_1);
free(i_load_mem_2);
free(i_sub_r_r_3);
free(i_store_mem_4);
	bitmap_set(rule_bitmap,205);
return;

        }
        i_mov_r_r_1->suffix = lhs->suffix;
        i_sub_r_r_3->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->reg2 = get_mem_reg(lhs->reg1);
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->reg1;
        i_mov_r_r_1->dest = get_mem_reg(lhs->dest);
        i_mov_r_r_1->reg1 = get_mem_reg(lhs->reg1);
        release_mem_reg(lhs->reg1);
        i_load_mem_2->reg1 = get_mem_reg(lhs->reg2);
        i_load_mem_2->old1 = lhs->reg2;
        i_sub_r_r_3->dest = get_mem_reg(lhs->dest);
        i_sub_r_r_3->reg1 = get_mem_reg(lhs->reg2);
        i_store_mem_4->old1 = lhs->dest;
        i_store_mem_4->reg1 = get_mem_reg(lhs->dest);
        release_mem_regs();

	push(i_store_mem_4);
	push(i_sub_r_r_3);
	push(i_load_mem_2);
	push(i_mov_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_r_t_to_i_prologue_i_add_r_r_i_store_mem(void *start){
	add_r_r_t_t* lhs = (add_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_add_r_r_t* i_add_r_r_1 = malloc(sizeof(i_add_r_r_t));
	symbol_init(i_add_r_r_1,"i_add_r_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

        i_add_r_r_1->suffix = lhs->suffix;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->old1 = lhs->dest;
    if (lhs->dest == lhs->reg2){
        i_prologue_0->reg1 = lhs->dest;
        i_prologue_0->reg2 = lhs->reg1;
        i_add_r_r_1->dest = get_mem_reg(lhs->dest);
        i_add_r_r_1->reg1 = get_mem_reg(lhs->reg1);
    }
    else if (lhs->dest == lhs->reg1){
        i_prologue_0->reg1 = lhs->dest;
        i_prologue_0->reg2 = lhs->reg2;
        i_add_r_r_1->dest = get_mem_reg(lhs->dest);
        i_add_r_r_1->reg1 = get_mem_reg(lhs->reg2);
    }
    if (lhs->dest != lhs->reg1 && lhs->dest != lhs->reg2){
            push(start);
	free(i_prologue_0);
free(i_add_r_r_1);
free(i_store_mem_2);
	bitmap_set(rule_bitmap,206);
return;

        }
        i_store_mem_2->old1 = lhs->dest;
        i_store_mem_2->reg1 = get_mem_reg(lhs->dest);
        release_mem_regs();

	push(i_store_mem_2);
	push(i_add_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_r_t_to_i_prologue_i_mov_r_r_i_load_mem_i_add_r_r_i_store_mem(void *start){
	add_r_r_t_t* lhs = (add_r_r_t_t*)start;
	i_prologue_t* i_prologue_0 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_0,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_load_mem_t* i_load_mem_2 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_2,"i_load_mem",0);
i_add_r_r_t* i_add_r_r_3 = malloc(sizeof(i_add_r_r_t));
	symbol_init(i_add_r_r_3,"i_add_r_r",0);
i_store_mem_t* i_store_mem_4 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_4,"i_store_mem",0);

        if (lhs->dest==lhs->reg1 || lhs->dest==lhs->reg2){
            push(start);
	free(i_prologue_0);
free(i_mov_r_r_1);
free(i_load_mem_2);
free(i_add_r_r_3);
free(i_store_mem_4);
	bitmap_set(rule_bitmap,207);
return;

        }
        i_mov_r_r_1->suffix = lhs->suffix;
        i_add_r_r_3->suffix = lhs->suffix;
        i_prologue_0->old1 = lhs->dest;
        i_prologue_0->old2 = lhs->reg1;
        i_prologue_0->reg1 = get_mem_reg(lhs->dest);
        i_prologue_0->reg2 = get_mem_reg(lhs->reg1);
        i_mov_r_r_1->dest = get_mem_reg(lhs->dest);
        i_mov_r_r_1->reg1 = get_mem_reg(lhs->reg1);
        release_mem_reg(lhs->reg1);
        i_load_mem_2->reg1 = get_mem_reg(lhs->reg2);
        i_load_mem_2->old1 = lhs->reg2;
        i_add_r_r_3->dest = get_mem_reg(lhs->dest);
        i_add_r_r_3->reg1 = get_mem_reg(lhs->reg2);
        i_store_mem_4->reg1 = get_mem_reg(lhs->dest);
        i_store_mem_4->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_4);
	push(i_add_r_r_3);
	push(i_load_mem_2);
	push(i_mov_r_r_1);
	push(i_prologue_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_move_l_t_to_i_load_mem_i_mov_r_r_i_store_mem(void *start){
	move_l_t_t* lhs = (move_l_t_t*)start;
	i_load_mem_t* i_load_mem_0 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_0,"i_load_mem",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

        i_mov_r_r_1->suffix = lhs->suffix;
        i_load_mem_0->reg1 = get_mem_reg(lhs->dest);
        i_mov_r_r_1->reg1 = map_register(reg_values[31],32);
        i_mov_r_r_1->dest = i_load_mem_0->reg1;
        i_store_mem_2->reg1 = i_load_mem_0->reg1;
        i_store_mem_2->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_2);
	push(i_mov_r_r_1);
	push(i_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_move_h_t_to_i_load_mem_i_mov_r_r_i_store_mem(void *start){
	move_h_t_t* lhs = (move_h_t_t*)start;
	i_load_mem_t* i_load_mem_0 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_0,"i_load_mem",0);
i_mov_r_r_t* i_mov_r_r_1 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_1,"i_mov_r_r",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

        i_mov_r_r_1->suffix = lhs->suffix;
        i_load_mem_0->reg1 = get_mem_reg(lhs->dest);
        i_mov_r_r_1->reg1 = map_register(reg_values[30],32);
        i_mov_r_r_1->dest = i_load_mem_0->reg1;
        i_store_mem_2->reg1 = i_load_mem_0->reg1;
        i_store_mem_2->old1 = lhs->dest;
        release_mem_regs();

	push(i_store_mem_2);
	push(i_mov_r_r_1);
	push(i_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_div_r_r_t_to_i_preserve_i_prologue_i_mov_r_r_i_div_r_i_load_mem_i_mov_r_r_i_store_mem_i_restore(void *start){
	div_r_r_t_t* lhs = (div_r_r_t_t*)start;
	i_preserve_t* i_preserve_0 = malloc(sizeof(i_preserve_t));
	symbol_init(i_preserve_0,"i_preserve",0);
i_prologue_t* i_prologue_1 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_1,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_2 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_2,"i_mov_r_r",0);
i_div_r_t* i_div_r_3 = malloc(sizeof(i_div_r_t));
	symbol_init(i_div_r_3,"i_div_r",0);
i_load_mem_t* i_load_mem_4 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_4,"i_load_mem",0);
i_mov_r_r_t* i_mov_r_r_5 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_5,"i_mov_r_r",0);
i_store_mem_t* i_store_mem_6 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_6,"i_store_mem",0);
i_restore_t* i_restore_7 = malloc(sizeof(i_restore_t));
	symbol_init(i_restore_7,"i_restore",0);

       i_preserve_0->reg1 = lhs->dest; 
       i_mov_r_r_2->suffix = lhs->suffix;
       i_div_r_3->suffix = lhs->suffix;
       i_load_mem_4->suffix = lhs->suffix;
       i_mov_r_r_5->suffix = lhs->suffix;
       i_prologue_1->reg1 = get_mem_reg(lhs->reg1);
       i_prologue_1->reg2 = get_mem_reg(lhs->reg2);
       i_prologue_1->old1 = lhs->reg1;
       i_prologue_1->old2 = lhs->reg2;
       i_mov_r_r_2->dest = get_mul_reg_size(i_prologue_1->reg1,1);
       i_mov_r_r_2->reg1 = i_prologue_1->reg1; 
       i_div_r_3->reg1 = i_prologue_1->reg2;
       release_mem_regs();
       i_load_mem_4->reg1 = get_mem_reg(lhs->dest);
       i_load_mem_4->old1 = lhs->dest;
       i_mov_r_r_5->dest = i_load_mem_4->reg1;
       i_mov_r_r_5->reg1 = i_mov_r_r_2->dest;
       i_store_mem_6->reg1 = i_mov_r_r_5->dest;
       i_store_mem_6->old1 = lhs->dest;
       i_restore_7->reg1 = lhs->dest;
       release_mem_regs();

	push(i_restore_7);
	push(i_store_mem_6);
	push(i_mov_r_r_5);
	push(i_load_mem_4);
	push(i_div_r_3);
	push(i_mov_r_r_2);
	push(i_prologue_1);
	push(i_preserve_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_muh_r_r_t_to_i_preserve_i_prologue_i_mov_r_r_i_mul_r_i_load_mem_i_mov_r_r_i_store_mem_i_restore(void *start){
	muh_r_r_t_t* lhs = (muh_r_r_t_t*)start;
	i_preserve_t* i_preserve_0 = malloc(sizeof(i_preserve_t));
	symbol_init(i_preserve_0,"i_preserve",0);
i_prologue_t* i_prologue_1 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_1,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_2 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_2,"i_mov_r_r",0);
i_mul_r_t* i_mul_r_3 = malloc(sizeof(i_mul_r_t));
	symbol_init(i_mul_r_3,"i_mul_r",0);
i_load_mem_t* i_load_mem_4 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_4,"i_load_mem",0);
i_mov_r_r_t* i_mov_r_r_5 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_5,"i_mov_r_r",0);
i_store_mem_t* i_store_mem_6 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_6,"i_store_mem",0);
i_restore_t* i_restore_7 = malloc(sizeof(i_restore_t));
	symbol_init(i_restore_7,"i_restore",0);

       i_mov_r_r_2->suffix = lhs->suffix;
       i_mul_r_3->suffix = lhs->suffix;
       i_load_mem_4->suffix = lhs->suffix;
       i_mov_r_r_5->suffix = lhs->suffix;
       i_restore_7->suffix = lhs->suffix;
       i_preserve_0->reg1 = lhs->dest; 
       i_prologue_1->reg1 = get_mem_reg(lhs->reg1);
       i_prologue_1->reg2 = get_mem_reg(lhs->reg2);
       i_prologue_1->old1 = lhs->reg1;
       i_prologue_1->old2 = lhs->reg2;
       i_mov_r_r_2->dest = get_mul_reg_size(i_prologue_1->reg1,1);
       i_mov_r_r_2->reg1 = i_prologue_1->reg1; 
       i_mul_r_3->reg1 = i_prologue_1->reg2;
       release_mem_regs();
       i_load_mem_4->reg1 = get_mem_reg(lhs->dest);
       i_load_mem_4->old1 = lhs->dest;
       i_mov_r_r_5->dest = i_load_mem_4->reg1;
       i_mov_r_r_5->reg1 = get_mul_reg_size(i_prologue_1->reg1,2);
       i_store_mem_6->reg1 = i_mov_r_r_5->dest;
       i_store_mem_6->old1 = lhs->dest;
       i_restore_7->reg1 = lhs->dest;
       release_mem_regs();

	push(i_restore_7);
	push(i_store_mem_6);
	push(i_mov_r_r_5);
	push(i_load_mem_4);
	push(i_mul_r_3);
	push(i_mov_r_r_2);
	push(i_prologue_1);
	push(i_preserve_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mul_r_r_t_to_i_preserve_i_prologue_i_mov_r_r_i_mul_r_i_load_mem_i_mov_r_r_i_store_mem_i_restore(void *start){
	mul_r_r_t_t* lhs = (mul_r_r_t_t*)start;
	i_preserve_t* i_preserve_0 = malloc(sizeof(i_preserve_t));
	symbol_init(i_preserve_0,"i_preserve",0);
i_prologue_t* i_prologue_1 = malloc(sizeof(i_prologue_t));
	symbol_init(i_prologue_1,"i_prologue",0);
i_mov_r_r_t* i_mov_r_r_2 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_2,"i_mov_r_r",0);
i_mul_r_t* i_mul_r_3 = malloc(sizeof(i_mul_r_t));
	symbol_init(i_mul_r_3,"i_mul_r",0);
i_load_mem_t* i_load_mem_4 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_4,"i_load_mem",0);
i_mov_r_r_t* i_mov_r_r_5 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_5,"i_mov_r_r",0);
i_store_mem_t* i_store_mem_6 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_6,"i_store_mem",0);
i_restore_t* i_restore_7 = malloc(sizeof(i_restore_t));
	symbol_init(i_restore_7,"i_restore",0);

       i_mov_r_r_2->suffix = lhs->suffix;
       i_mul_r_3->suffix = lhs->suffix;
       i_load_mem_4->suffix = lhs->suffix;
       i_mov_r_r_5->suffix = lhs->suffix;
       i_preserve_0->reg1 = lhs->dest; 
       i_prologue_1->reg1 = get_mem_reg(lhs->reg1);
       i_prologue_1->reg2 = get_mem_reg(lhs->reg2);
       i_prologue_1->old1 = lhs->reg1;
       i_prologue_1->old2 = lhs->reg2;
       i_mov_r_r_2->dest = get_mul_reg_size(i_prologue_1->reg1,1);
       i_mov_r_r_2->reg1 = i_prologue_1->reg1; 
       i_mul_r_3->reg1 = i_prologue_1->reg2;
       release_mem_regs();
       i_load_mem_4->reg1 = get_mem_reg(lhs->dest);
       i_load_mem_4->old1 = lhs->dest;
       i_mov_r_r_5->dest = i_load_mem_4->reg1;
       i_mov_r_r_5->reg1 = i_mov_r_r_2->dest;
       i_store_mem_6->reg1 = i_mov_r_r_5->dest;
       i_store_mem_6->old1 = lhs->dest;
       i_restore_7->reg1 = lhs->dest;
       release_mem_regs();

	push(i_restore_7);
	push(i_store_mem_6);
	push(i_mov_r_r_5);
	push(i_load_mem_4);
	push(i_mul_r_3);
	push(i_mov_r_r_2);
	push(i_prologue_1);
	push(i_preserve_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_restore_to_i_pop_r(void *start){
	i_restore_t* lhs = (i_restore_t*)start;
	i_pop_r_t* i_pop_r_0 = malloc(sizeof(i_pop_r_t));
	symbol_init(i_pop_r_0,"i_pop_r",0);

        if (!is_mul_reg(lhs->reg1)){
                push(start);
	free(i_pop_r_0);
	bitmap_set(rule_bitmap,213);
return;

        }
        if (lhs->reg1 == get_mul_reg_size(lhs->reg1,1)){
                i_pop_r_0->reg1 = get_mul_reg(lhs->reg1,2);
        }else{
                i_pop_r_0->reg1 = get_mul_reg(lhs->reg1,1);
        }
        i_pop_r_0->suffix = get_suffix(i_pop_r_0->reg1);

	push(i_pop_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_restore_to_i_pop_r_i_pop_r(void *start){
	i_restore_t* lhs = (i_restore_t*)start;
	i_pop_r_t* i_pop_r_0 = malloc(sizeof(i_pop_r_t));
	symbol_init(i_pop_r_0,"i_pop_r",0);
i_pop_r_t* i_pop_r_1 = malloc(sizeof(i_pop_r_t));
	symbol_init(i_pop_r_1,"i_pop_r",0);

        if (is_mul_reg(lhs->reg1)){
                push(start);
	free(i_pop_r_0);
free(i_pop_r_1);
	bitmap_set(rule_bitmap,214);
return;

        }
        i_pop_r_0->reg1 = get_mul_reg(lhs->reg1,1);
        i_pop_r_1->reg1 = get_mul_reg(lhs->reg1,2);
        i_pop_r_0->suffix = get_suffix(i_pop_r_0->reg1);
        i_pop_r_1->suffix = get_suffix(i_pop_r_1->reg1);

	push(i_pop_r_1);
	push(i_pop_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_preserve_to_i_push_r_i_xor_r_r(void *start){
	i_preserve_t* lhs = (i_preserve_t*)start;
	i_push_r_t* i_push_r_0 = malloc(sizeof(i_push_r_t));
	symbol_init(i_push_r_0,"i_push_r",0);
i_xor_r_r_t* i_xor_r_r_1 = malloc(sizeof(i_xor_r_r_t));
	symbol_init(i_xor_r_r_1,"i_xor_r_r",0);

        if (!is_mul_reg(lhs->reg1)){
                push(start);
	free(i_push_r_0);
free(i_xor_r_r_1);
	bitmap_set(rule_bitmap,215);
return;

        }
        if (lhs->reg1 == get_mul_reg_size(lhs->reg1,1)){
                i_push_r_0->reg1 = get_mul_reg(lhs->reg1,2);
        }else{
                i_push_r_0->reg1 = get_mul_reg(lhs->reg1,1);
        }
        i_push_r_0->suffix = get_suffix(i_push_r_0->reg1);
        i_xor_r_r_1->reg1 = get_mul_reg(lhs->reg1,2);
        i_xor_r_r_1->dest = i_xor_r_r_1->reg1;
        i_xor_r_r_1->suffix = get_suffix(i_xor_r_r_1->reg1);

	push(i_xor_r_r_1);
	push(i_push_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_preserve_to_i_push_r_i_push_r_i_xor_r_r(void *start){
	i_preserve_t* lhs = (i_preserve_t*)start;
	i_push_r_t* i_push_r_0 = malloc(sizeof(i_push_r_t));
	symbol_init(i_push_r_0,"i_push_r",0);
i_push_r_t* i_push_r_1 = malloc(sizeof(i_push_r_t));
	symbol_init(i_push_r_1,"i_push_r",0);
i_xor_r_r_t* i_xor_r_r_2 = malloc(sizeof(i_xor_r_r_t));
	symbol_init(i_xor_r_r_2,"i_xor_r_r",0);

        if (is_mul_reg(lhs->reg1)){
                push(start);
	free(i_push_r_0);
free(i_push_r_1);
free(i_xor_r_r_2);
	bitmap_set(rule_bitmap,216);
return;

        }
        i_push_r_0->reg1 = get_mul_reg(lhs->reg1,1);
        i_push_r_0->suffix = get_suffix(i_push_r_0->reg1);
        i_push_r_1->reg1 = get_mul_reg(lhs->reg1,2);
        i_push_r_1->suffix = get_suffix(i_push_r_1->reg1);
        i_xor_r_r_2->reg1 = get_mul_reg(lhs->reg1,2);
        i_xor_r_r_2->dest = i_xor_r_r_2->reg1;
        i_xor_r_r_2->suffix = get_suffix(i_xor_r_r_2->reg1);

	push(i_xor_r_r_2);
	push(i_push_r_1);
	push(i_push_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_data_label_to_i_load_mem_i_mov_r_m_lab_i_store_mem(void *start){
	store_data_label_t* lhs = (store_data_label_t*)start;
	i_load_mem_t* i_load_mem_0 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_0,"i_load_mem",0);
i_mov_r_m_lab_t* i_mov_r_m_lab_1 = malloc(sizeof(i_mov_r_m_lab_t));
	symbol_init(i_mov_r_m_lab_1,"i_mov_r_m_lab",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

       i_load_mem_0->reg1 = get_mem_reg(lhs->src); 
       i_load_mem_0->old1 = lhs->src;
       i_mov_r_m_lab_1->lab = lhs->lab;
       i_mov_r_m_lab_1->suffix = lhs->suffix;
       i_mov_r_m_lab_1->base = lhs->base; 
       i_mov_r_m_lab_1->src = i_load_mem_0->reg1;
       i_store_mem_2->reg1 = i_load_mem_0->reg1;
       i_store_mem_2->old1 = lhs->src;
       release_mem_regs();

	push(i_store_mem_2);
	push(i_mov_r_m_lab_1);
	push(i_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_data_label_to_i_load_mem_i_mov_m_r_lab_i_store_mem(void *start){
	load_data_label_t* lhs = (load_data_label_t*)start;
	i_load_mem_t* i_load_mem_0 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_0,"i_load_mem",0);
i_mov_m_r_lab_t* i_mov_m_r_lab_1 = malloc(sizeof(i_mov_m_r_lab_t));
	symbol_init(i_mov_m_r_lab_1,"i_mov_m_r_lab",0);
i_store_mem_t* i_store_mem_2 = malloc(sizeof(i_store_mem_t));
	symbol_init(i_store_mem_2,"i_store_mem",0);

       i_load_mem_0->reg1 = get_mem_reg(lhs->dest); 
       i_load_mem_0->old1 = lhs->dest;
       i_mov_m_r_lab_1->lab = lhs->lab;
       i_mov_m_r_lab_1->suffix = lhs->suffix;
       i_mov_m_r_lab_1->base = lhs->base; 
       i_mov_m_r_lab_1->dest = i_load_mem_0->reg1;
       i_store_mem_2->reg1 = i_load_mem_0->reg1;
       i_store_mem_2->old1 = lhs->dest;
       release_mem_regs();

	push(i_store_mem_2);
	push(i_mov_m_r_lab_1);
	push(i_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_lea_label_to_i_lea_m_r(void *start){
	lea_label_t* lhs = (lea_label_t*)start;
	i_lea_m_r_t* i_lea_m_r_0 = malloc(sizeof(i_lea_m_r_t));
	symbol_init(i_lea_m_r_0,"i_lea_m_r",0);

        i_lea_m_r_0->suffix = lhs->suffix;
        i_lea_m_r_0->dest = lhs->dest;
        i_lea_m_r_0->offset = lhs->lab;
        i_lea_m_r_0->base = empty_string();


	push(i_lea_m_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_store_mem_to_i_mov_r_m(void *start){
	i_store_mem_t* lhs = (i_store_mem_t*)start;
	i_mov_r_m_t* i_mov_r_m_0 = malloc(sizeof(i_mov_r_m_t));
	symbol_init(i_mov_r_m_0,"i_mov_r_m",0);

        if (!is_mem_reg(lhs->reg1)){
                push(start);
	free(i_mov_r_m_0);
	bitmap_set(rule_bitmap,220);
return;

        }
        i_mov_r_m_0->offset = get_offset(lhs->old1);
        i_mov_r_m_0->base = empty_string();
        i_mov_r_m_0->src = lhs->reg1;
        i_mov_r_m_0->suffix = get_suffix(i_mov_r_m_0->src);

	push(i_mov_r_m_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_load_mem_to_i_mov_m_r(void *start){
	i_load_mem_t* lhs = (i_load_mem_t*)start;
	i_mov_m_r_t* i_mov_m_r_0 = malloc(sizeof(i_mov_m_r_t));
	symbol_init(i_mov_m_r_0,"i_mov_m_r",0);

        if (!is_mem_reg(lhs->reg1)){
                push(start);
	free(i_mov_m_r_0);
	bitmap_set(rule_bitmap,221);
return;

        }
        i_mov_m_r_0->offset = get_offset(lhs->old1);
        i_mov_m_r_0->base = empty_string();
        i_mov_m_r_0->dest = lhs->reg1;
        i_mov_m_r_0->suffix = get_suffix(i_mov_m_r_0->dest);

	push(i_mov_m_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_i_prologue_to_i_load_mem_i_load_mem(void *start){
	i_prologue_t* lhs = (i_prologue_t*)start;
	i_load_mem_t* i_load_mem_0 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_0,"i_load_mem",0);
i_load_mem_t* i_load_mem_1 = malloc(sizeof(i_load_mem_t));
	symbol_init(i_load_mem_1,"i_load_mem",0);

        i_load_mem_0->reg1 = lhs->reg1;
        i_load_mem_0->old1 = lhs->old1;
        i_load_mem_1->reg1 = lhs->reg2;
        i_load_mem_1->old1 = lhs->old2;

	push(i_load_mem_1);
	push(i_load_mem_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomisd_r_r_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomisd_r_r_t* iucomisd_r_r_0 = malloc(sizeof(iucomisd_r_r_t));
	symbol_init(iucomisd_r_r_0,"iucomisd_r_r",0);
i_jp_t* i_jp_1 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_1,"i_jp",0);


        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != '?') ){
                push(start);
	free(iucomisd_r_r_0);
free(i_jp_1);
	bitmap_set(rule_bitmap,223);
return;

        }
        iucomisd_r_r_0->reg2 = lhs->reg1;
        iucomisd_r_r_0->reg1 = lhs->reg2;
        i_jp_1->text = lhs->target;

	push(i_jp_1);
	push(iucomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomisd_r_r_i_jae_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomisd_r_r_t* iucomisd_r_r_0 = malloc(sizeof(iucomisd_r_r_t));
	symbol_init(iucomisd_r_r_0,"iucomisd_r_r",0);
i_jae_t* i_jae_1 = malloc(sizeof(i_jae_t));
	symbol_init(i_jae_1,"i_jae",0);
i_jp_t* i_jp_2 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_2,"i_jp",0);

        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != 'g') ){
                push(start);
	free(iucomisd_r_r_0);
free(i_jae_1);
free(i_jp_2);
	bitmap_set(rule_bitmap,224);
return;

        }
        iucomisd_r_r_0->reg2 = lhs->reg1;
        iucomisd_r_r_0->reg1 = lhs->reg2;
        i_jae_1->text = lhs->target;
        i_jp_2->text = lhs->target;

	push(i_jp_2);
	push(i_jae_1);
	push(iucomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomisd_r_r_i_jbe_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomisd_r_r_t* iucomisd_r_r_0 = malloc(sizeof(iucomisd_r_r_t));
	symbol_init(iucomisd_r_r_0,"iucomisd_r_r",0);
i_jbe_t* i_jbe_1 = malloc(sizeof(i_jbe_t));
	symbol_init(i_jbe_1,"i_jbe",0);
i_jp_t* i_jp_2 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_2,"i_jp",0);

        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != 'l') ){
                push(start);
	free(iucomisd_r_r_0);
free(i_jbe_1);
free(i_jp_2);
	bitmap_set(rule_bitmap,225);
return;

        }
        iucomisd_r_r_0->reg2 = lhs->reg1;
        iucomisd_r_r_0->reg1 = lhs->reg2;
        i_jbe_1->text = lhs->target;
        i_jp_2->text = lhs->target;

	push(i_jp_2);
	push(i_jbe_1);
	push(iucomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomisd_r_r_i_ja_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomisd_r_r_t* iucomisd_r_r_0 = malloc(sizeof(iucomisd_r_r_t));
	symbol_init(iucomisd_r_r_0,"iucomisd_r_r",0);
i_ja_t* i_ja_1 = malloc(sizeof(i_ja_t));
	symbol_init(i_ja_1,"i_ja",0);
i_jp_t* i_jp_2 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_2,"i_jp",0);

        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != 'a') ){
                push(start);
	free(iucomisd_r_r_0);
free(i_ja_1);
free(i_jp_2);
	bitmap_set(rule_bitmap,226);
return;

        }
        iucomisd_r_r_0->reg2 = lhs->reg1;
        iucomisd_r_r_0->reg1 = lhs->reg2;
        i_ja_1->text = lhs->target;
        i_jp_2->text = lhs->target;

	push(i_jp_2);
	push(i_ja_1);
	push(iucomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomisd_r_r_i_jnz_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomisd_r_r_t* iucomisd_r_r_0 = malloc(sizeof(iucomisd_r_r_t));
	symbol_init(iucomisd_r_r_0,"iucomisd_r_r",0);
i_jnz_t* i_jnz_1 = malloc(sizeof(i_jnz_t));
	symbol_init(i_jnz_1,"i_jnz",0);
i_jp_t* i_jp_2 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_2,"i_jp",0);

        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != 'n') ){
                push(start);
	free(iucomisd_r_r_0);
free(i_jnz_1);
free(i_jp_2);
	bitmap_set(rule_bitmap,227);
return;

        }
        iucomisd_r_r_0->reg2 = lhs->reg1;
        iucomisd_r_r_0->reg1 = lhs->reg2;
        i_jnz_1->text = lhs->target;
        i_jp_2->text = lhs->target;

	push(i_jp_2);
	push(i_jnz_1);
	push(iucomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomisd_r_r_i_jz_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomisd_r_r_t* iucomisd_r_r_0 = malloc(sizeof(iucomisd_r_r_t));
	symbol_init(iucomisd_r_r_0,"iucomisd_r_r",0);
i_jz_t* i_jz_1 = malloc(sizeof(i_jz_t));
	symbol_init(i_jz_1,"i_jz",0);
i_jp_t* i_jp_2 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_2,"i_jp",0);

        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != 'e') ){
                push(start);
	free(iucomisd_r_r_0);
free(i_jz_1);
free(i_jp_2);
	bitmap_set(rule_bitmap,228);
return;

        }
        iucomisd_r_r_0->reg2 = lhs->reg1;
        iucomisd_r_r_0->reg1 = lhs->reg2;
        i_jz_1->text = lhs->target;
        i_jp_2->text = lhs->target;

	push(i_jp_2);
	push(i_jz_1);
	push(iucomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomisd_r_r_i_jb_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomisd_r_r_t* iucomisd_r_r_0 = malloc(sizeof(iucomisd_r_r_t));
	symbol_init(iucomisd_r_r_0,"iucomisd_r_r",0);
i_jb_t* i_jb_1 = malloc(sizeof(i_jb_t));
	symbol_init(i_jb_1,"i_jb",0);
i_jp_t* i_jp_2 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_2,"i_jp",0);

        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != 'b') ){
                push(start);
	free(iucomisd_r_r_0);
free(i_jb_1);
free(i_jp_2);
	bitmap_set(rule_bitmap,229);
return;

        }
        iucomisd_r_r_0->reg2 = lhs->reg1;
        iucomisd_r_r_0->reg1 = lhs->reg2;
        i_jb_1->text = lhs->target;
        i_jp_2->text = lhs->target;

	push(i_jp_2);
	push(i_jb_1);
	push(iucomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_icomisd_r_r_i_jae(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	icomisd_r_r_t* icomisd_r_r_0 = malloc(sizeof(icomisd_r_r_t));
	symbol_init(icomisd_r_r_0,"icomisd_r_r",0);
i_jae_t* i_jae_1 = malloc(sizeof(i_jae_t));
	symbol_init(i_jae_1,"i_jae",0);

        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != 'g') ){
                push(start);
	free(icomisd_r_r_0);
free(i_jae_1);
	bitmap_set(rule_bitmap,230);
return;

        }
        icomisd_r_r_0->reg2 = lhs->reg1;
        icomisd_r_r_0->reg1 = lhs->reg2;
        i_jae_1->text = lhs->target;

	push(i_jae_1);
	push(icomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_icomisd_r_r_i_jbe(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	icomisd_r_r_t* icomisd_r_r_0 = malloc(sizeof(icomisd_r_r_t));
	symbol_init(icomisd_r_r_0,"icomisd_r_r",0);
i_jbe_t* i_jbe_1 = malloc(sizeof(i_jbe_t));
	symbol_init(i_jbe_1,"i_jbe",0);

        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != 'l') ){
                push(start);
	free(icomisd_r_r_0);
free(i_jbe_1);
	bitmap_set(rule_bitmap,231);
return;

        }
        icomisd_r_r_0->reg2 = lhs->reg1;
        icomisd_r_r_0->reg1 = lhs->reg2;
        i_jbe_1->text = lhs->target;

	push(i_jbe_1);
	push(icomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_icomisd_r_r_i_ja(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	icomisd_r_r_t* icomisd_r_r_0 = malloc(sizeof(icomisd_r_r_t));
	symbol_init(icomisd_r_r_0,"icomisd_r_r",0);
i_ja_t* i_ja_1 = malloc(sizeof(i_ja_t));
	symbol_init(i_ja_1,"i_ja",0);

        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != 'a') ){
                push(start);
	free(icomisd_r_r_0);
free(i_ja_1);
	bitmap_set(rule_bitmap,232);
return;

        }
        icomisd_r_r_0->reg2 = lhs->reg1;
        icomisd_r_r_0->reg1 = lhs->reg2;
        i_ja_1->text = lhs->target;

	push(i_ja_1);
	push(icomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_icomisd_r_r_i_jnz(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	icomisd_r_r_t* icomisd_r_r_0 = malloc(sizeof(icomisd_r_r_t));
	symbol_init(icomisd_r_r_0,"icomisd_r_r",0);
i_jnz_t* i_jnz_1 = malloc(sizeof(i_jnz_t));
	symbol_init(i_jnz_1,"i_jnz",0);

        printf("Calling this fucking function\n");
        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != 'n') ){
                printf("Not this time\n");
                push(start);
	free(icomisd_r_r_0);
free(i_jnz_1);
	bitmap_set(rule_bitmap,233);
return;

        }
        icomisd_r_r_0->reg2 = lhs->reg1;
        icomisd_r_r_0->reg1 = lhs->reg2;
        i_jnz_1->text = lhs->target;

	push(i_jnz_1);
	push(icomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_icomisd_r_r_i_jz(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	icomisd_r_r_t* icomisd_r_r_0 = malloc(sizeof(icomisd_r_r_t));
	symbol_init(icomisd_r_r_0,"icomisd_r_r",0);
i_jz_t* i_jz_1 = malloc(sizeof(i_jz_t));
	symbol_init(i_jz_1,"i_jz",0);

        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != 'e') ){
                push(start);
	free(icomisd_r_r_0);
free(i_jz_1);
	bitmap_set(rule_bitmap,234);
return;

        }
        icomisd_r_r_0->reg2 = lhs->reg1;
        icomisd_r_r_0->reg1 = lhs->reg2;
        i_jz_1->text = lhs->target;

	push(i_jz_1);
	push(icomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_icomisd_r_r_i_jb(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	icomisd_r_r_t* icomisd_r_r_0 = malloc(sizeof(icomisd_r_r_t));
	symbol_init(icomisd_r_r_0,"icomisd_r_r",0);
i_jb_t* i_jb_1 = malloc(sizeof(i_jb_t));
	symbol_init(i_jb_1,"i_jb",0);

        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != 'b') ){
                push(start);
	free(icomisd_r_r_0);
free(i_jb_1);
	bitmap_set(rule_bitmap,235);
return;

        }
        icomisd_r_r_0->reg2 = lhs->reg1;
        icomisd_r_r_0->reg1 = lhs->reg2;
        i_jb_1->text = lhs->target;

	push(i_jb_1);
	push(icomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_icomiss_r_r_i_jae(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	icomiss_r_r_t* icomiss_r_r_0 = malloc(sizeof(icomiss_r_r_t));
	symbol_init(icomiss_r_r_0,"icomiss_r_r",0);
i_jae_t* i_jae_1 = malloc(sizeof(i_jae_t));
	symbol_init(i_jae_1,"i_jae",0);

        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != 'g') ){
                push(start);
	free(icomiss_r_r_0);
free(i_jae_1);
	bitmap_set(rule_bitmap,236);
return;

        }
        icomiss_r_r_0->reg2 = lhs->reg1;
        icomiss_r_r_0->reg1 = lhs->reg2;
        i_jae_1->text = lhs->target;

	push(i_jae_1);
	push(icomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_icomiss_r_r_i_jbe(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	icomiss_r_r_t* icomiss_r_r_0 = malloc(sizeof(icomiss_r_r_t));
	symbol_init(icomiss_r_r_0,"icomiss_r_r",0);
i_jbe_t* i_jbe_1 = malloc(sizeof(i_jbe_t));
	symbol_init(i_jbe_1,"i_jbe",0);

        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != 'l') ){
                push(start);
	free(icomiss_r_r_0);
free(i_jbe_1);
	bitmap_set(rule_bitmap,237);
return;

        }
        icomiss_r_r_0->reg2 = lhs->reg1;
        icomiss_r_r_0->reg1 = lhs->reg2;
        i_jbe_1->text = lhs->target;

	push(i_jbe_1);
	push(icomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_icomiss_r_r_i_ja(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	icomiss_r_r_t* icomiss_r_r_0 = malloc(sizeof(icomiss_r_r_t));
	symbol_init(icomiss_r_r_0,"icomiss_r_r",0);
i_ja_t* i_ja_1 = malloc(sizeof(i_ja_t));
	symbol_init(i_ja_1,"i_ja",0);

        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != 'a') ){
                push(start);
	free(icomiss_r_r_0);
free(i_ja_1);
	bitmap_set(rule_bitmap,238);
return;

        }
        icomiss_r_r_0->reg2 = lhs->reg1;
        icomiss_r_r_0->reg1 = lhs->reg2;
        i_ja_1->text = lhs->target;

	push(i_ja_1);
	push(icomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_icomiss_r_r_i_jnz(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	icomiss_r_r_t* icomiss_r_r_0 = malloc(sizeof(icomiss_r_r_t));
	symbol_init(icomiss_r_r_0,"icomiss_r_r",0);
i_jnz_t* i_jnz_1 = malloc(sizeof(i_jnz_t));
	symbol_init(i_jnz_1,"i_jnz",0);

        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != 'n') ){
                push(start);
	free(icomiss_r_r_0);
free(i_jnz_1);
	bitmap_set(rule_bitmap,239);
return;

        }
        icomiss_r_r_0->reg2 = lhs->reg1;
        icomiss_r_r_0->reg1 = lhs->reg2;
        i_jnz_1->text = lhs->target;

	push(i_jnz_1);
	push(icomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_icomiss_r_r_i_jz(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	icomiss_r_r_t* icomiss_r_r_0 = malloc(sizeof(icomiss_r_r_t));
	symbol_init(icomiss_r_r_0,"icomiss_r_r",0);
i_jz_t* i_jz_1 = malloc(sizeof(i_jz_t));
	symbol_init(i_jz_1,"i_jz",0);

        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != 'e') ){
                push(start);
	free(icomiss_r_r_0);
free(i_jz_1);
	bitmap_set(rule_bitmap,240);
return;

        }
        icomiss_r_r_0->reg2 = lhs->reg1;
        icomiss_r_r_0->reg1 = lhs->reg2;
        i_jz_1->text = lhs->target;

	push(i_jz_1);
	push(icomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_icomiss_r_r_i_jb(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	icomiss_r_r_t* icomiss_r_r_0 = malloc(sizeof(icomiss_r_r_t));
	symbol_init(icomiss_r_r_0,"icomiss_r_r",0);
i_jb_t* i_jb_1 = malloc(sizeof(i_jb_t));
	symbol_init(i_jb_1,"i_jb",0);

        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != 'b') ){
                push(start);
	free(icomiss_r_r_0);
free(i_jb_1);
	bitmap_set(rule_bitmap,241);
return;

        }
        icomiss_r_r_0->reg2 = lhs->reg1;
        icomiss_r_r_0->reg1 = lhs->reg2;
        i_jb_1->text = lhs->target;

	push(i_jb_1);
	push(icomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomiss_r_r_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomiss_r_r_t* iucomiss_r_r_0 = malloc(sizeof(iucomiss_r_r_t));
	symbol_init(iucomiss_r_r_0,"iucomiss_r_r",0);
i_jp_t* i_jp_1 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_1,"i_jp",0);


        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != '?') ){
                push(start);
	free(iucomiss_r_r_0);
free(i_jp_1);
	bitmap_set(rule_bitmap,242);
return;

        }
        iucomiss_r_r_0->reg2 = lhs->reg1;
        iucomiss_r_r_0->reg1 = lhs->reg2;
        i_jp_1->text = lhs->target;

	push(i_jp_1);
	push(iucomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomiss_r_r_i_jae_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomiss_r_r_t* iucomiss_r_r_0 = malloc(sizeof(iucomiss_r_r_t));
	symbol_init(iucomiss_r_r_0,"iucomiss_r_r",0);
i_jae_t* i_jae_1 = malloc(sizeof(i_jae_t));
	symbol_init(i_jae_1,"i_jae",0);
i_jp_t* i_jp_2 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_2,"i_jp",0);

        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != 'g') ){
                push(start);
	free(iucomiss_r_r_0);
free(i_jae_1);
free(i_jp_2);
	bitmap_set(rule_bitmap,243);
return;

        }
        iucomiss_r_r_0->reg2 = lhs->reg1;
        iucomiss_r_r_0->reg1 = lhs->reg2;
        i_jae_1->text = lhs->target;
        i_jp_2->text = lhs->target;

	push(i_jp_2);
	push(i_jae_1);
	push(iucomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomiss_r_r_i_jbe_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomiss_r_r_t* iucomiss_r_r_0 = malloc(sizeof(iucomiss_r_r_t));
	symbol_init(iucomiss_r_r_0,"iucomiss_r_r",0);
i_jbe_t* i_jbe_1 = malloc(sizeof(i_jbe_t));
	symbol_init(i_jbe_1,"i_jbe",0);
i_jp_t* i_jp_2 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_2,"i_jp",0);

        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != 'l') ){
                push(start);
	free(iucomiss_r_r_0);
free(i_jbe_1);
free(i_jp_2);
	bitmap_set(rule_bitmap,244);
return;

        }
        iucomiss_r_r_0->reg2 = lhs->reg1;
        iucomiss_r_r_0->reg1 = lhs->reg2;
        i_jbe_1->text = lhs->target;
        i_jp_2->text = lhs->target;

	push(i_jp_2);
	push(i_jbe_1);
	push(iucomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomiss_r_r_i_ja_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomiss_r_r_t* iucomiss_r_r_0 = malloc(sizeof(iucomiss_r_r_t));
	symbol_init(iucomiss_r_r_0,"iucomiss_r_r",0);
i_ja_t* i_ja_1 = malloc(sizeof(i_ja_t));
	symbol_init(i_ja_1,"i_ja",0);
i_jp_t* i_jp_2 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_2,"i_jp",0);

        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != 'a') ){
                push(start);
	free(iucomiss_r_r_0);
free(i_ja_1);
free(i_jp_2);
	bitmap_set(rule_bitmap,245);
return;

        }
        iucomiss_r_r_0->reg2 = lhs->reg1;
        iucomiss_r_r_0->reg1 = lhs->reg2;
        i_ja_1->text = lhs->target;
        i_jp_2->text = lhs->target;

	push(i_jp_2);
	push(i_ja_1);
	push(iucomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomiss_r_r_i_jnz_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomiss_r_r_t* iucomiss_r_r_0 = malloc(sizeof(iucomiss_r_r_t));
	symbol_init(iucomiss_r_r_0,"iucomiss_r_r",0);
i_jnz_t* i_jnz_1 = malloc(sizeof(i_jnz_t));
	symbol_init(i_jnz_1,"i_jnz",0);
i_jp_t* i_jp_2 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_2,"i_jp",0);

        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != 'n') ){
                push(start);
	free(iucomiss_r_r_0);
free(i_jnz_1);
free(i_jp_2);
	bitmap_set(rule_bitmap,246);
return;

        }
        iucomiss_r_r_0->reg2 = lhs->reg1;
        iucomiss_r_r_0->reg1 = lhs->reg2;
        i_jnz_1->text = lhs->target;
        i_jp_2->text = lhs->target;

	push(i_jp_2);
	push(i_jnz_1);
	push(iucomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomiss_r_r_i_jz_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomiss_r_r_t* iucomiss_r_r_0 = malloc(sizeof(iucomiss_r_r_t));
	symbol_init(iucomiss_r_r_0,"iucomiss_r_r",0);
i_jz_t* i_jz_1 = malloc(sizeof(i_jz_t));
	symbol_init(i_jz_1,"i_jz",0);
i_jp_t* i_jp_2 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_2,"i_jp",0);

        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != 'e') ){
                push(start);
	free(iucomiss_r_r_0);
free(i_jz_1);
free(i_jp_2);
	bitmap_set(rule_bitmap,247);
return;

        }
        iucomiss_r_r_0->reg2 = lhs->reg1;
        iucomiss_r_r_0->reg1 = lhs->reg2;
        i_jz_1->text = lhs->target;
        i_jp_2->text = lhs->target;

	push(i_jp_2);
	push(i_jz_1);
	push(iucomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomiss_r_r_i_jb_i_jp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomiss_r_r_t* iucomiss_r_r_0 = malloc(sizeof(iucomiss_r_r_t));
	symbol_init(iucomiss_r_r_0,"iucomiss_r_r",0);
i_jb_t* i_jb_1 = malloc(sizeof(i_jb_t));
	symbol_init(i_jb_1,"i_jb",0);
i_jp_t* i_jp_2 = malloc(sizeof(i_jp_t));
	symbol_init(i_jp_2,"i_jp",0);

        if ( !is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != 'b') ){
                push(start);
	free(iucomiss_r_r_0);
free(i_jb_1);
free(i_jp_2);
	bitmap_set(rule_bitmap,248);
return;

        }
        iucomiss_r_r_0->reg2 = lhs->reg1;
        iucomiss_r_r_0->reg1 = lhs->reg2;
        i_jb_1->text = lhs->target;
        i_jp_2->text = lhs->target;

	push(i_jp_2);
	push(i_jb_1);
	push(iucomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomiss_r_r_i_jnp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomiss_r_r_t* iucomiss_r_r_0 = malloc(sizeof(iucomiss_r_r_t));
	symbol_init(iucomiss_r_r_0,"iucomiss_r_r",0);
i_jnp_t* i_jnp_1 = malloc(sizeof(i_jnp_t));
	symbol_init(i_jnp_1,"i_jnp",0);

        
        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 's') || (get_condition(lhs->con) != '?') ){
                push(start);
	free(iucomiss_r_r_0);
free(i_jnp_1);
	bitmap_set(rule_bitmap,249);
return;

        }
        iucomiss_r_r_0->reg2 = lhs->reg1;
        iucomiss_r_r_0->reg1 = lhs->reg2;
        i_jnp_1->text = lhs->target;


	push(i_jnp_1);
	push(iucomiss_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_jmp_to_iucomisd_r_r_i_jnp(void *start){
	cmp_jmp_t* lhs = (cmp_jmp_t*)start;
	iucomisd_r_r_t* iucomisd_r_r_0 = malloc(sizeof(iucomisd_r_r_t));
	symbol_init(iucomisd_r_r_0,"iucomisd_r_r",0);
i_jnp_t* i_jnp_1 = malloc(sizeof(i_jnp_t));
	symbol_init(i_jnp_1,"i_jnp",0);

        if ( is_unordered(lhs->con) || (get_float_size(lhs->fmt) != 'd') || (get_condition(lhs->con) != '?') ){
                push(start);
	free(iucomisd_r_r_0);
free(i_jnp_1);
	bitmap_set(rule_bitmap,250);
return;

        }
        iucomisd_r_r_0->reg2 = lhs->reg1;
        iucomisd_r_r_0->reg1 = lhs->reg2;
        i_jnp_1->text = lhs->target;


	push(i_jnp_1);
	push(iucomisd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_d_t_to_iaddsd_r_r(void *start){
	add_d_t_t* lhs = (add_d_t_t*)start;
	iaddsd_r_r_t* iaddsd_r_r_0 = malloc(sizeof(iaddsd_r_r_t));
	symbol_init(iaddsd_r_r_0,"iaddsd_r_r",0);

        if (lhs->reg1 != lhs->dest && lhs->reg2 != lhs->dest){
                push(start);
	free(iaddsd_r_r_0);
	bitmap_set(rule_bitmap,251);
return;

        }
        if (lhs->reg1 == lhs->dest){
                iaddsd_r_r_0->dest = lhs->dest;
                iaddsd_r_r_0->reg1 = lhs->reg2;
        }
        
        if (lhs->reg2 == lhs->dest){
                iaddsd_r_r_0->dest = lhs->reg2;
                iaddsd_r_r_0->reg1 = lhs->reg1;
        }


	push(iaddsd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_d_t_to_imovapd_r_r_iaddsd_r_r(void *start){
	add_d_t_t* lhs = (add_d_t_t*)start;
	imovapd_r_r_t* imovapd_r_r_0 = malloc(sizeof(imovapd_r_r_t));
	symbol_init(imovapd_r_r_0,"imovapd_r_r",0);
iaddsd_r_r_t* iaddsd_r_r_1 = malloc(sizeof(iaddsd_r_r_t));
	symbol_init(iaddsd_r_r_1,"iaddsd_r_r",0);

        
        if (lhs->reg1 == lhs->dest || lhs->reg2 == lhs->dest){

                push(start);
	free(imovapd_r_r_0);
free(iaddsd_r_r_1);
	bitmap_set(rule_bitmap,252);
return;

        }

        imovapd_r_r_0->src = lhs->reg1;
        imovapd_r_r_0->dest = lhs->dest;
        iaddsd_r_r_1->reg1 = lhs->reg2;
        iaddsd_r_r_1->dest = lhs->dest;


	push(iaddsd_r_r_1);
	push(imovapd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_subd_r_r_t_to_imovapd_r_r_isubsd_r_r_imovapd_r_r(void *start){
	subd_r_r_t_t* lhs = (subd_r_r_t_t*)start;
	imovapd_r_r_t* imovapd_r_r_0 = malloc(sizeof(imovapd_r_r_t));
	symbol_init(imovapd_r_r_0,"imovapd_r_r",0);
isubsd_r_r_t* isubsd_r_r_1 = malloc(sizeof(isubsd_r_r_t));
	symbol_init(isubsd_r_r_1,"isubsd_r_r",0);
imovapd_r_r_t* imovapd_r_r_2 = malloc(sizeof(imovapd_r_r_t));
	symbol_init(imovapd_r_r_2,"imovapd_r_r",0);

        
        if(!(lhs->dest == lhs->reg1 && lhs->dest != lhs->reg2)){
                printf("Skipping case dest != reg2 but == reg1\n");
                push(start);
	free(imovapd_r_r_0);
free(isubsd_r_r_1);
free(imovapd_r_r_2);
	bitmap_set(rule_bitmap,253);
return;

        }
        imovapd_r_r_0->src = lhs->reg2;
        imovapd_r_r_0->dest = ifpreg_values[15];
        isubsd_r_r_1->reg1 = lhs->reg1;
        isubsd_r_r_1->dest = imovapd_r_r_0->dest;
        imovapd_r_r_2->src = imovapd_r_r_0->dest;
        imovapd_r_r_2->dest = lhs->dest;

	push(imovapd_r_r_2);
	push(isubsd_r_r_1);
	push(imovapd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_subd_r_r_t_to_isubsd_r_r(void *start){
	subd_r_r_t_t* lhs = (subd_r_r_t_t*)start;
	isubsd_r_r_t* isubsd_r_r_0 = malloc(sizeof(isubsd_r_r_t));
	symbol_init(isubsd_r_r_0,"isubsd_r_r",0);

        if (!(lhs->reg2 == lhs->dest)){
                printf("Skipping case dest == reg2\n");
                push(start);
	free(isubsd_r_r_0);
	bitmap_set(rule_bitmap,254);
return;

        }
        isubsd_r_r_0->reg1 = lhs->reg1;
        isubsd_r_r_0->dest = lhs->dest;

	push(isubsd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_subd_r_r_t_to_imovapd_r_r_isubsd_r_r(void *start){
	subd_r_r_t_t* lhs = (subd_r_r_t_t*)start;
	imovapd_r_r_t* imovapd_r_r_0 = malloc(sizeof(imovapd_r_r_t));
	symbol_init(imovapd_r_r_0,"imovapd_r_r",0);
isubsd_r_r_t* isubsd_r_r_1 = malloc(sizeof(isubsd_r_r_t));
	symbol_init(isubsd_r_r_1,"isubsd_r_r",0);

        if (lhs->reg1 == lhs->dest || lhs->reg2 == lhs->dest){
                printf("Skipping case dest != reg1 and reg2\n");
                push(start);
	free(imovapd_r_r_0);
free(isubsd_r_r_1);
	bitmap_set(rule_bitmap,255);
return;

        }
        imovapd_r_r_0->src = lhs->reg2;
        imovapd_r_r_0->dest = lhs->dest;
        isubsd_r_r_1->reg1 = lhs->reg1;
        isubsd_r_r_1->dest = lhs->dest;


	push(isubsd_r_r_1);
	push(imovapd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_muld_t_to_i_mov_r_r_imulsd_r_r(void *start){
	muld_t_t* lhs = (muld_t_t*)start;
	i_mov_r_r_t* i_mov_r_r_0 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_0,"i_mov_r_r",0);
imulsd_r_r_t* imulsd_r_r_1 = malloc(sizeof(imulsd_r_r_t));
	symbol_init(imulsd_r_r_1,"imulsd_r_r",0);

        i_mov_r_r_0->suffix = suf_values[0];
        i_mov_r_r_0->reg1 = lhs->reg2;
        i_mov_r_r_0->dest = lhs->dest;
        imulsd_r_r_1->reg1 = lhs->reg1;
        imulsd_r_r_1->dest = lhs->dest;

	push(imulsd_r_r_1);
	push(i_mov_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_divd_t_to_idivsd_r_r(void *start){
	divd_t_t* lhs = (divd_t_t*)start;
	idivsd_r_r_t* idivsd_r_r_0 = malloc(sizeof(idivsd_r_r_t));
	symbol_init(idivsd_r_r_0,"idivsd_r_r",0);

        if (lhs->dest != lhs->reg1){
                push(start);
	free(idivsd_r_r_0);
	bitmap_set(rule_bitmap,257);
return;

        }
        idivsd_r_r_0->dest = lhs->dest;
        idivsd_r_r_0->reg1 = lhs->reg2;

	push(idivsd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_divd_t_to_imovapd_r_r_idivsd_r_r_imovapd_r_r(void *start){
	divd_t_t* lhs = (divd_t_t*)start;
	imovapd_r_r_t* imovapd_r_r_0 = malloc(sizeof(imovapd_r_r_t));
	symbol_init(imovapd_r_r_0,"imovapd_r_r",0);
idivsd_r_r_t* idivsd_r_r_1 = malloc(sizeof(idivsd_r_r_t));
	symbol_init(idivsd_r_r_1,"idivsd_r_r",0);
imovapd_r_r_t* imovapd_r_r_2 = malloc(sizeof(imovapd_r_r_t));
	symbol_init(imovapd_r_r_2,"imovapd_r_r",0);


        if (lhs->dest != lhs->reg2 || lhs->dest == lhs->reg1){
                push(start);
	free(imovapd_r_r_0);
free(idivsd_r_r_1);
free(imovapd_r_r_2);
	bitmap_set(rule_bitmap,258);
return;

        }
        imovapd_r_r_0->src = lhs->reg1;
        imovapd_r_r_0->dest = ifpreg_values[15];
        idivsd_r_r_1->reg1 = lhs->dest;
        idivsd_r_r_1->dest = imovapd_r_r_0->dest;
        imovapd_r_r_2->src = idivsd_r_r_1->dest;
        imovapd_r_r_2->dest = lhs->dest;

	push(imovapd_r_r_2);
	push(idivsd_r_r_1);
	push(imovapd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_divd_t_to_i_mov_r_r_idivsd_r_r(void *start){
	divd_t_t* lhs = (divd_t_t*)start;
	i_mov_r_r_t* i_mov_r_r_0 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_0,"i_mov_r_r",0);
idivsd_r_r_t* idivsd_r_r_1 = malloc(sizeof(idivsd_r_r_t));
	symbol_init(idivsd_r_r_1,"idivsd_r_r",0);

        if (lhs->reg1 == lhs->dest || lhs->reg2 == lhs->dest){
                push(start);
	free(i_mov_r_r_0);
free(idivsd_r_r_1);
	bitmap_set(rule_bitmap,259);
return;

        }
        i_mov_r_r_0->suffix = suf_values[0];
        i_mov_r_r_0->reg1 = lhs->reg2;
        i_mov_r_r_0->dest = lhs->dest;
        idivsd_r_r_1->reg1 = lhs->reg1;
        idivsd_r_r_1->dest = lhs->dest;

	push(idivsd_r_r_1);
	push(i_mov_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dmfc1_t_to_i_mov_r_r(void *start){
	dmfc1_t_t* lhs = (dmfc1_t_t*)start;
	i_mov_r_r_t* i_mov_r_r_0 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_0,"i_mov_r_r",0);

        i_mov_r_r_0->suffix = suf_values[0];
        i_mov_r_r_0->reg1 = lhs->src;
        i_mov_r_r_0->dest = lhs->dest;

	push(i_mov_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mfc1_t_to_imovd_r_f(void *start){
	mfc1_t_t* lhs = (mfc1_t_t*)start;
	imovd_r_f_t* imovd_r_f_0 = malloc(sizeof(imovd_r_f_t));
	symbol_init(imovd_r_f_0,"imovd_r_f",0);

        imovd_r_f_0->src = lhs->src;
        imovd_r_f_0->dest = lhs->dest;

	push(imovd_r_f_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mtc1_t_to_imovd_f_r(void *start){
	mtc1_t_t* lhs = (mtc1_t_t*)start;
	imovd_f_r_t* imovd_f_r_0 = malloc(sizeof(imovd_f_r_t));
	symbol_init(imovd_f_r_0,"imovd_f_r",0);

        imovd_f_r_0->dest = lhs->dest;
        imovd_f_r_0->src = lhs->src;

	push(imovd_f_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cvtdw_t_to_i_push_r_imovd_r_f_icvtsi2sd_r_r_i_pop_r(void *start){
	cvtdw_t_t* lhs = (cvtdw_t_t*)start;
	i_push_r_t* i_push_r_0 = malloc(sizeof(i_push_r_t));
	symbol_init(i_push_r_0,"i_push_r",0);
imovd_r_f_t* imovd_r_f_1 = malloc(sizeof(imovd_r_f_t));
	symbol_init(imovd_r_f_1,"imovd_r_f",0);
icvtsi2sd_r_r_t* icvtsi2sd_r_r_2 = malloc(sizeof(icvtsi2sd_r_r_t));
	symbol_init(icvtsi2sd_r_r_2,"icvtsi2sd_r_r",0);
i_pop_r_t* i_pop_r_3 = malloc(sizeof(i_pop_r_t));
	symbol_init(i_pop_r_3,"i_pop_r",0);

        i_push_r_0->reg1 = ireg_values[0];
        i_push_r_0->suffix = suf_values[0];
        imovd_r_f_1->src = lhs->src;
        imovd_r_f_1->dest = i_push_r_0->reg1;
        icvtsi2sd_r_r_2->reg1 = i_push_r_0->reg1;
        icvtsi2sd_r_r_2->dest = lhs->dest;
        i_pop_r_3->reg1 = i_push_r_0->reg1;
        i_pop_r_3->suffix = suf_values[0];
        

	push(i_pop_r_3);
	push(icvtsi2sd_r_r_2);
	push(imovd_r_f_1);
	push(i_push_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cvtdl_t_to_i_push_r_imovd_r_f_icvtsi2sd_r_r_i_pop_r(void *start){
	cvtdl_t_t* lhs = (cvtdl_t_t*)start;
	i_push_r_t* i_push_r_0 = malloc(sizeof(i_push_r_t));
	symbol_init(i_push_r_0,"i_push_r",0);
imovd_r_f_t* imovd_r_f_1 = malloc(sizeof(imovd_r_f_t));
	symbol_init(imovd_r_f_1,"imovd_r_f",0);
icvtsi2sd_r_r_t* icvtsi2sd_r_r_2 = malloc(sizeof(icvtsi2sd_r_r_t));
	symbol_init(icvtsi2sd_r_r_2,"icvtsi2sd_r_r",0);
i_pop_r_t* i_pop_r_3 = malloc(sizeof(i_pop_r_t));
	symbol_init(i_pop_r_3,"i_pop_r",0);

        i_push_r_0->reg1 = ireg_values[0];
        i_push_r_0->suffix = suf_values[0];
        imovd_r_f_1->src = lhs->src;
        imovd_r_f_1->dest = i_push_r_0->reg1;
        icvtsi2sd_r_r_2->reg1 = i_push_r_0->reg1;
        icvtsi2sd_r_r_2->dest = lhs->dest;
        i_pop_r_3->reg1 = i_push_r_0->reg1;
        i_pop_r_3->suffix = suf_values[0];
        

	push(i_pop_r_3);
	push(icvtsi2sd_r_r_2);
	push(imovd_r_f_1);
	push(i_push_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_truncwd_t_to_i_push_r_icvttsd2si_r_r_imovd_f_r_i_pop_r(void *start){
	truncwd_t_t* lhs = (truncwd_t_t*)start;
	i_push_r_t* i_push_r_0 = malloc(sizeof(i_push_r_t));
	symbol_init(i_push_r_0,"i_push_r",0);
icvttsd2si_r_r_t* icvttsd2si_r_r_1 = malloc(sizeof(icvttsd2si_r_r_t));
	symbol_init(icvttsd2si_r_r_1,"icvttsd2si_r_r",0);
imovd_f_r_t* imovd_f_r_2 = malloc(sizeof(imovd_f_r_t));
	symbol_init(imovd_f_r_2,"imovd_f_r",0);
i_pop_r_t* i_pop_r_3 = malloc(sizeof(i_pop_r_t));
	symbol_init(i_pop_r_3,"i_pop_r",0);

        i_push_r_0->reg1 = ireg_values[0];
        i_push_r_0->suffix = suf_values[0];
        icvttsd2si_r_r_1->reg1 = lhs->src;
        icvttsd2si_r_r_1->dest = i_push_r_0->reg1;
        imovd_f_r_2->src = icvttsd2si_r_r_1->dest;
        imovd_f_r_2->dest = lhs->dest;
        i_pop_r_3->reg1 = i_push_r_0->reg1;
        i_pop_r_3->suffix = suf_values[0];

	push(i_pop_r_3);
	push(imovd_f_r_2);
	push(icvttsd2si_r_r_1);
	push(i_push_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_lea_label_f_to_i_push_r_i_lea_m_r_i_mov_r_r_i_pop_r(void *start){
	lea_label_f_t* lhs = (lea_label_f_t*)start;
	i_push_r_t* i_push_r_0 = malloc(sizeof(i_push_r_t));
	symbol_init(i_push_r_0,"i_push_r",0);
i_lea_m_r_t* i_lea_m_r_1 = malloc(sizeof(i_lea_m_r_t));
	symbol_init(i_lea_m_r_1,"i_lea_m_r",0);
i_mov_r_r_t* i_mov_r_r_2 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_2,"i_mov_r_r",0);
i_pop_r_t* i_pop_r_3 = malloc(sizeof(i_pop_r_t));
	symbol_init(i_pop_r_3,"i_pop_r",0);

        i_push_r_0->reg1 = ireg_values[0];
        i_push_r_0->suffix = lhs->suffix;
        i_lea_m_r_1->base = lhs->base;
        i_lea_m_r_1->dest = i_push_r_0->reg1;
        i_lea_m_r_1->suffix = lhs->suffix;
        i_lea_m_r_1->offset = lhs->lab;
        i_mov_r_r_2->reg1 = i_push_r_0->reg1;
        i_mov_r_r_2->dest = lhs->dest;
        i_mov_r_r_2->suffix = lhs->suffix;
        i_pop_r_3->reg1 = i_push_r_0->reg1;
        i_pop_r_3->suffix = lhs->suffix;

	push(i_pop_r_3);
	push(i_mov_r_r_2);
	push(i_lea_m_r_1);
	push(i_push_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dmtc1_t_to_i_mov_r_r(void *start){
	dmtc1_t_t* lhs = (dmtc1_t_t*)start;
	i_mov_r_r_t* i_mov_r_r_0 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_0,"i_mov_r_r",0);

        i_mov_r_r_0->reg1 = lhs->src;
        i_mov_r_r_0->dest = lhs->dest;
        i_mov_r_r_0->suffix = suf_values[0];

	push(i_mov_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_absd_t_to_imovapd_r_r_andpd_m(void *start){
	absd_t_t* lhs = (absd_t_t*)start;
	imovapd_r_r_t* imovapd_r_r_0 = malloc(sizeof(imovapd_r_r_t));
	symbol_init(imovapd_r_r_0,"imovapd_r_r",0);
andpd_m_t* andpd_m_1 = malloc(sizeof(andpd_m_t));
	symbol_init(andpd_m_1,"andpd_m",0);

        imovapd_r_r_0->src = lhs->src;
        imovapd_r_r_0->dest = lhs->dest;
        andpd_m_1->dest = lhs->dest;
        andpd_m_1->mask = 0x7FFFFFFFFFFFFFFF;

	push(andpd_m_1);
	push(imovapd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dadd_r_r_to_add_r_r_t(void *start){
	dadd_r_r_t* lhs = (dadd_r_r_t*)start;
	add_r_r_t_t* add_r_r_t_0 = malloc(sizeof(add_r_r_t_t));
	symbol_init(add_r_r_t_0,"add_r_r_t",0);

        add_r_r_t_0->reg1 = map_register(lhs->reg1,64);
        add_r_r_t_0->reg2 = map_register(lhs->reg2,64);
        add_r_r_t_0->dest = map_register(lhs->dest,64);
        add_r_r_t_0->suffix = suf_values[0];

	push(add_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_daddu_r_r_to_add_r_r_t(void *start){
	daddu_r_r_t* lhs = (daddu_r_r_t*)start;
	add_r_r_t_t* add_r_r_t_0 = malloc(sizeof(add_r_r_t_t));
	symbol_init(add_r_r_t_0,"add_r_r_t",0);

        add_r_r_t_0->reg1 = map_register(lhs->reg1,64);
        add_r_r_t_0->reg2 = map_register(lhs->reg2,64);
        add_r_r_t_0->dest = map_register(lhs->dest,64);
        add_r_r_t_0->suffix = suf_values[0];

	push(add_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dadd_r_i_to_add_r_i_t(void *start){
	dadd_r_i_t* lhs = (dadd_r_i_t*)start;
	add_r_i_t_t* add_r_i_t_0 = malloc(sizeof(add_r_i_t_t));
	symbol_init(add_r_i_t_0,"add_r_i_t",0);

        
        add_r_i_t_0->reg1 = map_register(lhs->reg1,64);
        add_r_i_t_0->imm = byte_align(lhs->imm,16);
        add_r_i_t_0->dest = map_register(lhs->dest,64);
        add_r_i_t_0->suffix = suf_values[0];

	push(add_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_daddu_r_i_to_add_r_i_t(void *start){
	daddu_r_i_t* lhs = (daddu_r_i_t*)start;
	add_r_i_t_t* add_r_i_t_0 = malloc(sizeof(add_r_i_t_t));
	symbol_init(add_r_i_t_0,"add_r_i_t",0);

        
        add_r_i_t_0->reg1 = map_register(lhs->reg1,64);
        add_r_i_t_0->imm = lhs->imm;
        add_r_i_t_0->dest = map_register(lhs->dest,64);
        add_r_i_t_0->suffix = suf_values[0];

	push(add_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_r_to_add_r_r_t(void *start){
	add_r_r_t* lhs = (add_r_r_t*)start;
	add_r_r_t_t* add_r_r_t_0 = malloc(sizeof(add_r_r_t_t));
	symbol_init(add_r_r_t_0,"add_r_r_t",0);

        add_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        add_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        add_r_r_t_0->dest = map_register(lhs->dest,32);
        add_r_r_t_0->suffix = suf_values[1];


	push(add_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_sub_r_r_to_sub_r_r_t(void *start){
	sub_r_r_t* lhs = (sub_r_r_t*)start;
	sub_r_r_t_t* sub_r_r_t_0 = malloc(sizeof(sub_r_r_t_t));
	symbol_init(sub_r_r_t_0,"sub_r_r_t",0);

        sub_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        sub_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        sub_r_r_t_0->dest = map_register(lhs->dest,32);
        sub_r_r_t_0->suffix = suf_values[1];


	push(sub_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_r_i_to_add_r_i_t(void *start){
	add_r_i_t* lhs = (add_r_i_t*)start;
	add_r_i_t_t* add_r_i_t_0 = malloc(sizeof(add_r_i_t_t));
	symbol_init(add_r_i_t_0,"add_r_i_t",0);

        
        add_r_i_t_0->reg1 = map_register(lhs->reg1,32);
        add_r_i_t_0->imm = lhs->imm;
        add_r_i_t_0->dest = map_register(lhs->dest,32);
        add_r_i_t_0->suffix = suf_values[1];

	push(add_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mul_r_r_to_mul_r_r_t(void *start){
	mul_r_r_t* lhs = (mul_r_r_t*)start;
	mul_r_r_t_t* mul_r_r_t_0 = malloc(sizeof(mul_r_r_t_t));
	symbol_init(mul_r_r_t_0,"mul_r_r_t",0);

        mul_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        mul_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        mul_r_r_t_0->dest = map_register(lhs->dest,32);
        mul_r_r_t_0->suffix = suf_values[1];

	push(mul_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_div_r_r_to_div_r_r_t(void *start){
	div_r_r_t* lhs = (div_r_r_t*)start;
	div_r_r_t_t* div_r_r_t_0 = malloc(sizeof(div_r_r_t_t));
	symbol_init(div_r_r_t_0,"div_r_r_t",0);

        div_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        div_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        div_r_r_t_0->dest = map_register(lhs->dest,32);
        div_r_r_t_0->suffix = suf_values[1];

	push(div_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_dw_to_load_dw_t(void *start){
	load_dw_t* lhs = (load_dw_t*)start;
	load_dw_t_t* load_dw_t_0 = malloc(sizeof(load_dw_t_t));
	symbol_init(load_dw_t_0,"load_dw_t",0);

        load_dw_t_0->dest = map_register(lhs->dest,64);
        load_dw_t_0->offset = lhs->offset;
        load_dw_t_0->base = map_register(lhs->base,64);
        load_dw_t_0->suffix = suf_values[0];

	push(load_dw_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_w_to_load_w_t(void *start){
	load_w_t* lhs = (load_w_t*)start;
	load_w_t_t* load_w_t_0 = malloc(sizeof(load_w_t_t));
	symbol_init(load_w_t_0,"load_w_t",0);

        
        load_w_t_0->dest = map_register(lhs->dest,32);
        load_w_t_0->offset = lhs->offset;
        load_w_t_0->base = map_register(lhs->base,64);
        load_w_t_0->suffix = suf_values[1];

	push(load_w_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_h_to_load_h_t(void *start){
	load_h_t* lhs = (load_h_t*)start;
	load_h_t_t* load_h_t_0 = malloc(sizeof(load_h_t_t));
	symbol_init(load_h_t_0,"load_h_t",0);

        
        load_h_t_0->dest = map_register(lhs->dest,16);
        load_h_t_0->offset = lhs->offset;
        load_h_t_0->base = map_register(lhs->base,64);
        load_h_t_0->suffix = suf_values[2];


	push(load_h_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_b_to_load_b_t(void *start){
	load_b_t* lhs = (load_b_t*)start;
	load_b_t_t* load_b_t_0 = malloc(sizeof(load_b_t_t));
	symbol_init(load_b_t_0,"load_b_t",0);

        
        load_b_t_0->dest = map_register(lhs->dest,8);
        load_b_t_0->offset = lhs->offset;
        load_b_t_0->base = map_register(lhs->base,64);
        load_b_t_0->suffix = suf_values[3];


	push(load_b_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_b_u_to_load_b_t(void *start){
	load_b_u_t* lhs = (load_b_u_t*)start;
	load_b_t_t* load_b_t_0 = malloc(sizeof(load_b_t_t));
	symbol_init(load_b_t_0,"load_b_t",0);

        
        load_b_t_0->dest = map_register(lhs->dest,8);
        load_b_t_0->offset = lhs->offset;
        load_b_t_0->base = map_register(lhs->base,64);
        load_b_t_0->suffix = suf_values[3];


	push(load_b_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_r_to_and_r_r_t(void *start){
	and_r_r_t* lhs = (and_r_r_t*)start;
	and_r_r_t_t* and_r_r_t_0 = malloc(sizeof(and_r_r_t_t));
	symbol_init(and_r_r_t_0,"and_r_r_t",0);

        and_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        and_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        and_r_r_t_0->dest = map_register(lhs->dest,32);
        and_r_r_t_0->suffix = suf_values[1];

	push(and_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_i_to_and_r_i_t(void *start){
	and_r_i_t* lhs = (and_r_i_t*)start;
	and_r_i_t_t* and_r_i_t_0 = malloc(sizeof(and_r_i_t_t));
	symbol_init(and_r_i_t_0,"and_r_i_t",0);

        
        and_r_i_t_0->reg1 = map_register(lhs->reg1,32);
        and_r_i_t_0->imm  = lhs->imm;
        and_r_i_t_0->dest = map_register(lhs->dest,32);
        and_r_i_t_0->suffix = suf_values[1];

	push(and_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_and_r_i_hex_to_and_r_i_t(void *start){
	and_r_i_hex_t* lhs = (and_r_i_hex_t*)start;
	and_r_i_t_t* and_r_i_t_0 = malloc(sizeof(and_r_i_t_t));
	symbol_init(and_r_i_t_0,"and_r_i_t",0);

        
        and_r_i_t_0->reg1 = map_register(lhs->reg1,32);
        and_r_i_t_0->imm  = lhs->imm;
        and_r_i_t_0->dest = map_register(lhs->dest,32);
        and_r_i_t_0->suffix = suf_values[1];

	push(and_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_r_to_or_r_r_t(void *start){
	or_r_r_t* lhs = (or_r_r_t*)start;
	or_r_r_t_t* or_r_r_t_0 = malloc(sizeof(or_r_r_t_t));
	symbol_init(or_r_r_t_0,"or_r_r_t",0);


        or_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        or_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        or_r_r_t_0->dest = map_register(lhs->dest,32);
        or_r_r_t_0->suffix = suf_values[1];

	push(or_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_i_to_or_r_i_t(void *start){
	or_r_i_t* lhs = (or_r_i_t*)start;
	or_r_i_t_t* or_r_i_t_0 = malloc(sizeof(or_r_i_t_t));
	symbol_init(or_r_i_t_0,"or_r_i_t",0);


        or_r_i_t_0->reg1 = map_register(lhs->reg1,32);
        or_r_i_t_0->imm  = lhs->imm;
        or_r_i_t_0->dest = map_register(lhs->dest,32);
        or_r_i_t_0->suffix = suf_values[1];


	push(or_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_or_r_i_hex_to_or_r_i_t(void *start){
	or_r_i_hex_t* lhs = (or_r_i_hex_t*)start;
	or_r_i_t_t* or_r_i_t_0 = malloc(sizeof(or_r_i_t_t));
	symbol_init(or_r_i_t_0,"or_r_i_t",0);


        or_r_i_t_0->reg1 = map_register(lhs->reg1,32);
        or_r_i_t_0->imm  = lhs->imm;
        or_r_i_t_0->dest = map_register(lhs->dest,32);
        or_r_i_t_0->suffix = suf_values[1];


	push(or_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_xor_r_r_to_xor_r_r_t(void *start){
	xor_r_r_t* lhs = (xor_r_r_t*)start;
	xor_r_r_t_t* xor_r_r_t_0 = malloc(sizeof(xor_r_r_t_t));
	symbol_init(xor_r_r_t_0,"xor_r_r_t",0);

        
        xor_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        xor_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        xor_r_r_t_0->dest = map_register(lhs->dest,32);
        xor_r_r_t_0->suffix = suf_values[1];


	push(xor_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_d_to_store_d_t(void *start){
	store_d_t* lhs = (store_d_t*)start;
	store_d_t_t* store_d_t_0 = malloc(sizeof(store_d_t_t));
	symbol_init(store_d_t_0,"store_d_t",0);


        store_d_t_0->source = map_register(lhs->source,64);
        store_d_t_0->base = map_register(lhs->base,64);
        store_d_t_0->offset = lhs->offset;
        store_d_t_0->suffix = suf_values[0];

	push(store_d_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_w_to_store_w_t(void *start){
	store_w_t* lhs = (store_w_t*)start;
	store_w_t_t* store_w_t_0 = malloc(sizeof(store_w_t_t));
	symbol_init(store_w_t_0,"store_w_t",0);


        store_w_t_0->source = map_register(lhs->source,32);
        store_w_t_0->base = map_register(lhs->base,64);
        store_w_t_0->offset = lhs->offset;
        store_w_t_0->suffix = suf_values[1];

	push(store_w_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_h_to_store_h_t(void *start){
	store_h_t* lhs = (store_h_t*)start;
	store_h_t_t* store_h_t_0 = malloc(sizeof(store_h_t_t));
	symbol_init(store_h_t_0,"store_h_t",0);


        store_h_t_0->source = map_register(lhs->source,16);
        store_h_t_0->base = map_register(lhs->base,64);
        store_h_t_0->offset = lhs->offset;
        store_h_t_0->suffix = suf_values[2];

	push(store_h_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_store_b_to_store_b_t(void *start){
	store_b_t* lhs = (store_b_t*)start;
	store_b_t_t* store_b_t_0 = malloc(sizeof(store_b_t_t));
	symbol_init(store_b_t_0,"store_b_t",0);


        store_b_t_0->source = map_register(lhs->source,8);
        store_b_t_0->base = map_register(lhs->base,64);
        store_b_t_0->offset = lhs->offset;
        store_b_t_0->suffix = suf_values[3];

	push(store_b_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_move_h_to_move_h_t(void *start){
	move_h_t* lhs = (move_h_t*)start;
	move_h_t_t* move_h_t_0 = malloc(sizeof(move_h_t_t));
	symbol_init(move_h_t_0,"move_h_t",0);

        move_h_t_0->dest = map_register(lhs->dest,64);
        move_h_t_0->suffix = suf_values[0];

	push(move_h_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_move_l_to_move_l_t(void *start){
	move_l_t* lhs = (move_l_t*)start;
	move_l_t_t* move_l_t_0 = malloc(sizeof(move_l_t_t));
	symbol_init(move_l_t_0,"move_l_t",0);


        move_l_t_0->dest = map_register(lhs->dest,64);
        move_l_t_0->suffix = suf_values[0];

	push(move_l_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_nor_r_r_to_nor_r_r_t(void *start){
	nor_r_r_t* lhs = (nor_r_r_t*)start;
	nor_r_r_t_t* nor_r_r_t_0 = malloc(sizeof(nor_r_r_t_t));
	symbol_init(nor_r_r_t_0,"nor_r_r_t",0);

        nor_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        nor_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        nor_r_r_t_0->dest = map_register(lhs->dest,32);
        nor_r_r_t_0->suffix = suf_values[1];

	push(nor_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_l_to_shift_l_t(void *start){
	shift_l_t* lhs = (shift_l_t*)start;
	shift_l_t_t* shift_l_t_0 = malloc(sizeof(shift_l_t_t));
	symbol_init(shift_l_t_0,"shift_l_t",0);

        shift_l_t_0->reg1 = map_register(lhs->reg1,32);
        shift_l_t_0->imm = lhs->imm;
        shift_l_t_0->dest = map_register(lhs->dest,32);
        shift_l_t_0->suffix = suf_values[1];

	push(shift_l_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_r_to_shift_r_t(void *start){
	shift_r_t* lhs = (shift_r_t*)start;
	shift_r_t_t* shift_r_t_0 = malloc(sizeof(shift_r_t_t));
	symbol_init(shift_r_t_0,"shift_r_t",0);

        shift_r_t_0->reg1 = map_register(lhs->reg1,32);
        shift_r_t_0->imm = lhs->imm;
        shift_r_t_0->dest = map_register(lhs->dest,32);
        shift_r_t_0->suffix = suf_values[1];

	push(shift_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_eq_r_r_to_branch_eq_r_r_t(void *start){
	branch_eq_r_r_t* lhs = (branch_eq_r_r_t*)start;
	branch_eq_r_r_t_t* branch_eq_r_r_t_0 = malloc(sizeof(branch_eq_r_r_t_t));
	symbol_init(branch_eq_r_r_t_0,"branch_eq_r_r_t",0);

        branch_eq_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        branch_eq_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        branch_eq_r_r_t_0->address = lhs->address;
        branch_eq_r_r_t_0->suffix = suf_values[1];

	push(branch_eq_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_eq_c_to_branch_eq_r_r_t(void *start){
	branch_eq_c_t* lhs = (branch_eq_c_t*)start;
	branch_eq_r_r_t_t* branch_eq_r_r_t_0 = malloc(sizeof(branch_eq_r_r_t_t));
	symbol_init(branch_eq_r_r_t_0,"branch_eq_r_r_t",0);

        branch_eq_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        branch_eq_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        branch_eq_r_r_t_0->address = lhs->target;
        branch_eq_r_r_t_0->suffix = suf_values[1];

	push(branch_eq_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_neq_r_r_to_branch_neq_r_r_t(void *start){
	branch_neq_r_r_t* lhs = (branch_neq_r_r_t*)start;
	branch_neq_r_r_t_t* branch_neq_r_r_t_0 = malloc(sizeof(branch_neq_r_r_t_t));
	symbol_init(branch_neq_r_r_t_0,"branch_neq_r_r_t",0);

        branch_neq_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        branch_neq_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        branch_neq_r_r_t_0->address = lhs->address;
        branch_neq_r_r_t_0->suffix = suf_values[1];

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
void from_jump_r_to_jump_r_t(void *start){
	jump_r_t* lhs = (jump_r_t*)start;
	jump_r_t_t* jump_r_t_0 = malloc(sizeof(jump_r_t_t));
	symbol_init(jump_r_t_0,"jump_r_t",0);


        jump_r_t_0->reg1 = map_register(lhs->reg1,64);
        jump_r_t_0->suffix = suf_values[0];


	push(jump_r_t_0);

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
void from_addu_r_r_to_add_r_r_t(void *start){
	addu_r_r_t* lhs = (addu_r_r_t*)start;
	add_r_r_t_t* add_r_r_t_0 = malloc(sizeof(add_r_r_t_t));
	symbol_init(add_r_r_t_0,"add_r_r_t",0);

        add_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        add_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        add_r_r_t_0->dest = map_register(lhs->dest,32);

        add_r_r_t_0->suffix = suf_values[1];

	push(add_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_addu_r_i_to_add_r_i_t(void *start){
	addu_r_i_t* lhs = (addu_r_i_t*)start;
	add_r_i_t_t* add_r_i_t_0 = malloc(sizeof(add_r_i_t_t));
	symbol_init(add_r_i_t_0,"add_r_i_t",0);

        
        add_r_i_t_0->reg1 = map_register(lhs->reg1,32);
        add_r_i_t_0->imm = lhs->imm;
        add_r_i_t_0->dest = map_register(lhs->dest,32);
        add_r_i_t_0->suffix = suf_values[1];

	push(add_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_set_l_r_i_to_set_l_r_i_t(void *start){
	set_l_r_i_t* lhs = (set_l_r_i_t*)start;
	set_l_r_i_t_t* set_l_r_i_t_0 = malloc(sizeof(set_l_r_i_t_t));
	symbol_init(set_l_r_i_t_0,"set_l_r_i_t",0);

        set_l_r_i_t_0->reg1 = map_register(lhs->reg1,32);
        set_l_r_i_t_0->dest = map_register(lhs->dest,32);
        set_l_r_i_t_0->imm = lhs->imm;
        set_l_r_i_t_0->suffix = suf_values[1];

	push(set_l_r_i_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_move_to_i_mov_r_r(void *start){
	move_t* lhs = (move_t*)start;
	i_mov_r_r_t* i_mov_r_r_0 = malloc(sizeof(i_mov_r_r_t));
	symbol_init(i_mov_r_r_0,"i_mov_r_r",0);

        i_mov_r_r_0->reg1 = map_register(lhs->src,64);
        i_mov_r_r_0->dest = map_register(lhs->dest,64);
        i_mov_r_r_0->suffix = suf_values[0];

	push(i_mov_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_seh_to_seh_t(void *start){
	seh_t* lhs = (seh_t*)start;
	seh_t_t* seh_t_0 = malloc(sizeof(seh_t_t));
	symbol_init(seh_t_0,"seh_t",0);

        seh_t_0->reg1 = map_register(lhs->reg1,64);
        seh_t_0->dest = map_register(lhs->dest,64);

	push(seh_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_jump_r_c_to_jump_r_t(void *start){
	jump_r_c_t* lhs = (jump_r_c_t*)start;
	jump_r_t_t* jump_r_t_0 = malloc(sizeof(jump_r_t_t));
	symbol_init(jump_r_t_0,"jump_r_t",0);


        jump_r_t_0->reg1 = map_register(lhs->reg1,64);
        jump_r_t_0->suffix = suf_values[0];


	push(jump_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_neq_c_to_branch_neq_r_r_t(void *start){
	branch_neq_c_t* lhs = (branch_neq_c_t*)start;
	branch_neq_r_r_t_t* branch_neq_r_r_t_0 = malloc(sizeof(branch_neq_r_r_t_t));
	symbol_init(branch_neq_r_r_t_0,"branch_neq_r_r_t",0);

        branch_neq_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        branch_neq_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        branch_neq_r_r_t_0->address = lhs->target;
        branch_neq_r_r_t_0->suffix = suf_values[1];

	push(branch_neq_r_r_t_0);

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
void from_branch_c_to_jump_t(void *start){
	branch_c_t* lhs = (branch_c_t*)start;
	jump_t_t* jump_t_0 = malloc(sizeof(jump_t_t));
	symbol_init(jump_t_0,"jump_t",0);

        jump_t_0->address = lhs->target;

	push(jump_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_nez_c_to_branch_neq_r_r_t(void *start){
	branch_nez_c_t* lhs = (branch_nez_c_t*)start;
	branch_neq_r_r_t_t* branch_neq_r_r_t_0 = malloc(sizeof(branch_neq_r_r_t_t));
	symbol_init(branch_neq_r_r_t_0,"branch_neq_r_r_t",0);

        branch_neq_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        branch_neq_r_r_t_0->reg2 = map_register(reg_values[0],32);
        branch_neq_r_r_t_0->address = lhs->target;
        branch_neq_r_r_t_0->suffix = suf_values[1];

	push(branch_neq_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_eqz_c_to_branch_eq_r_r_t(void *start){
	branch_eqz_c_t* lhs = (branch_eqz_c_t*)start;
	branch_eq_r_r_t_t* branch_eq_r_r_t_0 = malloc(sizeof(branch_eq_r_r_t_t));
	symbol_init(branch_eq_r_r_t_0,"branch_eq_r_r_t",0);

        branch_eq_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        branch_eq_r_r_t_0->reg2 = map_register(reg_values[0],32);
        branch_eq_r_r_t_0->address = lhs->target;
        branch_eq_r_r_t_0->suffix = suf_values[1];

	push(branch_eq_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_subu_r_r_to_sub_r_r_t(void *start){
	subu_r_r_t* lhs = (subu_r_r_t*)start;
	sub_r_r_t_t* sub_r_r_t_0 = malloc(sizeof(sub_r_r_t_t));
	symbol_init(sub_r_r_t_0,"sub_r_r_t",0);

        sub_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        sub_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        sub_r_r_t_0->dest = map_register(lhs->dest,32);
        sub_r_r_t_0->suffix = suf_values[1];

	push(sub_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dsubu_r_r_to_sub_r_r_t(void *start){
	dsubu_r_r_t* lhs = (dsubu_r_r_t*)start;
	sub_r_r_t_t* sub_r_r_t_0 = malloc(sizeof(sub_r_r_t_t));
	symbol_init(sub_r_r_t_0,"sub_r_r_t",0);

        sub_r_r_t_0->reg1 = map_register(lhs->reg1,64);
        sub_r_r_t_0->reg2 = map_register(lhs->reg2,64);
        sub_r_r_t_0->dest = map_register(lhs->dest,64);
        sub_r_r_t_0->suffix = suf_values[0];

	push(sub_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_gtz_c_to_branch_gtz_c_t(void *start){
	branch_gtz_c_t* lhs = (branch_gtz_c_t*)start;
	branch_gtz_c_t_t* branch_gtz_c_t_0 = malloc(sizeof(branch_gtz_c_t_t));
	symbol_init(branch_gtz_c_t_0,"branch_gtz_c_t",0);

        branch_gtz_c_t_0->reg1 = map_register(lhs->reg1,32);
        branch_gtz_c_t_0->target = lhs->target;

	push(branch_gtz_c_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_ge_c_to_branch_ge_c_t(void *start){
	branch_ge_c_t* lhs = (branch_ge_c_t*)start;
	branch_ge_c_t_t* branch_ge_c_t_0 = malloc(sizeof(branch_ge_c_t_t));
	symbol_init(branch_ge_c_t_0,"branch_ge_c_t",0);

        branch_ge_c_t_0->reg1 = map_register(lhs->reg1,32);
        branch_ge_c_t_0->reg2 = map_register(lhs->reg2,32);
        branch_ge_c_t_0->target = lhs->target;

	push(branch_ge_c_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_geu_c_to_branch_geu_c_t(void *start){
	branch_geu_c_t* lhs = (branch_geu_c_t*)start;
	branch_geu_c_t_t* branch_geu_c_t_0 = malloc(sizeof(branch_geu_c_t_t));
	symbol_init(branch_geu_c_t_0,"branch_geu_c_t",0);

        branch_geu_c_t_0->reg1 = map_register(lhs->reg1,32);
        branch_geu_c_t_0->reg2 = map_register(lhs->reg2,32);
        branch_geu_c_t_0->target = lhs->target;

	push(branch_geu_c_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_gez_c_to_branch_ge_c_t(void *start){
	branch_gez_c_t* lhs = (branch_gez_c_t*)start;
	branch_ge_c_t_t* branch_ge_c_t_0 = malloc(sizeof(branch_ge_c_t_t));
	symbol_init(branch_ge_c_t_0,"branch_ge_c_t",0);

        branch_ge_c_t_0->reg1 = map_register(lhs->reg1,32);
        branch_ge_c_t_0->reg2 = map_register(reg_values[0],32);
        branch_ge_c_t_0->target = lhs->target;


	push(branch_ge_c_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_shift_ra_to_shift_ra_t(void *start){
	shift_ra_t* lhs = (shift_ra_t*)start;
	shift_ra_t_t* shift_ra_t_0 = malloc(sizeof(shift_ra_t_t));
	symbol_init(shift_ra_t_0,"shift_ra_t",0);

        shift_ra_t_0->dest = map_register(lhs->dest,32);
        shift_ra_t_0->reg1 = map_register(lhs->reg1,32);
        shift_ra_t_0->imm = lhs->imm;

	push(shift_ra_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_lt_c_to_branch_lt_c_t(void *start){
	branch_lt_c_t* lhs = (branch_lt_c_t*)start;
	branch_lt_c_t_t* branch_lt_c_t_0 = malloc(sizeof(branch_lt_c_t_t));
	symbol_init(branch_lt_c_t_0,"branch_lt_c_t",0);

        branch_lt_c_t_0->reg1 = map_register(lhs->reg1,32);
        branch_lt_c_t_0->reg2 = map_register(lhs->reg2,32);
        branch_lt_c_t_0->target = lhs->target;

	push(branch_lt_c_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_ltu_c_to_branch_ltu_c_t(void *start){
	branch_ltu_c_t* lhs = (branch_ltu_c_t*)start;
	branch_ltu_c_t_t* branch_ltu_c_t_0 = malloc(sizeof(branch_ltu_c_t_t));
	symbol_init(branch_ltu_c_t_0,"branch_ltu_c_t",0);

        branch_ltu_c_t_0->reg1 = map_register(lhs->reg1,32);
        branch_ltu_c_t_0->reg2 = map_register(lhs->reg2,32);
        branch_ltu_c_t_0->target = lhs->target;

	push(branch_ltu_c_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dsrl_to_shift_r_t(void *start){
	dsrl_t* lhs = (dsrl_t*)start;
	shift_r_t_t* shift_r_t_0 = malloc(sizeof(shift_r_t_t));
	symbol_init(shift_r_t_0,"shift_r_t",0);

        shift_r_t_0->reg1 = map_register(lhs->reg1,64);
        shift_r_t_0->imm = lhs->imm;
        shift_r_t_0->dest = map_register(lhs->dest,64);
        shift_r_t_0->suffix = suf_values[0];

	push(shift_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dsll_to_shift_l_t(void *start){
	dsll_t* lhs = (dsll_t*)start;
	shift_l_t_t* shift_l_t_0 = malloc(sizeof(shift_l_t_t));
	symbol_init(shift_l_t_0,"shift_l_t",0);

        shift_l_t_0->reg1 = map_register(lhs->reg1,64);
        shift_l_t_0->imm = lhs->imm;
        shift_l_t_0->dest = map_register(lhs->dest,64);
        shift_l_t_0->suffix = suf_values[0];

	push(shift_l_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_branch_ltz_c_to_branch_lt_c_t(void *start){
	branch_ltz_c_t* lhs = (branch_ltz_c_t*)start;
	branch_lt_c_t_t* branch_lt_c_t_0 = malloc(sizeof(branch_lt_c_t_t));
	symbol_init(branch_lt_c_t_0,"branch_lt_c_t",0);

        branch_lt_c_t_0->reg1 = map_register(lhs->reg1,32);
        branch_lt_c_t_0->reg2 = map_register(reg_values[0],32);
        branch_lt_c_t_0->target = lhs->target;

	push(branch_lt_c_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_load_i_to_i_mov_i_r(void *start){
	load_i_t* lhs = (load_i_t*)start;
	i_mov_i_r_t* i_mov_i_r_0 = malloc(sizeof(i_mov_i_r_t));
	symbol_init(i_mov_i_r_0,"i_mov_i_r",0);

        i_mov_i_r_0->dest = map_register(lhs->dest,32); 
        i_mov_i_r_0->imm = lhs->imm;
        i_mov_i_r_0->suffix = suf_values[1];

	push(i_mov_i_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_teq_to_teq_t(void *start){
	teq_t* lhs = (teq_t*)start;
	teq_t_t* teq_t_0 = malloc(sizeof(teq_t_t));
	symbol_init(teq_t_0,"teq_t",0);

        teq_t_0->reg1 = map_register(lhs->reg1,32);
        teq_t_0->reg2 = map_register(lhs->reg2,32);

	push(teq_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_set_l_r_r_u_to_set_l_r_r_t(void *start){
	set_l_r_r_u_t* lhs = (set_l_r_r_u_t*)start;
	set_l_r_r_t_t* set_l_r_r_t_0 = malloc(sizeof(set_l_r_r_t_t));
	symbol_init(set_l_r_r_t_0,"set_l_r_r_t",0);

        set_l_r_r_t_0->suffix = suf_values[1];
        set_l_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        set_l_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        set_l_r_r_t_0->dest = map_register(lhs->dest,32);


	push(set_l_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_muh_r_r_to_muh_r_r_t(void *start){
	muh_r_r_t* lhs = (muh_r_r_t*)start;
	muh_r_r_t_t* muh_r_r_t_0 = malloc(sizeof(muh_r_r_t_t));
	symbol_init(muh_r_r_t_0,"muh_r_r_t",0);

        
        muh_r_r_t_0->reg1 = map_register(lhs->reg1,32);
        muh_r_r_t_0->reg2 = map_register(lhs->reg2,32);
        muh_r_r_t_0->dest = map_register(lhs->dest,32);
        muh_r_r_t_0->suffix = suf_values[1];



	push(muh_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_sdc1_r_m_to_imovsd_r_m(void *start){
	sdc1_r_m_t* lhs = (sdc1_r_m_t*)start;
	imovsd_r_m_t* imovsd_r_m_0 = malloc(sizeof(imovsd_r_m_t));
	symbol_init(imovsd_r_m_0,"imovsd_r_m",0);

        imovsd_r_m_0->src = fp_map_register(lhs->src);
        imovsd_r_m_0->offset = lhs->offset;
        imovsd_r_m_0->base = map_register(lhs->base,64);

	push(imovsd_r_m_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmp_neg_to_cmp_jmp(void *start){
	cmp_neg_t* lhs = (cmp_neg_t*)start;
	cmp_jmp_t* cmp_jmp_0 = malloc(sizeof(cmp_jmp_t));
	symbol_init(cmp_jmp_0,"cmp_jmp",0);

        cmp_jmp_0->reg1 = lhs->reg1;
        cmp_jmp_0->reg2 = lhs->reg2;
        cmp_jmp_0->con = negate(lhs->con);
        cmp_jmp_0->fmt = lhs->fmt;
        cmp_jmp_0->target = lhs->target;

	push(cmp_jmp_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_ldc1_r_m_to_imovsd_m_r(void *start){
	ldc1_r_m_t* lhs = (ldc1_r_m_t*)start;
	imovsd_m_r_t* imovsd_m_r_0 = malloc(sizeof(imovsd_m_r_t));
	symbol_init(imovsd_m_r_0,"imovsd_m_r",0);

        imovsd_m_r_0->dest = fp_map_register(lhs->dest);
        imovsd_m_r_0->offset = lhs->offset;
        imovsd_m_r_0->base = map_register(lhs->base,64);

	push(imovsd_m_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_subd_r_r_to_subd_r_r_t(void *start){
	subd_r_r_t* lhs = (subd_r_r_t*)start;
	subd_r_r_t_t* subd_r_r_t_0 = malloc(sizeof(subd_r_r_t_t));
	symbol_init(subd_r_r_t_0,"subd_r_r_t",0);

        subd_r_r_t_0->dest = fp_map_register(lhs->dest);
        subd_r_r_t_0->reg1 = fp_map_register(lhs->reg1);
        subd_r_r_t_0->reg2 = fp_map_register(lhs->reg2);

	push(subd_r_r_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_add_d_to_add_d_t(void *start){
	add_d_t* lhs = (add_d_t*)start;
	add_d_t_t* add_d_t_0 = malloc(sizeof(add_d_t_t));
	symbol_init(add_d_t_0,"add_d_t",0);


        add_d_t_0->dest = fp_map_register(lhs->dest);
        add_d_t_0->reg1 = fp_map_register(lhs->reg1);
        add_d_t_0->reg2 = fp_map_register(lhs->reg2);
        


	push(add_d_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cvtdw_to_cvtdw_t(void *start){
	cvtdw_t* lhs = (cvtdw_t*)start;
	cvtdw_t_t* cvtdw_t_0 = malloc(sizeof(cvtdw_t_t));
	symbol_init(cvtdw_t_0,"cvtdw_t",0);

        cvtdw_t_0->dest = fp_map_register(lhs->dest);
        cvtdw_t_0->src = fp_map_register(lhs->src);
        

	push(cvtdw_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mtc1_to_mtc1_t(void *start){
	mtc1_t* lhs = (mtc1_t*)start;
	mtc1_t_t* mtc1_t_0 = malloc(sizeof(mtc1_t_t));
	symbol_init(mtc1_t_0,"mtc1_t",0);

        
        mtc1_t_0->dest = fp_map_register(lhs->dest);
        mtc1_t_0->src = map_register(lhs->src,64);

	push(mtc1_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mfc1_to_mfc1_t(void *start){
	mfc1_t* lhs = (mfc1_t*)start;
	mfc1_t_t* mfc1_t_0 = malloc(sizeof(mfc1_t_t));
	symbol_init(mfc1_t_0,"mfc1_t",0);

        
        mfc1_t_0->dest = map_register(lhs->dest,64);
        mfc1_t_0->src = fp_map_register(lhs->src);

	push(mfc1_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mfhc1_to_mfhc1_t(void *start){
	mfhc1_t* lhs = (mfhc1_t*)start;
	mfhc1_t_t* mfhc1_t_0 = malloc(sizeof(mfhc1_t_t));
	symbol_init(mfhc1_t_0,"mfhc1_t",0);

        
        mfhc1_t_0->dest = map_register(lhs->dest,64);
        mfhc1_t_0->src = fp_map_register(lhs->src);

	push(mfhc1_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dmfc1_to_dmfc1_t(void *start){
	dmfc1_t* lhs = (dmfc1_t*)start;
	dmfc1_t_t* dmfc1_t_0 = malloc(sizeof(dmfc1_t_t));
	symbol_init(dmfc1_t_0,"dmfc1_t",0);


        dmfc1_t_0->dest = map_register(lhs->dest,64);
        dmfc1_t_0->src = fp_map_register(lhs->src);

	push(dmfc1_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_divd_to_divd_t(void *start){
	divd_t* lhs = (divd_t*)start;
	divd_t_t* divd_t_0 = malloc(sizeof(divd_t_t));
	symbol_init(divd_t_0,"divd_t",0);

        divd_t_0->dest = fp_map_register(lhs->dest);
        divd_t_0->reg1 = fp_map_register(lhs->reg1);
        divd_t_0->reg2 = fp_map_register(lhs->reg2);

	push(divd_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_muld_to_muld_t(void *start){
	muld_t* lhs = (muld_t*)start;
	muld_t_t* muld_t_0 = malloc(sizeof(muld_t_t));
	symbol_init(muld_t_0,"muld_t",0);

        muld_t_0->dest = fp_map_register(lhs->dest);
        muld_t_0->reg1 = fp_map_register(lhs->reg1);
        muld_t_0->reg2 = fp_map_register(lhs->reg2);

	push(muld_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cmpconfmt_to_cmpconfmt_t(void *start){
	cmpconfmt_t* lhs = (cmpconfmt_t*)start;
	cmpconfmt_t_t* cmpconfmt_t_0 = malloc(sizeof(cmpconfmt_t_t));
	symbol_init(cmpconfmt_t_0,"cmpconfmt_t",0);

        cmpconfmt_t_0->dest = fp_map_register(lhs->dest);
        cmpconfmt_t_0->reg1 = fp_map_register(lhs->reg1);
        cmpconfmt_t_0->reg2 = fp_map_register(lhs->reg2);
        cmpconfmt_t_0->fmt = lhs->fmt;
        cmpconfmt_t_0->con = lhs->con;

	push(cmpconfmt_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_trunc_w_d_to_truncwd_t(void *start){
	trunc_w_d_t* lhs = (trunc_w_d_t*)start;
	truncwd_t_t* truncwd_t_0 = malloc(sizeof(truncwd_t_t));
	symbol_init(truncwd_t_0,"truncwd_t",0);

        truncwd_t_0->src = fp_map_register(lhs->src);
        truncwd_t_0->dest = fp_map_register(lhs->dest);

	push(truncwd_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_cvtdl_to_cvtdl_t(void *start){
	cvtdl_t* lhs = (cvtdl_t*)start;
	cvtdl_t_t* cvtdl_t_0 = malloc(sizeof(cvtdl_t_t));
	symbol_init(cvtdl_t_0,"cvtdl_t",0);

        cvtdl_t_0->src = fp_map_register(lhs->src);
        cvtdl_t_0->dest = fp_map_register(lhs->dest);

	push(cvtdl_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_dmtc1_to_dmtc1_t(void *start){
	dmtc1_t* lhs = (dmtc1_t*)start;
	dmtc1_t_t* dmtc1_t_0 = malloc(sizeof(dmtc1_t_t));
	symbol_init(dmtc1_t_0,"dmtc1_t",0);

       dmtc1_t_0->dest = fp_map_register(lhs->dest);
       dmtc1_t_0->src = map_register(lhs->src,64);

	push(dmtc1_t_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_mov_d_to_imovsd_r_r(void *start){
	mov_d_t* lhs = (mov_d_t*)start;
	imovsd_r_r_t* imovsd_r_r_0 = malloc(sizeof(imovsd_r_r_t));
	symbol_init(imovsd_r_r_0,"imovsd_r_r",0);

        imovsd_r_r_0->dest = fp_map_register(lhs->dest);
        imovsd_r_r_0->src = fp_map_register(lhs->src);

	push(imovsd_r_r_0);

bitmap_initialize(rule_bitmap,MAX_RULE);
	}
void from_absd_to_absd_t(void *start){
	absd_t* lhs = (absd_t*)start;
	absd_t_t* absd_t_0 = malloc(sizeof(absd_t_t));
	symbol_init(absd_t_0,"absd_t",0);

        
        absd_t_0->dest = fp_map_register(lhs->dest);
        absd_t_0->src = fp_map_register(lhs->src);

	push(absd_t_0);

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
rule_functions[76] = from_i_jbu_to_I_JBU;
rule_functions[77] = from_i_mov_r_m_lab_to_I_MOV_R_M_LAB;
rule_functions[78] = from_i_mov_m_r_lab_to_I_MOV_M_R_LAB;
rule_functions[79] = from_i_xor_r_r_to_I_XOR_R_R;
rule_functions[80] = from_i_ud2_to_I_UD2;
rule_functions[81] = from_i_shr_i_r_to_I_SHR_I_R;
rule_functions[82] = from_i_shl_i_r_to_I_SHL_I_R;
rule_functions[83] = from_i_sal_i_r_to_I_SAL_I_R;
rule_functions[84] = from_i_sar_i_r_to_I_SAR_I_R;
rule_functions[85] = from_i_or_r_r_to_I_OR_R_R;
rule_functions[86] = from_i_not_r_to_I_NOT_R;
rule_functions[87] = from_i_neg_r_to_I_NEG_R;
rule_functions[88] = from_i_mul_r_to_I_MUL_R;
rule_functions[89] = from_i_mov_r_m_to_I_MOV_R_M;
rule_functions[90] = from_i_mov_m_r_to_I_MOV_M_R;
rule_functions[91] = from_i_mov_r_r_to_I_MOV_R_R;
rule_functions[92] = from_i_mov_r_r_to_i_push_r_i_pop_r;
rule_functions[93] = from_i_lea_m_r_to_I_LEA_M_R;
rule_functions[94] = from_i_jmp_r_to_I_JMP_R;
rule_functions[95] = from_i_jmp_to_I_JMP;
rule_functions[96] = from_i_jae_u_to_I_JAE_U;
rule_functions[97] = from_i_jae_to_I_JAE;
rule_functions[98] = from_i_ja_to_I_JA;
rule_functions[99] = from_i_jbe_to_I_JBE;
rule_functions[100] = from_i_jb_to_I_JB;
rule_functions[101] = from_i_div_r_to_I_DIV_R;
rule_functions[102] = from_i_cmp_r_i_to_I_CMP_R_I;
rule_functions[103] = from_i_cmp_r_r_to_I_CMP_R_R;
rule_functions[104] = from_i_call_r_to_I_CALL_R;
rule_functions[105] = from_i_call_to_I_CALL;
rule_functions[106] = from_i_and_i_r_to_I_AND_I_R;
rule_functions[107] = from_i_and_r_r_to_I_AND_R_R;
rule_functions[108] = from_i_add_i_r_to_I_ADD_I_R;
rule_functions[109] = from_i_add_r_r_to_I_ADD_R_R;
rule_functions[110] = from_i_sub_r_r_to_I_SUB_R_R;
rule_functions[111] = from_i_or_i_r_to_I_OR_I_R;
rule_functions[112] = from_i_jnz_to_I_JNZ;
rule_functions[113] = from_i_jz_to_I_JZ;
rule_functions[114] = from_i_mov_i_r_to_I_MOV_I_R;
rule_functions[115] = from_i_pop_r_to_I_POP_R;
rule_functions[116] = from_i_pop_r_to_i_mov_m_r_i_add_i_r;
rule_functions[117] = from_i_push_r_to_I_PUSH_R;
rule_functions[118] = from_i_push_r_to_i_add_i_r_i_mov_r_m;
rule_functions[119] = from_i_jnp_to_I_JNP;
rule_functions[120] = from_i_jp_to_I_JP;
rule_functions[121] = from_i_ret_to_I_RET;
rule_functions[122] = from_dmtc1_to_DMTC1;
rule_functions[123] = from_bc1nez_to_BC1NEZ;
rule_functions[124] = from_bc1eqz_to_BC1EQZ;
rule_functions[125] = from_cmpconfmt_to_CMPCONFMT;
rule_functions[126] = from_muld_to_MULD;
rule_functions[127] = from_divd_to_DIVD;
rule_functions[128] = from_dmfc1_to_DMFC1;
rule_functions[129] = from_mfhc1_to_MFHC1;
rule_functions[130] = from_mfc1_to_MFC1;
rule_functions[131] = from_mtc1_to_MTC1;
rule_functions[132] = from_cvtdw_to_CVTDW;
rule_functions[133] = from_subd_r_r_to_SUBD;
rule_functions[134] = from_ldc1_r_m_to_LDC1;
rule_functions[135] = from_sdc1_r_m_to_SDC1;
rule_functions[136] = from_ldc1_r_m_d_to_LDC1_M;
rule_functions[137] = from_trunc_w_d_to_TRUNC_W_D;
rule_functions[138] = from_cvtdl_to_CVTDL;
rule_functions[139] = from_add_d_to_ADDD;
rule_functions[140] = from_mov_d_to_MOVD;
rule_functions[141] = from_absd_to_ABSD;
rule_functions[142] = from_imovsd_r_r_to_IMOVSD_R_R;
rule_functions[143] = from_icomisd_r_r_to_ICOMISD;
rule_functions[144] = from_iucomisd_r_r_to_IUCOMISD;
rule_functions[145] = from_icomiss_r_r_to_ICOMISS;
rule_functions[146] = from_iucomiss_r_r_to_IUCOMISS;
rule_functions[147] = from_imulsd_r_r_to_IMULSD_R_R;
rule_functions[148] = from_idivsd_r_r_to_IDIVSD_R_R;
rule_functions[149] = from_imovd_r_f_to_IMOVD_R_F;
rule_functions[150] = from_imovd_f_r_to_IMOVD_F_R;
rule_functions[151] = from_icvtsi2sd_r_r_to_ICVTSI2SD_R_R;
rule_functions[152] = from_isubsd_r_r_to_ISUBSD_R_R;
rule_functions[153] = from_imovsd_m_r_to_IMOVSD_M_R;
rule_functions[154] = from_imovsd_r_m_to_IMOVSD_R_M;
rule_functions[155] = from_imovapd_r_r_to_IMOVAPD_R_R;
rule_functions[156] = from_iaddsd_r_r_to_IADDSD_R_R;
rule_functions[157] = from_icvttsd2si_r_r_to_ICVTTSD2SI;
rule_functions[158] = from_imovsd_lab_r_to_IMOVSD_LAB_R;
rule_functions[159] = from_andpd_m_to_ANDPD_M;
rule_functions[160] = from_teq_t_to_i_prologue_i_cmp_r_r_i_jnz_i_ud2_code_label;
rule_functions[161] = from_shift_ra_t_to_i_prologue_i_mov_r_r_i_sar_i_r_i_store_mem;
rule_functions[162] = from_branch_ltu_c_t_to_i_prologue_i_cmp_r_r_i_jbu;
rule_functions[163] = from_branch_lt_c_t_to_i_prologue_i_cmp_r_r_i_jb;
rule_functions[164] = from_branch_geu_c_t_to_i_prologue_i_cmp_r_r_i_jae_u;
rule_functions[165] = from_branch_ge_c_t_to_i_prologue_i_cmp_r_r_i_jae;
rule_functions[166] = from_branch_gtz_c_t_to_i_load_mem_i_cmp_r_r_i_ja;
rule_functions[167] = from_set_l_r_i_t_to_i_prologue_i_cmp_r_i_i_jb_i_mov_i_r_i_jmp_code_label_i_mov_i_r_code_label_i_store_mem;
rule_functions[168] = from_set_l_r_r_t_to_i_prologue_i_cmp_r_r_i_jb_i_load_mem_i_mov_i_r_i_jmp_code_label_i_load_mem_i_mov_i_r_code_label_i_store_mem;
rule_functions[169] = from_call_t_to_i_call;
rule_functions[170] = from_jump_r_t_to_i_ret;
rule_functions[171] = from_jump_r_t_to_i_load_mem_i_jmp_r;
rule_functions[172] = from_jump_t_to_i_jmp;
rule_functions[173] = from_branch_neq_r_r_t_to_i_prologue_i_cmp_r_r_i_jnz;
rule_functions[174] = from_branch_eq_r_r_t_to_i_prologue_i_cmp_r_r_i_jz;
rule_functions[175] = from_shift_r_t_to_i_prologue_i_mov_r_r_i_shr_i_r_i_store_mem;
rule_functions[176] = from_shift_l_t_to_i_prologue_i_mov_r_r_i_shl_i_r_i_store_mem;
rule_functions[177] = from_nor_r_r_t_to_i_load_mem_i_not_r_i_store_mem;
rule_functions[178] = from_nor_r_r_t_to_i_prologue_i_or_r_r_i_not_r_i_store_mem;
rule_functions[179] = from_nor_r_r_t_to_i_prologue_i_mov_r_r_i_load_mem_i_or_r_r_i_not_r_i_store_mem;
rule_functions[180] = from_xor_r_r_t_to_i_prologue_i_xor_r_r_i_store_mem;
rule_functions[181] = from_xor_r_r_t_to_i_prologue_i_mov_r_r_i_load_mem_i_xor_r_r_i_store_mem;
rule_functions[182] = from_or_r_i_t_to_i_load_mem_i_or_i_r_i_store_mem;
rule_functions[183] = from_or_r_i_t_to_i_prologue_i_mov_r_r_i_or_i_r_i_store_mem;
rule_functions[184] = from_or_r_r_t_to_nop;
rule_functions[185] = from_or_r_r_t_to_i_prologue_i_or_r_r_i_store_mem;
rule_functions[186] = from_or_r_r_t_to_i_prologue_i_mov_r_r_i_load_mem_i_or_r_r_i_store_mem;
rule_functions[187] = from_and_r_i_t_to_i_load_mem_i_and_i_r_i_store_mem;
rule_functions[188] = from_and_r_i_t_to_i_prologue_i_mov_r_r_i_and_i_r_i_store_mem;
rule_functions[189] = from_and_r_r_t_to_nop;
rule_functions[190] = from_and_r_r_t_to_i_prologue_i_and_r_r_i_store_mem;
rule_functions[191] = from_and_r_r_t_to_i_prologue_i_mov_r_r_i_load_mem_i_and_r_r_i_store_mem;
rule_functions[192] = from_store_b_t_to_i_prologue_i_mov_r_m;
rule_functions[193] = from_store_h_t_to_i_prologue_i_mov_r_m;
rule_functions[194] = from_store_w_t_to_i_prologue_i_mov_r_m;
rule_functions[195] = from_store_d_t_to_i_prologue_i_mov_r_m;
rule_functions[196] = from_load_b_t_to_i_prologue_i_mov_m_r_i_store_mem;
rule_functions[197] = from_load_h_t_to_i_prologue_i_mov_m_r_i_store_mem;
rule_functions[198] = from_load_w_t_to_i_prologue_i_mov_m_r_i_store_mem;
rule_functions[199] = from_load_dw_t_to_i_prologue_i_mov_m_r_i_store_mem;
rule_functions[200] = from_add_r_i_t_to_i_load_mem_i_add_i_r_i_store_mem;
rule_functions[201] = from_add_r_i_t_to_i_prologue_i_mov_r_r_i_add_i_r_i_store_mem;
rule_functions[202] = from_sub_r_r_t_to_i_load_mem_i_sub_r_r_i_store_mem;
rule_functions[203] = from_sub_r_r_t_to_i_prologue_i_neg_r_i_add_r_r_i_store_mem;
rule_functions[204] = from_sub_r_r_t_to_i_prologue_i_neg_r_i_add_r_r_i_neg_r_i_store_mem;
rule_functions[205] = from_sub_r_r_t_to_i_prologue_i_mov_r_r_i_load_mem_i_sub_r_r_i_store_mem;
rule_functions[206] = from_add_r_r_t_to_i_prologue_i_add_r_r_i_store_mem;
rule_functions[207] = from_add_r_r_t_to_i_prologue_i_mov_r_r_i_load_mem_i_add_r_r_i_store_mem;
rule_functions[208] = from_move_l_t_to_i_load_mem_i_mov_r_r_i_store_mem;
rule_functions[209] = from_move_h_t_to_i_load_mem_i_mov_r_r_i_store_mem;
rule_functions[210] = from_div_r_r_t_to_i_preserve_i_prologue_i_mov_r_r_i_div_r_i_load_mem_i_mov_r_r_i_store_mem_i_restore;
rule_functions[211] = from_muh_r_r_t_to_i_preserve_i_prologue_i_mov_r_r_i_mul_r_i_load_mem_i_mov_r_r_i_store_mem_i_restore;
rule_functions[212] = from_mul_r_r_t_to_i_preserve_i_prologue_i_mov_r_r_i_mul_r_i_load_mem_i_mov_r_r_i_store_mem_i_restore;
rule_functions[213] = from_i_restore_to_i_pop_r;
rule_functions[214] = from_i_restore_to_i_pop_r_i_pop_r;
rule_functions[215] = from_i_preserve_to_i_push_r_i_xor_r_r;
rule_functions[216] = from_i_preserve_to_i_push_r_i_push_r_i_xor_r_r;
rule_functions[217] = from_store_data_label_to_i_load_mem_i_mov_r_m_lab_i_store_mem;
rule_functions[218] = from_load_data_label_to_i_load_mem_i_mov_m_r_lab_i_store_mem;
rule_functions[219] = from_lea_label_to_i_lea_m_r;
rule_functions[220] = from_i_store_mem_to_i_mov_r_m;
rule_functions[221] = from_i_load_mem_to_i_mov_m_r;
rule_functions[222] = from_i_prologue_to_i_load_mem_i_load_mem;
rule_functions[223] = from_cmp_jmp_to_iucomisd_r_r_i_jp;
rule_functions[224] = from_cmp_jmp_to_iucomisd_r_r_i_jae_i_jp;
rule_functions[225] = from_cmp_jmp_to_iucomisd_r_r_i_jbe_i_jp;
rule_functions[226] = from_cmp_jmp_to_iucomisd_r_r_i_ja_i_jp;
rule_functions[227] = from_cmp_jmp_to_iucomisd_r_r_i_jnz_i_jp;
rule_functions[228] = from_cmp_jmp_to_iucomisd_r_r_i_jz_i_jp;
rule_functions[229] = from_cmp_jmp_to_iucomisd_r_r_i_jb_i_jp;
rule_functions[230] = from_cmp_jmp_to_icomisd_r_r_i_jae;
rule_functions[231] = from_cmp_jmp_to_icomisd_r_r_i_jbe;
rule_functions[232] = from_cmp_jmp_to_icomisd_r_r_i_ja;
rule_functions[233] = from_cmp_jmp_to_icomisd_r_r_i_jnz;
rule_functions[234] = from_cmp_jmp_to_icomisd_r_r_i_jz;
rule_functions[235] = from_cmp_jmp_to_icomisd_r_r_i_jb;
rule_functions[236] = from_cmp_jmp_to_icomiss_r_r_i_jae;
rule_functions[237] = from_cmp_jmp_to_icomiss_r_r_i_jbe;
rule_functions[238] = from_cmp_jmp_to_icomiss_r_r_i_ja;
rule_functions[239] = from_cmp_jmp_to_icomiss_r_r_i_jnz;
rule_functions[240] = from_cmp_jmp_to_icomiss_r_r_i_jz;
rule_functions[241] = from_cmp_jmp_to_icomiss_r_r_i_jb;
rule_functions[242] = from_cmp_jmp_to_iucomiss_r_r_i_jp;
rule_functions[243] = from_cmp_jmp_to_iucomiss_r_r_i_jae_i_jp;
rule_functions[244] = from_cmp_jmp_to_iucomiss_r_r_i_jbe_i_jp;
rule_functions[245] = from_cmp_jmp_to_iucomiss_r_r_i_ja_i_jp;
rule_functions[246] = from_cmp_jmp_to_iucomiss_r_r_i_jnz_i_jp;
rule_functions[247] = from_cmp_jmp_to_iucomiss_r_r_i_jz_i_jp;
rule_functions[248] = from_cmp_jmp_to_iucomiss_r_r_i_jb_i_jp;
rule_functions[249] = from_cmp_jmp_to_iucomiss_r_r_i_jnp;
rule_functions[250] = from_cmp_jmp_to_iucomisd_r_r_i_jnp;
rule_functions[251] = from_add_d_t_to_iaddsd_r_r;
rule_functions[252] = from_add_d_t_to_imovapd_r_r_iaddsd_r_r;
rule_functions[253] = from_subd_r_r_t_to_imovapd_r_r_isubsd_r_r_imovapd_r_r;
rule_functions[254] = from_subd_r_r_t_to_isubsd_r_r;
rule_functions[255] = from_subd_r_r_t_to_imovapd_r_r_isubsd_r_r;
rule_functions[256] = from_muld_t_to_i_mov_r_r_imulsd_r_r;
rule_functions[257] = from_divd_t_to_idivsd_r_r;
rule_functions[258] = from_divd_t_to_imovapd_r_r_idivsd_r_r_imovapd_r_r;
rule_functions[259] = from_divd_t_to_i_mov_r_r_idivsd_r_r;
rule_functions[260] = from_dmfc1_t_to_i_mov_r_r;
rule_functions[261] = from_mfc1_t_to_imovd_r_f;
rule_functions[262] = from_mtc1_t_to_imovd_f_r;
rule_functions[263] = from_cvtdw_t_to_i_push_r_imovd_r_f_icvtsi2sd_r_r_i_pop_r;
rule_functions[264] = from_cvtdl_t_to_i_push_r_imovd_r_f_icvtsi2sd_r_r_i_pop_r;
rule_functions[265] = from_truncwd_t_to_i_push_r_icvttsd2si_r_r_imovd_f_r_i_pop_r;
rule_functions[266] = from_lea_label_f_to_i_push_r_i_lea_m_r_i_mov_r_r_i_pop_r;
rule_functions[267] = from_dmtc1_t_to_i_mov_r_r;
rule_functions[268] = from_absd_t_to_imovapd_r_r_andpd_m;


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
terminal_rules[76] = 1;
terminal_rules[77] = 1;
terminal_rules[78] = 1;
terminal_rules[79] = 1;
terminal_rules[80] = 1;
terminal_rules[81] = 1;
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
terminal_rules[92] = 0;
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
terminal_rules[110] = 1;
terminal_rules[111] = 1;
terminal_rules[112] = 1;
terminal_rules[113] = 1;
terminal_rules[114] = 1;
terminal_rules[115] = 1;
terminal_rules[116] = 0;
terminal_rules[117] = 1;
terminal_rules[118] = 0;
terminal_rules[119] = 1;
terminal_rules[120] = 1;
terminal_rules[121] = 1;
terminal_rules[122] = 1;
terminal_rules[123] = 1;
terminal_rules[124] = 1;
terminal_rules[125] = 1;
terminal_rules[126] = 1;
terminal_rules[127] = 1;
terminal_rules[128] = 1;
terminal_rules[129] = 1;
terminal_rules[130] = 1;
terminal_rules[131] = 1;
terminal_rules[132] = 1;
terminal_rules[133] = 1;
terminal_rules[134] = 1;
terminal_rules[135] = 1;
terminal_rules[136] = 1;
terminal_rules[137] = 1;
terminal_rules[138] = 1;
terminal_rules[139] = 1;
terminal_rules[140] = 1;
terminal_rules[141] = 1;
terminal_rules[142] = 1;
terminal_rules[143] = 1;
terminal_rules[144] = 1;
terminal_rules[145] = 1;
terminal_rules[146] = 1;
terminal_rules[147] = 1;
terminal_rules[148] = 1;
terminal_rules[149] = 1;
terminal_rules[150] = 1;
terminal_rules[151] = 1;
terminal_rules[152] = 1;
terminal_rules[153] = 1;
terminal_rules[154] = 1;
terminal_rules[155] = 1;
terminal_rules[156] = 1;
terminal_rules[157] = 1;
terminal_rules[158] = 1;
terminal_rules[159] = 1;
terminal_rules[160] = 0;
terminal_rules[161] = 0;
terminal_rules[162] = 0;
terminal_rules[163] = 0;
terminal_rules[164] = 0;
terminal_rules[165] = 0;
terminal_rules[166] = 0;
terminal_rules[167] = 0;
terminal_rules[168] = 0;
terminal_rules[169] = 0;
terminal_rules[170] = 0;
terminal_rules[171] = 0;
terminal_rules[172] = 0;
terminal_rules[173] = 0;
terminal_rules[174] = 0;
terminal_rules[175] = 0;
terminal_rules[176] = 0;
terminal_rules[177] = 0;
terminal_rules[178] = 0;
terminal_rules[179] = 0;
terminal_rules[180] = 0;
terminal_rules[181] = 0;
terminal_rules[182] = 0;
terminal_rules[183] = 0;
terminal_rules[184] = 0;
terminal_rules[185] = 0;
terminal_rules[186] = 0;
terminal_rules[187] = 0;
terminal_rules[188] = 0;
terminal_rules[189] = 0;
terminal_rules[190] = 0;
terminal_rules[191] = 0;
terminal_rules[192] = 0;
terminal_rules[193] = 0;
terminal_rules[194] = 0;
terminal_rules[195] = 0;
terminal_rules[196] = 0;
terminal_rules[197] = 0;
terminal_rules[198] = 0;
terminal_rules[199] = 0;
terminal_rules[200] = 0;
terminal_rules[201] = 0;
terminal_rules[202] = 0;
terminal_rules[203] = 0;
terminal_rules[204] = 0;
terminal_rules[205] = 0;
terminal_rules[206] = 0;
terminal_rules[207] = 0;
terminal_rules[208] = 0;
terminal_rules[209] = 0;
terminal_rules[210] = 0;
terminal_rules[211] = 0;
terminal_rules[212] = 0;
terminal_rules[213] = 0;
terminal_rules[214] = 0;
terminal_rules[215] = 0;
terminal_rules[216] = 0;
terminal_rules[217] = 0;
terminal_rules[218] = 0;
terminal_rules[219] = 0;
terminal_rules[220] = 0;
terminal_rules[221] = 0;
terminal_rules[222] = 0;
terminal_rules[223] = 0;
terminal_rules[224] = 0;
terminal_rules[225] = 0;
terminal_rules[226] = 0;
terminal_rules[227] = 0;
terminal_rules[228] = 0;
terminal_rules[229] = 0;
terminal_rules[230] = 0;
terminal_rules[231] = 0;
terminal_rules[232] = 0;
terminal_rules[233] = 0;
terminal_rules[234] = 0;
terminal_rules[235] = 0;
terminal_rules[236] = 0;
terminal_rules[237] = 0;
terminal_rules[238] = 0;
terminal_rules[239] = 0;
terminal_rules[240] = 0;
terminal_rules[241] = 0;
terminal_rules[242] = 0;
terminal_rules[243] = 0;
terminal_rules[244] = 0;
terminal_rules[245] = 0;
terminal_rules[246] = 0;
terminal_rules[247] = 0;
terminal_rules[248] = 0;
terminal_rules[249] = 0;
terminal_rules[250] = 0;
terminal_rules[251] = 0;
terminal_rules[252] = 0;
terminal_rules[253] = 0;
terminal_rules[254] = 0;
terminal_rules[255] = 0;
terminal_rules[256] = 0;
terminal_rules[257] = 0;
terminal_rules[258] = 0;
terminal_rules[259] = 0;
terminal_rules[260] = 0;
terminal_rules[261] = 0;
terminal_rules[262] = 0;
terminal_rules[263] = 0;
terminal_rules[264] = 0;
terminal_rules[265] = 0;
terminal_rules[266] = 0;
terminal_rules[267] = 0;
terminal_rules[268] = 0;


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
sym_to_rules[211][0] = 76;
sym_to_rules[229][0] = 77;
sym_to_rules[227][0] = 78;
sym_to_rules[235][0] = 79;
sym_to_rules[197][0] = 80;
sym_to_rules[239][0] = 81;
sym_to_rules[238][0] = 82;
sym_to_rules[237][0] = 83;
sym_to_rules[236][0] = 84;
sym_to_rules[233][0] = 85;
sym_to_rules[232][0] = 86;
sym_to_rules[231][0] = 87;
sym_to_rules[230][0] = 88;
sym_to_rules[228][0] = 89;
sym_to_rules[226][0] = 90;
sym_to_rules[225][0] = 91;
sym_to_rules[225][1] = 92;
sym_to_rules[223][0] = 93;
sym_to_rules[221][0] = 94;
sym_to_rules[220][0] = 95;
sym_to_rules[219][0] = 96;
sym_to_rules[218][0] = 97;
sym_to_rules[213][0] = 98;
sym_to_rules[212][0] = 99;
sym_to_rules[210][0] = 100;
sym_to_rules[209][0] = 101;
sym_to_rules[208][0] = 102;
sym_to_rules[207][0] = 103;
sym_to_rules[206][0] = 104;
sym_to_rules[205][0] = 105;
sym_to_rules[204][0] = 106;
sym_to_rules[203][0] = 107;
sym_to_rules[202][0] = 108;
sym_to_rules[200][0] = 109;
sym_to_rules[201][0] = 110;
sym_to_rules[234][0] = 111;
sym_to_rules[217][0] = 112;
sym_to_rules[214][0] = 113;
sym_to_rules[224][0] = 114;
sym_to_rules[199][0] = 115;
sym_to_rules[199][1] = 116;
sym_to_rules[198][0] = 117;
sym_to_rules[198][1] = 118;
sym_to_rules[216][0] = 119;
sym_to_rules[215][0] = 120;
sym_to_rules[196][0] = 121;
sym_to_rules[273][0] = 122;
sym_to_rules[278][0] = 123;
sym_to_rules[277][0] = 124;
sym_to_rules[276][0] = 125;
sym_to_rules[275][0] = 126;
sym_to_rules[274][0] = 127;
sym_to_rules[272][0] = 128;
sym_to_rules[271][0] = 129;
sym_to_rules[270][0] = 130;
sym_to_rules[269][0] = 131;
sym_to_rules[264][0] = 132;
sym_to_rules[263][0] = 133;
sym_to_rules[261][0] = 134;
sym_to_rules[260][0] = 135;
sym_to_rules[262][0] = 136;
sym_to_rules[267][0] = 137;
sym_to_rules[265][0] = 138;
sym_to_rules[266][0] = 139;
sym_to_rules[268][0] = 140;
sym_to_rules[279][0] = 141;
sym_to_rules[299][0] = 142;
sym_to_rules[315][0] = 143;
sym_to_rules[314][0] = 144;
sym_to_rules[313][0] = 145;
sym_to_rules[312][0] = 146;
sym_to_rules[311][0] = 147;
sym_to_rules[310][0] = 148;
sym_to_rules[309][0] = 149;
sym_to_rules[308][0] = 150;
sym_to_rules[306][0] = 151;
sym_to_rules[305][0] = 152;
sym_to_rules[301][0] = 153;
sym_to_rules[298][0] = 154;
sym_to_rules[303][0] = 155;
sym_to_rules[304][0] = 156;
sym_to_rules[307][0] = 157;
sym_to_rules[302][0] = 158;
sym_to_rules[300][0] = 159;
sym_to_rules[364][0] = 160;
sym_to_rules[360][0] = 161;
sym_to_rules[365][0] = 162;
sym_to_rules[361][0] = 163;
sym_to_rules[359][0] = 164;
sym_to_rules[358][0] = 165;
sym_to_rules[357][0] = 166;
sym_to_rules[341][0] = 167;
sym_to_rules[340][0] = 168;
sym_to_rules[348][0] = 169;
sym_to_rules[347][0] = 170;
sym_to_rules[347][1] = 171;
sym_to_rules[346][0] = 172;
sym_to_rules[345][0] = 173;
sym_to_rules[344][0] = 174;
sym_to_rules[343][0] = 175;
sym_to_rules[342][0] = 176;
sym_to_rules[339][0] = 177;
sym_to_rules[339][1] = 178;
sym_to_rules[339][2] = 179;
sym_to_rules[338][0] = 180;
sym_to_rules[338][1] = 181;
sym_to_rules[337][0] = 182;
sym_to_rules[337][1] = 183;
sym_to_rules[336][0] = 184;
sym_to_rules[336][1] = 185;
sym_to_rules[336][2] = 186;
sym_to_rules[335][0] = 187;
sym_to_rules[335][1] = 188;
sym_to_rules[334][0] = 189;
sym_to_rules[334][1] = 190;
sym_to_rules[334][2] = 191;
sym_to_rules[331][0] = 192;
sym_to_rules[330][0] = 193;
sym_to_rules[329][0] = 194;
sym_to_rules[328][0] = 195;
sym_to_rules[327][0] = 196;
sym_to_rules[326][0] = 197;
sym_to_rules[325][0] = 198;
sym_to_rules[324][0] = 199;
sym_to_rules[321][0] = 200;
sym_to_rules[321][1] = 201;
sym_to_rules[320][0] = 202;
sym_to_rules[320][1] = 203;
sym_to_rules[320][2] = 204;
sym_to_rules[320][3] = 205;
sym_to_rules[319][0] = 206;
sym_to_rules[319][1] = 207;
sym_to_rules[333][0] = 208;
sym_to_rules[332][0] = 209;
sym_to_rules[323][0] = 210;
sym_to_rules[316][0] = 211;
sym_to_rules[322][0] = 212;
sym_to_rules[350][0] = 213;
sym_to_rules[350][1] = 214;
sym_to_rules[349][0] = 215;
sym_to_rules[349][1] = 216;
sym_to_rules[368][0] = 217;
sym_to_rules[367][0] = 218;
sym_to_rules[366][0] = 219;
sym_to_rules[353][0] = 220;
sym_to_rules[352][0] = 221;
sym_to_rules[351][0] = 222;
sym_to_rules[380][0] = 223;
sym_to_rules[380][1] = 224;
sym_to_rules[380][2] = 225;
sym_to_rules[380][3] = 226;
sym_to_rules[380][4] = 227;
sym_to_rules[380][5] = 228;
sym_to_rules[380][6] = 229;
sym_to_rules[380][7] = 230;
sym_to_rules[380][8] = 231;
sym_to_rules[380][9] = 232;
sym_to_rules[380][10] = 233;
sym_to_rules[380][11] = 234;
sym_to_rules[380][12] = 235;
sym_to_rules[380][13] = 236;
sym_to_rules[380][14] = 237;
sym_to_rules[380][15] = 238;
sym_to_rules[380][16] = 239;
sym_to_rules[380][17] = 240;
sym_to_rules[380][18] = 241;
sym_to_rules[380][19] = 242;
sym_to_rules[380][20] = 243;
sym_to_rules[380][21] = 244;
sym_to_rules[380][22] = 245;
sym_to_rules[380][23] = 246;
sym_to_rules[380][24] = 247;
sym_to_rules[380][25] = 248;
sym_to_rules[380][26] = 249;
sym_to_rules[380][27] = 250;
sym_to_rules[385][0] = 251;
sym_to_rules[385][1] = 252;
sym_to_rules[371][0] = 253;
sym_to_rules[371][1] = 254;
sym_to_rules[371][2] = 255;
sym_to_rules[378][0] = 256;
sym_to_rules[377][0] = 257;
sym_to_rules[377][1] = 258;
sym_to_rules[377][2] = 259;
sym_to_rules[376][0] = 260;
sym_to_rules[374][0] = 261;
sym_to_rules[373][0] = 262;
sym_to_rules[372][0] = 263;
sym_to_rules[384][0] = 264;
sym_to_rules[383][0] = 265;
sym_to_rules[382][0] = 266;
sym_to_rules[386][0] = 267;
sym_to_rules[387][0] = 268;


}
rule_func trans_rules[N_SYM][MAX_RULE];

void init_trans_rules(void){
for(int i = 0; i < N_SYM; i++){
	for(int j =0; j < MAX_RULE; j++){
		 trans_rules[i][j] = NULL;
	}
}
trans_rules[96][0] = from_dadd_r_r_to_add_r_r_t;
trans_rules[98][0] = from_daddu_r_r_to_add_r_r_t;
trans_rules[103][0] = from_dadd_r_i_to_add_r_i_t;
trans_rules[108][0] = from_daddu_r_i_to_add_r_i_t;
trans_rules[95][0] = from_add_r_r_to_add_r_r_t;
trans_rules[101][0] = from_sub_r_r_to_sub_r_r_t;
trans_rules[102][0] = from_add_r_i_to_add_r_i_t;
trans_rules[109][0] = from_mul_r_r_to_mul_r_r_t;
trans_rules[110][0] = from_div_r_r_to_div_r_r_t;
trans_rules[111][0] = from_load_dw_to_load_dw_t;
trans_rules[113][0] = from_load_w_to_load_w_t;
trans_rules[115][0] = from_load_h_to_load_h_t;
trans_rules[116][0] = from_load_b_to_load_b_t;
trans_rules[117][0] = from_load_b_u_to_load_b_t;
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
trans_rules[126][0] = from_move_h_to_move_h_t;
trans_rules[127][0] = from_move_l_to_move_l_t;
trans_rules[135][0] = from_nor_r_r_to_nor_r_r_t;
trans_rules[140][0] = from_shift_l_to_shift_l_t;
trans_rules[141][0] = from_shift_r_to_shift_r_t;
trans_rules[142][0] = from_branch_eq_r_r_to_branch_eq_r_r_t;
trans_rules[82][0] = from_branch_eq_c_to_branch_eq_r_r_t;
trans_rules[143][0] = from_branch_neq_r_r_to_branch_neq_r_r_t;
trans_rules[144][0] = from_jump_to_jump_t;
trans_rules[145][0] = from_jump_r_to_jump_r_t;
trans_rules[146][0] = from_call_to_call_t;
trans_rules[97][0] = from_addu_r_r_to_add_r_r_t;
trans_rules[107][0] = from_addu_r_i_to_add_r_i_t;
trans_rules[139][0] = from_set_l_r_i_to_set_l_r_i_t;
trans_rules[125][0] = from_move_to_i_mov_r_r;
trans_rules[136][0] = from_seh_to_seh_t;
trans_rules[76][0] = from_jump_r_c_to_jump_r_t;
trans_rules[88][0] = from_branch_neq_c_to_branch_neq_r_r_t;
trans_rules[93][0] = from_balc_to_call_t;
trans_rules[91][0] = from_branch_c_to_jump_t;
trans_rules[92][0] = from_branch_nez_c_to_branch_neq_r_r_t;
trans_rules[81][0] = from_branch_eqz_c_to_branch_eq_r_r_t;
trans_rules[90][0] = from_subu_r_r_to_sub_r_r_t;
trans_rules[99][0] = from_dsubu_r_r_to_sub_r_r_t;
trans_rules[89][0] = from_branch_gtz_c_to_branch_gtz_c_t;
trans_rules[86][0] = from_branch_ge_c_to_branch_ge_c_t;
trans_rules[87][0] = from_branch_geu_c_to_branch_geu_c_t;
trans_rules[80][0] = from_branch_gez_c_to_branch_ge_c_t;
trans_rules[85][0] = from_shift_ra_to_shift_ra_t;
trans_rules[83][0] = from_branch_lt_c_to_branch_lt_c_t;
trans_rules[84][0] = from_branch_ltu_c_to_branch_ltu_c_t;
trans_rules[79][0] = from_dsrl_to_shift_r_t;
trans_rules[106][0] = from_dsll_to_shift_l_t;
trans_rules[78][0] = from_branch_ltz_c_to_branch_lt_c_t;
trans_rules[94][0] = from_load_i_to_i_mov_i_r;
trans_rules[77][0] = from_teq_to_teq_t;
trans_rules[138][0] = from_set_l_r_r_u_to_set_l_r_r_t;
trans_rules[124][0] = from_muh_r_r_to_muh_r_r_t;
trans_rules[260][0] = from_sdc1_r_m_to_imovsd_r_m;
trans_rules[381][0] = from_cmp_neg_to_cmp_jmp;
trans_rules[261][0] = from_ldc1_r_m_to_imovsd_m_r;
trans_rules[263][0] = from_subd_r_r_to_subd_r_r_t;
trans_rules[266][0] = from_add_d_to_add_d_t;
trans_rules[264][0] = from_cvtdw_to_cvtdw_t;
trans_rules[269][0] = from_mtc1_to_mtc1_t;
trans_rules[270][0] = from_mfc1_to_mfc1_t;
trans_rules[271][0] = from_mfhc1_to_mfhc1_t;
trans_rules[272][0] = from_dmfc1_to_dmfc1_t;
trans_rules[274][0] = from_divd_to_divd_t;
trans_rules[275][0] = from_muld_to_muld_t;
trans_rules[276][0] = from_cmpconfmt_to_cmpconfmt_t;
trans_rules[267][0] = from_trunc_w_d_to_truncwd_t;
trans_rules[265][0] = from_cvtdl_to_cvtdl_t;
trans_rules[273][0] = from_dmtc1_to_dmtc1_t;
trans_rules[268][0] = from_mov_d_to_imovsd_r_r;
trans_rules[279][0] = from_absd_to_absd_t;


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
