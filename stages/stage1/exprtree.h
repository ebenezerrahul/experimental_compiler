#include <stdio.h>
#include <stdlib.h>

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

int min(int,int);

int max(int, int);

reg_idx genCode(tnode *curr); 

void free_reg();

int get_reg();
