#include <stdio.h>
#include <stdlib.h>
#include "constants.h"
#include <string.h>

typedef struct Gsymbol {
    char *name;
    int type;
    int data_type;
    size_t size;
    int rowSize;
    int columnSize;
    int dimensions;
    int Addr;
    struct Gsymbol *next;
} Gsymbol;

typedef struct SymbolsTable {
    Gsymbol *head;
    Gsymbol *tail;
} SymbolsTable;

typedef struct DeclList {
    Gsymbol *sym;
    struct DeclList *next;
} DeclList;

DeclList* createDeclList(Gsymbol *sym, DeclList *next);

Gsymbol* installSymbol(char* name, size_t size, int type);

Gsymbol* searchSymbol(char* name);

Gsymbol* createNewSymbol(char* name, size_t size, int type);

void setType(DeclList *list, int type);

int bindAddr(size_t size);

void initializeSymbolTable();

void printSymbol(Gsymbol *sym, FILE *ptr);
