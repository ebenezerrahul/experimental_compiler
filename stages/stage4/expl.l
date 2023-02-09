/* Declarations */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
    #include "exprtree.h"
    #include "keywords.h"
    #include "wrapper.h"
%}

/* regular Definations */

number              [0-9]+
identifier          [a-zA-Z][a-zA-Z_0-9]*
operator            [+\-/*=]
brackets            "("|")"|"["|"]"
relop               "=="|"!="|">="|"<="|">"|"<"
string_const        \"(\\\"|\\\n|.)*\"
endco               ";"
seperator           ","

/* Rules */
%%    

{string_const} {
    int n = strlen(yytext) + 1;
    char *new_str = (char *) myMalloc(sizeof(char) * n);
    strcpy(new_str, yytext);
    yylval.str = new_str; 
    return STR_CONST;
}

{seperator} {
    return yytext[0];
}

{endco} {
    return yytext[0];
}

{number} {
    yylval.val = atoi(yytext);
    return INT_CONST;
}

{identifier} {
    keyword *k = keywordLookup(yytext);
    if(k) return k->t;
    /*new Variable */
    int n = strlen(yytext) + 1;
    char *new_str = (char *) myMalloc(sizeof(char) * n);
    strcpy(new_str, yytext);
    yylval.str = new_str; 
    return ID;
}

{relop} {
    relop *r = relopLookup(yytext);
    return r->t;
}

{operator} {
    return yytext[0];
}

{brackets} {
    return yytext[0];
}


%%

/* Auxilary functions */

int yywrap() {
    return 1;
}

