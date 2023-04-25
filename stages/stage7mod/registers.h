#include <stdio.h>
#include <stdlib.h>


extern int regs_t[16];
typedef int reg_idx;

void regs_init();

void free_reg();

int get_reg();

int min(int,int);

int max(int, int);

void backup_regs();

void restore_regs();
