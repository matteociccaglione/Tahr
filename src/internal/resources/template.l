
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

