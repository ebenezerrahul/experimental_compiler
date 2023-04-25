#include "y.tab.h"
#include <string.h>

typedef int token;

typedef struct keyword 
{
    char *str;
    token t;
} 

keyword;

typedef struct relop 
{
    char *str;
    token t;
} 

relop;

keyword* keywordLookup(char *inp);

relop* relopLookup(char *inp);
