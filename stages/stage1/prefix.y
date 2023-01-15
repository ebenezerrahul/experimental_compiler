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
%token<t_node> INTEGER op_brace closing_brace endline
%token ADD SUB
%token MUL DIV

%%

/*** Rules Section ***/
start: expr endline {
    print(preorder_print, $<t_node>1);
    print(postorder_print, $<t_node>1);
    printf("%d\n", evaluate($<t_node>1));
    res = genCode($<t_node>1);
    }
      ;
     
expr: ADD expr  expr {
    $<t_node>1->left = $<t_node>2;
    $<t_node>1->right = $<t_node>3;
    $<t_node>$ = $<t_node>1;
}
    | SUB expr  expr {
    
    $<t_node>1->left = $<t_node>2;
    $<t_node>1->right = $<t_node>3;
    $<t_node>$ = $<t_node>1;
}
    | MUL expr expr {

    $<t_node>1->left = $<t_node>2;
    $<t_node>1->right = $<t_node>3;
    $<t_node>$ = $<t_node>1;
     }


    | DIV expr  expr {

    $<t_node>1->left = $<t_node>2;
    $<t_node>1->right = $<t_node>3;
    $<t_node>$ = $<t_node>1;
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
    for(int i = 0; i < 16; i++){
        regs_t[i] = 0;
    }
    target_file = fopen("expr.xsm", "w");
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 2056,0,0,0,0,0,0);
    yyparse(); 
    fprintf(target_file, "BRKP\n");
    int temp = get_reg();
    fprintf(target_file,"PUSH R%d\n",res);
    fprintf(target_file,"MOV R%d, SP\n", res);
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
    fclose(target_file);

    return 1;
}
