%{
/*** Auxiliary declarations section ***/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "parseTree.h"

extern Snode  * root;
extern FILE *target_file;
extern int main_label;

char *int_string = "int";
char *str_string = "string";
char *self_string = "self";
ClassTable *Cptr;

int getLabel();
struct drefList *createdrefList(char*);
ClassTable *searchClassTable(char *);
%}


%union {
struct Snode *snode;
struct ExprNode *expr;
struct ArgList *argList;
char *str;
struct Memberfunclist *meathodList;
int val;
struct FeildsTable *feilds;
struct TypeTable *type;
struct DeclList *decl;
struct drefList *dref;
struct ParamList *params;
}

 /*** YACC Declarations section ***/
%token BEG END INT STR STRING DECLBEG ENDDECL MAIN RETURN TYPEDEFBEG TYPEDEFEND null_const INITIALIZE ALLOC FREE CLASS ENDCLASS NEW
%type<feilds> FEILD_DEFINATION_ITEM FEILD_DEFINATION_LIST
%type<dref> CURRFEILD
%type<type> TYPEDEFINATION TYPE
%token<val> INT_CONST 
%token<str> STR_CONST ID
%type<params> PARAM PARAMLIST PARAMDEFLIST PARAMLISTMETHOD
%type<argList> ARGLIST
%type<snode> STATEMENT STATEMENTS FREESTATMENT
%type<snode> ASSIGN_STATEMENT 
%type<snode> CONDITIONAL 
%type<snode> WRITE_STATEMENT
%type<snode> READ_STATEMENT
%type<snode> WHILE_STMT
%type<snode> BREAK_STATEMENT
%type<snode> CONTINUE_STATEMENT
%type<decl>  ARRAYDECL GidLIST
%token IF THEN ELSE ENDIF
%token WHILE DO ENDWHILE 
%token BREAK CONTINUE
%token READ WRITE
%type<expr> EXPR REFERENCE  
%type<str> CLASSNAME
%nonassoc NOT
%left AND OR
%nonassoc<expr> EQ NE GE GT LE LT 
%left '%'
%left '+' '-' 
%left '*' '/'
%nonassoc '=' 

%%

/*** Rules Section ***/
start                           : PROGRAM
                                ;


PROGRAM                         : TYPEDEFBLOCK CLASSDEFBLOCK GDECLBLOCK FDEFBLOCK MAINBLOCK
                                | TYPEDEFBLOCK CLASSDEFBLOCK GDECLBLOCK MAINBLOCK 
                                /* | GDECLBLOCK MAINBLOCK */
                                /* | MAINBLOCK */
                                ;


CLASSDEFBLOCK                   : CLASS CLASSDEFLIST ENDCLASS
                                {
                                    initializeFeildTypes();
                                }
                                | CLASS ENDCLASS
                                |
                                ;

CLASSDEFLIST                    : CLASSDEFLIST CLASSDEF 
                                {
                                    initializeLocalSymbolTable();
                                    initializeFeildTypes();
                                }
                                | CLASSDEF
                                {
                                    initializeLocalSymbolTable();
                                    initializeFeildTypes();
                                }
                                ;

CLASSDEF                        : CLASSNAME '{' DECLBEG PRIVATEDECLBLOCK ENDDECL DECLBEG MEATHODDECLBLOCK1 ENDDECL MEATHODDEFBLOCK '}'
                                ;

PRIVATEDECLBLOCK                :  FEILD_DEFINATION_LIST 
                                {
                                    addType(Cptr->name, calculateSizeOfFeilds($<feilds>1), $<feilds>1);
                                    checkForDuplicateFeilds($<feilds>1);
                                    initializeFeildTypes();
                                }
                                | 
                                {
                                    addType(Cptr->name, calculateSizeOfFeilds(NULL), NULL);
                                    checkForDuplicateFeilds(NULL);
                                    initializeFeildTypes();
                                }
                                ;


CLASSNAME                       : ID 
                                {
                                    printf("class name %s\n", $<str>1);
                                    Cptr = ClassTableInstall($<str>1, NULL);
                                }
                                ;

MEATHODDEFBLOCK                 : MEATHODDEFBLOCK MEATHODDEF 
                                | MEATHODDEF
                                ;
MEATHODDECLBLOCK1               : MEATHODDECLBLOCK 
                                {
                                    initializeLocalSymbolTable();
                                    Gsymbol *curr_sym = installLocalSymbol(self_string, 0 , data_t);
                                    curr_sym->data_type = TypeLookUp(ClassTableLookUp(Cptr->name)->name);
                                }

