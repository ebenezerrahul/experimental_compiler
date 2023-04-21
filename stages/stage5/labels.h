extern int* break_stack;
extern int* continue_stack;

extern int stack_top;

int getLabel();

int inWhile(int bLabel, int cLabel);

int getBreakLabel();

int getContinueLabel();

int exitWhile();
