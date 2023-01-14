/* Declarations */
%{
    #include <stdio.h>
    #include <stdlib.h>
    FILE *fout;
%}
/* regular Definations */
LINE_COMMENTS \/\/.*\n$
MULTILINE_COMMENTS "/*".*"*/"


/* Rules */
%%

{LINE_COMMENTS} {
    fprintf(fout,"%s\n", yytext);
}
{MULTILINE_COMMENTS} {
    fprintf(fout,"%s\n", yytext);
}
    

%%
/* Auxilary functions */

int yywrap() {
    return 1;
}

int main(int argc, char *argv[]) {
    
    fout = fopen("out.txt","w");
    if(argc > 1) {
        FILE *fp = fopen(argv[1],"r");
        if(fp)
            yyin = fp;
    }

    yylex();

    return 1;
}