MEATHODDECLBLOCK                : MEATHODDECLBLOCK MEATHODDECL
                                {
                                    initializeLocalSymbolTable();
                                }
                                | MEATHODDECL
                                {
                                    initializeLocalSymbolTable();
                                }
                                ;

MEATHODDECL                     : TYPE ID '(' PARAMLIST ')' ';'
                                {
                                    Gsymbol *curr = installLocalSymbol(self_string, 0 , data_t);
                                    curr->data_type = $<type>1;
                                    ParamList *currParams = createParameter(self_string, $<type>1) ;
                                    currParams->next = $<params>4;
                                    ClassFunctionsInstall(Cptr, $<str>2, currParams, $<type>1);
                                }
                                ;


MEATHODDEF                      : TYPE ID '(' PARAMLIST ')' '{' LDECLBLOCK BODY '}'
                                {
                                    struct ParamList *currParams = createParameter(self_string, $<type>1) ;
                                    currParams->next = $<params>4;
                                    printf("done here -\n");

                                    setFunction_return_type($<type>1);
                                    struct Memberfunclist *currFunction = ClassFunctionLookUp(Cptr, $<str>2);

                                    if(currFunction == NULL || currFunction->data_type != $<type>1 || matchParameters(currFunction->paramlist,currParams) == 0) {
                                        printf("function not declared or No matching parameters");
                                        exit(0);

                                    }

                                    struct ParamList *curr = currParams;
                                    while(curr != NULL) {
                                        //
                                        Gsymbol *temp = searchLocalSymbol(curr->name);
                                        
                                        if(temp != NULL)
                                        {
                                            temp->Addr = getparameterBind();
                                            /* printf("param :%s\n" , temp->name); */
                                        }
                                        curr = curr->next;
                                    }

                                    currFunction->localAddrSpace = calculateLocalVar();
                                    int label_1 = currFunction->Flabel;
                                    fprintf(target_file,"LABEL %d:\n", label_1);
                                    fprintf(target_file,"PUSH BP\n");
                                    fprintf(target_file,"MOV BP, SP\n");
                                    fprintf(target_file,"ADD SP, %d\n", currFunction->localAddrSpace);
                                    printf("done here -\n");
                                    genCode($<snode>8);
                                    fprintf(target_file, "MOV SP, BP\n");
                                    fprintf(target_file, "POP BP\n");
                                    fprintf(target_file, "RET\n");
                                    printf("done here\n");
                                    initializeLocalSymbolTable();
                                    Gsymbol *curr_sym = installLocalSymbol(self_string, 0 , data_t);
                                    curr_sym->data_type = TypeLookUp(ClassTableLookUp(Cptr->name)->name);
                                }
                                ;
                                



TYPEDEFBLOCK                    : TYPEDEFBEG TYPEDEFEND 
                                {
                                    initializeFeildTypes();
                                }
                                | TYPEDEFBEG TYPEDEFLIST TYPEDEFEND 
                                {
                                    initializeFeildTypes();
                                }
                                |
                                {
                                    printf("no custom types\n");
                                    initializeFeildTypes();
                                }
                                ;

TYPEDEFLIST                     : TYPEDEFINATION TYPEDEFLIST
                                | TYPEDEFINATION
                                ;

TYPEDEFINATION                  : ID '{' FEILD_DEFINATION_LIST '}'
                                {
                                    addType($<str>1, calculateSizeOfFeilds($<feilds>3), $<feilds>3);
                                    checkForDuplicateFeilds($<feilds>3);
                                }
                                ;


FEILD_DEFINATION_LIST           : FEILD_DEFINATION_ITEM FEILD_DEFINATION_LIST  
                                {
                                    $<feilds>1->next = $<feilds>2;
                                    $<feilds>$ = $<feilds>1;
                                }
                                | FEILD_DEFINATION_ITEM
                                {
                                    $<feilds>$ = $<feilds>1;
                                }
                                ;

FEILD_DEFINATION_ITEM           : INT ID ';'
                                {
                                    $<feilds>$ = createFeild($<str>2, int_string);
                                }
                                | STRING ID ';'
                                {
                                    $<feilds>$ = createFeild($<str>2, str_string);
                                }
                                | ID ID ';'
                                {
                                    $<feilds>$ = createFeild($<str>2, $<str>1);
                                }
                                ;


GDECLBLOCK                      : DECLBEG ENDDECL
                                | DECLBEG GDECLLIST ENDDECL 
                                |
                                ;

GDECLLIST                       : GDECLLIST GDECL
                                | GDECL
                                ;
GDECL                           : TYPE GidLIST ';'
                                {
                                    setType($<decl>2,$<type>1);   
                                }
                                ;

