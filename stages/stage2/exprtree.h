#include <stdio.h>
#include <stdlib.h>
#include "registers.h"

extern  FILE *target_file;
extern int regs_t[16];

typedef struct tnode{
    char *str;
    char opcode;
    struct tnode *left, *right;
}tnode;


typedef int reg_idx;

tnode* createTnode(char *cpy_str, char opcode);

void preorder_print(tnode*);

void postorder_print(tnode*);

void print(void (*func) (tnode*), tnode*);

int evaluate(tnode *);

reg_idx genCode(tnode *curr); 

