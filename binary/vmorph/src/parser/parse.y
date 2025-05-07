
%{
        #include <stdio.h>
        #include <stdlib.h>
        #include <string.h>
        #include "tahr.h"
        #include "ag_utils.h"
        #include "ag_parser.h"
        extern int yylex();
        extern void yyerror(const char *s);
%}

%union{
  char *str;
}


%token<str> COMMA;
%token<str> DOT;
%token<str> SEMICOLON;
%token<str> COLON;
%token<str> O_SQUARE;
%token<str> C_SQUARE;
%token<str> O_BRACKET;
%token<str> C_BRACKET;
%token<str> O_CURLY;
%token<str> C_CURLY;
%token<str> DOLLAR;
%token<str> STAR;

%token<str> ADD;
%token<str> SUB;
%token<str> SUBU;
%token<str> ADDI;
%token<str> MUL;
%token<str> DIV;
%token<str> LD;
%token<str> LW;
%token<str> LH;
%token<str> LB;
%token<str> SD;
%token<str> SW;
%token<str> SH;
%token<str> SB;
%token<str> MFHI;
%token<str> MFLO;
%token<str> AND;
%token<str> ANDI;
%token<str> OR;
%token<str> ORI;
%token<str> XOR;
%token<str> NOR;
%token<str> SLT;
%token<str> SLTU;
%token<str> SLTI;
%token<str> SLL;
%token<str> SRL;
%token<str> BEQ;
%token<str> BNE;
%token<str> J;
%token<str> JR;
%token<str> JAL;
%token<str> SYSCALL;
%token<str> LA;
%token<str> ADDIU;
%token<str> MOVE;
%token<str> SEH;
%token<str> ADDU;
%token<str> NOP;
%token<str> DADD;
%token<str> DADDU;
%token<str> DADDI;
%token<str> DADDIU;
%token<str> LUI;
%token<str> DSLL;
%token<str> BALC;
%token<str> LI;
%token<str> BNEZC;
%token<str> BC;
%token<str> BNEC;
%token<str> BGTZC;
%token<str> BGEC;
%token<str> SRA;
%token<str> BLTC;
%token<str> BEQZC;
%token<str> DSRL;
%token<str> BLTZC;
%token<str> JRC;
%token<str> BGEZC;
%token<str> TEQ;
%token<str> DSUBU;
%token<str> MUH;
%token<str> BEQC;
%token<str> BLTUC;
%token<str> LBU;
%token<str> BGEUC;
%token<str> ADD_R_I;
%token<str> ADD_R_R;
%token<str> AND_R_I;
%token<str> AND_R_R;
%token<str> JMP;
%token<str> JE_R_I;
%token<str> JE_R_R;
%token<str> JLT_R_R;
%token<str> JLT_R_I;
%token<str> LOAD_R_R;
%token<str> LOAD_R_I;
%token<str> LTGT;
%token<str> NOT_R;
%token<str> NEG_R;
%token<str> SHL_R_I;
%token<str> SHR_R_I;
%token<str> SAR_R_I;
%token<str> STORE_R_R;
%token<str> XOR_R_I;
%token<str> XOR_R_R;
%token<str> V_JAL;
%token<str> RET;
%token<str> PUSH_R;
%token<str> PUSH_RET;
%token<str> POP_R;
%token<str> LEA_R_M;
%token<str> V_ARIT;
%token<str> LIBC;

%token<str> REG
%token<str> DTYPE
%token<str> DIRECTIVE
%token<str> NUM
%token<str> HEX
%token<str> LABEL
%token<str> GLOB
%token<str> LABG
%token<str> DVALUE
%token<str> VREG
%type<str> add_r_r;

%type<str> sub_r_r;

%type<str> subu_r_r;

%type<str> add_r_i;

%type<str> mul_r_r;

%type<str> div_r_r;

%type<str> load_dw;

%type<str> load_w;

%type<str> load_h;

%type<str> load_b;

%type<str> store_d;

%type<str> store_w;

%type<str> store_h;

%type<str> store_b;

%type<str> move_h;

%type<str> move_l;

%type<str> and_r_r;

%type<str> and_r_i;

%type<str> or_r_r;

%type<str> or_r_i;

%type<str> xor_r_r;

%type<str> nor_r_r;

%type<str> set_l_r_r;

%type<str> set_l_r_r_u;

