#include <stdio.h>
#include <stdlib.h>
#include "exprtree.h"
#include <string.h>

int regs_st[2401];

void free_reg() {
    for(int i = 15; i >= 0; i--){
        if(regs_t[i] == 1) {
            regs_t[i] = 0;
            printf("freeing R%d\n", i);
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
            printf("Allocating R%d\n", i);
            return i;
        }
    }
    printf("ran out of registers\n");
    exit(1);
    return 0;
}

/*void backup_regs() {*/
    /*int st_top = regs_st[2400];*/
    /*for(int i = 0; i < 16; i++) {*/
        /*if (regs_t[i] == 1) {*/
            /*fprintf(target_file,"PUSH R%d\n", i);*/
            /*st_top++;*/
            /*regs_st[st_top] = i;*/
        /*}*/
    /*} */
    /*st_top++;*/
    /*regs_st[st_top] = -2;*/

    /*if(st_top >= 4001) {*/
        /*printf("error\n");*/
    /*}*/
/*}*/

/*void restore_regs() {*/
    /*int st_top = regs_st[2400];*/
    /*for(int i = st_top - 1; i >= 0; i--){*/
        /*if(regs_st[st_top] == -2) {*/
            /*return ;*/
        /*}*/
        
        /*else if(regs_st[st_top] == -1) {*/
            /*printf("error\n");*/
            /*return;*/
        /*}*/
        
        /*fprintf(target_file,"POP R%d\n", regs_st[i]);*/
        
    /*}*/
/*}*/

void regs_init() {

    for(int i = 0; i < 16; i++) {
        regs_t[i] = 0;
    }

    /*for(int i = 0; i < 2400; i++) {*/
        /*regs_st[i] = -1;*/
    /*}*/
    /*regs_st[2400] = -1;*/
}
