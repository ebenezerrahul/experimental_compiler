%{
/*** Auxiliary declarations section ***/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "parseTree.h"

extern Snode  * root;
extern FILE *target_file;
extern int main_label;

%}


%union {
struct Snode *snode;
struct ExprNode *expr;
struct ArgList *argList;
char *str;
int val;
struct DeclList *decl;
struct ParamList *params;
}

 /*** YACC Declarations section ***/
%token BEG END INT STR STRING DECLBEG ENDDECL MAIN RETURN
%token<val> INT_CONST 
%token<str> STR_CONST ID
%type<params> PARAM PARAMLIST PARAMDEFLIST
%type<argList> ARGLIST
%type<snode> STATEMENT STATEMENTS 
%type<snode> ASSIGN_STATEMENT 
%type<snode> CONDITIONAL 
%type<snode> WRITE_STATEMENT
%type<snode> READ_STATEMENT
%type<snode> WHILE_STMT
%type<snode> BREAK_STATEMENT
%type<snode> CONTINUE_STATEMENT
%type<decl>  ARRAYDECL GidLIST
%type<val> TYPE
%token IF THEN ELSE ENDIF
%token WHILE DO ENDWHILE 
%token BREAK CONTINUE
%token READ WRITE
%type<expr> EXPR REFERENCE 
%nonassoc NOT
%left AND OR
%nonassoc<expr> EQ NE GE GT LE LT 
%left '+' '-' 
%left '*' '/'
%nonassoc '=' 

%%

/*** Rules Section ***/
start                           : PROGRAM
                                ;


PROGRAM                         : GDECLBLOCK FDEFBLOCK MAINBLOCK 
                                | GDECLBLOCK MAINBLOCK
                                | MAINBLOCK
                                ;

GDECLBLOCK                      : DECLBEG ENDDECL
                                | DECLBEG GDECLLIST ENDDECL 
                                ;

GDECLLIST                       : GDECLLIST GDECL
                                | GDECL
                                ;

GDECL                           : TYPE GidLIST ';'
                                {
                                    setType($<decl>2,$<val>1);   
                                }
                                /* | TYPE ID '(' PARAMDEFLIST ')' ';' */
                                /* { */
                                /*     Gsymbol *curr = installSymbol($<str>2, 0, function_type); */
                                /*     curr->data_type = $<val>1; */
                                /*     curr->paramList = $<params>4; */
                                /* } */
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
                                    $<val>$ = int_type;
                                }
                                | STRING
                                {
                                    $<val>$ = str_type;
                                }
                                ;

FDEFBLOCK                       : FDEFBLOCK FDEF
                                | FDEF 
                                ;

