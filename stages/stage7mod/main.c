#include "parseTree.h"
#include "registers.h"
#include "y.tab.h"
#include <stdio.h>
#include <stdlib.h>

int regs_t[16];
int res;
Snode *root;
FILE *target_file;
int main_label;

void traverseStatements(Snode *curr) {
  while (curr) {
    printf("stmt type : %d\n", curr->stmt_type);
    curr = curr->next;
  }
}

int getLabel();
int main(int argc, char *argv[]) {
  extern FILE *yyin;
  if (argc > 1) {
    FILE *fp = fopen(argv[1], "r");
    if (fp)
      yyin = fp;
  }
  for (int i = 0; i < 16; i++) {
    regs_t[i] = 0;
  }
  target_file = fopen("expr.xsm", "w");
  root = NULL;
  createTypeTable();
  ClassTableINIT();
  main_label = getLabel();
  fprintf(target_file, "%d\nLABEL%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, main_label,
          0, 0, 0, 0, 0, 0);
  initializeSymbolTable();
  initializeLocalSymbolTable();
  regs_init();
  yyparse();
  // traverseStatements(root);
  genCode(root);
  printf("Code Generated!\n");
  fclose(target_file);
}
