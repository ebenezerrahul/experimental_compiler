/* Declarations */
%{
    #include <stdio.h>
    #include <stdlib.h>
    int numFloats = 0;
    int numInts = 0;
%}

/* regular Definations */
INT [+-]?[0-9]+
ILLEGAL [+-]?.[0-9]+
FLOAT [+-]?[0-9]+.[0-9]+

/* Rules */
%%

{INT} {
        numInts++;
      }
{FLOAT} {
        numFloats++;
        }
{ILLEGAL} {
          }
%%
/* Auxilary functions */

int yywrap() {
    return 1;
}

int main(int argc, char *argv[]) {

    if(argc > 1) {
        FILE *fp = fopen(argv[1],"r");
        if(fp)
            yyin = fp;
    }

    yylex();
    printf("numInts=%d\n",numInts);
    printf("numFloats=%d\n",numFloats);

    return 1;
}