GidLIST                         : ID ',' GidLIST 
                                {
                                    Gsymbol *curr = installSymbol($<str>1, 1 , data_t);
                                    $<decl>$ = createDeclList(curr,$<decl>3);
                                }
                                | ID
                                {
                                    Gsymbol *curr = installSymbol($<str>1, 1, data_t);
                                    $<decl>$ = createDeclList(curr,NULL);
                                }
                                | ID '(' PARAMDEFLIST ')'
                                {
                                    Gsymbol *curr = installSymbol($<str>1, 0, function_type);
                                    curr->paramList = $<params>3;
                                    $<decl>$ = createDeclList(curr,NULL);
                                }
                                | ID '(' PARAMDEFLIST ')' ',' GidLIST
                                {
                                    Gsymbol *curr = installSymbol($<str>1, 0, function_type);
                                    curr->paramList = $<params>3;
                                    $<decl>$ = createDeclList(curr,$<decl>6);
                                }
                                | ARRAYDECL ',' GidLIST
                                {  
                                    $<decl>1->next = $<decl>3;
                                    $<decl>$ = $<decl>1;
                                }
                                | ARRAYDECL
                                {
                                    $<decl>$ = $<decl>1;
                                }
                                ;

TYPE                            : INT 
                                {
                                    $<type>$ = TypeLookUp("int");
                                }
                                | STRING
                                {
                                    $<type>$ = TypeLookUp("string");
                                }
                                | ID 
                                {
                                    $<type>$ = TypeLookUp($<str>1);
                                }
                                ;

FDEFBLOCK                       : FDEFBLOCK FDEF
                                | FDEF 
                                ;

FDEF                            : TYPE ID '(' PARAMLIST ')' '{' LDECLBLOCK BODY '}'
                                {
                                    setFunction_return_type($<type>1);
                                    struct Gsymbol *currFunction = searchSymbol($<str>2);

                                    if(currFunction == NULL || currFunction->data_type != $<type>1 || matchParameters(currFunction->paramList,$<params>4) == 0) {
                                        printf("function not declared or No matching parameters");
                                        exit(0);
                                    }

                                    struct ParamList *curr = $<params>4;
                                    while(curr != NULL) {
                                        Gsymbol *temp = searchLocalSymbol(curr->name);
                                        if(temp != NULL)
                                            temp->Addr = getparameterBind();
                                        curr = curr->next;
                                    }

                                    currFunction->localAddrSpace = calculateLocalVar();
                                    int label_1 = getLabel();
                                    currFunction->flabel = label_1;
                                    fprintf(target_file,"LABEL %d:\n", label_1);
                                    fprintf(target_file,"PUSH BP\n");
                                    fprintf(target_file,"MOV BP, SP\n");
                                    fprintf(target_file,"ADD SP, %d\n", currFunction->localAddrSpace);
                                    genCode($<snode>8);
                                    initializeLocalSymbolTable();
                                    fprintf(target_file, "MOV SP, BP\n");
                                    fprintf(target_file, "POP BP\n");
                                    fprintf(target_file, "RET\n");
                                }
                                ;

PARAMDEFLIST                    : PARAMLIST 
                                {
                                    initializeLocalSymbolTable();
                                }
                                ;

PARAMLIST                       : PARAM ',' PARAMLIST 
                                {
                                    $<params>$ = $<params>1;
                                    $<params>$->next = $<params>3;

                                }
                                | PARAM 
                                {
                                    $<params>$ = $<params>1;
                                } 
                                | 
                                {
                                    $<params>$ = NULL;
                                }
                                ;

PARAM                           : TYPE ID
                                {
                                    Gsymbol *curr = installLocalSymbol($<str>2, 0 , data_t);
                                    curr->data_type = $<type>1;
                                    $<params>$ = createParameter($<str>2, $<type>1);
                                }
                                ;

LDECLBLOCK                      : DECLBEG ENDDECL
                                | DECLBEG LDECLLIST ENDDECL
                                | 
                                ;

LDECLLIST                       : LDECL ';' LDECLLIST 
                                | LDECL ';'
                                ;

LDECL                           : TYPE LIDLIST 
                                {
                                    setType($<decl>2, $<type>1);
                                }
                                ;

LIDLIST                         : ID ',' LIDLIST 
                                {
                                    Gsymbol *curr = installLocalSymbol($<str>1, 0 , data_t);
                                    curr->Addr = getLocalBind();
                                    $<decl>$ = createDeclList(curr,$<decl>3);
                                }
                                | ID
                                {
                                    Gsymbol *curr = installLocalSymbol($<str>1, 0 , data_t);
                                    curr->Addr = getLocalBind();
                                    $<decl>$ = createDeclList(curr, NULL);
                                }
                                ;

