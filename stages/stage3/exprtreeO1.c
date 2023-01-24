#include "exprtree.h"
#include <stdio.h>
#include <stdlib.h>
extern int break_labels[];
extern int continue_labels[];
extern int break_label_top;
extern int continue_label_top;

reg_idx genCodeStmtO1(tnode *curr) {

    if(!curr) 
        return -1;

    int op = curr->opcode;
    reg_idx p, q;
    char var_id;
    int a = 1;

    if(op ==  opcode_plus ) {
        if(curr->left->num_regs > curr->right->num_regs){
            p = genCodeStmtO1(curr->left);
            q = genCodeStmtO1(curr->right);
        }
        else {
            q = genCodeStmtO1(curr->right);
            p = genCodeStmtO1(curr->left);
        }
        type_check(curr->left, curr->right);
        fprintf(target_file, "ADD R%d, R%d\n", min(p,q), max(p,q));
        free_reg();
        return min(p,q);
    }

    if(op == opcode_minus){
            if(curr->left->num_regs > curr->right->num_regs){
                p = genCodeStmtO1(curr->left);
                q = genCodeStmtO1(curr->right);
            }
            else {
                q = genCodeStmtO1(curr->right);
                p = genCodeStmtO1(curr->left);
            }
            type_check(curr->left, curr->right);
            fprintf(target_file, "SUB R%d, R%d\n", p, q);
            if(p > q) {
                fprintf(target_file, "MOV R%d, R%d\n", q, p);
            }
            free_reg();
            return min(p,q);

    }
        if(op ==  opcode_mul) {
            if(curr->left->num_regs > curr->right->num_regs){
                p = genCodeStmtO1(curr->left);
                q = genCodeStmtO1(curr->right);
            }
            else {
                q = genCodeStmtO1(curr->right);
                p = genCodeStmtO1(curr->left);
            }
            type_check(curr->left, curr->right);
            fprintf(target_file, "MUL R%d, R%d\n", min(p,q), max(p,q));
            free_reg();
            return min(p,q);

        }
        if (op == opcode_div ) {
            if(curr->left->num_regs > curr->right->num_regs){
                p = genCodeStmtO1(curr->left);
                q = genCodeStmtO1(curr->right);
            }
            else {
                q = genCodeStmtO1(curr->right);
                p = genCodeStmtO1(curr->left);
            }
            type_check(curr->left, curr->right);
            fprintf(target_file, "DIV R%d, R%d\n", p, q);
            if(p > q) {
                fprintf(target_file, "MOV R%d, R%d\n", q, p);
            }
            free_reg();
            return min(p, q);

        }
        if(op == opcode_assign ) { 
            if(!(curr->left) || curr->left->opcode != opcode_var) {
                printf("error\n");
                exit(1);
            }
            p = genCodeStmtO1(curr->right);
            q = get_reg();
            type_check(curr->left, curr->right);
            var_id = curr->left->id[0];
            fprintf(target_file, "MOV R%d, BP\n",q);
            fprintf(target_file, "SUB R%d, %d\n",q, (int)(var_id - (int)'a'));
            fprintf(target_file, "MOV [R%d], R%d\n", q , p);
            free_reg();
            free_reg();
            return -1;
        }


        /*case relop_eq :*/
        if(op == relop_eq) {
            if(curr->left->num_regs > curr->right->num_regs){
                p = genCodeStmtO1(curr->left);
                q = genCodeStmtO1(curr->right);
                fprintf(target_file, "EQ R%d, R%d\n", p,q);
                free_reg();
                return p;
            }
            else {
                q = genCodeStmtO1(curr->right);
                p = genCodeStmtO1(curr->left);
                fprintf(target_file, "EQ R%d, R%d\n", p,q);
                free_reg();
                return p;
            }
        }

        /*case relop_ne :*/

        if(op == relop_ne) {
            if(curr->left->num_regs > curr->right->num_regs){
                p = genCodeStmtO1(curr->left);
                q = genCodeStmtO1(curr->right);
                fprintf(target_file, "NE R%d, R%d\n", p,q);
                free_reg();
                return p;
            }
            else {
                q = genCodeStmtO1(curr->right);
                p = genCodeStmtO1(curr->left);
                fprintf(target_file, "NE R%d, R%d\n", p,q);
                free_reg();
                return p;
            }
        }
        /*case relop_ge :*/

        if(op == relop_ge) {
            if(curr->left->num_regs > curr->right->num_regs){
                p = genCodeStmtO1(curr->left);
                q = genCodeStmtO1(curr->right);
                fprintf(target_file, "GE R%d, R%d\n", p,q);
                free_reg();
                return p;
            }
            else {
                q = genCodeStmtO1(curr->right);
                p = genCodeStmtO1(curr->left);
                fprintf(target_file, "GE R%d, R%d\n", p,q);
                free_reg();
                return p;
            }
        }
        /*case relop_gt :*/

        if(op == relop_gt) {
            if(curr->left->num_regs > curr->right->num_regs){
                p = genCodeStmtO1(curr->left);
                q = genCodeStmtO1(curr->right);
                fprintf(target_file, "GT R%d, R%d\n", p,q);
                free_reg();
                return p;
            }
            else {
                q = genCodeStmtO1(curr->right);
                p = genCodeStmtO1(curr->left);
                fprintf(target_file, "GT R%d, R%d\n", p,q);
                free_reg();
                return p;
            }
        }
        /*case relop_le :*/

        if(op == relop_le) {
          if (curr->left->num_regs > curr->right->num_regs) {
            p = genCodeStmtO1(curr->left);
            q = genCodeStmtO1(curr->right);
            fprintf(target_file, "LE R%d, R%d\n", p,q);
            free_reg();
            return p;
          } else {
            q = genCodeStmtO1(curr->right);
            p = genCodeStmtO1(curr->left);
            fprintf(target_file, "LE R%d, R%d\n", p,q);
            free_reg();
            return p;
          }
        }
        /*case relop_lt :*/

        if(op == relop_lt) {
            if(curr->left->num_regs > curr->right->num_regs){
                p = genCodeStmtO1(curr->left);
                q = genCodeStmtO1(curr->right);
                fprintf(target_file, "LT R%d, R%d\n", p,q);
                free_reg();
                return p;
            }
            else {
                q = genCodeStmtO1(curr->right);
                p = genCodeStmtO1(curr->left);
                fprintf(target_file, "LT R%d, R%d\n", p,q);
                free_reg();
                return p;
            }
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
reg_idx genCodeO1(tnode *curr) {
    if(!curr)
        return -1;

    int temp,res_c;
    char id_temp;
        
    if(curr->stmt_type_t ==  no_stmt) {
        genCodeO1(curr->left);
        genCodeO1(curr->right);
        return 0;
    }


    if(curr->stmt_type_t == while_stmt) {
        int label_1 = getLabel();
        int label_2 = getLabel();
        break_label_top++;
        break_labels[break_label_top]= label_2;
        continue_label_top++;
        continue_labels[continue_label_top] = label_1;
        fprintf(target_file,"LABEL %d:\n", label_1);
        int p = genCodeStmtO1(curr->left);
        fprintf(target_file,"JZ R%d, LABEL%d\n",p, label_2);
        free_reg();
        genCodeO1(curr->right);
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
        int p = genCodeStmtO1(curr->left);
        fprintf(target_file,"JZ R%d, LABEL%d\n",p, label_1);
        free_reg();
        genCodeO1(curr->right->left);
        fprintf(target_file,"JMP LABEL%d\n", label_2);
        fprintf(target_file,"LABEL %d:\n", label_1);
        genCodeO1(curr->right->right);
        fprintf(target_file,"LABEL %d:\n", label_2);
        return 0;
    }

    if(curr->stmt_type_t == assign_stmt) {
        genCodeStmtO1(curr->left);

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
        res_c = genCodeStmtO1(curr->left);
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



int calcLeastRegsPath(tnode *curr) {
    if(!curr) 
        return 0;
    int a = calcLeastRegsPath(curr->left);
    int b =  calcLeastRegsPath(curr->right);
    curr->num_regs = max(a,b) + 1;
    return max(a,b) + 1;
}

void genOptimizedCodeO1(tnode *curr){
    calcLeastRegsPath(curr);
    genCodeO1(curr);
    printf("DONE\n");
}
