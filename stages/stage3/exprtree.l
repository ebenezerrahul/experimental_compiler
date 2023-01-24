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
if_tok "if"
else_tok "else"
then_tok "then"
endif_tok "endif"
while_tok "while"
endwhile_tok "endwhile"
do_token "do" 
EQQ_tok "=="
NE "!="
LE "<="
LT "<"
GE ">="
GT ">"
continue_ "continue"
break_ "break"

/* Rules */
%%    
{num} {
    yylval.t_node = createTnode(yytext,opcode_const, type_int, no_stmt, NULL, NULL);
    return INTEGER;         
}

{eq_regex} {
    yylval.t_node = createTnode(yytext,opcode_assign, type_none, no_stmt, NULL, NULL);
    return EQ;         
}

{if_tok} {
    yylval.t_node = NULL;
    return IF;
}

{continue_} {
    yylval.t_node = createTnode(yytext, opcode_nop, type_none, continue_stmt, NULL, NULL);
    return CONTINUE;
}
{break_} {
    yylval.t_node = createTnode(yytext, opcode_nop, type_none, break_stmt, NULL, NULL);
    return BREAK;
}

{else_tok} {
    yylval.t_node = NULL;
    return ELSE;
}

{then_tok} {
    yylval.t_node = NULL;
    return THEN;
}

{endif_tok} {
    yylval.t_node = NULL;
    return ENDIF;
}

{while_tok} {
    yylval.t_node = NULL;
    return WHILE;
}

{endwhile_tok} {
    yylval.t_node = NULL;
    return ENDWHILE;
}
{do_token} {
    yylval.t_node = NULL;
    return DO;
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
    yylval.t_node = createTnode(yytext,opcode_var, type_int, no_stmt,NULL, NULL);
    return ID;         
}

{EQQ_tok} {
    yylval.t_node = createTnode(NULL, relop_eq, type_bool, no_stmt,NULL, NULL);
    return relop;
}

{NE} {

    yylval.t_node = createTnode(NULL, relop_ne, type_bool, no_stmt,NULL, NULL);
    return relop;
} 

{GE} {

    yylval.t_node = createTnode(NULL, relop_ge, type_bool, no_stmt,NULL, NULL);
    return relop;
} 

{GT} {

    yylval.t_node = createTnode(NULL, relop_gt, type_bool, no_stmt,NULL, NULL);
    return relop;
} 

{LE} {

    yylval.t_node = createTnode(NULL, relop_le, type_bool, no_stmt,NULL, NULL);
    return relop;
} 

{LT} {

    yylval.t_node = createTnode(NULL, relop_lt, type_bool, no_stmt,NULL, NULL);
    return relop;
} 


{addop} {
    yylval.t_node = createTnode(yytext, opcode_plus, type_int, no_stmt, NULL,NULL);
    return ADD;         
}

{subop} {
    yylval.t_node = createTnode(yytext, opcode_minus, type_int, no_stmt, NULL, NULL);
    return SUB;         
}

{multiop} {
    yylval.t_node = createTnode(yytext, opcode_mul, type_int, no_stmt, NULL, NULL);
    return MUL;
}
{divop} {
    yylval.t_node = createTnode(yytext, opcode_div, type_int, no_stmt, NULL, NULL);
    return DIV;
}
{brackets_op} {
    yylval.t_node = NULL;
    return op_brace;
}
{brackets_closing} {
    yylval.t_node = NULL;
    return closing_brace;
}

%%
/* Auxilary functions */

int yywrap() {
    return 1;
}

