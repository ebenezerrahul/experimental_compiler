#include <stdio.h>
#include <stdlib.h>


typedef struct tnode{
    char *str;
    char opcode;
    struct tnode *left, *right;
}tnode;


tnode* createTnode(char *cpy_str, char opcode);

void preorder_print(tnode*);

void postorder_print(tnode*);

void print(void (*func) (tnode*), tnode*);

int evaluate(tnode *);
