
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