MAINBLOCK                       : INT MAIN '(' ')' '{' LDECLBLOCK BODY '}'
                                {
                                    printf("INMAIN\n");
                                    setFunction_return_type(TypeLookUp("int"));
                                    Gsymbol *currFunction = installSymbol("main", 0,function_type);
                                    int label_1 = main_label;
                                    currFunction->flabel = label_1;
                                    fprintf(target_file,"LABEL %d:\n", label_1);
                                    fprintf(target_file, "ADD SP, %d\n", bindAddr(0) - 4096);
                                    fprintf(target_file,"MOV BP, SP\n");
                                    currFunction->localAddrSpace = calculateLocalVar(); 
                                    fprintf(target_file,"ADD SP, %d\n", currFunction->localAddrSpace);
                                    genCode($<snode>7);
                                    initializeLocalSymbolTable();
                                    fprintf(target_file, "MOV SP, BP\n");
                                    fprintf(target_file, "POP BP\n");
                                    fprintf(target_file, "RET\n");
                                    main_label = label_1;
                                }
                                ;

BODY                            : BEG STATEMENTS END
                                {
                                    $<snode>$ = $<snode>2;
                                }
                                | BEG END
                                ;



/* DECL                            : INT DECLLIST ';' DECL */
/*                                 { */
/*                                     setType($<decl>2,int_type);    */
/*                                 } */
/*                                 | STRING DECLLIST ';' DECL */
/*                                 { */
/*                                     setType($<decl>2, str_type); */
/*                                 } */
/*                                 | STRING DECLLIST ';' */
/*                                 { */
/*                                     setType($<decl>2, str_type); */
/*                                 } */
/*                                 | INT DECLLIST ';'  */
/*                                 { */
/*                                     setType($<decl>2,int_type);    */
/*                                 } */
/*                                 ; */


ARRAYDECL                       : ID '[' INT_CONST ']'
                                {
                                    Gsymbol *curr = installSymbol($<str>1, $<val>3, arr_t);
                                    curr->dimensions = 1;
                                    curr->rowSize = $<val>3;
                                    curr->columnSize = -1;
                                    $<decl>$ = createDeclList(curr,NULL);
                                }
                                | ID '[' INT_CONST ']' '[' INT_CONST']'
                                {
                                    Gsymbol *curr = installSymbol($<str>1, $<val>3 * $<val>6, arr_t);
                                    curr->dimensions = 2;
                                    curr->rowSize = $<val>3;
                                    curr->columnSize = $<val>6;
                                    $<decl>$ = createDeclList(curr,NULL);
                                }
                                ;



STATEMENTS                      : STATEMENT STATEMENTS
                                {
                                    $<snode>$ = $<snode>1;
                                    $<snode>$->next = $<snode>2;
                                }
                                | STATEMENT 
                                {
                                    $<snode>$ = $<snode>1;
                                    $<snode>$->next = NULL;
                                }
                                ;

STATEMENT                       : ASSIGN_STATEMENT ';'
                                {
                                    $<snode>$ = $<snode>1;
                                }
                                | WRITE_STATEMENT ';'
                                {
                                    $<snode>$ = $<snode>1;
                                }
                                | READ_STATEMENT ';'
                                {
                                    $<snode>$ = $<snode>1;
                                }
                                | CONDITIONAL ';'
                                {
                                    $<snode>$ = $<snode>1;
                                }
                                {
                                    $<snode>$ = $<snode>1;
                                }
                                | BREAK_STATEMENT ';'
                                {
                                    $<snode>$ = $<snode>1;
                                }
                                | CONTINUE_STATEMENT ';'
                                {
                                    $<snode>$ = $<snode>1;
                                }
                                | WHILE_STMT ';'
                                {
                                    $<snode>$ = $<snode>1;
                                }
                                | RETURN EXPR ';'
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = return_stmt;
                                    temp.expr = $<expr>2;
                                    $<snode>$ = createSnode(temp);
                                }
                                | INITHEAPSTATEMENT
                                {
                                    $<snode>$ = $<snode>1;
                                }
                                | ALLOCSTATEMENT
                                {
                                    $<snode>$ = $<snode>1;
                                }
                                | FREESTATMENT 
                                {

                                    $<snode>$ = $<snode>1;
                                }
                                ;


FREESTATMENT                    : REFERENCE '=' FREE '(' REFERENCE ')' ';'
                                {

                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = freeStatement;
                                    temp.expr = $<expr>5;
                                    temp.reference = $<expr>1;
                                    $<snode>$ = createSnode(temp);
                                }
                                ;


