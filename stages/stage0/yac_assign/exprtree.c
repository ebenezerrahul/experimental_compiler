#include <stdio.h>
#include <stdlib.h>
#include "exprtree.h"
#include <string.h>

tnode *createTnode(char *cpy_str, char opcode) {
    
    char *temp = malloc(strlen(cpy_str) * sizeof(char));
    strcpy(temp, cpy_str);

    tnode *new_node = malloc(sizeof(tnode));

    new_node->str  = temp;
    new_node->opcode = opcode;
    new_node->left = new_node->right = NULL;

    return new_node;
}

void preorder_print(tnode *curr) {
    if(!curr) 
        return;
    printf("%s ", curr->str);
    preorder_print(curr->left);
    preorder_print(curr->right);
}


void postorder_print(tnode *curr) {
    if(!curr) 
        return;
    postorder_print(curr->left);
    postorder_print(curr->right);
    printf("%s ", curr->str);
}

void print(void (*func) (tnode *), tnode *curr) {
    func(curr);
    printf("\n");
}

int evaluate(tnode *curr) {
    if(!curr) {
       return 0;
    }
    char op = curr->opcode;
    switch(op) {
        case '+' :
            return evaluate(curr->left) + evaluate(curr->right);
        case '-' :
            return evaluate(curr->left) - evaluate(curr->right);
        case '*' : 
            return evaluate(curr->left) * evaluate(curr->right);
        case '/' :
            return evaluate(curr->left) / evaluate(curr->right);
        default:
            return atoi(curr->str);

    }

}

