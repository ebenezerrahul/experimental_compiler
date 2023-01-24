%{
/*** Auxiliary declarations section ***/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

FILE *target_file;
int regs_t[16];
int res;

#include "exprtree.h"
tnode * root;
%}


%union {
struct tnode *t_node;
}

 /*** YACC Declarations section ***/
%token<t_node> INTEGER op_brace closing_brace  ID BEG_t END endst EQ WRITE READ 
%type<t_node> STATEMENT STATEMENTS
%left ADD SUB
%left MUL DIV

%%

/*** Rules Section ***/
start: PROGRAM
     ;
     
PROGRAM : BEG_t END 
        | BEG_t STATEMENTS END 
        {
            genCode($<t_node>2);
            root = $<t_node>2;
            return 0;
        }
        ;

STATEMENTS : STATEMENT  {
            $<t_node>$ = createTnode(NULL, opcode_nop, type_none, no_stmt, $<t_node>1, NULL);
           }
           | STATEMENT STATEMENTS {
            $<t_node>$ = createTnode(NULL, opcode_nop, type_none, no_stmt, $<t_node>1, $<t_node>2);
           }
           ;

STATEMENT : WRITE op_brace expr closing_brace endst {


            $<t_node>$ = createTnode(NULL, opcode_nop, type_none, write_stmt, $<t_node>3, NULL);

            }
          | READ op_brace ID closing_brace endst {

            printf("ID");
            $<t_node>$ = createTnode(NULL, opcode_nop, type_none, read_stmt, $<t_node>3, NULL);
          }
          | ASSIGNMENT {
          printf("HERE");
          $<t_node>$ = $<t_node>1;
}
          ;

ASSIGNMENT : ID EQ expr endst {
           printf("ASSIGNMENT PRODUCTION\n");
           $<t_node>2->left = $<t_node>1;
           $<t_node>2->right = $<t_node>3;
           $<t_node>$ = createTnode(NULL, opcode_nop, type_none, assign_stmt, $<t_node>2, NULL);
           printf("ASSIGNMENT PRODUCTION");
           }
           ;

expr: expr ADD expr {
    printf("stdio");
    printf("here : %s\n", $<t_node>2->id);
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
     | ID {$<t_node>$ = $<t_node>1;}
     ;


%%


/*** Auxiliary functions section ***/

yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(int argc, char *argv[]) {
    extern FILE *yyin;
    if(argc > 1) {
        FILE *fp = fopen(argv[1],"r");
        if(fp)
            yyin = fp;
    }
    for(int i = 0; i < 16; i++){
        regs_t[i] = 0;
    }
    target_file = fopen("expr.xsm", "w");
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 2056,0,0,0,0,0,0);
    regs_init();
    fprintf(target_file,"MOV BP, SP\nADD BP, 26\nADD SP, 27\n");
    yyparse(); 
    /*printf("INTERPRETTING\n");*/
    /*evaluateCode(root);*/
    fclose(target_file);

    return 1;
}
