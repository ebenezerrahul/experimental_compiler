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

reg_idx genCode(tnode *curr) {
    if(!curr)
        return -1;
    
    char op = curr->opcode;
    reg_idx p, q;
    printf("hello\n");
    if(op != 0)
    printf("op : %c\n", op);
    switch (op) {
        case '+' :
            p = genCode(curr->left);
            q = genCode(curr->right);
            fprintf(target_file, "ADD R%d, R%d\n", min(p,q), max(p,q));
            free_reg();
            return min(p,q);
        case '-' :
            p = genCode(curr->left);
            q = genCode(curr->right);
            fprintf(target_file, "SUB R%d, R%d\n", p, q);
            if(p > q) {
                fprintf(target_file, "MOV R%d R%d\n", q, p);
            }
            free_reg();
            return min(p,q);
        case '*' :
            p = genCode(curr->left);
            q = genCode(curr->right);
            fprintf(target_file, "MUL R%d, R%d\n", min(p,q), max(p,q));
            free_reg();
            printf("MUL R%d, R%d\n", min(p,q), max(p,q));
            return min(p,q);
        case '/' :
            p = genCode(curr->left);
            q = genCode(curr->right);
            fprintf(target_file, "DIV R%d, R%d\n", p, q);
            if(p > q) {
                fprintf(target_file, "MOV R%d R%d\n", q, p);
            }
            free_reg();
            return min(p, q);
        default : 
            p = get_reg();
            fprintf(target_file, "MOV R%d, %s\n",p, curr->str);
            return p;
    }
}

void free_reg() {
    for(int i = 15; i >= 0; i--){
        if(regs_t[i] == 1) {
            regs_t[i] = 0;
            return;
        }
    }
    printf("no regs to free\n");
    exit(1);
    return ;

}


int min (int a, int b){
    if(a < b)
        return a;
    return b;
}

int max(int a, int b) {
    if(a < b) {
        return b;
    }
    return a;
}

int get_reg() {
    for(int i = 0; i  < 16 ; i++){
        if(regs_t[i] == 0){
            regs_t[i] = 1;
            return i;
        }
    }
    printf("ran out of registers\n");
    exit(1);
    return 0;
}
