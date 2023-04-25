#include "constants.h"
#include "symbols.h"
#include "wrapper.h"

void setFunction_return_type(TypeTable *return_type);
// ExprNode Types
/*
 * intconsts
 * strconsts
 *
 * operators-types
 *  Logial operators
 *      AND OR NOT
 *  Relational operators
 *      EQ LE GE NE LT GT
 *  Algebric operators
 *      ADD SUB MUL DIV
 *  Uniary operators
 *      DEREFERNCING OPERATOR
 *
 * reference-types
 *  identifier
 *  indexing Refernece
 */

// typedef struct ExprNode {
//     int type;
//     int data_type;
//     int is_op;
//     int is_arr;
//     int op_code;
//     int hasval;
//     int val;
//     char *str;
//     struct Gsymbol *symbol;
//     struct ExprNode *left, *right;
// } ExprNode;

typedef struct Snode {
  int stmt_type;
  ExprNode *expr;
  ExprNode *reference;
  struct Snode *left;
  struct Snode *right;
  struct Snode *next;
} Snode;

void genCode(Snode *curr);

void genCodeStmt(Snode *curr);

int evaluateExpr(ExprNode *curr);

int evaluateRefernece(ExprNode *curr);

int getRefernce(ExprNode *ref);

ExprNode *createExprNode(ExprNode node);

int typeCheck(TypeTable *, TypeTable *, TypeTable *);

void initializeExprNode(ExprNode *node);

void initializeSnode(Snode *temp);

Snode *createSnode(Snode temp);

ExprNode *constructExprNode(ExprNode *root, ExprNode *left, ExprNode *right);
