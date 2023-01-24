#include <stdio.h>
#include <stdlib.h>

#include "exprtree.h"

const int opcode_nop = -1;
const int opcode_plus = 0;
const int opcode_minus = 1;
const int opcode_div = 2;
const int opcode_mul = 3;
const int relop_le = 4;
const int relop_lt = 5;
const int relop_eq = 6;
const int relop_ge = 7;
const int relop_gt = 8;
const int relop_ne = 9;
const int opcode_assign = 10;
const int opcode_var = 11;
const int opcode_const = 12;

/* statement types */

const int no_stmt = 16;
const int assign_stmt = 17;
const int read_stmt = 18;
const int write_stmt = 19;
const int if_stmt = 20;
const int then_stmt = 21;
const int while_stmt = 22;
const int break_stmt = 23;
const int continue_stmt = 24;


/* types  */
const int type_int = 0;
const int type_none = 1;
const int type_bool = 2;


#include <string.h>


int break_label_top = -1;
int continue_label_top = -1;

int break_labels[1000];
int continue_labels[1000]; 
int arr_variables[26];

tnode *createTnode(char *cpy_str, int opcode, int type_t, int stmt_type_t, tnode *left, tnode *right) {
   

    tnode *new_node = malloc(sizeof(tnode));
    if(cpy_str != NULL) { 
        printf("%s\n", cpy_str);
        char *temp = malloc(strlen(cpy_str) * sizeof(char));
        strcpy(temp, cpy_str);


        new_node->id  = temp;
    }
    else {
        new_node->id = NULL;
    }
    new_node->opcode = opcode;
    new_node->type_t = type_t;
    new_node->stmt_type_t = stmt_type_t;
    new_node->left = left;
    new_node->right = right;
    new_node->num_regs = 0;

    return new_node;
}

void preorder_print(tnode *curr) {
    if(!curr) 
        return;
    printf("%s ", curr->id);
    preorder_print(curr->left);
    preorder_print(curr->right);
}


void postorder_print(tnode *curr) {
    if(!curr) 
        return;
    postorder_print(curr->left);
    postorder_print(curr->right);
    printf("%s ", curr->id);
}

void print(void (*func) (tnode *), tnode *curr) {
    func(curr);
    printf("\n");
}


int type_check(tnode *left, tnode *right){
    if(left->type_t != right->type_t){
        printf("type error");
        exit(0);

    }
    return 1;
}

int getLabel() {
    static int label_idx = -1;
    label_idx++;
    return label_idx;
}

reg_idx genCodeStmt(tnode *curr) {

    if(!curr) 
        return -1;

    int op = curr->opcode;
    reg_idx p, q;
    char var_id;
    int a = 1;

    if(op ==  opcode_plus ) {
        p = genCodeStmt(curr->left);
        q = genCodeStmt(curr->right);
        type_check(curr->left, curr->right);
        fprintf(target_file, "ADD R%d, R%d\n", min(p,q), max(p,q));
        free_reg();
        return min(p,q);
    }

    if(op == opcode_minus){
            p = genCodeStmt(curr->left);
            q = genCodeStmt(curr->right);
            type_check(curr->left, curr->right);
            fprintf(target_file, "SUB R%d, R%d\n", p, q);
            if(p > q) {
                fprintf(target_file, "MOV R%d R%d\n", q, p);
            }
            free_reg();
            return min(p,q);

    }
        if(op ==  opcode_mul) {
            p = genCodeStmt(curr->left);
            q = genCodeStmt(curr->right);
            type_check(curr->left, curr->right);
            fprintf(target_file, "MUL R%d, R%d\n", min(p,q), max(p,q));
            free_reg();
            return min(p,q);

        }
        if (op == opcode_div ) {
            p = genCodeStmt(curr->left);
            q = genCodeStmt(curr->right);
            type_check(curr->left, curr->right);
            fprintf(target_file, "DIV R%d, R%d\n", p, q);
            if(p > q) {
                fprintf(target_file, "MOV R%d R%d\n", q, p);
            }
            free_reg();
            return min(p, q);

        }
        if(op == opcode_assign ) { 
            if(!(curr->left) || curr->left->opcode != opcode_var) {
                printf("error\n");
                exit(1);
            }
            p = genCodeStmt(curr->right);
            q = get_reg();
            type_check(curr->left, curr->right);
            var_id = curr->left->id[0]; fprintf(target_file, "MOV R%d, BP\n",q); fprintf(target_file, "SUB R%d, %d\n",q, (int)(var_id - (int)'a')); fprintf(target_file, "MOV [R%d], R%d\n", q , p);
            free_reg();
            free_reg();
            return -1;
        }


        /*case relop_eq :*/
        if(op == relop_eq) {
            p = genCodeStmt(curr->left);
            q = genCodeStmt(curr->right);
            fprintf(target_file, "EQ R%d, R%d\n", p,q);
            free_reg();
            return p;
        }

        /*case relop_ne :*/

        if(op == relop_ne) {
            p = genCodeStmt(curr->left);
            q = genCodeStmt(curr->right);
            fprintf(target_file, "NE R%d, R%d\n", p,q);
            free_reg();
            return p;
        }
        /*case relop_ge :*/

        if(op == relop_ge) {
            p = genCodeStmt(curr->left);
            q = genCodeStmt(curr->right);
            fprintf(target_file, "GE R%d, R%d\n", p,q);
            free_reg();
            return p;
        }
        /*case relop_gt :*/

        if(op == relop_gt) {
            p = genCodeStmt(curr->left);
            q = genCodeStmt(curr->right);
            fprintf(target_file, "GT R%d, R%d\n", p,q);
            free_reg();
            return p;
        }
        /*case relop_le :*/

        if(op == relop_le) {
            p = genCodeStmt(curr->left);
            q = genCodeStmt(curr->right);
            fprintf(target_file, "LE R%d, R%d\n", p,q);
            free_reg();
            return p;
        }
        /*case relop_lt :*/

        if(op == relop_lt) {
            p = genCodeStmt(curr->left);
            q = genCodeStmt(curr->right);
            fprintf(target_file, "LT R%d, R%d\n", p,q);
            free_reg();
            return p;
        }

        if(op == opcode_var){
            var_id = (curr->id)[0];
            p = get_reg();
            q = get_reg();
            fprintf(target_file, "MOV R%d, BP\n",q);
            fprintf(target_file, "SUB R%d, %d\n", q, (int)(var_id - (int)'a'));
            fprintf(target_file, "MOV R%d, [R%d]\n", p , q);
            free_reg();
            return p;
        }


        if(op == opcode_const){
            p = get_reg();
            fprintf(target_file, "MOV R%d, %s\n",p, curr->id);
            return p;
        }
        printf("curr Node : opcode %d", curr->opcode);
            printf("error not a valid statement");
            return 0;
        
    
}


