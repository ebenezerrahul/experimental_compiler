/* Declarations */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
%}

/* regular Definations */

num [0-9]+
addop "+"
subop "-"
multiop "*"
divop "/"
brackets_op "("
brackets_closing ")"
newline "\n"

/* Rules */
%%    
{num} {
    char *temp = malloc((yyleng+1)* sizeof(char));
    strcpy(temp, yytext);
    yylval.str = temp;
    return INTEGER;         
}

{addop} {
    char *temp = malloc((yyleng+1)*sizeof(char));
    yylval.str = temp;
    strcpy(temp, yytext);
    return ADD;
}

{subop} {
    char *temp = malloc((yyleng+1)*sizeof(char));
    yylval.str = temp;
    strcpy(temp, yytext);
    return SUB;
}

{multiop} {
    char *temp = malloc((yyleng+1)*sizeof(char));
    yylval.str = temp;
    strcpy(temp, yytext);
    return MUL;
}
{divop} {
    char *temp = malloc((yyleng+1)*sizeof(char));
    yylval.str = temp;
    strcpy(temp, yytext);
    return DIV;
}
{brackets_op} {
    char *temp = malloc((yyleng+1)*sizeof(char));
    yylval.str = temp;
    strcpy(temp, yytext);
    return op_brace;
}
{brackets_closing} {
    char *temp = malloc((yyleng+1)*sizeof(char));
    yylval.str = temp;
    strcpy(temp, yytext);
    return closing_brace;
}
{newline} {
    char *temp = malloc((yyleng+1)*sizeof(char));
    yylval.str = temp;
    strcpy(temp, yytext);
    return endline;

}

%%
/* Auxilary functions */

int yywrap() {
    return 1;
}

