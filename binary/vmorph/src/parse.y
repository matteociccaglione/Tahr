
%{
        #include <stdio.h>
        #include <stdlib.h>
        #include <string.h>
        #include "bfg.h"
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

%token<str>  MOV;
%token<str>  PUSH;
%token<str>  POP;
%token<str>  SUB;

%token<str> REG
%token<str> NUM
%type<str> mov_r_r;

%type<str> push_r;

%type<str> push_i;

%type<str> mov_i_r;

%type<str> pop_r;

%type<str> sub_i_r;

%type<str> mov_r_a;

%%
list_of_sym: 
	| symbol list_of_sym;
symbol: vm_mov_r_r
| mov_r_r
| mov_r_a
| push_r
| pop_r
| mov_i_r
| push_i
| sub_i_r

;

mov_r_r: MOV REG COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	mov_r_r_t *res = malloc(sizeof(mov_r_r_t));
res->reg1 = $2;
res->reg2 = $4;

symbol_init(res,"mov_r_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

push_r: PUSH REG  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	push_r_t *res = malloc(sizeof(push_r_t));
res->reg1 = $2;

symbol_init(res,"push_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

push_i: PUSH NUM  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	push_i_t *res = malloc(sizeof(push_i_t));
res->imm = strtol($2,NULL,10);

symbol_init(res,"push_i",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

mov_i_r: MOV NUM COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	mov_i_r_t *res = malloc(sizeof(mov_i_r_t));
res->imm = strtol($2,NULL,10);
res->reg2 = $4;

symbol_init(res,"mov_i_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

pop_r: POP REG  {
	$$ = malloc(strlen($1)+strlen($2) + 1);
	sprintf($$,"%s%s",$1,$2);
	pop_r_t *res = malloc(sizeof(pop_r_t));
res->reg1 = $2;

symbol_init(res,"pop_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

sub_i_r: SUB NUM COMMA REG  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4) + 1);
	sprintf($$,"%s%s%s%s",$1,$2,$3,$4);
	sub_i_r_t *res = malloc(sizeof(sub_i_r_t));
res->imm = strtol($2,NULL,10);
res->reg2 = $4;

symbol_init(res,"sub_i_r",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

mov_r_a: MOV REG COMMA O_BRACKET REG C_BRACKET  {
	$$ = malloc(strlen($1)+strlen($2)+strlen($3)+strlen($4)+strlen($5)+strlen($6) + 1);
	sprintf($$,"%s%s%s%s%s%s",$1,$2,$3,$4,$5,$6);
	mov_r_a_t *res = malloc(sizeof(mov_r_a_t));
res->reg1 = $2;
res->reg2 = $5;

symbol_init(res,"mov_r_a",0);

	if(!save_symbol($$,res)){
	YYACCEPT;}
};

%%