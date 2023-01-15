/* Declarations */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
    #include "exprtree.h"
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
    yylval.t_node = createTnode(yytext,0);
    return INTEGER;         
}

{addop} {
    yylval.t_node = createTnode(yytext, '+');
    return ADD;         
}

{subop} {
    yylval.t_node = createTnode(yytext, '-');
    return SUB;         
}

{multiop} {
    yylval.t_node = createTnode(yytext, '*');
    return MUL;
}
{divop} {
    yylval.t_node = createTnode(yytext, '/');
    return DIV;
}
{brackets_op} {
    yylval.t_node = createTnode(yytext,'(');
    return op_brace;
}
{brackets_closing} {
    yylval.t_node = createTnode(yytext,')');
    return closing_brace;
}
{newline} {
    yylval.t_node = createTnode(yytext,'\n');
    return endline;

}

%%
/* Auxilary functions */

int yywrap() {
    return 1;
}