%type<str> set_l_r_i;

%type<str> shift_l;

%type<str> shift_r;

%type<str> branch_eq_r_r;

%type<str> branch_neq_r_r;

%type<str> jump;

%type<str> jump_r;

%type<str> call;

%type<str> code_label;

%type<str> syscall;

%type<str> la_r_a;

%type<str> data;

%type<str> addu_r_i;

%type<str> move;

%type<str> seh;

%type<str> addu_r_r;

%type<str> nop;

%type<str> dadd_r_r;

%type<str> daddu_r_r;

%type<str> dadd_r_i;

%type<str> daddu_r_i;

%type<str> decl;

%type<str> lui_r_m;

%type<str> daddiu_r_m;

%type<str> dsll;

%type<str> balc;

%type<str> load_i;

%type<str> branch_nez_c;

%type<str> branch_com;

%type<str> branch_neq_c;

%type<str> branch_gtz_c;

%type<str> branch_ge_c;

%type<str> shift_r_arit;

%type<str> branch_lt_c;

%type<str> branch_eqz_c;

%type<str> dsrl;

%type<str> branch_ltz_c;

%type<str> jump_r_c;

%type<str> branch_gez_c;

%type<str> teq;

%type<str> dsubu_r_r;

%type<str> muh_r_r;

%type<str> or_r_i_hex;

%type<str> and_r_i_hex;

%type<str> load_dw_lab;

%type<str> load_w_lab;

%type<str> store_d_lab;

%type<str> store_w_lab;

%type<str> branch_eq_c;

%type<str> branch_ltu_c;

%type<str> load_b_u;

%type<str> branch_geu_c;

%type<str> vm_add_r_i;

%type<str> vm_add_r_r;

%type<str> vm_and_r_i;

%type<str> vm_and_r_r;

%type<str> vm_jmp;

%type<str> vm_je_r_i;

%type<str> vm_je_r_r;

%type<str> vm_jlt_r_r;

%type<str> vm_jlt_r_i;

%type<str> vm_load_r_r;

%type<str> vm_load_r_i;

%type<str> vm_ltgt;

%type<str> vm_not_r;

%type<str> vm_neg_r;

%type<str> vm_shl_r_i;

%type<str> vm_shr_r_i;

%type<str> vm_sar_r_i;

%type<str> vm_store_r_r;

%type<str> vm_xor_r_i;

%type<str> vm_xor_r_r;

%type<str> vm_call;

%type<str> vm_ret;

%type<str> vm_push_r;

%type<str> vm_push_ret;

%type<str> vm_pop_r;

%type<str> vm_lea_r_m;

%type<str> vm_v_arit;

%type<str> vm_libc;

