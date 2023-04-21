#include "keywords.h"
#include "y.tab.h"
#include <string.h>

keyword keywords[] = {
    "if",     IF,      "else",     ELSE,     "then",    THEN,       "endif",
    ENDIF,    "while", WHILE,      "do",     DO,        "endwhile", ENDWHILE,
    "break",  BREAK,   "continue", CONTINUE, "begin",   BEG,        "end",
    END,      "read",  READ,       "write",  WRITE,     "string",   STRING,
    "int",    INT,     "decl",     DECLBEG,  "enddecl", ENDDECL,    "and",
    AND,      "or",    OR,         "not",    NOT,       "main",     MAIN,
    "return", RETURN,  0,          0};

relop relops[] = {
    "==", EQ, "!=", NE, ">=", GE, "<=", LE, ">", GE, "<", LT, 0, 0};

keyword *keywordLookup(char *inp) {
  keyword *k;
  for (k = keywords; k->str; k++) {
    if (strcmp(inp, k->str) == 0)
      return k;
  }

  return NULL;
}

relop *relopLookup(char *inp) {
  relop *r;
  for (r = relops; r->str; r++) {
    if (strcmp(inp, r->str) == 0)
      return r;
  }

  return 0;
}
