%{
/*** Auxiliary declarations section ***/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
%}


%union {
char* str;
}

 /*** YACC Declarations section ***/
%token <str>INTEGER op_brace closing_brace endline
%left ADD SUB
%left MUL DIV

%%

/*** Rules Section ***/
start : expr endline { printf("%s\n" , $<str>1); exit(0);}
      ;
     
expr : expr ADD expr {
    char *temp = malloc((strlen($<str>1) + strlen($<str>2) + strlen($<str>3) + 2) * sizeof(char)); 
    $<str>$ = temp; temp[0] = '\0'; 
    strcat(temp,$<str>1); 
    strcat(temp, " ");
    strcat(temp,$<str>3), 
    strcat(temp, " ");
    strcat(temp,$<str>2);
}
     | expr SUB expr {
    
    char *temp = malloc((2 + strlen($<str>1) + strlen($<str>2) + strlen($<str>3)) * sizeof(char)); 
    $<str>$ = temp; temp[0] = '\0'; 
    strcat(temp,$<str>1); 
    strcat(temp, " ");
    strcat(temp,$<str>3), 
    strcat(temp, " ");
    strcat(temp,$<str>2);
}
     | expr MUL expr {

    char *temp = malloc((2 + strlen($<str>1) + strlen($<str>2) + strlen($<str>3)) * sizeof(char)); 
    $<str>$ = temp; temp[0] = '\0'; 
    strcat(temp,$<str>1); 
    strcat(temp, " ");
    strcat(temp,$<str>3), 
    strcat(temp, " ");
    strcat(temp,$<str>2);
     }
     | expr DIV expr {
    char *temp = malloc((2 + strlen($<str>1) + strlen($<str>2) + strlen($<str>3)) * sizeof(char)); 
    $<str>$ = temp; temp[0] = '\0'; 
    strcat(temp,$<str>1); 
    strcat(temp, " ");
    strcat(temp,$<str>3), 
    strcat(temp, " ");
    strcat(temp,$<str>2);
    }
     | op_brace expr closing_brace {
    $<str>$ = $<str>2;
}
     | INTEGER {$<str>$ = $<str>1;}
     ;


%%


/*** Auxiliary functions section ***/

yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(int argc, char *argv[]) {

    /*if(argc > 1) {*/
        /*FILE *fp = fopen(argv[1],"r");*/
        /*if(fp)*/
            /*yyin = fp;*/
    /*}*/

    yyparse();

    return 1;
}
