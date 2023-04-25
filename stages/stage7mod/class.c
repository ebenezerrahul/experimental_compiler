#include "class.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ClassTable TempClassHead;

void ClassTableINIT() { TempClassHead.next = NULL; }

ClassTable *searchClassTable(char *cname) {
  ClassTable *curr = TempClassHead.next;
  while (curr != NULL) {
    if (strcmp(cname, curr->name) == 0)
      return curr;
    curr = curr->next;
  }
  return NULL;
}

ClassTable *ClassTableLookUp(char *cname) {
  ClassTable *curr = searchClassTable(cname);
  if (curr != NULL)
    return curr;
  printf("Class Not Found\n");
  exit(1);
}

ClassTable *ClassTableInstall(char *cname, char *parentName) {

  if (searchClassTable(cname) != NULL) {
    printf("Class Already Exists\n");
    exit(1);
  }

  ClassTable *newCLass = (ClassTable *)malloc(sizeof(ClassTable));
  memset(newCLass, 0, sizeof(ClassTable));
  newCLass->name = cname;

  if (parentName != NULL)
    newCLass->Parentptr = searchClassTable(parentName);
  newCLass->next = TempClassHead.next;
  TempClassHead.next = newCLass;
  return newCLass;
}

Memberfunclist *searchMemberFunction(ClassTable *currClass, char *fname) {
  Memberfunclist *curr = currClass->Mfuncptr;
  while (curr != NULL) {
    if (strcmp(curr->name, fname) == 0)
      return curr;
    curr = curr->next;
  }
  return NULL;
}

int getLabel();
void ClassFunctionsInstall(ClassTable *currClass, char *fname,
                           struct ParamList *paramlist, TypeTable *retType) {

  if (searchMemberFunction(currClass, fname) != NULL) {
    printf("Already Meathod with same Name Exists\n");
    exit(1);
  }
  Memberfunclist *newFunc = (Memberfunclist *)malloc(sizeof(Memberfunclist));
  newFunc->next = NULL;
  newFunc->paramlist = paramlist;
  newFunc->name = fname;
  newFunc->data_type = retType;
  newFunc->Flabel = getLabel();
  newFunc->localAddrSpace = 0;
  if (currClass->Mfuncptr == NULL) {
    currClass->Mfuncptr = newFunc;
  } else {
    newFunc->next = currClass->Mfuncptr;
    currClass->Mfuncptr = newFunc;
  }
}

Memberfunclist *ClassFunctionLookUp(ClassTable *currClass, char *fname) {
  Memberfunclist *curr = searchMemberFunction(currClass, fname);
  if (curr != NULL)
    return curr;
  printf("No such Meathod Exists\n");
  exit(1);
}

FeildsTable *searchMemberFeild(ClassTable *currClass, char *MemberName) {
  FeildsTable *curr = currClass->Memberfields;
  while (curr != NULL) {
    if (strcmp(curr->name, MemberName) == 0)
      return curr;
    curr = curr->next;
  }
  return NULL;
}

void ClassMemberInstall(ClassTable *currClass, char *MemberName) {
  if (searchMemberFeild(currClass, MemberName) != NULL) {
    printf("Member Already Present\n");
    exit(1);
  }
  // FeildsTable *newFeild = createFeild(char *name, char *type_name);
}
// Memberfunclist *createMeathod(char *name, ParamList *params, TypeTable *type)
// {
//   Memberfunclist *newFunc = (Memberfunclist *)malloc(sizeof(Memberfunclist));
//   newFunc->next = NULL;
//   newFunc->paramlist = params;
//   newFunc->data_type = type;
// }
