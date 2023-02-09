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
%token<t_node> INTEGER op_brace closing_brace  ID BEG_t END endst EQ WRITE READ IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE
%type<t_node> STATEMENT STATEMENTS BOOLEAN    
%left ADD SUB
%left MUL DIV
%nonassoc relop

%%

/*** Rules Section ***/
start: PROGRAM
     ;
     
PROGRAM : BEG_t END 
        | BEG_t STATEMENTS END 
        {
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
          $<t_node>$ = $<t_node>1;
}
            | CONDITIONAL_STMT endst {
            $<t_node>$ = $<t_node>1;
            } 
            | WHILE_STMT endst {
            $<t_node>$ = $<t_node>1;
            }
            | BREAK endst {
                $<t_node>$ = $<t_node>1;
            }
            | CONTINUE endst {
                $<t_node>$ = $<t_node>1;
            }

          ;


           
ASSIGNMENT : ID EQ expr endst {
           
           $<t_node>2->left = $<t_node>1;
           $<t_node>2->right = $<t_node>3;
           $<t_node>$ = createTnode(NULL, opcode_nop, type_none, assign_stmt, $<t_node>2, NULL);
           }
           ;


CONDITIONAL_STMT : IF BOOLEAN THEN STATEMENTS ENDIF {
                    $<t_node>3 =  createTnode(NULL, opcode_nop, type_none, then_stmt, $<t_node>4, NULL);
                    $<t_node>1 = createTnode(NULL, opcode_nop, type_none, if_stmt, $<t_node>2, $<t_node>3); 
                    $<t_node>$ = $<t_node>1;
                 }
                 | IF BOOLEAN THEN STATEMENTS ELSE STATEMENTS ENDIF {
                    $<t_node>3 =  createTnode(NULL, opcode_nop, type_none, then_stmt, $<t_node>4, $<t_node>6);
                    $<t_node>1 = createTnode(NULL, opcode_nop, type_none, if_stmt, $<t_node>2, $<t_node>3); 
                    $<t_node>$ = $<t_node>1;
                 }
                 ;

WHILE_STMT : WHILE BOOLEAN DO STATEMENTS ENDWHILE {
           $<t_node>1 = createTnode(NULL, opcode_nop, type_none, while_stmt, $<t_node>2, $<t_node>4);
           $<t_node>$ = $<t_node>1;
           }


BOOLEAN : expr relop expr {
        $<t_node>2->left = $<t_node>1;
        $<t_node>2->right = $<t_node>3;
        $<t_node>$ = $<t_node>2;
        }
        | op_brace BOOLEAN closing_brace {
            $<t_node>$ = $<t_node>2;
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
    extern FILE* yyin;

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
    printf("HELLO\n");
    genCode(root);
    printf("WHAT !!\n");
    /*printf("INTERPRETTING\n");*/
    /*evaluateCode(root);*/
    fclose(target_file);

    printf("WHAT !!\n");
    target_file = fopen("expropt.xsm", "w");
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 2056,0,0,0,0,0,0);
    regs_init();
    fprintf(target_file,"MOV BP, SP\nADD BP, 26\nADD SP, 27\n");
    genOptimizedCodeO1(root);
    /*printf("INTERPRETTING\n");*/
    /*evaluateCode(root);*/
    fclose(target_file);
    return 1;
}
