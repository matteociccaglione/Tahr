%option noyywrap
%option header-file="lex.yy.h"

%{
        #include "bfg.tab.h"
        int brack_nesting;
        char *temp_string;
        int size = 0;
        int current_size;
%}
%x in_sym_repr
%x in_sym_trans
%x in_header_sec
%x in_comment
%x in_curly_bracket
%%
^"%x"([^\n]*)         { yylval.str = yytext;  return BEG_DEF;}
"%{"                   { BEGIN(in_header_sec);}
<in_header_sec>([^%}|;]*) { yylval.str = yytext; return HEADER;}
<in_header_sec>"%}"     {  BEGIN(0); /*return END_HEADER;*/}
^"%token"               { return TOKEN_DECL; }
^"%attribute"                { return ATTRIBUTE_DECL; }
^"%symbol"               { return SYMBOL_DECL; }
;                       { return (unsigned char)';'; }
,                       { return (unsigned char)','; }
:                       { BEGIN(in_sym_repr);return (unsigned char) ':'; }
"<->"           { BEGIN(in_sym_trans); return DOUBLE_ARROW;}
"<-"           { return REVERSE_ARROW;}
"!!"([^!].*)"!!"           { yylval.str = yytext; return IDENTIFIER;}
[\.a-zA-Z0-9_$%]+(\*)*      { yylval.str = yytext; return IDENTIFIER;}
^%%[ \t]*\n             { return START_DECL; }
\s*[|][ \t]*            { return (unsigned char)'|'; }
\s*->[ \t]*           { return ARROW; }
\n                      {  }
[{]                     { BEGIN(in_curly_bracket); brack_nesting++; temp_string = malloc(1024);current_size=1024; temp_string[size] = '{'; size++;}
<in_curly_bracket>[^{}]* { if(strlen(yytext)> current_size-size){
                                temp_string = realloc(temp_string,current_size*2);
                                current_size = current_size*2;
                        }
                        memcpy(temp_string+size,yytext,strlen(yytext));
                        size+=strlen(yytext);
}
<in_curly_bracket>[{]    { brack_nesting++; if(current_size == size){
                                
                                temp_string = realloc(temp_string,current_size*2);
                                current_size = current_size*2;
}
                                temp_string[size] = '{';
                                size++;
}
<in_curly_bracket>[}]    { brack_nesting--;
if(current_size == size){
                                
                                temp_string = realloc(temp_string,current_size*2);
                                current_size = current_size*2;
}
                                temp_string[size] = '}';
                                size++;

                                if (brack_nesting == 0){
                                temp_string[size] = '\0';
                                        BEGIN(0);
yylval.str = temp_string;size=0; return ATT_OPER;
                                }
                        }
<in_sym_repr>([^\n|;]+)    { yylval.str = yytext; return SYM_REPR ;}
<in_sym_repr>[|]           { return SYM_PIPE;}
<in_sym_repr>[;]          { BEGIN(0);}
<in_sym_trans>([^{\n|; ]*)    { yylval.str = yytext; return SYM_TRANS ;}
<in_sym_trans>\{([^}]*)\}  { yylval.str = yytext; return TRANS_OPER;}
<in_sym_trans>[;]          { BEGIN(0);}
"//"                       { BEGIN(in_comment); }
<in_comment>([^\n]*)       { }
<in_comment>[\n]        { BEGIN(0); }
%%