reg_idx genCode(tnode *curr) {
    if(!curr)
        return -1;

    int temp,res_c;
    char id_temp;
        
    if(curr->stmt_type_t ==  no_stmt) {
        genCode(curr->left);
        genCode(curr->right);
        return 0;
    }


    if(curr->stmt_type_t == while_stmt) {
        int label_1 = getLabel();
        int label_2 = getLabel();
        break_label_top++;
        break_labels[break_label_top] = label_2;
        continue_label_top++;
        continue_labels[continue_label_top] = label_1;
        fprintf(target_file,"LABEL %d:\n", label_1);
        int p = genCodeStmt(curr->left);
        fprintf(target_file,"JZ R%d, LABEL%d\n",p, label_2);
        free_reg();
        genCode(curr->right);
        fprintf(target_file,"JMP LABEL%d\n", label_1);
        fprintf(target_file,"LABEL %d:\n", label_2);
        break_label_top--;
        continue_label_top--;
        return 0;
    }

    if(curr->stmt_type_t == break_stmt) {
        if(break_label_top != -1) {
            fprintf(target_file,"JMP LABEL%d\n", break_labels[break_label_top]);
        }
        return 0;
    }

    if(curr->stmt_type_t == continue_stmt) {
        if(continue_label_top != -1) {
            fprintf(target_file,"JMP LABEL%d\n", continue_labels[continue_label_top]);
        }
        return 0;
    }

    if(curr->stmt_type_t == if_stmt) {
        int label_1 = getLabel();
        int label_2 = getLabel();
        int p = genCodeStmt(curr->left);
        fprintf(target_file,"JZ R%d, LABEL%d\n",p, label_1);
        free_reg();
        genCode(curr->right->left);
        fprintf(target_file,"JMP LABEL%d\n", label_2);
        fprintf(target_file,"LABEL %d:\n", label_1);
        genCode(curr->right->right);
        fprintf(target_file,"LABEL %d:\n", label_2);
        return 0;
    }

    if(curr->stmt_type_t == assign_stmt) {
        genCodeStmt(curr->left);

        return 0;
    }

    if(curr->stmt_type_t == read_stmt) { 
        if(curr->left == NULL || curr->left->opcode != opcode_var) {
            printf("error cannot read");
        }

        temp = get_reg();
        res_c = get_reg();
        id_temp = curr->left->id[0];
        
        fprintf(target_file, "MOV R%d, BP\n",res_c);
        fprintf(target_file, "SUB R%d, %d\n", res_c, (int)(id_temp - 'a'));

        fprintf(target_file,"MOV R%d, \"Read\"\n", temp);
        fprintf(target_file,"PUSH R%d\n",temp);
        fprintf(target_file,"MOV R%d, -1\n", temp);
        fprintf(target_file,"PUSH R%d\n",temp);
        fprintf(target_file,"PUSH R%d\n",res_c);
        fprintf(target_file,"PUSH R%d\n",res_c);
        fprintf(target_file,"PUSH R%d\n",res_c);
        fprintf(target_file,"CALL 0\n");
        fprintf(target_file,"POP R%d\n",temp);
        fprintf(target_file,"POP R%d\n",res_c);
        fprintf(target_file,"POP R%d\n",res_c);
        fprintf(target_file,"POP R%d\n",temp);
        fprintf(target_file,"POP R%d\n",temp);
        free_reg();
        free_reg();

        return 0;
    } 

    if( curr->stmt_type_t == write_stmt ) {
        res_c = genCodeStmt(curr->left);
        temp = get_reg();

        fprintf(target_file,"MOV R%d, \"Write\"\n", temp);
        fprintf(target_file,"PUSH R%d\n",temp);
        fprintf(target_file,"MOV R%d, -2\n", temp);
        fprintf(target_file,"PUSH R%d\n",temp);
        fprintf(target_file,"PUSH R%d\n",res_c);
        fprintf(target_file,"PUSH R%d\n",res_c);
        fprintf(target_file,"PUSH R%d\n",res_c);
        fprintf(target_file,"CALL 0\n");
        fprintf(target_file,"POP R%d\n",temp);
        fprintf(target_file,"POP R%d\n",res_c);
        fprintf(target_file,"POP R%d\n",res_c);
        fprintf(target_file,"POP R%d\n",temp);
        fprintf(target_file,"POP R%d\n",temp);
        free_reg();
        free_reg();

        return 0;

    } 
    printf("what type : %d", curr->stmt_type_t);
    return 0;
}

 
