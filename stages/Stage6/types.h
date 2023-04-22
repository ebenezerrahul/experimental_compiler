typedef struct TypeTable {
  char *name;
  int size;
  struct FeildsTable *feilds;
  struct TypeTable *next;
} TypeTable;

typedef struct FeildsTable {
  char *name;
  int size;
  struct TypeTable *type;
  char *type_name;
  struct FeildsTable *next;
} FeildsTable;

typedef struct drefList {
  char *name;
  int offset;
  TypeTable *type;
  struct drefList *next;
} drefList;

TypeTable *TypeLookUp(char *name);

void addType(char *name, int size, FeildsTable *feilds);

void createTypeTable();

FeildsTable *createFeild(char *name, char *type_name);

int calculateSizeOfFeilds(FeildsTable *curr);

void initializeFeildTypes();

int getFeildOffset(TypeTable *currType, char *FeildName);

FeildsTable *feildsLookup(TypeTable *currType, char *FeildName);

TypeTable *initDref(TypeTable *currType, drefList *curr);

drefList *createdrefList(char *name);
