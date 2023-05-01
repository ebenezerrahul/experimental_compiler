#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ParamList {
  char *name;
  TypeTable *data_type;
  struct ParamList *next;
} ParamList;

typedef struct ClassTable {
  char *name;
  struct FeildsTable *Memberfields;
  struct Memberfunclist *Mfuncptr;
  struct ClassTable *Parentptr;
  int Class_index;
  int Fieldcount;
  int Methodcount;
  int VfuncAddr;
  struct ClassTable *next;
} ClassTable;

typedef struct Memberfunclist {
  char *name;
  struct TypeTable *data_type;
  struct ParamList *paramlist;
  int Flabel;
  int FunctionOffset;
  struct Memberfunclist *next;
  int localAddrSpace;
} Memberfunclist;

Memberfunclist *ClassMemberLookUp(ClassTable *currClass, char *fname);

ClassTable *ClassTableLookUp(char *cname);

ClassTable *ClassTableInstall(char *name, char *parentName);

void setMeathodOffsets(ClassTable *currClass);

Memberfunclist *ClassFunctionLookUp(ClassTable *currClass, char *fname);

void ClassFunctionsInstall(ClassTable *currClass, char *fname,
                           struct ParamList *paramlist, TypeTable *retType);

void ClassMemberInstall(ClassTable *currClass, char *MemberName);

Memberfunclist *createMeathod(char *name, ParamList *params, TypeTable *type);

void ClassCompatibleCheck(ClassTable *AClass, ClassTable *BClass);
ClassTable *getAllClassTable();