INITHEAPSTATEMENT               :  REFERENCE '=' INITIALIZE '(' ')' ';' 
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = initializeStatement;
                                    temp.expr = $<expr>3;
                                    temp.reference = $<expr>1;
                                    $<snode>$ = createSnode(temp);
                                }

                                ;
ALLOCSTATEMENT                  :  REFERENCE '=' ALLOC '(' ')' ';' 
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = allocStatement;
                                    temp.expr = $<expr>3;
                                    temp.reference = $<expr>1;
                                    $<snode>$ = createSnode(temp);
                                }
                                | REFERENCE '=' NEW '(' TYPE ')' ';'
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = allocStatement;
                                    temp.expr = $<expr>3;
                                    temp.reference = $<expr>1;
                                    $<snode>$ = createSnode(temp);
                                }
                                ;


ASSIGN_STATEMENT                : REFERENCE '=' EXPR 
                                {
                                    printf("EVALUATING ASSIGNMENT\n");
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = assign_stmt;
                                    temp.expr = $<expr>3;
                                    temp.reference = $<expr>1;
                                    if($<expr>1->data_type != $<expr>3->data_type && $<expr>3->data_type != TypeLookUp("null"))
                                    {
                                        printf("INVALID ASSGIGNMENT\n");
                                        exit(1);
                                    }
                                    $<snode>$ = createSnode(temp);
                                }
                                ;

REF1                            : REFERENCE '.' {
                                $<expr>$ = $<expr>1;

                                }
                                ;

REFERENCE                       : ID 
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    
                                    Gsymbol *curr_sym = searchLocalSymbol($<str>1); 
                                    if(curr_sym == NULL)
                                    {
                                        temp.isLocal = 0;
                                        printf("searching in global scope %s\n", $<str>1);
                                        curr_sym = searchSymbol($<str>1);
                                    }
                                    else 
                                    {
                                        temp.isLocal = 1;
                                    }
                                    if(curr_sym == NULL || curr_sym->type == arr_t) 
                                    {
                                        if(!curr_sym) {
                                            printf("use before declaration\n");
                                        }

                                        yyerror();
                                    }
                                    temp.type = data_t;
                                    temp.data_type = curr_sym->data_type;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 0;
                                    temp.symbol = curr_sym;
                                    $<expr>$ = createExprNode(temp);
                                }
                                | ARRAY
                                {
                                    // check with array declaration
                                    $<expr>$ = $<expr>1;
                                }
                                | ID '.' CURRFEILD
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    
                                    Gsymbol *curr_sym = searchLocalSymbol($<str>1); 
                                    if(curr_sym == NULL)
                                    {
                                        temp.isLocal = 0;
                                        printf("searching in global scope %s\n", $<str>1);
                                        curr_sym = searchSymbol($<str>1);
                                    }
                                    else 
                                    {
                                        temp.isLocal = 1;
                                    }
                                    if(curr_sym == NULL || curr_sym->type == arr_t) 
                                    {
                                        if(!curr_sym) {
                                            printf("use before declaration\n");
                                        }

                                        yyerror();
                                    }
                                    if(strcmp($<str>1, "self") != 0 && searchClassTable(curr_sym->data_type->name) != NULL){
                                        printf("private Var access\n");
                                        exit(1);
                                    }
                                    temp.type = data_t;
                                    temp.data_type = curr_sym->data_type;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 0;
                                    temp.symbol = curr_sym;
                                    $<expr>$ = createExprNode(temp);
                                    $<expr>$->dref = $<dref>3;
                                    $<expr>$->data_type = initDref($<expr>$->data_type, $<dref>3);
                                }
                                | ARRAY '.' CURRFEILD 
                                {
                                    $<expr>$ = $<expr>1;
                                    $<expr>$->dref = $<dref>3;
                                    $<expr>$->data_type = initDref($<expr>$->data_type, $<dref>3);
                                    if(strcmp($<expr>$->symbol->name, "self") != 0 && searchClassTable($<expr>$->symbol->data_type->name) != NULL){
                                        printf("private Var access\n");
                                        exit(1);
                                    }
                                }
                                ;



