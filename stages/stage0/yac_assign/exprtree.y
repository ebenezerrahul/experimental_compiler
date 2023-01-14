%{
/*** Auxiliary declarations section ***/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "exprtree.h"
%}


%union {
struct tnode *t_node;
}

 /*** YACC Declarations section ***/
%token<t_node> INTEGER op_brace closing_brace endline
%left ADD SUB
%left MUL DIV

%%

/*** Rules Section ***/
start: expr endline {
    print(preorder_print, $<t_node>1);
    print(postorder_print, $<t_node>1);
    printf("%d\n", evaluate($<t_node>1));
    exit(0);}
      ;
     
expr: expr ADD expr {
    $<t_node>2->left = $<t_node>1;
    $<t_node>2->right = $<t_node>3;
    $<t_node>$ = $<t_node>2;
}
    | expr SUB expr {
    
    $<t_node>2->left = $<t_node>1;
    $<t_node>2->right = $<t_node>3;
    $<t_node>$ = $<t_node>2;
}
    | expr MUL expr {

    $<t_node>2->left = $<t_node>1;
    $<t_node>2->right = $<t_node>3;
    $<t_node>$ = $<t_node>2;
     }


    | expr DIV expr {

    $<t_node>2->left = $<t_node>1;
    $<t_node>2->right = $<t_node>3;
    $<t_node>$ = $<t_node>2;
    }

    | op_brace expr closing_brace {
    
    $<t_node>$ = $<t_node>2;
}
     | INTEGER {$<t_node>$ = $<t_node>1;}
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
