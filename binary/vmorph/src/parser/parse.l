
/* Lexer part: recognize tokens for the calculator and print them out 
 * This is the scanner, which uses flex
*/
%option noyywrap
%option header-file="lex.yy.h"

%{
        #include <stdio.h>
        #include <stdlib.h>
        #include <string.h>
        #include "parser.tab.h"
        #include "ag_parser.h"
%}


%x in_data
%x in_global

%%
"," {return COMMA;};
"." {return DOT;};
";" {return SEMICOLON;};
":" {return COLON;};
"(" {return O_BRACKET;};
")" {return C_BRACKET;};
"{" {return O_CURLY;};
"}" {return C_CURLY;};
"$" {return DOLLAR;};
"*" {return STAR;};
"\[" {return O_SQUARE;};
"\]" {return C_SQUARE;};

[ ]*"$zero" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$at" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$v0" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$v1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$a0" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$a1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$a2" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$a3" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$t0" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$t1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$t2" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$t3" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$t4" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$t5" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$t6" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$t7" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$t8" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$t9" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$s0" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$s1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$s2" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$s3" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$s4" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$s5" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$s6" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$s7" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$k0" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$k1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$sp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$ra" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"$fp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"HI" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"LO" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*"PC" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return REG;}

[ ]*".word" { BEGIN(in_data); yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DTYPE;}

[ ]*".half" { BEGIN(in_data); yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DTYPE;}

[ ]*".byte" { BEGIN(in_data); yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DTYPE;}

[ ]*".float" { BEGIN(in_data); yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DTYPE;}

[ ]*".asciiz" { BEGIN(in_data); yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DTYPE;}

[ ]*".ascii" { BEGIN(in_data); yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DTYPE;}

[ ]*"%highest" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DIRECTIVE;}

[ ]*"%hi" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DIRECTIVE;}

[ ]*"%lo" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DIRECTIVE;}

[ ]*"%higher" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DIRECTIVE;}

[ ]*".globl" { BEGIN(in_global); yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return GLOB;}

[ ]*"r0" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r2" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r3" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r4" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r5" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r6" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r7" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r8" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r9" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r10" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r11" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r12" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r13" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r14" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"r15" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"temp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"rret" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"v0" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"tgt" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"sp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"ip" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"rlibc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"rsize" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m0" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m2" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m3" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m4" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m5" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m6" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m7" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m8" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m9" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m10" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m11" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m12" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"m13" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return VREG;}

[ ]*"add" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return ADD;}
[ ]*"sub" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SUB;}
[ ]*"subu" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SUBU;}
[ ]*"addi" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return ADDI;}
[ ]*"mul" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MUL;}
[ ]*"div" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DIV;}
[ ]*"ld" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LD;}
[ ]*"lw" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LW;}
[ ]*"lh" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LH;}
[ ]*"lb" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LB;}
[ ]*"sd" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SD;}
[ ]*"sw" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SW;}
[ ]*"sh" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SH;}
[ ]*"sb" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SB;}
[ ]*"mfhi" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MFHI;}
[ ]*"mflo" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MFLO;}
[ ]*"and" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return AND;}
[ ]*"andi" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return ANDI;}
[ ]*"or" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return OR;}
[ ]*"ori" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return ORI;}
[ ]*"xor" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return XOR;}
[ ]*"nor" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return NOR;}
[ ]*"slt" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SLT;}
[ ]*"sltu" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SLTU;}
[ ]*"slti" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SLTI;}
[ ]*"sll" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SLL;}
[ ]*"srl" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SRL;}
[ ]*"beq" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BEQ;}
[ ]*"bne" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BNE;}
[ ]*"j" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return J;}
[ ]*"jr" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JR;}
[ ]*"jal" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JAL;}
[ ]*"syscall" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SYSCALL;}
[ ]*"la" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LA;}
[ ]*"addiu" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return ADDIU;}
[ ]*"move" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MOVE;}
[ ]*"seh" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SEH;}
[ ]*"addu" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return ADDU;}
[ ]*"nop" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return NOP;}
[ ]*"dadd" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DADD;}
[ ]*"daddu" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DADDU;}
[ ]*"daddi" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DADDI;}
[ ]*"daddiu" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DADDIU;}
[ ]*"lui" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LUI;}
[ ]*"dsll" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DSLL;}
[ ]*"balc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BALC;}
[ ]*"li" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LI;}
[ ]*"bnezc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BNEZC;}
[ ]*"bc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BC;}
[ ]*"bnec" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BNEC;}
[ ]*"bgtzc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BGTZC;}
[ ]*"bgec" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BGEC;}
[ ]*"sra" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SRA;}
[ ]*"bltc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BLTC;}
[ ]*"beqzc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BEQZC;}
[ ]*"dsrl" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DSRL;}
[ ]*"bltzc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BLTZC;}
[ ]*"jrc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JRC;}
[ ]*"bgezc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BGEZC;}
[ ]*"teq" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return TEQ;}
[ ]*"dsubu" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DSUBU;}
[ ]*"muh" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MUH;}
[ ]*"beqc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BEQC;}
[ ]*"bltuc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BLTUC;}
[ ]*"lbu" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LBU;}
[ ]*"bgeuc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BGEUC;}
[ ]*"add_r_i" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return ADD_R_I;}
[ ]*"add_r_r" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return ADD_R_R;}
[ ]*"and_r_i" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return AND_R_I;}
[ ]*"and_r_r" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return AND_R_R;}
[ ]*"jmp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JMP;}
[ ]*"je_r_i" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JE_R_I;}
[ ]*"je_r_r" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JE_R_R;}
[ ]*"jlt_r_r" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JLT_R_R;}
[ ]*"jlt_r_i" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JLT_R_I;}
[ ]*"load_r_r" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LOAD_R_R;}
[ ]*"load_r_i" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LOAD_R_I;}
[ ]*"ltgt" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LTGT;}
[ ]*"not_r" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return NOT_R;}
[ ]*"neg_r" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return NEG_R;}
[ ]*"shl_r_i" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SHL_R_I;}
[ ]*"shr_r_i" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SHR_R_I;}
[ ]*"sar_r_i" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SAR_R_I;}
[ ]*"store_r_r" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return STORE_R_R;}
[ ]*"xor_r_i" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return XOR_R_I;}
[ ]*"xor_r_r" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return XOR_R_R;}
[ ]*"v_jal" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return V_JAL;}
[ ]*"ret" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return RET;}
[ ]*"push_r" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return PUSH_R;}
[ ]*"push_ret" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return PUSH_RET;}
[ ]*"pop_r" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return POP_R;}
[ ]*"lea_r_m" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LEA_R_M;}
[ ]*"v_arit" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return V_ARIT;}
[ ]*"libc" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LIBC;}

[ ]*[-+]?[0-9]+ {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); return NUM;}

[ ]*0x[a-f0-9]+ {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return HEX;}

[\.]*[a-zA-Z0-9_$]+[:]* {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LABEL;}

<in_global>[\.a-zA-Z0-9_$] { BEGIN(0); yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LABG;}

<in_data>([^"\n"].*) { BEGIN(0); yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DVALUE;}

%%