#define MAX_STACK_SIZE 2000
#include <stdio.h>
#include <stdlib.h>

int break_stack[MAX_STACK_SIZE];
int continue_stack[MAX_STACK_SIZE];

int stack_top = -1;

int getLabel() {
    static int curr = -1;
    curr = curr + 1;
    return curr;
}

void inWhile(int bLabel, int cLabel){

    stack_top++;
    if (stack_top >= MAX_STACK_SIZE)
    {
        printf("SIZE LIMIT EXEEDED STACK\n");
        exit(1);
    }
    break_stack[stack_top] = bLabel;
    continue_stack[stack_top] = cLabel;

}

int getBreakLabel() {

    if(stack_top >= 0 && stack_top < MAX_STACK_SIZE)
    {
        return break_stack[stack_top];
    }
    return -1;
}

int getContinueLabel() {
    if(stack_top >= 0 && stack_top < MAX_STACK_SIZE)
    {
        return continue_stack[stack_top];
    }
    return -1;
}

void exitWhile(){
    if (stack_top  < 0)
    {
        printf("SIZE LIMIT EXEEDED STACK\n");
        exit(1);
    }
    stack_top--;
}