%%
list_of_sym: 
	| list_of_sym symbol{
	void **temp = malloc(sizeof(void*) * MAX_RED_SYM);
int id;
retrieve(temp,&id);
if (id >= 6 && get_sym_id(temp[id - 6 + 0]) == 105&&get_sym_id(temp[id - 6 + 1]) == 104&&get_sym_id(temp[id - 6 + 2]) == 106&&get_sym_id(temp[id - 6 + 3]) == 104&&get_sym_id(temp[id - 6 + 4]) == 106&&get_sym_id(temp[id - 6 + 5]) == 104){
	if(!(from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_daddiu_r_m_to_load_label((lui_r_m_t *) temp[id - 6 + 0],(daddiu_r_m_t *) temp[id - 6 + 1],(dsll_t *) temp[id - 6 + 2],(daddiu_r_m_t *) temp[id - 6 + 3],(dsll_t *) temp[id - 6 + 4],(daddiu_r_m_t *) temp[id - 6 + 5]))){
	YYACCEPT;
}
goto end;
}

if (id >= 6 && get_sym_id(temp[id - 6 + 0]) == 105&&get_sym_id(temp[id - 6 + 1]) == 104&&get_sym_id(temp[id - 6 + 2]) == 106&&get_sym_id(temp[id - 6 + 3]) == 104&&get_sym_id(temp[id - 6 + 4]) == 106&&get_sym_id(temp[id - 6 + 5]) == 112){
	if(!(from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_load_dw_lab_to_load_data_label((lui_r_m_t *) temp[id - 6 + 0],(daddiu_r_m_t *) temp[id - 6 + 1],(dsll_t *) temp[id - 6 + 2],(daddiu_r_m_t *) temp[id - 6 + 3],(dsll_t *) temp[id - 6 + 4],(load_dw_lab_t *) temp[id - 6 + 5]))){
	YYACCEPT;
}
goto end;
}

if (id >= 6 && get_sym_id(temp[id - 6 + 0]) == 105&&get_sym_id(temp[id - 6 + 1]) == 104&&get_sym_id(temp[id - 6 + 2]) == 106&&get_sym_id(temp[id - 6 + 3]) == 104&&get_sym_id(temp[id - 6 + 4]) == 106&&get_sym_id(temp[id - 6 + 5]) == 114){
	if(!(from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_load_w_lab_to_load_data_label((lui_r_m_t *) temp[id - 6 + 0],(daddiu_r_m_t *) temp[id - 6 + 1],(dsll_t *) temp[id - 6 + 2],(daddiu_r_m_t *) temp[id - 6 + 3],(dsll_t *) temp[id - 6 + 4],(load_w_lab_t *) temp[id - 6 + 5]))){
	YYACCEPT;
}
goto end;
}

if (id >= 6 && get_sym_id(temp[id - 6 + 0]) == 105&&get_sym_id(temp[id - 6 + 1]) == 104&&get_sym_id(temp[id - 6 + 2]) == 106&&get_sym_id(temp[id - 6 + 3]) == 104&&get_sym_id(temp[id - 6 + 4]) == 106&&get_sym_id(temp[id - 6 + 5]) == 119){
	if(!(from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_store_d_lab_to_store_data_label((lui_r_m_t *) temp[id - 6 + 0],(daddiu_r_m_t *) temp[id - 6 + 1],(dsll_t *) temp[id - 6 + 2],(daddiu_r_m_t *) temp[id - 6 + 3],(dsll_t *) temp[id - 6 + 4],(store_d_lab_t *) temp[id - 6 + 5]))){
	YYACCEPT;
}
goto end;
}

if (id >= 6 && get_sym_id(temp[id - 6 + 0]) == 105&&get_sym_id(temp[id - 6 + 1]) == 104&&get_sym_id(temp[id - 6 + 2]) == 106&&get_sym_id(temp[id - 6 + 3]) == 104&&get_sym_id(temp[id - 6 + 4]) == 106&&get_sym_id(temp[id - 6 + 5]) == 121){
	if(!(from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_store_w_lab_to_store_data_label((lui_r_m_t *) temp[id - 6 + 0],(daddiu_r_m_t *) temp[id - 6 + 1],(dsll_t *) temp[id - 6 + 2],(daddiu_r_m_t *) temp[id - 6 + 3],(dsll_t *) temp[id - 6 + 4],(store_w_lab_t *) temp[id - 6 + 5]))){
	YYACCEPT;
}
goto end;
}


end:
free(temp);

};
symbol: jump_r_c
| teq
| branch_ltz_c
| dsrl
| branch_gez_c
| branch_eqz_c
| branch_eq_c
| branch_lt_c
| branch_ltu_c
| shift_r_arit
| branch_ge_c
| branch_geu_c
| branch_neq_c
| branch_gtz_c
| subu_r_r
| branch_com
| branch_nez_c
| balc
| load_i
| add_r_r
| dadd_r_r
| addu_r_r
| daddu_r_r
| dsubu_r_r
| la_r_a
| sub_r_r
| add_r_i
| dadd_r_i
| daddiu_r_m
| lui_r_m
| dsll
| addu_r_i
| daddu_r_i
| mul_r_r
| div_r_r
| load_dw
| load_dw_lab
| load_w
| load_w_lab
| load_h
| load_b
| load_b_u
| store_d
| store_d_lab
| store_w
| store_w_lab
| store_h
| store_b
| muh_r_r
| move
| move_h
| move_l
| and_r_r
| and_r_i
| and_r_i_hex
| or_r_r
| or_r_i
| or_r_i_hex
| xor_r_r
| nor_r_r
| seh
| set_l_r_r
| set_l_r_r_u
| set_l_r_i
| shift_l
| shift_r
| branch_eq_r_r
| branch_neq_r_r
| jump
| jump_r
| call
| syscall
| nop
| code_label
| decl
| data
| vm_add_r_r
| vm_add_r_i
| vm_and_r_i
| vm_and_r_r
| vm_jmp
| vm_je_r_i
| vm_je_r_r
| vm_jlt_r_i
| vm_jlt_r_r
| vm_load_r_r
| vm_load_r_i
| vm_ltgt
| vm_not_r
| vm_neg_r
| vm_shl_r_i
| vm_shr_r_i
| vm_sar_r_i
| vm_store_r_r
| vm_xor_r_i
| vm_xor_r_r
| vm_call
| vm_ret
| vm_push_r
| vm_push_ret
| vm_pop_r
| vm_lea_r_m
| vm_v_arit
| vm_libc

