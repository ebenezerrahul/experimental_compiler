%{
/*** Auxiliary declarations section ***/

#include<stdio.h>
#include<stdlib.h>

%}

 /*** YACC Declarations section ***/
%token  IF_CONDITIONAL_START
%token THEN
%token ELSE_CONDITIONAL_START
%token END_IF
%token identifier
%token const_id
%left andcomp
%left orcomp
%left addop subop
%left multiop divop
%right notcomp

%%

/*** Rules Section ***/
start : BODY
      ;
BODY : statement 
     | IF_CONDITIONAL_START BOOLEN THEN BODY ELSE_CONDITIONAL_START END_IF
     | IF_CONDITIONAL_START BOOLEN THEN BODY END_IF
     | statement  BODY
     ;
expr : expr addop expr
     | expr subop expr 
     | expr multiop expr
     | expr divop expr
     | '(' expr ')'
     | identifier 
     | const_id
     ;

statement : identifier '=' expr ';'
          ;

BOOLEN : expr andcomp expr 
       | expr orcomp expr
       | notcomp BOOLEN 
       | BOOLEN andcomp BOOLEN 
       | BOOLEN orcomp BOOLEN
       | '(' BOOLEN ')'
       ;

%%


/*** Auxiliary functions section ***/

yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(int argc, char *argv[]) {

    /*if(argc > 1) {*/
        /*FILE *fp = fopen(argv[1],"r");*/
        /*if(fp)*/
            /*yyin = fp;*/
    /*}*/

    yyparse();

    return 1;
}
