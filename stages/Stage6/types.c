#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

TypeTable tempHead;

TypeTable *TypeLookUp(char *name) {
  TypeTable *curr = tempHead.next;
  while (curr) {
    if (strcmp(curr->name, name) == 0)
      return curr;
    curr = curr->next;
  }
  printf("Type Not Found\n");
  exit(1);
  return NULL;
}

TypeTable *TypeLookUp1(char *name) {
  TypeTable *curr = tempHead.next;
  while (curr) {
    if (strcmp(curr->name, name) == 0)
      return curr;
    curr = curr->next;
  }
  return NULL;
}
void addType(char *name, int size, FeildsTable *feilds) {
  if (TypeLookUp1(name) != NULL) {
    printf("Arleady Type Exits\n");
    exit(1);
  }
  TypeTable *newType = (TypeTable *)malloc(sizeof(TypeTable));
  newType->name = name;
  newType->size = size;
  newType->feilds = feilds;
  newType->next = tempHead.next;
  tempHead.next = newType;
}

void createTypeTable() {
  tempHead.next = NULL;
  addType("int", 1, NULL);
  addType("string", 1, NULL);
  addType("bool", 1, NULL);
  addType("null", 1, NULL);
  printf("table created\n");
}

FeildsTable *createFeild(char *name, char *type_name) {
  FeildsTable *newFeild = (FeildsTable *)malloc(sizeof(FeildsTable));
  newFeild->name = name;
  newFeild->size = 1;
  newFeild->type_name = type_name;
  newFeild->next = NULL;
  return newFeild;
}

void SetTypesForFeilds(FeildsTable *feilds) {
  FeildsTable *curr = feilds;
  while (curr != NULL) {
    curr->type = TypeLookUp(curr->type_name);
    curr = curr->next;
  }
}

void initializeFeildTypes() {
  TypeTable *currType = tempHead.next;
  while (currType != NULL) {
    FeildsTable *currFeild = currType->feilds;
    SetTypesForFeilds(currFeild);
    currType = currType->next;
  }
}

int isPrimitiveType(char *name) {
  if (strcmp(name, "int") == 0 || strcmp(name, "string") == 0)
    return 1;
  return 0;
}

int calculateSizeOfFeilds(FeildsTable *curr) {
  int size = 0;
  while (curr != NULL) {
    size += 1;
    curr = curr->next;
  }
  if (size > 8) {
    printf("dynamic allocator in library only allows size upto 8\n");
    exit(1);
  }
  return size;
}

int getFeildOffset(TypeTable *currType, char *FeildName) {
  FeildsTable *curr = currType->feilds;
  int currOffset = 0;
  while (curr != NULL) {
    if (strcmp(curr->name, FeildName) == 0)
      return currOffset;
    currOffset++;
    curr = curr->next;
  }
  printf("No such Feild Exists");
  exit(1);
  return 0;
}

FeildsTable *feildsLookup(TypeTable *currType, char *FeildName) {
  FeildsTable *curr = currType->feilds;
  while (curr != NULL) {
    if (strcmp(curr->name, FeildName) == 0)
      return curr;
    curr = curr->next;
  }
  printf("No Such Feild for Var");
  exit(1);
  return NULL;
}

drefList *createdrefList(char *name) {
  drefList *curr = (drefList *)malloc(sizeof(drefList));
  curr->name = name;
  curr->next = NULL;
  return curr;
}

TypeTable *initDref(TypeTable *currType, drefList *curr) {
  TypeTable *newType = currType;
  while (curr != NULL) {
    newType = feildsLookup(currType, curr->name)->type;
    curr->type = newType;
    curr->offset = getFeildOffset(currType, curr->name);
    curr = curr->next;
    currType = newType;
  }
  return currType;
}
