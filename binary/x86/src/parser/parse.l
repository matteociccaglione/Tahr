
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

YYACCEPT;}
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

[ ]*"%rax" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%rbx" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%rcx" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%rdx" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%rsp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%rbp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%rsi" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%rdi" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r8" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r9" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r10" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r11" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r12" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r13" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r14" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r15" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m0" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m2" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m3" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m4" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m5" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m6" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m7" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m8" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m9" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m10" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m11" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m12" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m13" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m14" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m15" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m16" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m17" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m18" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%eax" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%ebx" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%ecx" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%edx" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%esp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%ebp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%esi" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%edi" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r8d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r9d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r10d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r11d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r12d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r13d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r14d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r15d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m0d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m1d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m2d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m3d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m4d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m5d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m6d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m7d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m8d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m9d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m10d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m11d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m12d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m13d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m14d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m15d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m16d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m17d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m18d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%eip" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%ax" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%bx" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%cx" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%dx" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%sp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%bp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%si" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%di" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r8w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r9w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r10w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r11w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r12w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r13w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r14w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r15w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m0w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m1w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m2w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m3w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m4w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m5w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m6w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m7w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m8w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m9w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m10w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m11w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m12w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m13w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m14w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m15w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m16w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m17w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m18w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%al" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%bl" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%cl" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%dl" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%spl" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%bpl" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%sil" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%dil" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r8b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r9b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r10b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r11b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r12b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r13b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r14b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%r15b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m0b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m1b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m2b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m3b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m4b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m5b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m6b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m7b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m8b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m9b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m10b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m11b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m12b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m13b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m14b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m15b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m16b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m17b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%m18b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"%rip" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IREG;}

[ ]*"q" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SUF;}

[ ]*"l" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SUF;}

[ ]*"w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SUF;}

[ ]*"b" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SUF;}

[ ]*"$f0" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f2" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f3" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f4" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f5" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f6" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f7" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f8" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f9" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f10" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f11" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f12" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f13" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f14" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f15" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f16" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f17" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f18" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f19" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f20" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f21" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f22" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f23" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f24" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f25" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f26" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f27" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f28" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f29" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f30" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"$f31" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FPREG;}

[ ]*"af." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"un." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"eq." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"ueq." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"lt." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"ult." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"le." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"ule." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"at." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"une." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"ne." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"uge." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"oge." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"ugt." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"ogt." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CONDN;}

[ ]*"d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FMTSUF;}

[ ]*"s" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FMTSUF;}

[ ]*"w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return FMTSUF;}

[ ]*"%xmm0" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm2" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm3" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm4" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm5" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm6" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm7" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm8" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm9" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm10" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm11" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm12" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm13" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm14" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

[ ]*"%xmm15" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return IFPREG;}

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
[ ]*"call" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CALL;}
[ ]*"cmp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CMP;}
[ ]*"jl" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JL;}
[ ]*"jbe" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JBE;}
[ ]*"jg" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JG;}
[ ]*"jge" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JGE;}
[ ]*"jmp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JMP;}
[ ]*"lea" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LEA;}
[ ]*"mov" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MOV;}
[ ]*"neg" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return NEG;}
[ ]*"not" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return NOT;}
[ ]*"sar" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SAR;}
[ ]*"sal" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SAL;}
[ ]*"shl" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SHL;}
[ ]*"shr" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SHR;}
[ ]*"jz" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JZ;}
[ ]*"jnz" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JNZ;}
[ ]*"push" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return PUSH;}
[ ]*"pop" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return POP;}
[ ]*"jp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JP;}
[ ]*"jnp" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JNP;}
[ ]*"ret" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return RET;}
[ ]*"ud2" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return UD2;}
[ ]*"jb" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JB;}
[ ]*"jae" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return JAE;}
[ ]*"sdc1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SDC1;}
[ ]*"ldc1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LDC1;}
[ ]*"sub.d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SUBDOTD;}
[ ]*"cvt.d.w" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CVTDOTDDOTW;}
[ ]*"cvt.d.l" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CVTDOTDDOTL;}
[ ]*"mtc1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MTC1;}
[ ]*"mfc1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MFC1;}
[ ]*"mfhc1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MFHC1;}
[ ]*"div.d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DIVDOTD;}
[ ]*"mul.d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MULDOTD;}
[ ]*"cmp." {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CMPDOT;}
[ ]*"bc1eqz" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BC1EQZ;}
[ ]*"bc1nez" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return BC1NEZ;}
[ ]*"dmfc1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DMFC1;}
[ ]*"trunc.w.d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return TRUNCDOTWDOTD;}
[ ]*"add.d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return ADDDOTD;}
[ ]*"dmtc1" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DMTC1;}
[ ]*"mov.d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MOVDOTD;}
[ ]*"abs.d" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return ABSDOTD;}
[ ]*"movsd" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MOVSD;}
[ ]*"subsd" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return SUBSD;}
[ ]*"cvtsi2sd" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CVTSI2SD;}
[ ]*"movd" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MOVD;}
[ ]*"divsd" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DIVSD;}
[ ]*"mulsd" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MULSD;}
[ ]*"ucomiss" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return UCOMISS;}
[ ]*"comiss" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return COMISS;}
[ ]*"ucomisd" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return UCOMISD;}
[ ]*"comisd" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return COMISD;}
[ ]*"cvttsd2si" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return CVTTSD2SI;}
[ ]*"movapd" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return MOVAPD;}
[ ]*"addsd" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return ADDSD;}
[ ]*"andpd" {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return ANDPD;}

[ ]*[-+]?[0-9]+ {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); return NUM;}

[ ]*0x[a-f0-9]+ {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return HEX;}

[\.]*[a-zA-Z0-9_$]+[:]* {  yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LABEL;}

<in_global>[\.a-zA-Z0-9_$] { BEGIN(0); yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return LABG;}

<in_data>([^"\n"].*) { BEGIN(0); yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); no_start_space(yylval.str); return DVALUE;}

%%