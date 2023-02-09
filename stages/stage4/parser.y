%{
/*** Auxiliary declarations section ***/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "parseTree.h"

extern Snode  * root;

%}


%union {
struct Snode *snode;
struct ExprNode *expr;
char *str;
int val;
struct DeclList *decl;
}

 /*** YACC Declarations section ***/
%token BEG END INT STRING DECLBEG ENDDECL
%token<val> INT_CONST
%token<str> STR_CONST ID
%type<snode> STATEMENT STATEMENTS 
%type<snode> ASSIGN_STATEMENT 
%type<snode> CONDITIONAL 
%type<snode> WRITE_STATEMENT
%type<snode> READ_STATEMENT
%type<snode> WHILE_STMT
%type<snode> BREAK_STATEMENT
%type<snode> CONTINUE_STATEMENT
%type<decl> DECLLIST ARRAYDECL
%token IF THEN ELSE ENDIF
%token WHILE DO ENDWHILE 
%token BREAK CONTINUE
%token READ WRITE
%type<expr> EXPR REFERENCE 
%nonassoc<expr> EQ NE GE GT LE LT 
%left '+' '-' 
%left '*' '/'
%nonassoc '='

%%

/*** Rules Section ***/
start                           : DECLSECTION PROGRAM
                                ;

DECLSECTION                     : DECLBEG DECL ENDDECL 
                                ;



DECL                            : INT DECLLIST ';' DECL
                                {
                                    setType($<decl>2,int_type);   
                                }
                                | STRING DECLLIST ';' DECL
                                {
                                    setType($<decl>2, str_type);
                                }
                                | STRING DECLLIST ';'
                                {
                                    setType($<decl>2, str_type);
                                }
                                | INT DECLLIST ';' 
                                {
                                    setType($<decl>2,int_type);   
                                }
                                ;

DECLLIST                         : ID ',' DECLLIST 
                                {
                                    Gsymbol *curr = installSymbol($<str>1, 1 , data_t);
                                    $<decl>$ = createDeclList(curr,$<decl>3);
                                }
                                | ID
                                {
                                    Gsymbol *curr = installSymbol($<str>1, 1, data_t);
                                    $<decl>$ = createDeclList(curr,NULL);
                                }
                                | ARRAYDECL ',' DECLLIST
                                {  
                                    $<decl>1->next = $<decl>3;
                                    $<decl>$ = $<decl>1;
                                }
                                | ARRAYDECL
                                {
                                    $<decl>$ = $<decl>1;
                                }
                                ;

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


PROGRAM                         : BEG END 
                                | BEG STATEMENTS END 
                                {
                                    root = $<snode>2;
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
                                ;


ASSIGN_STATEMENT                : REFERENCE '=' EXPR 
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = assign_stmt;
                                    temp.expr = $<expr>3;
                                    temp.reference = $<expr>1;
                                    $<snode>$ = createSnode(temp);
                                }
                                ;

REFERENCE                       : ID 
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    Gsymbol *curr_sym = searchSymbol($<str>1);
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
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = if_stmt;
                                    temp.expr = $<expr>2;
                                    temp.left = $<snode>4;
                                    $<snode>$ = createSnode(temp);
                                }
                                | IF EXPR THEN STATEMENTS ELSE STATEMENTS ENDIF
                                {
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
                                ;

%%


/*** Auxiliary functions section ***/

yyerror(char const *s)
{
    printf("yyerror :\t%s\n",s);
    exit(1);
}


