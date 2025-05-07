
/* Lexer part: recognize tokens for the calculator and print them out 
 * This is the scanner, which uses flex
*/
%option noyywrap
%option header-file="lex.yy.h"

%{
        #include <stdio.h>
        #include <stdlib.h>
        #include <string.h>
        #include "calc.tab.h"
        #include "ag_parser.h"
%}


%%
"," {return COMMA};
"." {return DOT};
";" {return SEMICOLON};
":" {return COLON};
"(" {return O_BRACKET};
")" {return C_BRACKET};
"{" {return O_CURLY};
"}" {return C_CURLY};
"\[" {return O_SQUARE};
"\]" {return C_SQUARE};

[ ]*"rax" { yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); return REG;}

[ ]*"rbx" { yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); return REG;}

[ ]*"rcx" { yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); return REG;}

[ ]*"rsp" { yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); return REG;}

[ ]*[-+]?[0-9]+ { yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); return NUM;}

[ ]*" mov" { yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); return  MOV;}
[ ]*" push" { yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); return  PUSH;}
[ ]*" pop" { yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); return  POP;}
[ ]*" sub" { yylval.str = malloc(strlen(yytext)+1); strcpy(yylval.str,yytext); return  SUB;}

%%