FDEF                            : TYPE ID '(' PARAMLIST ')' '{' LDECLBLOCK BODY '}'
                                {
                                    setFunction_return_type($<val>1);
                                    printf("$val>1 :%d\n",$<val>1);
                                    struct Gsymbol *currFunction = searchSymbol($<str>2);

                                    if(currFunction == NULL || currFunction->data_type != $<val>1 || matchParameters(currFunction->paramList,$<params>4) == 0) {
                                        printf("function not declared or No matching parameters");
                                        exit(0);
                                    }

                                    struct ParamList *curr = $<params>4;
                                    while(curr != NULL) {
                                        /* printf(" curr->name :%s\n", curr->name); */
                                        Gsymbol *temp = searchLocalSymbol(curr->name);
                                        if(temp != NULL)
                                        {
                                            temp->Addr = getparameterBind();
                                            /* printf("parameter bind %d", temp->Addr); */
                                        }
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
                                    curr->data_type = $<val>1;
                                    $<params>$ = createParameter($<str>2, $<val>1);
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
                                    setType($<decl>2, $<val>1);
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

MAINBLOCK                       : INT MAIN  '(' ')' '{' LDECLBLOCK BODY '}'
                                {
                                    setFunction_return_type(int_type);
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
                                ;


ASSIGN_STATEMENT                : REFERENCE '=' EXPR 
                                {
                                    printf("EVALUATING ASSIGNMENT\n");
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = assign_stmt;
                                    temp.expr = $<expr>3;
                                    temp.reference = $<expr>1;
                                    if($<expr>1->data_type != $<expr>3->data_type)
                                    {
                                        printf("INVALID ASSGIGNMENT\n");
                                        exit(1);
                                    }
                                    $<snode>$ = createSnode(temp);
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
                                ;


ARRAY                           : ID '[' EXPR ']'
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    Gsymbol *curr_sym = searchSymbol($<str>1);
                                    if(curr_sym == NULL || curr_sym->type != arr_t || curr_sym->dimensions != 1 || $<expr>3->data_type != int_type)
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
                                    if(curr_sym == NULL || curr_sym->type != arr_t || curr_sym->dimensions != 2 || $<expr>3->data_type != int_type|| $<expr>6->data_type != int_type)
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
                                    if($<expr>2->data_type != bool_type) {
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
                                    if($<expr>2->data_type != bool_type) {
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
                                    if($<expr>2->data_type != bool_type) {
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
                                    typeCheck(int_type, $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_ADD;
                                    temp.data_type = int_type;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR '-' EXPR
                                {
                                    typeCheck(int_type, $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_SUB;
                                    temp.data_type = int_type;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR '*' EXPR 
                                {
                                    typeCheck(int_type, $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_MUL;
                                    temp.data_type = int_type;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR '/' EXPR 
                                {
                                    typeCheck(int_type, $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_DIV;
                                    temp.data_type = int_type;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR EQ EXPR
                                {
                                    typeCheck(bool_type, $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_EQ;
                                    temp.data_type = bool_type;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR NE EXPR
                                {
                                 
                                    typeCheck(bool_type, $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_NE;
                                    temp.data_type = bool_type;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR GT EXPR
                                {
                                    typeCheck(bool_type, $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_GT;
                                    temp.data_type = bool_type;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);

                                }
                                | EXPR GE EXPR
                                {
                                    typeCheck(bool_type, $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_GE;
                                    temp.data_type = bool_type;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR LE EXPR
                                {
                                    typeCheck(bool_type, $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_LE;
                                    temp.data_type = bool_type;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR LT EXPR
                                {
                                    typeCheck(bool_type, $<expr>1->data_type, $<expr>3->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_LT;
                                    temp.data_type = bool_type;
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
                                    temp.data_type = int_type;
                                    temp.hasval = 1;
                                    temp.val = $<val>1;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, NULL, NULL);
                                }
                                | STR_CONST
                                {
                                    ExprNode temp; 
                                    initializeExprNode(&temp);
                                    temp.is_op = 0;
                                    temp.data_type = str_type;
                                    temp.hasval = 1;
                                    temp.str = $<str>1;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, NULL, NULL);
                                }
                                | EXPR AND EXPR 
                                {
                                    if($<expr>1->data_type != $<expr>3->data_type && $<expr>1->data_type != bool_type)
                                    {
                                        printf("LOGIAL OP ONLY BETWEEN BOOLEANS!\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_AND;
                                    temp.data_type = bool_type;
                                    temp.hasval = 0;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);
                                }
                                | EXPR OR EXPR 
                                {
                                    if($<expr>1->data_type != $<expr>3->data_type && $<expr>1->data_type != bool_type)
                                    {
                                        printf("LOGIAL OP ONLY BETWEEN BOOLEANS!\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_OR;
                                    temp.data_type = bool_type;
                                    temp.hasval = 0;
                                    $<expr>$ = createExprNode(temp);
                                    constructExprNode($<expr>$, $<expr>1, $<expr>3);

                                }
                                | NOT EXPR 
                                {
                                    if($<expr>2->data_type != bool_type)
                                    {
                                        printf("LOGIAL OP ONLY BETWEEN BOOLEANS!\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_NOT;
                                    temp.data_type = bool_type;
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

%%


/*** Auxiliary functions section ***/

yyerror(char const *s)
{
    printf("yyerror :\t%s\n",s);
    exit(1);
}


