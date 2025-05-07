#include <stdio.h>
#include "lex.yy.h"

extern int yyparse (void);

void yyerror(char const *message)
{
        printf("Error: %s\n", message);
}


int main(int argc, char **argv)
{
        if (argc > 1) {
                if ((yyin = fopen(argv[1], "r")) != NULL) {
                        yyparse();
                        return 0;
                }
                else
                        fprintf(stderr, "Cannot open file %s\n", argv[1]);
        }
        fprintf(stderr, "Too few arguments\n");
        return 1;
}