ARRAY                           : ID '[' EXPR ']'
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    Gsymbol *curr_sym = searchSymbol($<str>1);
                                    if(curr_sym == NULL || curr_sym->type != arr_t || curr_sym->dimensions != 1 || $<expr>3->data_type != TypeLookUp("int"))
                                        yyerror();
                                    temp.data_type = curr_sym->data_type;
                                    temp.type = arr_t;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 1;
                                    temp.isLocal = 0;
                                    temp.symbol = curr_sym;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>3, NULL);
                                }
                                | ID '[' EXPR ']' '[' EXPR ']' 
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    Gsymbol *curr_sym = searchSymbol($<str>1);
                                    if(curr_sym == NULL || curr_sym->type != arr_t || curr_sym->dimensions != 2 || $<expr>3->data_type != TypeLookUp("int")|| $<expr>6->data_type != TypeLookUp("int"))
                                        yyerror();
                                    temp.data_type = curr_sym->data_type;
                                    temp.type = arr_t;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.isLocal = 0;
                                    temp.is_arr = 1;
                                    temp.symbol = curr_sym;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>3, $<expr>6);
                                }
                                ;


WRITE_STATEMENT                 : WRITE '(' EXPR ')'
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = write_stmt;
                                    temp.expr = $<expr>3;
                                    $<snode>$ = createSnode(temp);
                                }
                                ;

READ_STATEMENT                  : READ '(' REFERENCE ')'
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = read_stmt;
                                    temp.reference = $<expr>3;
                                    $<snode>$ = createSnode(temp);
                                }
                                ;

CONDITIONAL                     : IF EXPR THEN STATEMENTS ENDIF
                                {
                                    if($<expr>2->data_type != TypeLookUp("bool")) {
                                    printf("error expected boolen!\n");
                                    exit(0);
                                    }
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = if_stmt;
                                    temp.expr = $<expr>2;
                                    temp.left = $<snode>4;
                                    $<snode>$ = createSnode(temp);
                                }
                                | IF EXPR THEN STATEMENTS ELSE STATEMENTS ENDIF
                                {
                                    if($<expr>2->data_type != TypeLookUp("bool")) {
                                    printf("error expected boolen!\n");
                                    exit(0);
                                    }
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = if_stmt;
                                    temp.expr = $<expr>2;
                                    temp.left = $<snode>4;
                                    temp.right = $<snode>6;
                                    $<snode>$ = createSnode(temp);
                                }
                                ;

WHILE_STMT                      : WHILE EXPR DO STATEMENTS ENDWHILE
                                {
                                    if($<expr>2->data_type != TypeLookUp("bool")) {
                                    printf("error expected boolen!\n");
                                    exit(0);
                                    }
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = while_stmt;
                                    temp.expr = $<expr>2;
                                    temp.left = $<snode>4;
                                    $<snode>$ = createSnode(temp);
                                }
                                ;

CONTINUE_STATEMENT              : CONTINUE
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = continue_stmt;
                                    $<snode>$ = createSnode(temp);
                                }
                                ;

BREAK_STATEMENT                 : BREAK
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = break_stmt;
                                    $<snode>$ = createSnode(temp);
                                }
                                ;

