%{
/*** Auxiliary declarations section ***/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

FILE *target_file;
int regs_t[16];
int res;

#include "exprtree.h"
%}


%union {
struct tnode *t_node;
}

 /*** YACC Declarations section ***/
%token<t_node> INTEGER op_brace closing_brace  ID BEG_t END endst EQ WRITE READ
%left ADD SUB
%left MUL DIV

%%

/*** Rules Section ***/
start: PROGRAM
     ;
     
PROGRAM : BEG_t END 
        | BEG_t STATEMENTS END 
        ;

STATEMENTS : STATEMENT 
           | STATEMENT STATEMENTS
           ;

STATEMENT : WRITE op_brace expr closing_brace endst {

            res = genCode($<t_node>3);

            int temp = get_reg();
            fprintf(target_file,"MOV R%d, \"Write\"\n", temp);
            fprintf(target_file,"PUSH R%d\n",temp);
            fprintf(target_file,"MOV R%d, -2\n", temp);
            fprintf(target_file,"PUSH R%d\n",temp);
            fprintf(target_file,"PUSH R%d\n",res);
            fprintf(target_file,"PUSH R%d\n",res);
            fprintf(target_file,"PUSH R%d\n",res);
            fprintf(target_file,"CALL 0\n");
            fprintf(target_file, "BRKP\n");
            fprintf(target_file,"POP R%d\n",temp);
            fprintf(target_file,"POP R%d\n",res);
            fprintf(target_file,"POP R%d\n",res);
            fprintf(target_file,"POP R%d\n",temp);
            fprintf(target_file,"POP R%d\n",temp);
            free_reg();
            }
          | READ op_brace ID closing_brace endst
          | ASSIGNMENT {
            print(preorder_print, $<t_node>1);
            genCode($<t_node>1);
}
          ;

ASSIGNMENT : ID EQ expr endst {
           $<t_node>2->left = $<t_node>1;
           $<t_node>2->right = $<t_node>3;
           $<t_node>$ = $<t_node>2;
           }
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
     | ID {$<t_node>$ = $<t_node>1;}
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
    for(int i = 0; i < 16; i++){
        regs_t[i] = 0;
    }
    target_file = fopen("expr.xsm", "w");
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 2056,0,0,0,0,0,0);
    regs_init();
    fprintf(target_file,"MOV BP, SP\nADD BP, 26\n");
    yyparse(); 
    fclose(target_file);

    return 1;
}
