#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int regs_st[2401];
extern int regs_t[];

void free_reg() {
  for (int i = 15; i >= 0; i--) {
    if (regs_t[i] == 1) {
      regs_t[i] = 0;
      printf("freeing R%d\n", i);
      return;
    }
  }
  printf("no regs to free\n");
  exit(1);
  return;
}

int min(int a, int b) {
  if (a < b)
    return a;
  return b;
}

int max(int a, int b) {
  if (a < b) {
    return b;
  }
  return a;
}

int get_reg() {
  for (int i = 0; i < 16; i++) {
    if (regs_t[i] == 0) {
      regs_t[i] = 1;
      printf("Allocating R%d\n", i);
      return i;
    }
  }
  printf("ran out of registers\n");
  exit(1);
  return 0;
}

void regs_init() {

  for (int i = 0; i < 16; i++) {
    regs_t[i] = 0;
  }
}
