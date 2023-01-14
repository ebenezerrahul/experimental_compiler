/* Declarations */
%{
    #include <stdio.h>
    #include <stdlib.h>
    int wc = 0;
    int numLines = 0;
    int numChars = 0;
%}

/* regular Definations */

new_line \n
word [a-zA-Z0-9]+
other [  ]+


/* Rules */
%%
{new_line} {
            numLines++;
            numChars++;
           }

{word} {
        wc++;
        numChars+= yyleng;
       }

{other} {
            numChars += yyleng;
            printf("%d\n", yyleng);
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
    printf("Num Lines : %d\nNum Words : %d\nNum Chars : %d\n", numLines, wc, numChars);
    return 1;
}
