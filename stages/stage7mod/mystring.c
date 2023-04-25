#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copyString(const char *curr_str) {
  char *new_string = (char *)myMalloc(strlen(curr_str));
  return new_string;
}
