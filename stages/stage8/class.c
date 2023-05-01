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

ClassTable *getAllClassTable() { return TempClassHead.next; }

void setMeathodOffsets(ClassTable *currClass) {
  Memberfunclist *currFunc = currClass->Mfuncptr;
  int offset = 0;
  while (currFunc != NULL) {
    currFunc->FunctionOffset = offset;
    offset++;
    currFunc = currFunc->next;
  }
}

ClassTable *ClassTableLookUp(char *cname) {
  ClassTable *curr = searchClassTable(cname);
  if (curr != NULL)
    return curr;
  printf("Class Not Found\n");
  exit(1);
}

Memberfunclist *copyMeathods(Memberfunclist *curr) {
  Memberfunclist *retVal, *cpy, *prev;
  prev = NULL;
  retVal = NULL;
  int count = 0;
  printf("copyMeathods\n");
  while (curr != NULL) {
    cpy = (Memberfunclist *)malloc(sizeof(Memberfunclist));
    *cpy = *curr;
    cpy->next = NULL;
    if (prev != NULL)
      prev->next = cpy;
    prev = cpy;
    if (count == 0)
      retVal = cpy;
    count++;
    curr = curr->next;
  }
  printf("copyMeathods count :%d\n", count);
  return retVal;
}

ClassTable *getLastClass(ClassTable *curr) {
  ClassTable *prev = NULL;
  while (curr != NULL) {
    prev = curr;
    curr = curr->next;
  }
  return prev;
}
int getVptr();
ClassTable *ClassTableInstall(char *cname, char *parentName) {
  if (searchClassTable(cname) != NULL) {
    printf("Class Already Exists\n");
    exit(1);
  }

  ClassTable *newCLass = (ClassTable *)malloc(sizeof(ClassTable));
  memset(newCLass, 0, sizeof(ClassTable));
  newCLass->name = cname;

  if (parentName != NULL) {
    newCLass->Parentptr = ClassTableLookUp(parentName);
    newCLass->Mfuncptr = copyMeathods(newCLass->Parentptr->Mfuncptr);
    newCLass->Memberfields = newCLass->Parentptr->Memberfields;
  } else {
    newCLass->Parentptr = NULL;
  }
  ClassTable *last = getLastClass(&TempClassHead);
  last->next = newCLass;
  newCLass->VfuncAddr = getVptr();
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
int matchParameters(ParamList *, ParamList *);

Memberfunclist *getLast(Memberfunclist *curr) {
  Memberfunclist *prev = NULL;
  while (curr != NULL) {
    prev = curr;
    curr = curr->next;
  }
  return prev;
}

void ClassFunctionsInstall(ClassTable *currClass, char *fname,
                           struct ParamList *paramlist, TypeTable *retType) {
  if (searchMemberFunction(currClass, fname) != NULL) {
    if (currClass->Parentptr == NULL) {
      printf("Already Meathod with same Name Exists\n");
      exit(1);
    } else if (matchParameters(
                   ClassFunctionLookUp(currClass, fname)->paramlist->next,
                   paramlist->next) == 1 &&
               ClassFunctionLookUp(currClass, fname)->data_type == retType) {
      Memberfunclist *currFunc = ClassFunctionLookUp(currClass, fname);
      currFunc->Flabel = getLabel();
      currFunc->localAddrSpace = 0;
      return;
    }
    printf("ERROR FUNC INSTALL\n");
    exit(1);
  }
  Memberfunclist *newFunc = (Memberfunclist *)malloc(sizeof(Memberfunclist));
  newFunc->next = NULL;
  newFunc->paramlist = paramlist;
  newFunc->name = fname;
  newFunc->data_type = retType;
  newFunc->Flabel = getLabel();
  newFunc->localAddrSpace = 0;
  newFunc->next = NULL;
  if (currClass->Mfuncptr == NULL) {
    currClass->Mfuncptr = newFunc;
  } else {
    Memberfunclist *last = getLast(currClass->Mfuncptr);
    last->next = newFunc;
  }
}

void setFunctionOffset(ClassTable *CurrClass) {
  int offset = 0;
  Memberfunclist *currFunc = CurrClass->Mfuncptr;
  while (currFunc != NULL) {
    currFunc->FunctionOffset = offset;
    printf("currFunc : %s , curroffset :%d\n", currFunc->name,
           currFunc->FunctionOffset);
    offset++;
    currFunc = currFunc->next;
  }
}

void ClassCompatibleCheck(ClassTable *AClass, ClassTable *BClass) {
  ClassTable *parent = BClass;
  while (parent != AClass && parent != NULL) {
    parent = parent->Parentptr;
  }
  if (parent == AClass)
    return;
  printf("Incompatible variable for Class");
  exit(1);
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
