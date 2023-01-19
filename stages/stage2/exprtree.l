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
id_regex [a-z]
eq_regex "="
endst_regex ";"
begin_regex "begin"
end_regex "end"
write_regex "write"
read_regex "read"


/* Rules */
%%    
{num} {
    yylval.t_node = createTnode(yytext,0);
    return INTEGER;         
}

{eq_regex} {
    yylval.t_node = createTnode(yytext,'=');
    return EQ;         
}
{begin_regex} {
    yylval.t_node = NULL;
    return BEG_t;
}

{write_regex} {
    yylval.t_node = NULL;
    return WRITE;
}

{read_regex} {
    yylval.t_node = NULL;
    return READ;
}
{end_regex} {
    yylval.t_node = NULL;
    return END;
}

{endst_regex} {
    yylval.t_node = NULL;
    return endst;
}

{id_regex} {
    yylval.t_node = createTnode(yytext,'x');
    return ID;         
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

%%
/* Auxilary functions */

int yywrap() {
    return 1;
}