;

add_r_r: ADD REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	add_r_r_t *res = malloc(sizeof(add_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"add_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

sub_r_r: SUB REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	sub_r_r_t *res = malloc(sizeof(sub_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"sub_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

subu_r_r: SUBU REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	subu_r_r_t *res = malloc(sizeof(subu_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"subu_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

add_r_i: ADDI REG COMMA REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	add_r_i_t *res = malloc(sizeof(add_r_i_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"add_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

mul_r_r: MUL REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	mul_r_r_t *res = malloc(sizeof(mul_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"mul_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

div_r_r: DIV REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	div_r_r_t *res = malloc(sizeof(div_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"div_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

load_dw: LD REG COMMA NUM O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	load_dw_t *res = malloc(sizeof(load_dw_t));
res->dest = $2;
res->offset = strtol($4,NULL,10);
res->base = $6;

symbol_init(res,"load_dw",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

load_w: LW REG COMMA NUM O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	load_w_t *res = malloc(sizeof(load_w_t));
res->dest = $2;
res->offset = strtol($4,NULL,10);
res->base = $6;

symbol_init(res,"load_w",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

load_h: LH REG COMMA NUM O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	load_h_t *res = malloc(sizeof(load_h_t));
res->dest = $2;
res->offset = strtol($4,NULL,10);
res->base = $6;

symbol_init(res,"load_h",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

load_b: LB REG COMMA NUM O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	load_b_t *res = malloc(sizeof(load_b_t));
res->dest = $2;
res->offset = strtol($4,NULL,10);
res->base = $6;

symbol_init(res,"load_b",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

store_d: SD REG COMMA NUM O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	store_d_t *res = malloc(sizeof(store_d_t));
res->source = $2;
res->offset = strtol($4,NULL,10);
res->base = $6;

symbol_init(res,"store_d",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

store_w: SW REG COMMA NUM O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	store_w_t *res = malloc(sizeof(store_w_t));
res->source = $2;
res->offset = strtol($4,NULL,10);
res->base = $6;

symbol_init(res,"store_w",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

store_h: SH REG COMMA NUM O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	store_h_t *res = malloc(sizeof(store_h_t));
res->source = $2;
res->offset = strtol($4,NULL,10);
res->base = $6;

symbol_init(res,"store_h",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

store_b: SB REG COMMA NUM O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	store_b_t *res = malloc(sizeof(store_b_t));
res->source = $2;
res->offset = strtol($4,NULL,10);
res->base = $6;

symbol_init(res,"store_b",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

move_h: MFHI REG  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	move_h_t *res = malloc(sizeof(move_h_t));
res->dest = $2;

symbol_init(res,"move_h",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

move_l: MFLO REG  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	move_l_t *res = malloc(sizeof(move_l_t));
res->dest = $2;

symbol_init(res,"move_l",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

and_r_r: AND REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	and_r_r_t *res = malloc(sizeof(and_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"and_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

and_r_i: ANDI REG COMMA REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	and_r_i_t *res = malloc(sizeof(and_r_i_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"and_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

or_r_r: OR REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	or_r_r_t *res = malloc(sizeof(or_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"or_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

or_r_i: ORI REG COMMA REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	or_r_i_t *res = malloc(sizeof(or_r_i_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"or_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

xor_r_r: XOR REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	xor_r_r_t *res = malloc(sizeof(xor_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"xor_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

nor_r_r: NOR REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	nor_r_r_t *res = malloc(sizeof(nor_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"nor_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

set_l_r_r: SLT REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	set_l_r_r_t *res = malloc(sizeof(set_l_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"set_l_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

set_l_r_r_u: SLTU REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	set_l_r_r_u_t *res = malloc(sizeof(set_l_r_r_u_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"set_l_r_r_u",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

set_l_r_i: SLTI REG COMMA REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	set_l_r_i_t *res = malloc(sizeof(set_l_r_i_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"set_l_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

shift_l: SLL REG COMMA REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	shift_l_t *res = malloc(sizeof(shift_l_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"shift_l",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

shift_r: SRL REG COMMA REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	shift_r_t *res = malloc(sizeof(shift_r_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"shift_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_eq_r_r: BEQ REG COMMA REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	branch_eq_r_r_t *res = malloc(sizeof(branch_eq_r_r_t));
res->reg1 = $2;
res->reg2 = $4;
res->address = $6;

symbol_init(res,"branch_eq_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_neq_r_r: BNE REG COMMA REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	branch_neq_r_r_t *res = malloc(sizeof(branch_neq_r_r_t));
res->reg1 = $2;
res->reg2 = $4;
res->address = $6;

symbol_init(res,"branch_neq_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

jump: J LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	jump_t *res = malloc(sizeof(jump_t));
res->address = $2;

symbol_init(res,"jump",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

jump_r: JR REG  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	jump_r_t *res = malloc(sizeof(jump_r_t));
res->reg1 = $2;

symbol_init(res,"jump_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

call: JAL LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	call_t *res = malloc(sizeof(call_t));
res->address = $2;

symbol_init(res,"call",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

code_label: LABEL  {
	$$ = malloc(strlen($1) + 1);
	sprintf($$,"%s",$1);
	code_label_t *res = malloc(sizeof(code_label_t));
res->text = $1;

symbol_init(res,"code_label",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

syscall: SYSCALL  {
	$$ = malloc(strlen($1) + 1);
	sprintf($$,"%s",$1);
	syscall_t *res = malloc(sizeof(syscall_t));

symbol_init(res,"syscall",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

la_r_a: LA REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	la_r_a_t *res = malloc(sizeof(la_r_a_t));
res->reg1 = $2;
res->target = $4;

symbol_init(res,"la_r_a",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

data: LABEL DTYPE DVALUE  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3) + 1);
	sprintf($$,"%s%s%s",$1,$2,$3);
	data_t *res = malloc(sizeof(data_t));
res->name = $1;
res->type = $2;
res->val = $3;

symbol_init(res,"data",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

addu_r_i: ADDIU REG COMMA REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	addu_r_i_t *res = malloc(sizeof(addu_r_i_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"addu_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

move: MOVE REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	move_t *res = malloc(sizeof(move_t));
res->dest = $2;
res->src = $4;

symbol_init(res,"move",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

seh: SEH REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	seh_t *res = malloc(sizeof(seh_t));
res->dest = $2;
res->reg1 = $4;

symbol_init(res,"seh",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

addu_r_r: ADDU REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	addu_r_r_t *res = malloc(sizeof(addu_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"addu_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

nop: NOP  {
	$$ = malloc(strlen($1) + 1);
	sprintf($$,"%s",$1);
	nop_t *res = malloc(sizeof(nop_t));

symbol_init(res,"nop",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

dadd_r_r: DADD REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	dadd_r_r_t *res = malloc(sizeof(dadd_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"dadd_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

daddu_r_r: DADDU REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	daddu_r_r_t *res = malloc(sizeof(daddu_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"daddu_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

dadd_r_i: DADDI REG COMMA REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	dadd_r_i_t *res = malloc(sizeof(dadd_r_i_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"dadd_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

daddu_r_i: DADDIU REG COMMA REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	daddu_r_i_t *res = malloc(sizeof(daddu_r_i_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"daddu_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

decl: GLOB LABG  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	decl_t *res = malloc(sizeof(decl_t));
res->visibility = $1;
res->name = $2;

symbol_init(res,"decl",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

lui_r_m: LUI REG COMMA DIRECTIVE O_BRACKET LABEL C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	lui_r_m_t *res = malloc(sizeof(lui_r_m_t));
res->dest = $2;
res->dir = $4;
res->lab = $6;

symbol_init(res,"lui_r_m",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

daddiu_r_m: DADDIU REG COMMA REG COMMA DIRECTIVE O_BRACKET LABEL C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8)+strlen($9) + 1);
	sprintf($$,"%s%s%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7,$8,$9);
	daddiu_r_m_t *res = malloc(sizeof(daddiu_r_m_t));
res->dest = $2;
res->reg1 = $4;
res->dir = $6;
res->lab = $8;

symbol_init(res,"daddiu_r_m",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

dsll: DSLL REG COMMA REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	dsll_t *res = malloc(sizeof(dsll_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"dsll",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

balc: BALC LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	balc_t *res = malloc(sizeof(balc_t));
res->target = $2;

symbol_init(res,"balc",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

load_i: LI REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	load_i_t *res = malloc(sizeof(load_i_t));
res->dest = $2;
res->imm = strtol($4,NULL,10);

symbol_init(res,"load_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_nez_c: BNEZC REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	branch_nez_c_t *res = malloc(sizeof(branch_nez_c_t));
res->reg1 = $2;
res->target = $4;

symbol_init(res,"branch_nez_c",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_com: BC LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	branch_c_t *res = malloc(sizeof(branch_c_t));
res->target = $2;

symbol_init(res,"branch_c",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_neq_c: BNEC REG COMMA REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	branch_neq_c_t *res = malloc(sizeof(branch_neq_c_t));
res->reg1 = $2;
res->reg2 = $4;
res->target = $6;

symbol_init(res,"branch_neq_c",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_gtz_c: BGTZC REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	branch_gtz_c_t *res = malloc(sizeof(branch_gtz_c_t));
res->reg1 = $2;
res->target = $4;

symbol_init(res,"branch_gtz_c",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_ge_c: BGEC REG COMMA REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	branch_ge_c_t *res = malloc(sizeof(branch_ge_c_t));
res->reg1 = $2;
res->reg2 = $4;
res->target = $6;

symbol_init(res,"branch_ge_c",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

shift_r_arit: SRA REG COMMA REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	shift_ra_t *res = malloc(sizeof(shift_ra_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"shift_ra",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_lt_c: BLTC REG COMMA REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	branch_lt_c_t *res = malloc(sizeof(branch_lt_c_t));
res->reg1 = $2;
res->reg2 = $4;
res->target = $6;

symbol_init(res,"branch_lt_c",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_eqz_c: BEQZC REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	branch_eqz_c_t *res = malloc(sizeof(branch_eqz_c_t));
res->reg1 = $2;
res->target = $4;

symbol_init(res,"branch_eqz_c",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

dsrl: DSRL REG COMMA REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	dsrl_t *res = malloc(sizeof(dsrl_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"dsrl",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_ltz_c: BLTZC REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	branch_ltz_c_t *res = malloc(sizeof(branch_ltz_c_t));
res->reg1 = $2;
res->target = $4;

symbol_init(res,"branch_ltz_c",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

jump_r_c: JRC REG  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	jump_r_c_t *res = malloc(sizeof(jump_r_c_t));
res->reg1 = $2;

symbol_init(res,"jump_r_c",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_gez_c: BGEZC REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	branch_gez_c_t *res = malloc(sizeof(branch_gez_c_t));
res->reg1 = $2;
res->target = $4;

symbol_init(res,"branch_gez_c",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

teq: TEQ REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	teq_t *res = malloc(sizeof(teq_t));
res->reg1 = $2;
res->reg2 = $4;

symbol_init(res,"teq",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

dsubu_r_r: DSUBU REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	dsubu_r_r_t *res = malloc(sizeof(dsubu_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"dsubu_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

muh_r_r: MUH REG COMMA REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	muh_r_r_t *res = malloc(sizeof(muh_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"muh_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

or_r_i_hex: ORI REG COMMA REG COMMA HEX  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	or_r_i_hex_t *res = malloc(sizeof(or_r_i_hex_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"or_r_i_hex",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

and_r_i_hex: ANDI REG COMMA REG COMMA HEX  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	and_r_i_hex_t *res = malloc(sizeof(and_r_i_hex_t));
res->dest = $2;
res->reg1 = $4;
res->imm = strtol($6,NULL,10);

symbol_init(res,"and_r_i_hex",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

load_dw_lab: LD REG COMMA DIRECTIVE O_BRACKET LABEL C_BRACKET O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8)+strlen($9)+strlen($10) + 1);
	sprintf($$,"%s%s%s%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7,$8,$9,$10);
	load_dw_lab_t *res = malloc(sizeof(load_dw_lab_t));
res->dest = $2;
res->dir = $4;
res->lab = $6;
res->base = $9;

symbol_init(res,"load_dw_lab",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

load_w_lab: LW REG COMMA DIRECTIVE O_BRACKET LABEL C_BRACKET O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8)+strlen($9)+strlen($10) + 1);
	sprintf($$,"%s%s%s%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7,$8,$9,$10);
	load_w_lab_t *res = malloc(sizeof(load_w_lab_t));
res->dest = $2;
res->dir = $4;
res->lab = $6;
res->base = $9;

symbol_init(res,"load_w_lab",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

store_d_lab: SD REG COMMA DIRECTIVE O_BRACKET LABEL C_BRACKET O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8)+strlen($9)+strlen($10) + 1);
	sprintf($$,"%s%s%s%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7,$8,$9,$10);
	store_d_lab_t *res = malloc(sizeof(store_d_lab_t));
res->src = $2;
res->dir = $4;
res->lab = $6;
res->base = $9;

symbol_init(res,"store_d_lab",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

store_w_lab: SW REG COMMA DIRECTIVE O_BRACKET LABEL C_BRACKET O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8)+strlen($9)+strlen($10) + 1);
	sprintf($$,"%s%s%s%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7,$8,$9,$10);
	store_w_lab_t *res = malloc(sizeof(store_w_lab_t));
res->src = $2;
res->dir = $4;
res->lab = $6;
res->base = $9;

symbol_init(res,"store_w_lab",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_eq_c: BEQC REG COMMA REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	branch_eq_c_t *res = malloc(sizeof(branch_eq_c_t));
res->reg1 = $2;
res->reg2 = $4;
res->target = $6;

symbol_init(res,"branch_eq_c",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_ltu_c: BLTUC REG COMMA REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	branch_ltu_c_t *res = malloc(sizeof(branch_ltu_c_t));
res->reg1 = $2;
res->reg2 = $4;
res->target = $6;

symbol_init(res,"branch_ltu_c",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

load_b_u: LBU REG COMMA NUM O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	load_b_u_t *res = malloc(sizeof(load_b_u_t));
res->dest = $2;
res->offset = strtol($4,NULL,10);
res->base = $6;

symbol_init(res,"load_b_u",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

branch_geu_c: BGEUC REG COMMA REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	branch_geu_c_t *res = malloc(sizeof(branch_geu_c_t));
res->reg1 = $2;
res->reg2 = $4;
res->target = $6;

symbol_init(res,"branch_geu_c",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_add_r_i: ADD_R_I REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_add_r_i_t *res = malloc(sizeof(vm_add_r_i_t));
res->reg1 = $2;
res->imm = strtol($4,NULL,10);

symbol_init(res,"vm_add_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_add_r_r: ADD_R_R REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_add_r_r_t *res = malloc(sizeof(vm_add_r_r_t));
res->reg1 = $2;
res->reg2 = $4;

symbol_init(res,"vm_add_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_and_r_i: AND_R_I REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_and_r_i_t *res = malloc(sizeof(vm_and_r_i_t));
res->reg1 = $2;
res->imm = strtol($4,NULL,10);

symbol_init(res,"vm_and_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_and_r_r: AND_R_R REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_and_r_r_t *res = malloc(sizeof(vm_and_r_r_t));
res->reg1 = $2;
res->reg2 = $4;

symbol_init(res,"vm_and_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_jmp: JMP  {
	$$ = malloc(strlen($1) + 1);
	sprintf($$,"%s",$1);
	vm_jmp_t *res = malloc(sizeof(vm_jmp_t));

symbol_init(res,"vm_jmp",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_je_r_i: JE_R_I REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_je_r_i_t *res = malloc(sizeof(vm_je_r_i_t));
res->reg1 = $2;
res->imm = strtol($4,NULL,10);

symbol_init(res,"vm_je_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_je_r_r: JE_R_R REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_je_r_r_t *res = malloc(sizeof(vm_je_r_r_t));
res->reg1 = $2;
res->reg2 = $4;

symbol_init(res,"vm_je_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_jlt_r_r: JLT_R_R REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_jlt_r_r_t *res = malloc(sizeof(vm_jlt_r_r_t));
res->reg1 = $2;
res->reg2 = $4;

symbol_init(res,"vm_jlt_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_jlt_r_i: JLT_R_I REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_jlt_r_i_t *res = malloc(sizeof(vm_jlt_r_i_t));
res->reg1 = $2;
res->imm = strtol($4,NULL,10);

symbol_init(res,"vm_jlt_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_load_r_r: LOAD_R_R REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_load_r_r_t *res = malloc(sizeof(vm_load_r_r_t));
res->reg1 = $2;
res->reg2 = $4;

symbol_init(res,"vm_load_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_load_r_i: LOAD_R_I REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_load_r_i_t *res = malloc(sizeof(vm_load_r_i_t));
res->reg1 = $2;
res->imm = strtol($4,NULL,10);

symbol_init(res,"vm_load_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_ltgt: LTGT LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	vm_ltgt_t *res = malloc(sizeof(vm_ltgt_t));
res->address = $2;

symbol_init(res,"vm_ltgt",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_not_r: NOT_R REG  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	vm_not_r_t *res = malloc(sizeof(vm_not_r_t));
res->reg1 = $2;

symbol_init(res,"vm_not_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_neg_r: NEG_R REG  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	vm_neg_r_t *res = malloc(sizeof(vm_neg_r_t));
res->reg1 = $2;

symbol_init(res,"vm_neg_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_shl_r_i: SHL_R_I REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_shl_r_i_t *res = malloc(sizeof(vm_shl_r_i_t));
res->reg1 = $2;
res->imm = strtol($4,NULL,10);

symbol_init(res,"vm_shl_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_shr_r_i: SHR_R_I REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_shr_r_i_t *res = malloc(sizeof(vm_shr_r_i_t));
res->reg1 = $2;
res->imm = strtol($4,NULL,10);

symbol_init(res,"vm_shr_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_sar_r_i: SAR_R_I REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_sar_r_i_t *res = malloc(sizeof(vm_sar_r_i_t));
res->reg1 = $2;
res->imm = strtol($4,NULL,10);

symbol_init(res,"vm_sar_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_store_r_r: STORE_R_R REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_store_r_r_t *res = malloc(sizeof(vm_store_r_r_t));
res->reg1 = $2;
res->reg2 = $4;

symbol_init(res,"vm_store_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_xor_r_i: XOR_R_I REG COMMA NUM  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_xor_r_i_t *res = malloc(sizeof(vm_xor_r_i_t));
res->reg1 = $2;
res->imm = strtol($4,NULL,10);

symbol_init(res,"vm_xor_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_xor_r_r: XOR_R_R REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_xor_r_r_t *res = malloc(sizeof(vm_xor_r_r_t));
res->reg1 = $2;
res->reg2 = $4;

symbol_init(res,"vm_xor_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_call: V_JAL  {
	$$ = malloc(strlen($1) + 1);
	sprintf($$,"%s",$1);
	vm_call_t *res = malloc(sizeof(vm_call_t));

symbol_init(res,"vm_call",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_ret: RET  {
	$$ = malloc(strlen($1) + 1);
	sprintf($$,"%s",$1);
	vm_ret_t *res = malloc(sizeof(vm_ret_t));

symbol_init(res,"vm_ret",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_push_r: PUSH_R REG  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	vm_push_r_t *res = malloc(sizeof(vm_push_r_t));
res->reg1 = $2;

symbol_init(res,"vm_push_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_push_ret: PUSH_RET  {
	$$ = malloc(strlen($1) + 1);
	sprintf($$,"%s",$1);
	vm_push_ret_t *res = malloc(sizeof(vm_push_ret_t));

symbol_init(res,"vm_push_ret",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_pop_r: POP_R REG  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	vm_pop_r_t *res = malloc(sizeof(vm_pop_r_t));
res->reg1 = $2;

symbol_init(res,"vm_pop_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_lea_r_m: LEA_R_M REG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_lea_r_m_t *res = malloc(sizeof(vm_lea_r_m_t));
res->reg1 = $2;
res->target = $4;

symbol_init(res,"vm_lea_r_m",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_v_arit: V_ARIT NUM COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	vm_v_arit_t *res = malloc(sizeof(vm_v_arit_t));
res->imm = strtol($2,NULL,10);
res->reg1 = $4;

symbol_init(res,"vm_v_arit",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

vm_libc: LIBC  {
	$$ = malloc(strlen($1) + 1);
	sprintf($$,"%s",$1);
	vm_libc_t *res = malloc(sizeof(vm_libc_t));

symbol_init(res,"vm_libc",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

%%