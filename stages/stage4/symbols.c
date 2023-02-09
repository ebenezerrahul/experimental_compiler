#include "symbols.h"
#include "wrapper.h"

Gsymbol temp;

const int BASE_ADDR = 4096;

SymbolsTable symbols;

Gsymbol* installSymbol(char* name, size_t size,int type){
    
    printf("installing symbol\n");
    if(searchSymbol(name))
    {
        printf("Variable already declared!\n");
        exit(0);
    }

    Gsymbol *new_sym = createNewSymbol(name, size, type);
    new_sym->next = symbols.head->next;
    symbols.head->next = new_sym;
    printf("installed symbol\n");
    return new_sym;
}

Gsymbol *searchSymbol(char *name) {
    
    Gsymbol *start = symbols.head->next;
    
    if(start == NULL)
        return NULL;

    Gsymbol *curr = start;

    while(curr != NULL) {
        
        if(strcmp(name, curr->name) == 0)
        {
            printf("found symbol\n");
            return curr;
        }
        
        curr = curr->next;
    }

    return NULL;
}

Gsymbol* createNewSymbol(char* name, size_t size, int type)
{
    printf("creating Symbol\n");
    Gsymbol *new_sym = (Gsymbol*) myMalloc(sizeof(Gsymbol));
    new_sym->name = name;
    new_sym->size = size;
    new_sym->type = type;
    new_sym->Addr = bindAddr(size);
    return new_sym;
}

int bindAddr(size_t size) {
    printf("binding Address to symbol\n");
    static int curr = BASE_ADDR;
    int addr = curr;
    curr += size;
    return addr;
}


DeclList* createDeclList(Gsymbol *sym, DeclList *next){
    DeclList *new_decl = myMalloc(sizeof(DeclList));
    memset(new_decl, 0, sizeof(DeclList));
    new_decl->next = next;
    new_decl->sym = sym;
    return new_decl;
}

void initializeSymbolTable(){
    memset(&temp, 0, sizeof(Gsymbol));
    symbols.head = &temp;
    temp.next = NULL;
    symbols.tail = NULL;
    printf("symbols initialized\n");
}

void printSymbols() {

    Gsymbol *start = symbols.head->next;

    FILE *fptr = fopen("symboldata.json", "w");

    if(!fptr){
        printf("unable to write to file");
        return;
    }

    fprintf(fptr, "{\n");

    while(1) {
        printSymbol(start, fptr);
        start = start->next;
        if(start) fprintf(fptr, ",\n");
        else break;
    }

    fprintf(fptr, "}\n");

}

void setType(DeclList *list, int type){
    printf("Setting Type\n");
    while(list) {
        list->sym->data_type = type;
        list = list->next;
    }
}

void printSymbol(Gsymbol *sym, FILE *fptr){
    
    fprintf(fptr, "{\n");

    fprintf(fptr, "name\t:%s,\n",sym->name);

    if(sym->type == data_t)
        fprintf(fptr, "type\t:data_t,\n");

    if(sym->type == arr_t)
        fprintf(fptr, "type\t:arr_t,\n");
    
    if(sym->data_type == int_type)
        fprintf(fptr, "data_type\t:int,\n");

    if(sym->data_type == str_type)
        fprintf(fptr, "data_type\t:string,\n");

    fprintf(fptr,"size\t:%d,\n", (int)sym->size);

    if(sym->type == arr_t){
        fprintf(fptr, "rowSize\t: %d,\n", sym->rowSize);
        if(sym->dimensions > 2)
            fprintf(fptr, "columnSize\t: %d,\n", sym->columnSize);
    }

    fprintf(fptr, "}\n");
}
