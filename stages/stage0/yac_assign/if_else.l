/* Declarations */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
    int count = 0;
    int count1 = 0;
%}

/* regular Definations */
if_reg "if"
else_reg "else"
VARIABLE [a-zA-Z][a-zA-Z0-9]*
ASSIGNOP "="
ADDOP "+"
SUBOP "-"
DIVOP "/"
MULTIOP '*'
ANDCOMP "=="|"and" 
ORCOMP "||"|"or"
NOTCOMP "!"|"not"
SMALLBRACES "("|")" 
CURLY_BRACES "{"|"}"
DIGITS [0-9]+
FLOATS [0-9]+"."[0-9]+
END_ST ";"
ENDIF_id "endif"
THEN_id "then"

/* Rules */
%%
{if_reg} {
    for(int i = 0; i < count; i++) {
        printf("\t");
    }
    printf("if num : %d\n", count1);
    count++;count1++;
    return IF_CONDITIONAL_START;  
}
{THEN_id} {
    return THEN;
}
{ENDIF_id} {
    count--;
    return END_IF;
        }
{else_reg} {
    return ELSE_CONDITIONAL_START;            
}
{VARIABLE} {
    return identifier;
}
{DIGITS} {
    return const_id;
}
{FLOATS} {
    return const_id;
}
{DIVOP} {
    return divop;
}
{MULTIOP} {
    return multiop;
}
{ADDOP} {
    return addop;
}
{SUBOP} {
    return subop;
}

{ANDCOMP} {
    return andcomp;
}
{NOTCOMP} {
    return notcomp;
}
{ORCOMP} {
    return orcomp;
}
{ASSIGNOP} {
    return *yytext;
}
{SMALLBRACES} {
    return *yytext;
}
{CURLY_BRACES} {
    return *yytext;
}
{END_ST} {
    return *yytext;
}

%%
/* Auxilary functions */

int yywrap() {
    return 1;
}

