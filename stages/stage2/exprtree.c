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
    char var_id;
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
        case '=' : 
            if(!(curr->left) || curr->left->opcode != 'x') {
                printf("error\n");
                exit(1);
            }
            p = genCode(curr->right);
            q = get_reg();
            var_id = curr->left->str[0];
            fprintf(target_file, "MOV R%d, BP\n",q);
            fprintf(target_file, "SUB R%d, %d\n",q, (int)(var_id - (int)'a'));
            fprintf(target_file, "MOV [R%d], R%d\n", q , p);
            printf("here1\n");
            free_reg();
            printf("here2\n");
            free_reg();
            printf("here3\n");
            return -1;

        case 'x' :
            var_id = (curr->str)[0];
            printf("var id : %c\n", var_id);
            p = get_reg();
            q = get_reg();
            fprintf(target_file, "MOV R%d, BP\n",q);
            fprintf(target_file, "SUB R%d, %d\n", q, (int)(var_id - (int)'a'));
            fprintf(target_file, "MOV R%d, [R%d]\n", p , q);
            free_reg();
            return p;


        default : 
            p = get_reg();
            fprintf(target_file, "MOV R%d, %s\n",p, curr->str);
            return p;
    }
}

