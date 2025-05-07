
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
%token<str> CALL;
%token<str> CMP;
%token<str> JL;
%token<str> JBE;
%token<str> JG;
%token<str> JGE;
%token<str> JMP;
%token<str> LEA;
%token<str> MOV;
%token<str> NEG;
%token<str> NOT;
%token<str> SAR;
%token<str> SAL;
%token<str> SHL;
%token<str> SHR;
%token<str> JZ;
%token<str> JNZ;
%token<str> PUSH;
%token<str> POP;
%token<str> JP;
%token<str> JNP;
%token<str> RET;
%token<str> UD2;
%token<str> JB;
%token<str> JAE;
%token<str> SDC1;
%token<str> LDC1;
%token<str> SUBDOTD;
%token<str> CVTDOTDDOTW;
%token<str> CVTDOTDDOTL;
%token<str> MTC1;
%token<str> MFC1;
%token<str> MFHC1;
%token<str> DIVDOTD;
%token<str> MULDOTD;
%token<str> CMPDOT;
%token<str> BC1EQZ;
%token<str> BC1NEZ;
%token<str> DMFC1;
%token<str> TRUNCDOTWDOTD;
%token<str> ADDDOTD;
%token<str> DMTC1;
%token<str> MOVDOTD;
%token<str> ABSDOTD;
%token<str> MOVSD;
%token<str> SUBSD;
%token<str> CVTSI2SD;
%token<str> MOVD;
%token<str> DIVSD;
%token<str> MULSD;
%token<str> UCOMISS;
%token<str> COMISS;
%token<str> UCOMISD;
%token<str> COMISD;
%token<str> CVTTSD2SI;
%token<str> MOVAPD;
%token<str> ADDSD;
%token<str> ANDPD;

%token<str> REG
%token<str> DTYPE
%token<str> DIRECTIVE
%token<str> NUM
%token<str> HEX
%token<str> LABEL
%token<str> GLOB
%token<str> LABG
%token<str> DVALUE
%token<str> IREG
%token<str> SUF
%token<str> FPREG
%token<str> CONDN
%token<str> FMTSUF
%token<str> IFPREG
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

%type<str> i_add_r_r;

%type<str> i_add_i_r;

%type<str> i_and_r_r;

%type<str> i_and_i_r;

%type<str> i_call;

%type<str> i_call_r;

%type<str> i_cmp_r_r;

%type<str> i_cmp_r_i;

%type<str> i_div_r;

%type<str> i_jb;

%type<str> i_jbe;

%type<str> i_ja;

%type<str> i_jae;

%type<str> i_jmp;

%type<str> i_jmp_r;

%type<str> i_lea_m_r;

%type<str> i_mov_r_r;

%type<str> i_mov_m_r;

%type<str> i_mov_r_m;

%type<str> i_mul_r;

%type<str> i_neg_r;

%type<str> i_not_r;

%type<str> i_or_r_r;

%type<str> i_sar_i_r;

%type<str> i_sal_i_r;

%type<str> i_shl_i_r;

%type<str> i_shr_i_r;

%type<str> i_sub_r_r;

%type<str> i_jz;

%type<str> i_jnz;

%type<str> i_mov_i_r;

%type<str> i_push_r;

%type<str> i_pop_r;

%type<str> i_jp;

%type<str> i_jnp;

%type<str> i_ret;

%type<str> i_ud2;

%type<str> i_xor_r_r;

%type<str> i_or_i_r;

%type<str> i_mov_r_m_lab;

%type<str> i_mov_m_r_lab;

%type<str> i_jbu;

%type<str> i_jae_u;

%type<str> sdc1;

%type<str> ldc1;

%type<str> subd;

%type<str> cvtdw;

%type<str> cvtdl;

%type<str> mtc1;

%type<str> mfc1;

%type<str> mfhc1;

%type<str> divd;

%type<str> muld;

%type<str> cmpconfmt;

%type<str> bc1eqz;

%type<str> bc1nez;

%type<str> dmfc1;

%type<str> ldc1_m;

%type<str> trunc_w_d;

%type<str> addd;

%type<str> dmtc1;

%type<str> movd;

%type<str> absd;

%type<str> imovsd_r_m;

%type<str> imovsd_m_r;

%type<str> isubsd_r_r;

