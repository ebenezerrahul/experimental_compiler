#include <stdio.h> 
#include <stdlib.h>
#include "registers.h"

/* constants */
/* operations */


extern const int opcode_nop;
extern const int opcode_plus;
extern const int opcode_minus;
extern const int opcode_div;
extern const int opcode_mul;
extern const int relop_le;
extern const int relop_lt;
extern const int relop_eq;
extern const int relop_ge;
extern const int relop_gt;
extern const int relop_ne;
extern const int opcode_assign ;
extern const int opcode_var ;
extern const int opcode_const ;

/* statement types */

extern const int no_stmt ;
extern const int assign_stmt ;
extern const int read_stmt ;
extern const int write_stmt ;
extern const int if_stmt;
extern const int then_stmt;
extern const int while_stmt;
extern const int break_stmt;
extern const int continue_stmt;


/* types  */
extern const int type_int;
extern const int type_none;
extern const int type_bool;



extern  FILE *target_file;
extern int regs_t[16];

typedef struct tnode{
    char *id;
    int opcode;
    int type_t;
    int stmt_type_t;
    int num_regs;
    struct tnode *left, *right;

}tnode;


typedef int reg_idx;

tnode* createTnode(char *cpy_str, int opcode, int type_t, int stmt_type_t, tnode *left, tnode *right);

void preorder_print(tnode*);

void postorder_print(tnode*);

void print(void (*func) (tnode*), tnode*);

int evaluateCode(tnode *);

int evaluateCodeStmt(tnode *);

reg_idx genCode(tnode *curr); 

int type_check(tnode *left, tnode *right);

reg_idx genCodeStmt(tnode *curr);

int getLabel();

void genOptimizedCodeO1(tnode*);
