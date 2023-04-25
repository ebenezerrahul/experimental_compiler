/* Declarations */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"


    int arr[2000];
    char temp[20];
    int curr = 0;
    int ip = 2056;
    int calculating = 1;
%}

/* regular Definations */
newLine "\n"
Label "LABEL "[0-9]+":\n"
Label_SUB "LABEL"[0-9]+"\n"

/* Rules */
%%    
{Label} {

    if(calculating == 1) {

        int n = strlen(yytext); 
        int i;
        for(i = 6; i < n - 2; i++) {
            temp[i - 6] = yytext[i]; 
        }
        temp[i-6] = '\0';
        arr[atoi(temp)] = ip - 16;
        /* printf("%d\n",arr[atoi(temp)]);  */
    }
    else {
    }
}
{newLine} {
    ip = ip + 2;
    printf("\n");
}
{Label_SUB} {
    ip = ip + 2;
    if(calculating == 0){
        int i = 0;
        int n = strlen(yytext); 
        for(i = 5; i < n - 1; i++) {
            temp[i - 5] = yytext[i];
        }
        temp[i-5] = '\0';
        printf("%d\n", arr[atoi(temp)]);
    }
}
%%
/* Auxilary functions */

int yywrap() {
    return 1;
}

int main(int argc, char **argv) {
    
    FILE *fp;
    if(argc > 1) {
        fp = fopen(argv[1],"r");
        if(fp)
            yyin = fp;
    }
    else 
        return 0;
    yylex();
    fclose(fp);
    fp = fopen(argv[1], "r");
    yyin = fp;
    freopen("output.txt", "w", stdout); 
    calculating = 0;
    yylex();
}