%type<str> icvtsi2sd_r_r;

%type<str> imovd_f_r;

%type<str> imovd_r_f;

%type<str> idivsd_r_r;

%type<str> imulsd_r_r;

%type<str> iucomiss;

%type<str> icomiss;

%type<str> iucomisd;

%type<str> icomisd;

%type<str> icvttsd2si;

%type<str> imovapd_r_r;

%type<str> iaddsd_r_r;

%type<str> imovsd_lab_r;

%type<str> imovsd_r_r;

%type<str> andpd_m;

%%
list_of_sym: 
	| list_of_sym symbol{
	void **temp = malloc(sizeof(void*) * MAX_RED_SYM);
int id;
retrieve(temp,&id);
if (id >= 6 && get_sym_id(temp[id - 6 + 0]) == 105&&get_sym_id(temp[id - 6 + 1]) == 104&&get_sym_id(temp[id - 6 + 2]) == 106&&get_sym_id(temp[id - 6 + 3]) == 104&&get_sym_id(temp[id - 6 + 4]) == 106&&get_sym_id(temp[id - 6 + 5]) == 104){
	if(!(from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_daddiu_r_m_to_lea_label((lui_r_m_t *) temp[id - 6 + 0],(daddiu_r_m_t *) temp[id - 6 + 1],(dsll_t *) temp[id - 6 + 2],(daddiu_r_m_t *) temp[id - 6 + 3],(dsll_t *) temp[id - 6 + 4],(daddiu_r_m_t *) temp[id - 6 + 5]))){
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

if (id >= 6 && get_sym_id(temp[id - 6 + 0]) == 105&&get_sym_id(temp[id - 6 + 1]) == 104&&get_sym_id(temp[id - 6 + 2]) == 106&&get_sym_id(temp[id - 6 + 3]) == 104&&get_sym_id(temp[id - 6 + 4]) == 106&&get_sym_id(temp[id - 6 + 5]) == 262){
	if(!(from_lui_r_m_daddiu_r_m_dsll_daddiu_r_m_dsll_ldc1_r_m_d_to_imovsd_lab_r((lui_r_m_t *) temp[id - 6 + 0],(daddiu_r_m_t *) temp[id - 6 + 1],(dsll_t *) temp[id - 6 + 2],(daddiu_r_m_t *) temp[id - 6 + 3],(dsll_t *) temp[id - 6 + 4],(ldc1_r_m_d_t *) temp[id - 6 + 5]))){
	YYACCEPT;
}
goto end;
}

if (id >= 2 && get_sym_id(temp[id - 2 + 0]) == 276&&get_sym_id(temp[id - 2 + 1]) == 278){
	if(!(from_cmpconfmt_bc1nez_to_cmp_neg((cmpconfmt_t *) temp[id - 2 + 0],(bc1nez_t *) temp[id - 2 + 1]))){
	YYACCEPT;
}
goto end;
}

if (id >= 2 && get_sym_id(temp[id - 2 + 0]) == 276&&get_sym_id(temp[id - 2 + 1]) == 277){
	if(!(from_cmpconfmt_bc1eqz_to_cmp_jmp((cmpconfmt_t *) temp[id - 2 + 0],(bc1eqz_t *) temp[id - 2 + 1]))){
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
| i_ret
| i_ud2
| i_push_r
| i_pop_r
| i_add_r_r
| i_sub_r_r
| i_add_i_r
| i_and_r_r
| i_and_i_r
| i_call
| i_call_r
| i_cmp_r_r
| i_cmp_r_i
| i_div_r
| i_jb
| i_jbu
| i_jbe
| i_ja
| i_jz
| i_jp
| i_jnp
| i_jnz
| i_jae
| i_jae_u
| i_jmp
| i_jmp_r
| i_lea_m_r
| i_mov_i_r
| i_mov_r_r
| i_mov_m_r
| i_mov_m_r_lab
| i_mov_r_m
| i_mov_r_m_lab
| i_mul_r
| i_neg_r
| i_not_r
| i_or_r_r
| i_or_i_r
| i_xor_r_r
| i_sar_i_r
| i_sal_i_r
| i_shl_i_r
| i_shr_i_r
| sdc1
| ldc1
| ldc1_m
| subd
| cvtdw
| cvtdl
| addd
| trunc_w_d
| movd
| mtc1
| mfc1
| mfhc1
| dmfc1
| dmtc1
| divd
| muld
| cmpconfmt
| bc1eqz
| bc1nez
| absd
| imovsd_r_m
| imovsd_r_r
| andpd_m
| imovsd_m_r
| imovsd_lab_r
| imovapd_r_r
| iaddsd_r_r
| isubsd_r_r
| icvtsi2sd_r_r
| icvttsd2si
| imovd_f_r
| imovd_r_f
| idivsd_r_r
| imulsd_r_r
| iucomiss
| icomiss
| iucomisd
| icomisd

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

i_add_r_r: ADD SUF IREG COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5) + 1);
	sprintf($$,"%s%s%s%s%s",$1,$2,$3,$4,$5);
	i_add_r_r_t *res = malloc(sizeof(i_add_r_r_t));
res->suffix = $2;
res->reg1 = $3;
res->dest = $5;

symbol_init(res,"i_add_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_add_i_r: ADD SUF DOLLAR NUM COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	i_add_i_r_t *res = malloc(sizeof(i_add_i_r_t));
res->suffix = $2;
res->imm = strtol($4,NULL,10);
res->dest = $6;

symbol_init(res,"i_add_i_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_and_r_r: AND SUF IREG COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5) + 1);
	sprintf($$,"%s%s%s%s%s",$1,$2,$3,$4,$5);
	i_and_r_r_t *res = malloc(sizeof(i_and_r_r_t));
res->suffix = $2;
res->reg1 = $3;
res->dest = $5;

symbol_init(res,"i_and_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_and_i_r: AND SUF DOLLAR NUM COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	i_and_i_r_t *res = malloc(sizeof(i_and_i_r_t));
res->suffix = $2;
res->imm = strtol($4,NULL,10);
res->dest = $6;

symbol_init(res,"i_and_i_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_call: CALL LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	i_call_t *res = malloc(sizeof(i_call_t));
res->text = $2;

symbol_init(res,"i_call",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_call_r: CALL SUF IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3) + 1);
	sprintf($$,"%s%s%s",$1,$2,$3);
	i_call_r_t *res = malloc(sizeof(i_call_r_t));
res->suffix = $2;
res->reg1 = $3;

symbol_init(res,"i_call_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_cmp_r_r: CMP SUF IREG COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5) + 1);
	sprintf($$,"%s%s%s%s%s",$1,$2,$3,$4,$5);
	i_cmp_r_r_t *res = malloc(sizeof(i_cmp_r_r_t));
res->suffix = $2;
res->reg1 = $3;
res->reg2 = $5;

symbol_init(res,"i_cmp_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_cmp_r_i: CMP SUF DOLLAR NUM COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	i_cmp_r_i_t *res = malloc(sizeof(i_cmp_r_i_t));
res->suffix = $2;
res->imm = strtol($4,NULL,10);
res->reg1 = $6;

symbol_init(res,"i_cmp_r_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_div_r: DIV SUF IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3) + 1);
	sprintf($$,"%s%s%s",$1,$2,$3);
	i_div_r_t *res = malloc(sizeof(i_div_r_t));
res->suffix = $2;
res->reg1 = $3;

symbol_init(res,"i_div_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_jb: JL LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	i_jb_t *res = malloc(sizeof(i_jb_t));
res->text = $2;

symbol_init(res,"i_jb",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_jbe: JBE LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	i_jbe_t *res = malloc(sizeof(i_jbe_t));
res->text = $2;

symbol_init(res,"i_jbe",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_ja: JG LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	i_ja_t *res = malloc(sizeof(i_ja_t));
res->text = $2;

symbol_init(res,"i_ja",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_jae: JGE LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	i_jae_t *res = malloc(sizeof(i_jae_t));
res->text = $2;

symbol_init(res,"i_jae",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_jmp: JMP LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	i_jmp_t *res = malloc(sizeof(i_jmp_t));
res->text = $2;

symbol_init(res,"i_jmp",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_jmp_r: JMP SUF STAR IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	i_jmp_r_t *res = malloc(sizeof(i_jmp_r_t));
res->suffix = $2;
res->reg1 = $4;

symbol_init(res,"i_jmp_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_lea_m_r: LEA SUF LABEL O_BRACKET IREG C_BRACKET COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8) + 1);
	sprintf($$,"%s%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7,$8);
	i_lea_m_r_t *res = malloc(sizeof(i_lea_m_r_t));
res->suffix = $2;
res->offset = $3;
res->base = $5;
res->dest = $8;

symbol_init(res,"i_lea_m_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_mov_r_r: MOV SUF IREG COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5) + 1);
	sprintf($$,"%s%s%s%s%s",$1,$2,$3,$4,$5);
	i_mov_r_r_t *res = malloc(sizeof(i_mov_r_r_t));
res->suffix = $2;
res->reg1 = $3;
res->dest = $5;

symbol_init(res,"i_mov_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_mov_m_r: MOV SUF NUM O_BRACKET IREG C_BRACKET COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8) + 1);
	sprintf($$,"%s%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7,$8);
	i_mov_m_r_t *res = malloc(sizeof(i_mov_m_r_t));
res->suffix = $2;
res->offset = strtol($3,NULL,10);
res->base = $5;
res->dest = $8;

symbol_init(res,"i_mov_m_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_mov_r_m: MOV SUF IREG COMMA NUM O_BRACKET IREG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8) + 1);
	sprintf($$,"%s%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7,$8);
	i_mov_r_m_t *res = malloc(sizeof(i_mov_r_m_t));
res->suffix = $2;
res->src = $3;
res->offset = strtol($5,NULL,10);
res->base = $7;

symbol_init(res,"i_mov_r_m",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_mul_r: MUL SUF IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3) + 1);
	sprintf($$,"%s%s%s",$1,$2,$3);
	i_mul_r_t *res = malloc(sizeof(i_mul_r_t));
res->suffix = $2;
res->reg1 = $3;

symbol_init(res,"i_mul_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_neg_r: NEG SUF IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3) + 1);
	sprintf($$,"%s%s%s",$1,$2,$3);
	i_neg_r_t *res = malloc(sizeof(i_neg_r_t));
res->suffix = $2;
res->reg1 = $3;

symbol_init(res,"i_neg_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_not_r: NOT SUF IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3) + 1);
	sprintf($$,"%s%s%s",$1,$2,$3);
	i_not_r_t *res = malloc(sizeof(i_not_r_t));
res->suffix = $2;
res->reg1 = $3;

symbol_init(res,"i_not_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_or_r_r: OR SUF IREG COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5) + 1);
	sprintf($$,"%s%s%s%s%s",$1,$2,$3,$4,$5);
	i_or_r_r_t *res = malloc(sizeof(i_or_r_r_t));
res->suffix = $2;
res->reg1 = $3;
res->dest = $5;

symbol_init(res,"i_or_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_sar_i_r: SAR SUF DOLLAR NUM COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	i_sar_i_r_t *res = malloc(sizeof(i_sar_i_r_t));
res->suffix = $2;
res->imm = strtol($4,NULL,10);
res->reg1 = $6;

symbol_init(res,"i_sar_i_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_sal_i_r: SAL SUF DOLLAR NUM COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	i_sal_i_r_t *res = malloc(sizeof(i_sal_i_r_t));
res->suffix = $2;
res->imm = strtol($4,NULL,10);
res->reg1 = $6;

symbol_init(res,"i_sal_i_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_shl_i_r: SHL SUF DOLLAR NUM COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	i_shl_i_r_t *res = malloc(sizeof(i_shl_i_r_t));
res->suffix = $2;
res->imm = strtol($4,NULL,10);
res->reg1 = $6;

symbol_init(res,"i_shl_i_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_shr_i_r: SHR SUF DOLLAR NUM COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	i_shr_i_r_t *res = malloc(sizeof(i_shr_i_r_t));
res->suffix = $2;
res->imm = strtol($4,NULL,10);
res->reg1 = $6;

symbol_init(res,"i_shr_i_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_sub_r_r: SUB SUF IREG COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5) + 1);
	sprintf($$,"%s%s%s%s%s",$1,$2,$3,$4,$5);
	i_sub_r_r_t *res = malloc(sizeof(i_sub_r_r_t));
res->suffix = $2;
res->reg1 = $3;
res->dest = $5;

symbol_init(res,"i_sub_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_jz: JZ LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	i_jz_t *res = malloc(sizeof(i_jz_t));
res->text = $2;

symbol_init(res,"i_jz",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_jnz: JNZ LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	i_jnz_t *res = malloc(sizeof(i_jnz_t));
res->text = $2;

symbol_init(res,"i_jnz",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_mov_i_r: MOV SUF DOLLAR NUM COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	i_mov_i_r_t *res = malloc(sizeof(i_mov_i_r_t));
res->suffix = $2;
res->imm = strtol($4,NULL,10);
res->dest = $6;

symbol_init(res,"i_mov_i_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_push_r: PUSH SUF IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3) + 1);
	sprintf($$,"%s%s%s",$1,$2,$3);
	i_push_r_t *res = malloc(sizeof(i_push_r_t));
res->suffix = $2;
res->reg1 = $3;

symbol_init(res,"i_push_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_pop_r: POP SUF IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3) + 1);
	sprintf($$,"%s%s%s",$1,$2,$3);
	i_pop_r_t *res = malloc(sizeof(i_pop_r_t));
res->suffix = $2;
res->reg1 = $3;

symbol_init(res,"i_pop_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_jp: JP LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	i_jp_t *res = malloc(sizeof(i_jp_t));
res->text = $2;

symbol_init(res,"i_jp",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_jnp: JNP LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	i_jnp_t *res = malloc(sizeof(i_jnp_t));
res->text = $2;

symbol_init(res,"i_jnp",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_ret: RET  {
	$$ = malloc(strlen($1) + 1);
	sprintf($$,"%s",$1);
	i_ret_t *res = malloc(sizeof(i_ret_t));

symbol_init(res,"i_ret",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_ud2: UD2  {
	$$ = malloc(strlen($1) + 1);
	sprintf($$,"%s",$1);
	i_ud2_t *res = malloc(sizeof(i_ud2_t));

symbol_init(res,"i_ud2",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_xor_r_r: XOR SUF IREG COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5) + 1);
	sprintf($$,"%s%s%s%s%s",$1,$2,$3,$4,$5);
	i_xor_r_r_t *res = malloc(sizeof(i_xor_r_r_t));
res->suffix = $2;
res->reg1 = $3;
res->dest = $5;

symbol_init(res,"i_xor_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_or_i_r: OR SUF DOLLAR NUM COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	i_or_i_r_t *res = malloc(sizeof(i_or_i_r_t));
res->suffix = $2;
res->imm = strtol($4,NULL,10);
res->dest = $6;

symbol_init(res,"i_or_i_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_mov_r_m_lab: MOV SUF IREG COMMA LABEL O_BRACKET IREG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8) + 1);
	sprintf($$,"%s%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7,$8);
	i_mov_r_m_lab_t *res = malloc(sizeof(i_mov_r_m_lab_t));
res->suffix = $2;
res->src = $3;
res->lab = $5;
res->base = $7;

symbol_init(res,"i_mov_r_m_lab",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_mov_m_r_lab: MOV SUF LABEL O_BRACKET IREG C_BRACKET COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8) + 1);
	sprintf($$,"%s%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7,$8);
	i_mov_m_r_lab_t *res = malloc(sizeof(i_mov_m_r_lab_t));
res->suffix = $2;
res->lab = $3;
res->base = $5;
res->dest = $8;

symbol_init(res,"i_mov_m_r_lab",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_jbu: JB LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	i_jbu_t *res = malloc(sizeof(i_jbu_t));
res->text = $2;

symbol_init(res,"i_jbu",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

i_jae_u: JAE LABEL  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	i_jae_u_t *res = malloc(sizeof(i_jae_u_t));
res->text = $2;

symbol_init(res,"i_jae_u",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

sdc1: SDC1 FPREG COMMA NUM O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	sdc1_r_m_t *res = malloc(sizeof(sdc1_r_m_t));
res->src = $2;
res->offset = strtol($4,NULL,10);
res->base = $6;

symbol_init(res,"sdc1_r_m",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

ldc1: LDC1 FPREG COMMA NUM O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	ldc1_r_m_t *res = malloc(sizeof(ldc1_r_m_t));
res->dest = $2;
res->offset = strtol($4,NULL,10);
res->base = $6;

symbol_init(res,"ldc1_r_m",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

subd: SUBDOTD FPREG COMMA FPREG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	subd_r_r_t *res = malloc(sizeof(subd_r_r_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"subd_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

cvtdw: CVTDOTDDOTW FPREG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	cvtdw_t *res = malloc(sizeof(cvtdw_t));
res->dest = $2;
res->src = $4;

symbol_init(res,"cvtdw",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

cvtdl: CVTDOTDDOTL FPREG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	cvtdl_t *res = malloc(sizeof(cvtdl_t));
res->dest = $2;
res->src = $4;

symbol_init(res,"cvtdl",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

mtc1: MTC1 REG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	mtc1_t *res = malloc(sizeof(mtc1_t));
res->src = $2;
res->dest = $4;

symbol_init(res,"mtc1",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

mfc1: MFC1 REG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	mfc1_t *res = malloc(sizeof(mfc1_t));
res->dest = $2;
res->src = $4;

symbol_init(res,"mfc1",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

mfhc1: MFHC1 REG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	mfhc1_t *res = malloc(sizeof(mfhc1_t));
res->dest = $2;
res->src = $4;

symbol_init(res,"mfhc1",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

divd: DIVDOTD FPREG COMMA FPREG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	divd_t *res = malloc(sizeof(divd_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"divd",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

muld: MULDOTD FPREG COMMA FPREG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	muld_t *res = malloc(sizeof(muld_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"muld",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

cmpconfmt: CMPDOT CONDN FMTSUF FPREG COMMA FPREG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8) + 1);
	sprintf($$,"%s%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7,$8);
	cmpconfmt_t *res = malloc(sizeof(cmpconfmt_t));
res->con = $2;
res->fmt = $3;
res->dest = $4;
res->reg1 = $6;
res->reg2 = $8;

symbol_init(res,"cmpconfmt",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

bc1eqz: BC1EQZ FPREG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	bc1eqz_t *res = malloc(sizeof(bc1eqz_t));
res->reg1 = $2;
res->target = $4;

symbol_init(res,"bc1eqz",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

bc1nez: BC1NEZ FPREG COMMA LABEL  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	bc1nez_t *res = malloc(sizeof(bc1nez_t));
res->reg1 = $2;
res->target = $4;

symbol_init(res,"bc1nez",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

dmfc1: DMFC1 REG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	dmfc1_t *res = malloc(sizeof(dmfc1_t));
res->dest = $2;
res->src = $4;

symbol_init(res,"dmfc1",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

ldc1_m: LDC1 FPREG COMMA DIRECTIVE O_BRACKET LABEL C_BRACKET O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7)+strlen($8)+strlen($9)+strlen($10) + 1);
	sprintf($$,"%s%s%s%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7,$8,$9,$10);
	ldc1_r_m_d_t *res = malloc(sizeof(ldc1_r_m_d_t));
res->dest = $2;
res->dir = $4;
res->offset = $6;
res->base = $9;

symbol_init(res,"ldc1_r_m_d",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

trunc_w_d: TRUNCDOTWDOTD FPREG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	trunc_w_d_t *res = malloc(sizeof(trunc_w_d_t));
res->dest = $2;
res->src = $4;

symbol_init(res,"trunc_w_d",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

addd: ADDDOTD FPREG COMMA FPREG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	add_d_t *res = malloc(sizeof(add_d_t));
res->dest = $2;
res->reg1 = $4;
res->reg2 = $6;

symbol_init(res,"add_d",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

dmtc1: DMTC1 REG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	dmtc1_t *res = malloc(sizeof(dmtc1_t));
res->src = $2;
res->dest = $4;

symbol_init(res,"dmtc1",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

movd: MOVDOTD FPREG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	mov_d_t *res = malloc(sizeof(mov_d_t));
res->dest = $2;
res->src = $4;

symbol_init(res,"mov_d",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

absd: ABSDOTD FPREG COMMA FPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	absd_t *res = malloc(sizeof(absd_t));
res->dest = $2;
res->src = $4;

symbol_init(res,"absd",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

imovsd_r_m: MOVSD IFPREG COMMA NUM O_BRACKET IREG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	imovsd_r_m_t *res = malloc(sizeof(imovsd_r_m_t));
res->src = $2;
res->offset = strtol($4,NULL,10);
res->base = $6;

symbol_init(res,"imovsd_r_m",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

imovsd_m_r: MOVSD NUM O_BRACKET IREG C_BRACKET COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	imovsd_m_r_t *res = malloc(sizeof(imovsd_m_r_t));
res->offset = strtol($2,NULL,10);
res->base = $4;
res->dest = $7;

symbol_init(res,"imovsd_m_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

isubsd_r_r: SUBSD IFPREG COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	isubsd_r_r_t *res = malloc(sizeof(isubsd_r_r_t));
res->reg1 = $2;
res->dest = $4;

symbol_init(res,"isubsd_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

icvtsi2sd_r_r: CVTSI2SD IFPREG COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	icvtsi2sd_r_r_t *res = malloc(sizeof(icvtsi2sd_r_r_t));
res->reg1 = $2;
res->dest = $4;

symbol_init(res,"icvtsi2sd_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

imovd_f_r: MOVD IREG COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	imovd_f_r_t *res = malloc(sizeof(imovd_f_r_t));
res->src = $2;
res->dest = $4;

symbol_init(res,"imovd_f_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

imovd_r_f: MOVD IFPREG COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	imovd_r_f_t *res = malloc(sizeof(imovd_r_f_t));
res->src = $2;
res->dest = $4;

symbol_init(res,"imovd_r_f",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

idivsd_r_r: DIVSD IFPREG COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	idivsd_r_r_t *res = malloc(sizeof(idivsd_r_r_t));
res->reg1 = $2;
res->dest = $4;

symbol_init(res,"idivsd_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

imulsd_r_r: MULSD IFPREG COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	imulsd_r_r_t *res = malloc(sizeof(imulsd_r_r_t));
res->reg1 = $2;
res->dest = $4;

symbol_init(res,"imulsd_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

iucomiss: UCOMISS IFPREG COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	iucomiss_r_r_t *res = malloc(sizeof(iucomiss_r_r_t));
res->reg1 = $2;
res->reg2 = $4;

symbol_init(res,"iucomiss_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

icomiss: COMISS IFPREG COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	icomiss_r_r_t *res = malloc(sizeof(icomiss_r_r_t));
res->reg1 = $2;
res->reg2 = $4;

symbol_init(res,"icomiss_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

iucomisd: UCOMISD IFPREG COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	iucomisd_r_r_t *res = malloc(sizeof(iucomisd_r_r_t));
res->reg1 = $2;
res->reg2 = $4;

symbol_init(res,"iucomisd_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

icomisd: COMISD IFPREG COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	icomisd_r_r_t *res = malloc(sizeof(icomisd_r_r_t));
res->reg1 = $2;
res->reg2 = $4;

symbol_init(res,"icomisd_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

icvttsd2si: CVTTSD2SI IFPREG COMMA IREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	icvttsd2si_r_r_t *res = malloc(sizeof(icvttsd2si_r_r_t));
res->reg1 = $2;
res->dest = $4;

symbol_init(res,"icvttsd2si_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

imovapd_r_r: MOVAPD IFPREG COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	imovapd_r_r_t *res = malloc(sizeof(imovapd_r_r_t));
res->src = $2;
res->dest = $4;

symbol_init(res,"imovapd_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

iaddsd_r_r: ADDSD IFPREG COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	iaddsd_r_r_t *res = malloc(sizeof(iaddsd_r_r_t));
res->reg1 = $2;
res->dest = $4;

symbol_init(res,"iaddsd_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

imovsd_lab_r: MOVSD LABEL O_BRACKET IREG C_BRACKET COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6)+strlen($7) + 1);
	sprintf($$,"%s%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6,$7);
	imovsd_lab_r_t *res = malloc(sizeof(imovsd_lab_r_t));
res->offset = $2;
res->base = $4;
res->dest = $7;

symbol_init(res,"imovsd_lab_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

imovsd_r_r: MOVSD IFPREG COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	imovsd_r_r_t *res = malloc(sizeof(imovsd_r_r_t));
res->src = $2;
res->dest = $4;

symbol_init(res,"imovsd_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

andpd_m: ANDPD HEX COMMA IFPREG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	andpd_m_t *res = malloc(sizeof(andpd_m_t));
res->mask = strtol($2,NULL,10);
res->dest = $4;

symbol_init(res,"andpd_m",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

%%