EXPR                            : '(' EXPR ')' 
                                {
                                    $<expr>$ = $<expr>2;
                                }
                                | EXPR '+' EXPR
                                {
                                    typeCheck(TypeLookUp("int"), $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_ADD;
                                    temp.data_type = TypeLookUp("int");
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR '-' EXPR
                                {
                                    typeCheck(TypeLookUp("int"), $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_SUB;
                                    temp.data_type = TypeLookUp("int");
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR '*' EXPR 
                                {
                                    typeCheck(TypeLookUp("int"), $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_MUL;
                                    temp.data_type = TypeLookUp("int");
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR '/' EXPR 
                                {
                                    typeCheck(TypeLookUp("int"), $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_DIV;
                                    temp.data_type = TypeLookUp("int");
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR '%' EXPR 
                                {
                                    typeCheck(TypeLookUp("int"), $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_MOD;
                                    temp.data_type = TypeLookUp("int");
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR EQ EXPR
                                {
                                    typeCheck(TypeLookUp("bool"), $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_EQ;
                                    temp.data_type = TypeLookUp("bool");
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR NE EXPR
                                {
                                 
                                    typeCheck(TypeLookUp("bool"), $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_NE;
                                    temp.data_type = TypeLookUp("bool");
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR GT EXPR
                                {
                                    typeCheck(TypeLookUp("bool"), $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_GT;
                                    temp.data_type = TypeLookUp("bool");
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);

                                }
                                | EXPR GE EXPR
                                {
                                    typeCheck(TypeLookUp("bool"), $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_GE;
                                    temp.data_type = TypeLookUp("bool");
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR LE EXPR
                                {
                                    typeCheck(TypeLookUp("bool"), $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_LE;
                                    temp.data_type = TypeLookUp("bool");
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR LT EXPR
                                {
                                    typeCheck(TypeLookUp("bool"), $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_LT;
                                    temp.data_type = TypeLookUp("bool");
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | REFERENCE 
                                {
                                    $<expr>$ = $<expr>1;
                                }
                                | INT_CONST
                                {
                                    ExprNode temp; 
                                    initializeExprNode(&temp);
                                    temp.is_op = 0;
                                    temp.data_type = TypeLookUp("int");
                                    temp.hasval = 1;
                                    temp.val = $<val>1;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, NULL, NULL);
                                }
                                | null_const
                                {
                                    ExprNode temp; 
                                    initializeExprNode(&temp);
                                    temp.is_op = 0;
                                    temp.data_type = TypeLookUp("null");
                                    temp.hasval = 1;
                                    temp.val = 0;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, NULL, NULL); 
                                }
                                | STR_CONST
                                {
                                    ExprNode temp; 
                                    initializeExprNode(&temp);
                                    temp.is_op = 0;
                                    temp.data_type = TypeLookUp("string");
                                    temp.hasval = 1;
                                    temp.str = $<str>1;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, NULL, NULL);
                                }
                                | EXPR AND EXPR 
                                {
                                    if($<expr>1->data_type != $<expr>3->data_type || $<expr>1->data_type != TypeLookUp("bool"))
                                    {
                                        printf("LOGIAL OP ONLY BETWEEN BOOLEANS!\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_AND;
                                    temp.data_type = TypeLookUp("bool");
                                    temp.hasval = 0;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR OR EXPR 
                                {
                                    if($<expr>1->data_type != $<expr>3->data_type || $<expr>1->data_type != TypeLookUp("bool"))
                                    {
                                        printf("LOGIAL OP ONLY BETWEEN BOOLEANS!\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_OR;
                                    temp.data_type = TypeLookUp("bool");
                                    temp.hasval = 0;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);

                                }
                                | NOT EXPR 
                                {
                                    if($<expr>2->data_type != TypeLookUp("bool"))
                                    {
                                        printf("LOGIAL OP ONLY BETWEEN BOOLEANS!\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_NOT;
                                    temp.data_type = TypeLookUp("bool");
                                    temp.hasval = 0;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>2, NULL);

                                }
                                | ID '(' ARGLIST ')'
                                {
                                    struct Gsymbol *currFunction = searchSymbol($<str>1);
                                    if(currFunction == NULL || currFunction->type != function_type || checkArguments(currFunction, $<argList>3) == 0) {
                                        printf("function call Not found! or No Matching Arguments\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.type = function_type;
                                    temp.data_type = currFunction->data_type;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 0;
                                    temp.symbol = currFunction;
                                    $<expr>$ = createExprNode(temp);
                                    $<expr>$->argList = $<argList>3;
                                    constructExprNode($<expr>$, NULL, NULL);
                                }
                                | ID '.' ID '(' ARGLIST ')'
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    
                                    Gsymbol *curr_sym = searchLocalSymbol($<str>1); 
                                    if(curr_sym == NULL)
                                    {
                                        temp.isLocal = 0;
                                        printf("searching in global scope %s\n", $<str>1);
                                        curr_sym = searchSymbol($<str>1);
                                    }
                                    else 
                                    {
                                        temp.isLocal = 1;
                                    }
                                    if(curr_sym == NULL || curr_sym->type == arr_t) 
                                    {
                                        if(!curr_sym) {
                                            printf("use before declaration\n");
                                        }

                                        yyerror();
                                    }
                                    temp.type = data_t;
                                    temp.data_type = curr_sym->data_type;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 0;
                                    temp.symbol = curr_sym;
                                    struct ExprNode *currExpr = createExprNode(temp);
                                    struct ArgList *currArg = createNewArg(currExpr);
                                    currArg->next = $<argList>5;

                                    struct ClassTable *currClass = ClassTableLookUp(curr_sym->data_type->name);
                                    struct Memberfunclist *currFunction = ClassFunctionLookUp(currClass, $<str>3);
                                    currExpr->data_type = currFunction->data_type;
                                    if(currFunction == NULL){ // checkArguments(currFunction, currArg) == 0) {
                                        printf("function call Not found! or No Matching Arguments\n");
                                        exit(0);
                                    }
                                    ExprNode temp1;
                                    initializeExprNode(&temp);
                                    temp1.type = meathodType;
                                    temp1.data_type = currFunction->data_type;
                                    temp1.is_op = 0;
                                    temp1.hasval = 0;
                                    temp1.is_arr = 0;
                                    temp1.symbol = NULL;
                                    temp1.meathod = currFunction;
                                    $<expr>$ = createExprNode(temp1);
                                    $<expr>$->argList = currArg;
                                    constructExprNode($<expr>$, NULL, NULL);

                                }
                                | ID '.' ID '.' ID '(' ARGLIST ')'
                                {
                                    if(strcmp("self", $<str>1) == 1) {
                                        printf("it should be self\n");
                                        exit(1);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    
                                    Gsymbol *curr_sym = searchLocalSymbol($<str>1); 
                                    if(curr_sym == NULL)
                                    {
                                        temp.isLocal = 0;
                                        printf("searching in global scope %s\n", $<str>1);
                                        curr_sym = searchSymbol($<str>1);
                                    }
                                    else 
                                    {
                                        temp.isLocal = 1;
                                    }
                                    if(curr_sym == NULL || curr_sym->type == arr_t) 
                                    {
                                        if(!curr_sym) {
                                            printf("use before declaration\n");
                                        }

                                        yyerror();
                                    }
                                    temp.type = data_t;
                                    temp.data_type = curr_sym->data_type;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 0;
                                    temp.symbol = curr_sym;
                                    struct drefList *currDref = createdrefList($<str>3);
                                    struct ExprNode *currExpr = createExprNode(temp);
                                    currExpr->dref = currDref;
                                    currExpr->data_type = initDref(currExpr->data_type, currDref);
                                    struct ArgList *currArg = createNewArg(currExpr);
                                    currArg->next = $<argList>7;

                                    struct ClassTable *currClass = ClassTableLookUp(currExpr->data_type->name);
                                    struct Memberfunclist *currFunction = ClassFunctionLookUp(currClass, $<str>5);
                                    currExpr->data_type = currFunction->data_type;
                                    if(currFunction == NULL){ // checkArguments(currFunction, currArg) == 0) {
                                        printf("function call Not found! or No Matching Arguments\n");
                                        exit(0);
                                    }
                                    ExprNode temp1;
                                    initializeExprNode(&temp);
                                    temp1.type = meathodType;
                                    temp1.data_type = currFunction->data_type;
                                    temp1.is_op = 0;
                                    temp1.hasval = 0;
                                    temp1.is_arr = 0;
                                    temp1.symbol = NULL;
                                    temp1.meathod = currFunction;
                                    $<expr>$ = createExprNode(temp1);
                                    $<expr>$->argList = currArg;
                                    constructExprNode($<expr>$, NULL, NULL);
                                }
                                /* | ID '.' ID '(' ARGLIST ')'                           { */
                                /**/
                                /*     struct ExprNode *currExpr = $<expr>1; */
                                /*     struct ArgList *currArg = createNewArg(currExpr); */
                                /*     currArg->next = $<argList>5; */
                                /**/
                                /*     struct ClassTable *currClass = ClassTableLookUp(currExpr->data_type->name); */
                                /*     struct Memberfunclist *currFunction = ClassFunctionLookUp(currClass, $<str>3); */
                                /*     currExpr->data_type = currFunction->data_type; */
                                /*     if(currFunction == NULL){ // checkArguments(currFunction, currArg) == 0) { */
                                /*         printf("function call Not found! or No Matching Arguments\n"); */
                                /*         exit(0); */
                                /*     } */
                                /*     ExprNode temp1; */
                                /*     initializeExprNode(&temp); */
                                /*     temp1.type = meathodType; */
                                /*     temp1.data_type = currFunction->data_type; */
                                /*     temp1.is_op = 0; */
                                /*     temp1.hasval = 0; */
                                /*     temp1.is_arr = 0; */
                                /*     temp1.symbol = NULL; */
                                /*     temp1.meathod = currFunction; */
                                /*     $<expr>$ = createExprNode(temp1); */
                                /*     $<expr>$->argList = currArg; */
                                /*     constructExprNode($<expr>$, NULL, NULL); */
                                /* } */
                                ;


ARGLIST                         : EXPR ',' ARGLIST
                                {
                                    $<expr>1->isLocal = 1;
                                    struct ArgList *currArg = createNewArg($<expr>1);
                                    currArg->next = $<argList>3;
                                    $<argList>$ = currArg;
                                }
                                | EXPR
                                {
                                    $<expr>1->isLocal = 1;
                                    struct ArgList *currArg = createNewArg($<expr>1);
                                    $<argList>$ = currArg;
                                }
                                | 
                                {
                                    $<argList>$ = NULL;
                                } 
                                ;


CURRFEILD                       : ID '.' CURRFEILD 
                                { 
                                    $<dref>$ = createdrefList($<str>1);
                                    $<dref>$->next = $<dref>3;
                                }
                                | ID
                                {
                                    $<dref>$ = createdrefList($<str>1);
                                }
                                ;
%%


/*** Auxiliary functions section ***/

yyerror(char const *s)
{
    printf("yyerror :\t%s\n",s);
    exit(1);
}


