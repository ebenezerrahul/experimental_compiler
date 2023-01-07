%option noyywrap
%{
	#include <stdlib.h>
	#include <stdio.h>
%}
	
number [0-9]+
op [*|-|+\|/|=]
 
%%
 
{number} {printf("Found : %d\n",atoi(yytext));}
{op} {printf("Opeator Found %s\n", yytext);}
 
%%
 
int main()
{
	yylex();
	return 1;
}
