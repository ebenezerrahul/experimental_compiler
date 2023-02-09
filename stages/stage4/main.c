#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
#include "parseTree.h"
#include "registers.h"

int regs_t[16];
int res;
Snode* root;
FILE* target_file;

void traverseStatements(Snode *curr) {
    while(curr) {
        printf("stmt type : %d\n", curr->stmt_type);
        curr = curr->next;
    }
}

int main(int argc, char*argv[]) {
    extern FILE* yyin;
    if(argc > 1) {
        FILE *fp = fopen(argv[1],"r");
        if(fp)
            yyin = fp;
    }
    for(int i = 0; i < 16; i++){
        regs_t[i] = 0;
    }
    target_file = fopen("expr.xsm", "w");
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 2056,0,0,0,0,0,0);
    initializeSymbolTable();
    regs_init();
    yyparse();
    fprintf(target_file,"MOV SP, %d\n", bindAddr(0) + 1);
    traverseStatements(root);
    genCode(root);
    printf("Code Generated!\n");
    fclose(target_file);
    
}
