#include "class.h"
#include "constants.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ArgList {
  struct ExprNode *expr;
  struct ArgList *next;
} ArgList;

typedef struct ExprNode {
  int type;
  TypeTable *data_type;
  int is_op;
  int is_arr;
  int op_code;
  int hasval;
  int val;
  int isLocal;
  Memberfunclist *meathod;
  struct drefList *dref;
  char *str;
  struct Gsymbol *symbol;
  struct ExprNode *left, *right;
  struct ArgList *argList;
} ExprNode;

typedef struct Gsymbol {
  char *name;
  int type;
  TypeTable *data_type;
  size_t size;
  int rowSize;
  int columnSize;
  int dimensions;
  int Addr;
  int localAddrSpace;
  struct Gsymbol *next;
  struct ParamList *paramList;
  int flabel;
} Gsymbol;

typedef struct SymbolsTable {
  Gsymbol *head;
  Gsymbol *tail;
} SymbolsTable;

typedef struct DeclList {
  Gsymbol *sym;
  struct DeclList *next;
} DeclList;

int getLocalBind();
int getparameterBind();
DeclList *createDeclList(Gsymbol *sym, DeclList *next);

Gsymbol *installSymbol(char *name, size_t size, int type);

Gsymbol *installLocalSymbol(char *, size_t, int);

Gsymbol *searchSymbol(char *name);

Gsymbol *searchLocalSymbol(char *name);

Gsymbol *createNewSymbol(char *name, size_t size, int type);

void setType(DeclList *list, TypeTable *type);

int bindAddr(size_t size);

void initializeSymbolTable();
void initializeLocalSymbolTable();

struct ArgList *createNewArg(struct ExprNode *);

struct ParamList *createParameter(char *name, TypeTable *data_type);

void printSymbol(Gsymbol *sym, FILE *ptr);
int checkArguments(Gsymbol *currFunction, struct ArgList *argList);

int matchParameters(struct ParamList *a, struct ParamList *b);
int calculateLocalVar();
