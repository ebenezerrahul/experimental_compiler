#include "parseTree.h"
#include "labels.h"
#include "registers.h"
#include <stdio.h>

extern FILE *target_file;
TypeTable *function_return_type;

void setFunction_return_type(TypeTable *return_type) {
  function_return_type = return_type;
}

void genCode(Snode *curr) {
  printf("Generating code\n");
  while (curr != NULL) {
    genCodeStmt(curr);
    curr = curr->next;
  }
}

void genCodeStmt(Snode *curr) {
  if (!curr) {
    printf("Code Generation Complete!\n");
    return;
  } else if (curr->stmt_type == assign_stmt) {
    int p = getRefernce(curr->reference);
    int q = evaluateExpr(curr->expr);
    fprintf(target_file, "MOV [R%d], R%d\n", p, q);
    free_reg();
    free_reg();
  } else if (curr->stmt_type == if_stmt) {
    int label_1 = getLabel();
    int label_2 = getLabel();
    int p = evaluateExpr(curr->expr);
    fprintf(target_file, "JZ R%d, LABEL%d\n", p, label_1);
    free_reg();
    genCode(curr->left);
    fprintf(target_file, "JMP LABEL%d\n", label_2);
    fprintf(target_file, "LABEL %d:\n", label_1);
    genCode(curr->right);
    fprintf(target_file, "LABEL %d:\n", label_2);
  } else if (curr->stmt_type == while_stmt) {
    int label_1 = getLabel();
    int label_2 = getLabel();
    inWhile(label_2, label_1);
    fprintf(target_file, "LABEL %d:\n", label_1);
    int p = evaluateExpr(curr->expr);
    fprintf(target_file, "JZ R%d, LABEL%d\n", p, label_2);
    free_reg();
    genCode(curr->left);
    fprintf(target_file, "JMP LABEL%d\n", label_1);
    fprintf(target_file, "LABEL %d:\n", label_2);
  } else if (curr->stmt_type == break_stmt) {
    int blabel = getBreakLabel();
    if (blabel != -1)
      fprintf(target_file, "JMP LABEL%d\n", blabel);
  } else if (curr->stmt_type == continue_stmt) {
    int clabel = getContinueLabel();
    if (clabel != -1)
      fprintf(target_file, "JMP LABEL%d\n", clabel);
  } else if (curr->stmt_type == read_stmt) {
    int p = getRefernce(curr->reference);
    int temp = get_reg();
    fprintf(target_file, "MOV R%d, \"Read\"\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "MOV R%d, -1\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "PUSH R%d\n", p);
    fprintf(target_file, "PUSH R%d\n", p);
    fprintf(target_file, "PUSH R%d\n", p);
    fprintf(target_file, "CALL 0\n");
    fprintf(target_file, "POP R%d\n", temp);
    fprintf(target_file, "POP R%d\n", p);
    fprintf(target_file, "POP R%d\n", p);
    fprintf(target_file, "POP R%d\n", temp);
    fprintf(target_file, "POP R%d\n", temp);
    free_reg();
    free_reg();
  } else if (curr->stmt_type == write_stmt) {
    int p = evaluateExpr(curr->expr);
    int temp = get_reg();
    fprintf(target_file, "MOV R%d, \"Write\"\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "MOV R%d, -2\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "PUSH R%d\n", p);
    fprintf(target_file, "PUSH R%d\n", p);
    fprintf(target_file, "PUSH R%d\n", p);
    fprintf(target_file, "CALL 0\n");
    fprintf(target_file, "POP R%d\n", temp);
    fprintf(target_file, "POP R%d\n", p);
    fprintf(target_file, "POP R%d\n", p);
    fprintf(target_file, "POP R%d\n", temp);
    fprintf(target_file, "POP R%d\n", temp);
    free_reg();
    free_reg();
  } else if (curr->stmt_type == allocStatement) {
    int temp = get_reg();
    fprintf(target_file, "MOV R%d, %d\n", temp,
            curr->reference->data_type->size);
    fprintf(target_file, "MOV R%d, \"Alloc\"\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "CALL 0\n");
    fprintf(target_file, "POP R15\n");
    fprintf(target_file, "POP R%d\n", temp);
    fprintf(target_file, "POP R%d\n", temp);
    fprintf(target_file, "POP R%d\n", temp);
    fprintf(target_file, "POP R%d\n", temp);
    free_reg();
    int p = getRefernce(curr->reference);
    fprintf(target_file, "MOV [R%d], R15\n", p);
    free_reg();
  } else if (curr->stmt_type == freeStatement) {
    int temp = get_reg();
    fprintf(target_file, "MOV R%d, \"Free\"\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    int q = evaluateRefernece(curr->expr);
    fprintf(target_file, "PUSH R%d\n", q);
    free_reg();
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "CALL 0\n");
    fprintf(target_file, "POP R15\n");
    fprintf(target_file, "POP R%d\n", temp);
    fprintf(target_file, "POP R%d\n", temp);
    fprintf(target_file, "POP R%d\n", temp);
    fprintf(target_file, "POP R%d\n", temp);
    free_reg();
    int p = getRefernce(curr->reference);
    fprintf(target_file, "MOV [R%d], R15\n", p);
    free_reg();
  } else if (curr->stmt_type == initializeStatement) {
    int temp = get_reg();
    fprintf(target_file, "MOV R%d, \"Heapset\"\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "PUSH R%d\n", temp);
    fprintf(target_file, "CALL 0\n");
    fprintf(target_file, "POP R15\n");
    fprintf(target_file, "POP R%d\n", temp);
    fprintf(target_file, "POP R%d\n", temp);
    fprintf(target_file, "POP R%d\n", temp);
    fprintf(target_file, "POP R%d\n", temp);
    free_reg();
    int p = getRefernce(curr->reference);
    fprintf(target_file, "MOV [R%d], R15\n", p);
    free_reg();
  } else if (curr->stmt_type == return_stmt) {
    int p = evaluateExpr(curr->expr);
    int q = get_reg();
    if (curr->expr->data_type != function_return_type) {
      printf("Function return Types don't match\n");
      exit(1);
    }
    fprintf(target_file, "MOV R%d, BP\n", q);
    fprintf(target_file, "SUB R%d, 2\n", q);
    fprintf(target_file, "MOV [R%d], R%d\n", q, p);
    fprintf(target_file, "MOV SP, BP\n");
    fprintf(target_file, "POP BP\n");
    fprintf(target_file, "RET\n");
    free_reg();
    free_reg();
  } else {
    printf("Unexpected Behavior: Inavalid Statement Type!\n");
    exit(1);
  }
  return;
}

int evaluateExpr(ExprNode *curr) {
  if (!curr) {
    return -1;
  } else if (curr->is_op) {
    if (curr->op_code == OP_AND) {
      int p, q;
      p = evaluateExpr(curr->left);
      q = evaluateExpr(curr->right);
      fprintf(target_file, "MUL R%d, R%d\n", p, q);
      free_reg();
      return p;
    } else if (curr->op_code == OP_OR) {
      int p, q;
      p = evaluateExpr(curr->left);
      q = evaluateExpr(curr->right);
      fprintf(target_file, "ADD R%d, R%d\n", p, q);
      free_reg();
      return p;
    } else if (curr->op_code == OP_NOT) {
      int p;
      p = evaluateExpr(curr->left);
      int r = get_reg();
      fprintf(target_file, "MOV R%d, 1\n", r);
      fprintf(target_file, "NE R%d, R%d\n", p, r);
      free_reg();
      return p;
    } else if (curr->op_code == OP_ADD) {
      int p, q;
      p = evaluateExpr(curr->left);
      q = evaluateExpr(curr->right);
      fprintf(target_file, "ADD R%d, R%d\n", p, q);
      free_reg();
      return p;
    } else if (curr->op_code == OP_SUB) {
      int p, q;
      p = evaluateExpr(curr->left);
      q = evaluateExpr(curr->right);
      fprintf(target_file, "SUB R%d, R%d\n", p, q);
      free_reg();
      return p;
    } else if (curr->op_code == OP_MUL) {
      int p, q;
      p = evaluateExpr(curr->left);
      q = evaluateExpr(curr->right);
      fprintf(target_file, "MUL R%d, R%d\n", p, q);
      free_reg();
      return p;
    } else if (curr->op_code == OP_DIV) {
      int p, q;
      p = evaluateExpr(curr->left);
      q = evaluateExpr(curr->right);
      fprintf(target_file, "DIV R%d, R%d\n", p, q);
      free_reg();
      return p;
    } else if (curr->op_code == OP_MOD) {
      int p, q;
      p = evaluateExpr(curr->left);
      q = evaluateExpr(curr->right);
      fprintf(target_file, "MOD R%d, R%d\n", p, q);
      free_reg();
      return p;
    } else if (curr->op_code == OP_EQ) {
      int p, q;
      p = evaluateExpr(curr->left);
      q = evaluateExpr(curr->right);
      fprintf(target_file, "EQ R%d, R%d\n", p, q);
      free_reg();
      return p;
    } else if (curr->op_code == OP_NE) {
      int p, q;
      p = evaluateExpr(curr->left);
      q = evaluateExpr(curr->right);
      fprintf(target_file, "NE R%d, R%d\n", p, q);
      free_reg();
      return p;
    } else if (curr->op_code == OP_GT) {
      int p, q;
      p = evaluateExpr(curr->left);
      q = evaluateExpr(curr->right);
      fprintf(target_file, "GT R%d, R%d\n", p, q);
      free_reg();
      return p;
    } else if (curr->op_code == OP_GE) {
      int p, q;
      p = evaluateExpr(curr->left);
      q = evaluateExpr(curr->right);
      fprintf(target_file, "GE R%d, R%d\n", p, q);
      free_reg();
      return p;
    } else if (curr->op_code == OP_LE) {
      int p, q;
      p = evaluateExpr(curr->left);
      q = evaluateExpr(curr->right);
      fprintf(target_file, "LE R%d, R%d\n", p, q);
      free_reg();
      return p;
    } else if (curr->op_code == OP_LT) {
      int p, q;
      p = evaluateExpr(curr->left);
      q = evaluateExpr(curr->right);
      fprintf(target_file, "LT R%d, R%d\n", p, q);
      free_reg();
      return p;
    }
  } else {
    if (curr->hasval) {
      int p = get_reg();
      if (curr->data_type == TypeLookUp("int") ||
          curr->data_type == TypeLookUp("null"))
        fprintf(target_file, "MOV R%d, %d\n", p, curr->val);
      else
        fprintf(target_file, "MOV R%d, %s\n", p, curr->str);
      return p;

    } else if (curr->type == meathodType) {
      Memberfunclist *currFunction = curr->meathod;
      if (currFunction == NULL)
        printf("Oh oh Big Error");
      // backup regs;
      int ret_reg = 15;
      int backup[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
      for (int i = 0; i < 15; i++) {
        if (regs_t[i] == 1 && i != ret_reg) {
          backup[i] = 1;
          fprintf(target_file, "PUSH R%d\n", i);
        }
      }
      regs_init();

      // evaluate and fill in args
      //    first reverse the list
      struct ArgList *argList = curr->argList;
      struct ArgList *prev = NULL;
      struct ArgList *next = NULL;

      while (argList != NULL) {
        next = argList->next;
        argList->next = prev;
        prev = argList;
        argList = next;
      }
      argList = prev;
      int p;
      int count = 0;
      while (argList != NULL) {
        p = evaluateExpr(argList->expr);
        fprintf(target_file, "PUSH R%d\n", p);
        free_reg();
        argList = argList->next;
        count++;
      }
      // provide for RETURNVALUE
      fprintf(target_file, "PUSH R0\n");
      // call the function
      fprintf(target_file, "CALL LABEL%d\n", currFunction->Flabel);
      // restore all the regs;
      regs_init();
      fprintf(target_file, "POP R%d\n", ret_reg);
      fprintf(target_file, "SUB SP, %d\n", count);
      for (int i = 14; i >= 0; i--) {
        if (backup[i] == 1) {
          regs_t[i] = 1;
          fprintf(target_file, "POP R%d\n", i);
        }
      }
      // pick up the return value
      // p = get_reg();
      // remove args

      p = get_reg();
      fprintf(target_file, "MOV R%d, R15\n", p);

      return p;
    } else if (curr->type == function_type) {
      Gsymbol *currFunction = curr->symbol;
      if (currFunction == NULL)
        printf("Oh oh Big Error");
      // backup regs;
      int ret_reg = 15;
      int backup[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
      for (int i = 0; i < 15; i++) {
        if (regs_t[i] == 1 && i != ret_reg) {
          backup[i] = 1;
          fprintf(target_file, "PUSH R%d\n", i);
        }
      }
      regs_init();

      // evaluate and fill in args
      //    first reverse the list
      struct ArgList *argList = curr->argList;
      struct ArgList *prev = NULL;
      struct ArgList *next = NULL;

      while (argList != NULL) {
        next = argList->next;
        argList->next = prev;
        prev = argList;
        argList = next;
      }
      argList = prev;
      int p;
      int count = 0;
      while (argList != NULL) {
        p = evaluateExpr(argList->expr);
        fprintf(target_file, "PUSH R%d\n", p);
        free_reg();
        argList = argList->next;
        count++;
      }
      // provide for RETURNVALUE
      fprintf(target_file, "PUSH R0\n");
      // call the function
      fprintf(target_file, "CALL LABEL%d\n", currFunction->flabel);
      // restore all the regs;
      regs_init();
      fprintf(target_file, "POP R%d\n", ret_reg);
      fprintf(target_file, "SUB SP, %d\n", count);
      for (int i = 14; i >= 0; i--) {
        if (backup[i] == 1) {
          regs_t[i] = 1;
          fprintf(target_file, "POP R%d\n", i);
        }
      }
      // pick up the return value
      // p = get_reg();
      // remove args

      p = get_reg();
      fprintf(target_file, "MOV R%d, R15\n", p);

      return p;
    } else {
      int p = evaluateRefernece(curr);
      return p;
    }
  }
  return -1;
}

int evaluateRefernece(ExprNode *curr) {
  int p = get_reg();
  int q = getRefernce(curr);
  fprintf(target_file, "MOV R%d, [R%d]\n", p, q);
  free_reg();
  return p;
}

int getRefernce1(ExprNode *curr) {
  if (curr->type == data_t) {
    int p = get_reg();
    Gsymbol *sym = curr->symbol;
    if (curr->isLocal != 1 || sym->Addr >= 4096) {
      fprintf(target_file, "MOV R%d, %d\n", p, sym->Addr);
      return p;
    } else {
      fprintf(target_file, "MOV R%d, BP\n", p);
      fprintf(target_file, "ADD R%d, %d\n", p, sym->Addr);
      return p;
    }
  } else if (curr->type == arr_t) {
    Gsymbol *sym = curr->symbol;
    if (sym->dimensions == 2) {
      int r = get_reg();
      int p = evaluateExpr(curr->left);
      fprintf(target_file, "MOV R%d, R%d\n", r, p);
      fprintf(target_file, "MUL R%d, %d\n", r, sym->columnSize);
      free_reg();
      int q = evaluateExpr(curr->right);
      fprintf(target_file, "ADD R%d, R%d\n", r, q);
      fprintf(target_file, "ADD R%d, %d\n", r, sym->Addr);
      free_reg();
      return r;

    } else {
      int r = get_reg();
      int p = evaluateExpr(curr->left);
      fprintf(target_file, "MOV R%d, %d\n", r, sym->Addr);
      fprintf(target_file, "ADD R%d, R%d\n", r, p);
      free_reg();
      return r;
    }
  }
  printf("error\n");
  return -1;
}

int getRefernce(ExprNode *curr) {
  int p = getRefernce1(curr);
  if (curr->dref == NULL) {
    return p;
  }
  drefList *currdref = curr->dref;
  while (currdref != NULL) {
    int q = get_reg();
    fprintf(target_file, "MOV R%d, [R%d]\n", q, p);
    fprintf(target_file, "MOV R%d, R%d\n", p, q);
    free_reg();
    fprintf(target_file, "ADD R%d, %d\n", p, currdref->offset);
    currdref = currdref->next;
  }
  return p;
}

ExprNode *constructExprNode(ExprNode *root, ExprNode *left, ExprNode *right) {
  root->left = left;
  root->right = right;
  return root;
}

void initializeExprNode(ExprNode *node) { memset(node, 0, sizeof(ExprNode)); }

void initializeSnode(Snode *node) { memset(node, 0, sizeof(Snode)); }

ExprNode *createExprNode(ExprNode node) {
  ExprNode *new_node = myMalloc(sizeof(ExprNode));
  *new_node = node;
  return new_node;
}

Snode *createSnode(Snode temp) {
  Snode *new_node = myMalloc(sizeof(Snode));
  *new_node = temp;
  return new_node;
}

int typeCheck(TypeTable *root, TypeTable *left, TypeTable *right) {
  if ((left == right && left == TypeLookUp("int")) ||
      left == TypeLookUp("null") || right == TypeLookUp("null"))
    return 1;
  printf("TYPE MISMATCH\n");
  exit(1);
}
