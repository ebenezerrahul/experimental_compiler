/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

/*** Auxiliary declarations section ***/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "parseTree.h"

extern Snode  * root;
extern FILE *target_file;
extern int main_label;
extern int LAST_BASE;

char *int_string = "int";
char *str_string = "string";
char *self_string = "self";
ClassTable *Cptr;

int getLabel();
struct drefList *createdrefList(char*);
ClassTable *searchClassTable(char *);

#line 94 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BEG = 258,                     /* BEG  */
    END = 259,                     /* END  */
    INT = 260,                     /* INT  */
    STR = 261,                     /* STR  */
    STRING = 262,                  /* STRING  */
    DECLBEG = 263,                 /* DECLBEG  */
    ENDDECL = 264,                 /* ENDDECL  */
    MAIN = 265,                    /* MAIN  */
    RETURN = 266,                  /* RETURN  */
    TYPEDEFBEG = 267,              /* TYPEDEFBEG  */
    TYPEDEFEND = 268,              /* TYPEDEFEND  */
    null_const = 269,              /* null_const  */
    INITIALIZE = 270,              /* INITIALIZE  */
    ALLOC = 271,                   /* ALLOC  */
    FREE = 272,                    /* FREE  */
    CLASS = 273,                   /* CLASS  */
    ENDCLASS = 274,                /* ENDCLASS  */
    NEW = 275,                     /* NEW  */
    EXTENDS = 276,                 /* EXTENDS  */
    BREAKPONIT = 277,              /* BREAKPONIT  */
    INT_CONST = 278,               /* INT_CONST  */
    STR_CONST = 279,               /* STR_CONST  */
    ID = 280,                      /* ID  */
    IF = 281,                      /* IF  */
    THEN = 282,                    /* THEN  */
    ELSE = 283,                    /* ELSE  */
    ENDIF = 284,                   /* ENDIF  */
    WHILE = 285,                   /* WHILE  */
    DO = 286,                      /* DO  */
    ENDWHILE = 287,                /* ENDWHILE  */
    BREAK = 288,                   /* BREAK  */
    CONTINUE = 289,                /* CONTINUE  */
    READ = 290,                    /* READ  */
    WRITE = 291,                   /* WRITE  */
    NOT = 292,                     /* NOT  */
    AND = 293,                     /* AND  */
    OR = 294,                      /* OR  */
    EQ = 295,                      /* EQ  */
    NE = 296,                      /* NE  */
    GE = 297,                      /* GE  */
    GT = 298,                      /* GT  */
    LE = 299,                      /* LE  */
    LT = 300                       /* LT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define BEG 258
#define END 259
#define INT 260
#define STR 261
#define STRING 262
#define DECLBEG 263
#define ENDDECL 264
#define MAIN 265
#define RETURN 266
#define TYPEDEFBEG 267
#define TYPEDEFEND 268
#define null_const 269
#define INITIALIZE 270
#define ALLOC 271
#define FREE 272
#define CLASS 273
#define ENDCLASS 274
#define NEW 275
#define EXTENDS 276
#define BREAKPONIT 277
#define INT_CONST 278
#define STR_CONST 279
#define ID 280
#define IF 281
#define THEN 282
#define ELSE 283
#define ENDIF 284
#define WHILE 285
#define DO 286
#define ENDWHILE 287
#define BREAK 288
#define CONTINUE 289
#define READ 290
#define WRITE 291
#define NOT 292
#define AND 293
#define OR 294
#define EQ 295
#define NE 296
#define GE 297
#define GT 298
#define LE 299
#define LT 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "parser.y"

struct Snode *snode;
struct ExprNode *expr;
struct ArgList *argList;
char *str;
struct Memberfunclist *meathodList;
int val;
struct FeildsTable *feilds;
struct TypeTable *type;
struct DeclList *decl;
struct drefList *dref;
struct ParamList *params;

#line 251 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BEG = 3,                        /* BEG  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_STR = 6,                        /* STR  */
  YYSYMBOL_STRING = 7,                     /* STRING  */
  YYSYMBOL_DECLBEG = 8,                    /* DECLBEG  */
  YYSYMBOL_ENDDECL = 9,                    /* ENDDECL  */
  YYSYMBOL_MAIN = 10,                      /* MAIN  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_TYPEDEFBEG = 12,                /* TYPEDEFBEG  */
  YYSYMBOL_TYPEDEFEND = 13,                /* TYPEDEFEND  */
  YYSYMBOL_null_const = 14,                /* null_const  */
  YYSYMBOL_INITIALIZE = 15,                /* INITIALIZE  */
  YYSYMBOL_ALLOC = 16,                     /* ALLOC  */
  YYSYMBOL_FREE = 17,                      /* FREE  */
  YYSYMBOL_CLASS = 18,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 19,                  /* ENDCLASS  */
  YYSYMBOL_NEW = 20,                       /* NEW  */
  YYSYMBOL_EXTENDS = 21,                   /* EXTENDS  */
  YYSYMBOL_BREAKPONIT = 22,                /* BREAKPONIT  */
  YYSYMBOL_INT_CONST = 23,                 /* INT_CONST  */
  YYSYMBOL_STR_CONST = 24,                 /* STR_CONST  */
  YYSYMBOL_ID = 25,                        /* ID  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_THEN = 27,                      /* THEN  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_ENDIF = 29,                     /* ENDIF  */
  YYSYMBOL_WHILE = 30,                     /* WHILE  */
  YYSYMBOL_DO = 31,                        /* DO  */
  YYSYMBOL_ENDWHILE = 32,                  /* ENDWHILE  */
  YYSYMBOL_BREAK = 33,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 34,                  /* CONTINUE  */
  YYSYMBOL_READ = 35,                      /* READ  */
  YYSYMBOL_WRITE = 36,                     /* WRITE  */
  YYSYMBOL_NOT = 37,                       /* NOT  */
  YYSYMBOL_AND = 38,                       /* AND  */
  YYSYMBOL_OR = 39,                        /* OR  */
  YYSYMBOL_EQ = 40,                        /* EQ  */
  YYSYMBOL_NE = 41,                        /* NE  */
  YYSYMBOL_GE = 42,                        /* GE  */
  YYSYMBOL_GT = 43,                        /* GT  */
  YYSYMBOL_LE = 44,                        /* LE  */
  YYSYMBOL_LT = 45,                        /* LT  */
  YYSYMBOL_46_ = 46,                       /* '%'  */
  YYSYMBOL_47_ = 47,                       /* '+'  */
  YYSYMBOL_48_ = 48,                       /* '-'  */
  YYSYMBOL_49_ = 49,                       /* '*'  */
  YYSYMBOL_50_ = 50,                       /* '/'  */
  YYSYMBOL_51_ = 51,                       /* '='  */
  YYSYMBOL_52_ = 52,                       /* '{'  */
  YYSYMBOL_53_ = 53,                       /* '}'  */
  YYSYMBOL_54_ = 54,                       /* '('  */
  YYSYMBOL_55_ = 55,                       /* ')'  */
  YYSYMBOL_56_ = 56,                       /* ';'  */
  YYSYMBOL_57_ = 57,                       /* ','  */
  YYSYMBOL_58_ = 58,                       /* '['  */
  YYSYMBOL_59_ = 59,                       /* ']'  */
  YYSYMBOL_60_ = 60,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 61,                  /* $accept  */
  YYSYMBOL_start = 62,                     /* start  */
  YYSYMBOL_PROGRAM = 63,                   /* PROGRAM  */
  YYSYMBOL_CLASSDEFBLOCK = 64,             /* CLASSDEFBLOCK  */
  YYSYMBOL_CLASSDEFLIST = 65,              /* CLASSDEFLIST  */
  YYSYMBOL_CLASSDEF = 66,                  /* CLASSDEF  */
  YYSYMBOL_PRIVATEDECLBLOCK = 67,          /* PRIVATEDECLBLOCK  */
  YYSYMBOL_CLASSNAME = 68,                 /* CLASSNAME  */
  YYSYMBOL_MEATHODDEFBLOCK = 69,           /* MEATHODDEFBLOCK  */
  YYSYMBOL_MEATHODDECLBLOCK1 = 70,         /* MEATHODDECLBLOCK1  */
  YYSYMBOL_MEATHODDECLBLOCK = 71,          /* MEATHODDECLBLOCK  */
  YYSYMBOL_MEATHODDECL = 72,               /* MEATHODDECL  */
  YYSYMBOL_MEATHODDEF = 73,                /* MEATHODDEF  */
  YYSYMBOL_TYPEDEFBLOCK = 74,              /* TYPEDEFBLOCK  */
  YYSYMBOL_TYPEDEFLIST = 75,               /* TYPEDEFLIST  */
  YYSYMBOL_TYPEDEFINATION = 76,            /* TYPEDEFINATION  */
  YYSYMBOL_FEILD_DEFINATION_LIST = 77,     /* FEILD_DEFINATION_LIST  */
  YYSYMBOL_FEILD_DEFINATION_ITEM = 78,     /* FEILD_DEFINATION_ITEM  */
  YYSYMBOL_GDECLBLOCK = 79,                /* GDECLBLOCK  */
  YYSYMBOL_GDECLLIST = 80,                 /* GDECLLIST  */
  YYSYMBOL_GDECL = 81,                     /* GDECL  */
  YYSYMBOL_GidLIST = 82,                   /* GidLIST  */
  YYSYMBOL_TYPE = 83,                      /* TYPE  */
  YYSYMBOL_FDEFBLOCK = 84,                 /* FDEFBLOCK  */
  YYSYMBOL_FDEF = 85,                      /* FDEF  */
  YYSYMBOL_PARAMDEFLIST = 86,              /* PARAMDEFLIST  */
  YYSYMBOL_PARAMLIST = 87,                 /* PARAMLIST  */
  YYSYMBOL_PARAM = 88,                     /* PARAM  */
  YYSYMBOL_LDECLBLOCK = 89,                /* LDECLBLOCK  */
  YYSYMBOL_LDECLLIST = 90,                 /* LDECLLIST  */
  YYSYMBOL_LDECL = 91,                     /* LDECL  */
  YYSYMBOL_LIDLIST = 92,                   /* LIDLIST  */
  YYSYMBOL_MAINBLOCK = 93,                 /* MAINBLOCK  */
  YYSYMBOL_BODY = 94,                      /* BODY  */
  YYSYMBOL_ARRAYDECL = 95,                 /* ARRAYDECL  */
  YYSYMBOL_STATEMENTS = 96,                /* STATEMENTS  */
  YYSYMBOL_STATEMENT = 97,                 /* STATEMENT  */
  YYSYMBOL_98_1 = 98,                      /* @1  */
  YYSYMBOL_FREESTATMENT = 99,              /* FREESTATMENT  */
  YYSYMBOL_INITHEAPSTATEMENT = 100,        /* INITHEAPSTATEMENT  */
  YYSYMBOL_ALLOCSTATEMENT = 101,           /* ALLOCSTATEMENT  */
  YYSYMBOL_ASSIGN_STATEMENT = 102,         /* ASSIGN_STATEMENT  */
  YYSYMBOL_REFERENCE = 103,                /* REFERENCE  */
  YYSYMBOL_ARRAY = 104,                    /* ARRAY  */
  YYSYMBOL_WRITE_STATEMENT = 105,          /* WRITE_STATEMENT  */
  YYSYMBOL_READ_STATEMENT = 106,           /* READ_STATEMENT  */
  YYSYMBOL_CONDITIONAL = 107,              /* CONDITIONAL  */
  YYSYMBOL_WHILE_STMT = 108,               /* WHILE_STMT  */
  YYSYMBOL_CONTINUE_STATEMENT = 109,       /* CONTINUE_STATEMENT  */
  YYSYMBOL_BREAK_STATEMENT = 110,          /* BREAK_STATEMENT  */
  YYSYMBOL_EXPR = 111,                     /* EXPR  */
  YYSYMBOL_ARGLIST = 112,                  /* ARGLIST  */
  YYSYMBOL_CURRFEILD = 113                 /* CURRFEILD  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   399

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  277

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    46,     2,     2,
      54,    55,    49,    47,    57,    48,    60,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    56,
       2,    51,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    74,    74,    78,    79,    85,    89,    90,    93,    98,
     105,   108,   127,   145,   150,   156,   157,   159,   167,   171,
     177,   189,   238,   242,   247,   253,   254,   257,   265,   270,
     276,   280,   284,   291,   292,   293,   296,   297,   299,   308,
     313,   318,   324,   330,   335,   341,   345,   349,   355,   356,
     359,   392,   398,   404,   409,   414,   422,   423,   424,   427,
     428,   431,   440,   446,   454,   477,   481,   505,   513,   525,
     530,   537,   541,   545,   550,   549,   556,   560,   564,   568,
     576,   580,   584,   589,   599,   612,   623,   632,   645,   674,
     706,   711,   749,   763,   780,   800,   810,   820,   833,   849,
     864,   873,   882,   886,   897,   908,   919,   930,   941,   952,
     964,   976,   987,   998,  1009,  1013,  1024,  1035,  1046,  1062,
    1079,  1096,  1115,  1170,  1260,  1267,  1274,  1280,  1285
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BEG", "END", "INT",
  "STR", "STRING", "DECLBEG", "ENDDECL", "MAIN", "RETURN", "TYPEDEFBEG",
  "TYPEDEFEND", "null_const", "INITIALIZE", "ALLOC", "FREE", "CLASS",
  "ENDCLASS", "NEW", "EXTENDS", "BREAKPONIT", "INT_CONST", "STR_CONST",
  "ID", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "BREAK",
  "CONTINUE", "READ", "WRITE", "NOT", "AND", "OR", "EQ", "NE", "GE", "GT",
  "LE", "LT", "'%'", "'+'", "'-'", "'*'", "'/'", "'='", "'{'", "'}'",
  "'('", "')'", "';'", "','", "'['", "']'", "'.'", "$accept", "start",
  "PROGRAM", "CLASSDEFBLOCK", "CLASSDEFLIST", "CLASSDEF",
  "PRIVATEDECLBLOCK", "CLASSNAME", "MEATHODDEFBLOCK", "MEATHODDECLBLOCK1",
  "MEATHODDECLBLOCK", "MEATHODDECL", "MEATHODDEF", "TYPEDEFBLOCK",
  "TYPEDEFLIST", "TYPEDEFINATION", "FEILD_DEFINATION_LIST",
  "FEILD_DEFINATION_ITEM", "GDECLBLOCK", "GDECLLIST", "GDECL", "GidLIST",
  "TYPE", "FDEFBLOCK", "FDEF", "PARAMDEFLIST", "PARAMLIST", "PARAM",
  "LDECLBLOCK", "LDECLLIST", "LDECL", "LIDLIST", "MAINBLOCK", "BODY",
  "ARRAYDECL", "STATEMENTS", "STATEMENT", "@1", "FREESTATMENT",
  "INITHEAPSTATEMENT", "ALLOCSTATEMENT", "ASSIGN_STATEMENT", "REFERENCE",
  "ARRAY", "WRITE_STATEMENT", "READ_STATEMENT", "CONDITIONAL",
  "WHILE_STMT", "CONTINUE_STATEMENT", "BREAK_STATEMENT", "EXPR", "ARGLIST",
  "CURRFEILD", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-227)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,     5,    43,  -227,    17,  -227,    -4,    46,    51,  -227,
      13,    73,    24,  -227,  -227,  -227,    50,    66,  -227,    42,
      90,    58,    95,    98,   102,    75,    24,   108,  -227,  -227,
      88,  -227,  -227,  -227,  -227,   112,  -227,   110,   126,   114,
      58,  -227,  -227,    85,    86,    89,  -227,  -227,  -227,    24,
    -227,  -227,    35,    93,   105,    92,   111,  -227,  -227,  -227,
    -227,  -227,   154,  -227,    63,   110,   148,  -227,   110,   113,
      63,   159,   150,   121,  -227,   116,  -227,   122,  -227,   130,
     155,    63,  -227,   152,    63,   153,   204,   161,   205,    63,
    -227,   190,   110,  -227,   193,   125,   215,   204,    63,  -227,
     165,  -227,   176,  -227,   195,   227,   182,   118,   186,   215,
      -1,  -227,   216,    63,  -227,   183,  -227,  -227,    63,  -227,
       2,   214,   -37,     2,     2,  -227,  -227,   188,   217,   268,
     144,  -227,  -227,  -227,   218,   222,   230,   235,   236,   237,
     238,   253,   254,  -227,   259,  -227,  -227,   221,   256,   195,
    -227,  -227,  -227,  -227,     6,     2,     2,  -227,   239,  -227,
       2,   302,   145,   206,   303,     2,  -227,  -227,  -227,    30,
     302,  -227,  -227,  -227,  -227,  -227,  -227,  -227,    63,   273,
    -227,     2,   342,   294,   258,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,  -227,   158,
     270,  -227,   144,   144,   313,   276,   315,   317,   318,   319,
     294,  -227,  -227,   320,  -227,   219,   321,    64,  -227,   305,
     305,   316,   316,   316,   316,   316,   316,   109,   -36,   -36,
    -227,  -227,   312,   302,    29,   345,  -227,  -227,   323,   324,
     303,    63,   322,     2,  -227,     2,   355,     2,  -227,   144,
    -227,  -227,   325,   326,   328,   329,   204,  -227,   330,    71,
     184,   357,  -227,  -227,   331,   332,   215,  -227,     2,  -227,
    -227,  -227,  -227,   336,   335,  -227,  -227
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      24,     0,     0,     2,     7,    22,     0,     0,    26,     1,
       0,    35,     0,    23,    25,     6,    13,     0,     9,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     5,     8,
       0,    45,    46,    33,    47,     0,    37,     0,    45,     0,
       0,    49,     4,     0,     0,     0,    27,    28,    14,    12,
      34,    36,    40,     0,    44,     0,     0,    48,     3,    30,
      31,    32,     0,    11,    54,     0,     0,    38,     0,     0,
      54,     0,     0,     0,    51,    53,    39,     0,    43,     0,
       0,     0,    55,    41,    54,    67,    58,     0,     0,    17,
      19,     0,     0,    52,     0,     0,     0,    58,     0,    18,
       0,    42,     0,    56,     0,     0,     0,     0,     0,     0,
       0,    16,     0,    54,    68,    63,    61,    57,    60,    66,
       0,     0,    89,     0,     0,   101,   100,     0,     0,     0,
      70,    82,    80,    81,     0,     0,    90,     0,     0,     0,
       0,     0,     0,    64,     0,    10,    15,     0,     0,     0,
      59,   116,   115,   117,    89,     0,     0,   114,     0,    83,
       0,     0,     0,     0,     0,     0,    65,    69,    71,     0,
       0,    72,    73,    74,    78,    77,    76,    50,    54,     0,
      62,   126,     0,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
     128,    91,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    92,    75,     0,    20,   125,     0,   128,   102,   118,
     119,   108,   109,   111,   110,   112,   113,   107,   103,   104,
     105,   106,    93,     0,     0,     0,    96,    95,     0,     0,
       0,     0,     0,   126,   121,   126,     0,     0,   127,     0,
      97,    99,     0,     0,     0,     0,    58,   124,     0,   128,
       0,     0,    85,    86,     0,     0,     0,   122,   126,    94,
      98,    84,    87,     0,     0,    21,   123
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -227,  -227,  -227,  -227,  -227,   374,  -227,  -227,  -227,  -227,
    -227,   304,   282,  -227,   386,  -227,   -16,  -227,  -227,  -227,
     360,   -56,   -20,  -227,   356,  -227,   -62,  -227,   -95,   279,
    -227,   249,   359,  -106,  -227,  -123,  -227,  -227,  -227,  -227,
    -227,  -227,  -102,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
     -83,  -226,  -159
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    11,    17,    18,    62,    19,   110,    88,
      89,    90,   111,     4,     7,     8,    25,    26,    21,    35,
      36,    53,    72,    40,    41,    73,    74,    75,    96,   105,
     106,   116,    42,   108,    54,   129,   130,   212,   131,   132,
     133,   134,   157,   136,   137,   138,   139,   140,   141,   142,
     215,   216,   201
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    39,   109,   144,    31,   135,    32,   167,    80,    76,
      47,   211,    78,   196,   197,    37,   151,   257,     5,   258,
      39,   160,    93,   161,    34,   152,   153,   154,   135,    22,
       6,    23,    15,    63,     1,    10,   101,   158,    16,   155,
     162,   163,   274,     9,   151,   206,   207,   208,    12,    24,
     209,   148,   145,   152,   153,   154,   156,   249,   250,    13,
     181,    91,   204,    38,   160,    32,   182,   155,    31,    91,
      32,    27,   183,   184,   248,   104,     6,   199,   112,   234,
     235,    20,   205,    34,   156,    28,   210,   248,    34,    64,
     112,    16,    65,    66,    30,    31,    49,    32,   104,    33,
     135,   135,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,    34,   213,    31,   245,    32,
      43,    50,   119,    44,   246,   268,   261,    45,    46,   120,
      31,   233,    32,    48,   103,    52,    55,    34,   254,    56,
     121,    59,    60,   122,   123,    61,    69,   135,   124,    67,
      34,   125,   126,   127,   128,   120,   194,   195,   196,   197,
     273,   266,    68,    71,   260,    70,   121,    81,    79,   122,
     123,    77,   202,    84,   124,    82,    83,   125,   126,   127,
     128,    85,    86,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,    92,
      87,    94,    95,    97,    98,   100,   102,   232,   107,   113,
     115,   255,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   114,   117,   203,   118,   143,
     149,   147,   164,   269,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     159,   165,   166,   169,   168,   178,   243,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     170,   171,   172,   173,   174,   198,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   175,
     176,   179,   177,   218,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   200,   122,   214,
     233,   237,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,    -1,    -1,    -1,    -1,
      -1,    -1,   193,   194,   195,   196,   197,   217,   236,   238,
     247,   239,   240,   241,   256,   242,   244,   251,   252,   253,
     259,   262,   263,   264,   265,   267,   270,   271,   272,   275,
     276,    29,   146,    99,    14,    51,    57,   150,   180,    58
};

static const yytype_int16 yycheck[] =
{
      20,    21,    97,   109,     5,   107,     7,   130,    70,    65,
      26,   170,    68,    49,    50,    35,    14,   243,    13,   245,
      40,    58,    84,    60,    25,    23,    24,    25,   130,     5,
      25,     7,    19,    49,    12,    18,    92,   120,    25,    37,
     123,   124,   268,     0,    14,    15,    16,    17,    52,    25,
      20,   113,    53,    23,    24,    25,    54,    28,    29,    13,
      54,    81,   164,     5,    58,     7,    60,    37,     5,    89,
       7,    21,   155,   156,   233,    95,    25,   160,    98,   202,
     203,     8,   165,    25,    54,    19,   169,   246,    25,    54,
     110,    25,    57,    58,    52,     5,     8,     7,   118,     9,
     202,   203,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,    25,   178,     5,    54,     7,
      25,     9,     4,    25,    60,    54,   249,    25,    53,    11,
       5,    60,     7,    25,     9,    25,    10,    25,   240,    25,
      22,    56,    56,    25,    26,    56,    54,   249,    30,    56,
      25,    33,    34,    35,    36,    11,    47,    48,    49,    50,
     266,   256,    57,     9,   247,    54,    22,     8,    55,    25,
      26,    23,    27,    57,    30,    25,    55,    33,    34,    35,
      36,    59,    52,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    57,
      55,    58,     8,    52,     9,    25,    23,    59,     3,    54,
      25,   241,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    59,     9,    31,    56,    53,
      57,    25,    54,    59,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      56,    54,     4,    51,    56,    54,    57,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      60,    56,    56,    56,    56,    56,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    56,
      56,    55,    53,    55,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    25,    25,    56,
      60,    55,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    25,    55,    54,
      58,    54,    54,    54,    52,    55,    55,    32,    55,    55,
      25,    56,    56,    55,    55,    55,    29,    56,    56,    53,
      55,    17,   110,    89,     8,    35,    40,   118,   149,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    12,    62,    63,    74,    13,    25,    75,    76,     0,
      18,    64,    52,    13,    75,    19,    25,    65,    66,    68,
       8,    79,     5,     7,    25,    77,    78,    21,    19,    66,
      52,     5,     7,     9,    25,    80,    81,    83,     5,    83,
      84,    85,    93,    25,    25,    25,    53,    77,    25,     8,
       9,    81,    25,    82,    95,    10,    25,    85,    93,    56,
      56,    56,    67,    77,    54,    57,    58,    56,    57,    54,
      54,     9,    83,    86,    87,    88,    82,    23,    82,    55,
      87,     8,    25,    55,    57,    59,    52,    55,    70,    71,
      72,    83,    57,    87,    58,     8,    89,    52,     9,    72,
      25,    82,    23,     9,    83,    90,    91,     3,    94,    89,
      69,    73,    83,    54,    59,    25,    92,     9,    56,     4,
      11,    22,    25,    26,    30,    33,    34,    35,    36,    96,
      97,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    53,    94,    53,    73,    25,    87,    57,
      90,    14,    23,    24,    25,    37,    54,   103,   111,    56,
      58,    60,   111,   111,    54,    54,     4,    96,    56,    51,
      60,    56,    56,    56,    56,    56,    56,    53,    54,    55,
      92,    54,    60,   111,   111,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    56,   111,
      25,   113,    27,    31,   103,   111,    15,    16,    17,    20,
     111,   113,    98,    87,    56,   111,   112,    25,    55,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,    59,    60,    96,    96,    55,    55,    54,    54,
      54,    54,    55,    57,    55,    54,    60,    58,   113,    28,
      29,    32,    55,    55,   103,    83,    52,   112,   112,    25,
     111,    96,    56,    56,    55,    55,    89,    55,    54,    59,
      29,    56,    56,    94,   112,    53,    55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    64,    65,    65,
      66,    67,    67,    68,    68,    69,    69,    70,    71,    71,
      72,    73,    74,    74,    74,    75,    75,    76,    77,    77,
      78,    78,    78,    79,    79,    79,    80,    80,    81,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    84,    84,
      85,    86,    87,    87,    87,    88,    89,    89,    89,    90,
      90,    91,    92,    92,    93,    94,    94,    95,    95,    96,
      96,    97,    97,    97,    98,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    99,   100,   101,   101,   102,   103,
     103,   103,   103,   104,   104,   105,   106,   107,   107,   108,
     109,   110,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   112,   112,   112,   113,   113
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     5,     4,     3,     2,     0,     2,     1,
      10,     1,     0,     1,     3,     2,     1,     1,     2,     1,
       6,     9,     2,     3,     0,     2,     1,     4,     2,     1,
       3,     3,     3,     2,     3,     0,     2,     1,     3,     3,
       1,     4,     6,     3,     1,     1,     1,     1,     2,     1,
       9,     1,     3,     1,     0,     2,     2,     3,     0,     3,
       2,     2,     3,     1,     8,     3,     2,     4,     7,     2,
       1,     2,     2,     2,     0,     3,     2,     2,     2,     3,
       1,     1,     1,     2,     7,     6,     6,     7,     3,     1,
       1,     3,     3,     4,     7,     4,     4,     5,     7,     5,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     3,     3,
       2,     4,     6,     8,     3,     1,     0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5: /* CLASSDEFBLOCK: CLASS CLASSDEFLIST ENDCLASS  */
#line 86 "parser.y"
                                {
                                    initializeFeildTypes();
                                }
#line 1559 "y.tab.c"
    break;

  case 8: /* CLASSDEFLIST: CLASSDEFLIST CLASSDEF  */
#line 94 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                    initializeFeildTypes();
                                }
#line 1568 "y.tab.c"
    break;

  case 9: /* CLASSDEFLIST: CLASSDEF  */
#line 99 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                    initializeFeildTypes();
                                }
#line 1577 "y.tab.c"
    break;

  case 11: /* PRIVATEDECLBLOCK: FEILD_DEFINATION_LIST  */
#line 109 "parser.y"
                                {
                                    if(Cptr->Parentptr != NULL) {
                                        FeildsTable *currFeilds = copyFeildsTable(TypeLookUp(Cptr->Parentptr->name)->feilds);
                                        FeildsTable *last = getLastFeild((yyvsp[0].feilds));
                                            printf("HI wow\n");
                                        if(last != NULL) 
                                        {
                                            last->next = currFeilds;
                                            printf("HI bye\n");
                                        }
                                        else 
                                            (yyvsp[0].feilds) = currFeilds;
                                    }
                                    addType(Cptr->name, calculateSizeOfFeilds((yyvsp[0].feilds)), (yyvsp[0].feilds));
                                    checkForDuplicateFeilds((yyvsp[0].feilds));
                                    initializeFeildTypes();
                                }
#line 1599 "y.tab.c"
    break;

  case 12: /* PRIVATEDECLBLOCK: %empty  */
#line 127 "parser.y"
                                {
                                    if(Cptr->Parentptr != NULL) 
                                    {
                                        FeildsTable *currFeilds = copyFeildsTable(TypeLookUp(Cptr->Parentptr->name)->feilds);
                                        addType(Cptr->name, calculateSizeOfFeilds(currFeilds), currFeilds);
                                        checkForDuplicateFeilds(currFeilds);
                                        initializeFeildTypes();
                                    }
                                    else {
                                        addType(Cptr->name, calculateSizeOfFeilds(NULL), NULL);
                                        checkForDuplicateFeilds(NULL);
                                        initializeFeildTypes();
                                    }

                                }
#line 1619 "y.tab.c"
    break;

  case 13: /* CLASSNAME: ID  */
#line 146 "parser.y"
                                {
                                    printf("class name %s\n", (yyvsp[0].str));
                                    Cptr = ClassTableInstall((yyvsp[0].str), NULL);
                                }
#line 1628 "y.tab.c"
    break;

  case 14: /* CLASSNAME: ID EXTENDS ID  */
#line 151 "parser.y"
                                {
                                    Cptr = ClassTableInstall((yyvsp[-2].str), (yyvsp[0].str));
                                }
#line 1636 "y.tab.c"
    break;

  case 17: /* MEATHODDECLBLOCK1: MEATHODDECLBLOCK  */
#line 160 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                    Gsymbol *curr_sym = installLocalSymbol(self_string, 0 , data_t);
                                    curr_sym->data_type = TypeLookUp(Cptr->name);
                                    setFunctionOffset(Cptr);
                                }
#line 1647 "y.tab.c"
    break;

  case 18: /* MEATHODDECLBLOCK: MEATHODDECLBLOCK MEATHODDECL  */
#line 168 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                }
#line 1655 "y.tab.c"
    break;

  case 19: /* MEATHODDECLBLOCK: MEATHODDECL  */
#line 172 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                }
#line 1663 "y.tab.c"
    break;

  case 20: /* MEATHODDECL: TYPE ID '(' PARAMLIST ')' ';'  */
#line 178 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol(self_string, 0 , data_t);
                                    curr->data_type = TypeLookUp(Cptr->name);
                                    ParamList *currParams = createParameter(self_string, curr->data_type) ;
                                    currParams->next = (yyvsp[-2].params);
                                    printf("HELLO\n");
                                    ClassFunctionsInstall(Cptr, (yyvsp[-4].str), currParams, (yyvsp[-5].type));
                                }
#line 1676 "y.tab.c"
    break;

  case 21: /* MEATHODDEF: TYPE ID '(' PARAMLIST ')' '{' LDECLBLOCK BODY '}'  */
#line 190 "parser.y"
                                {
                                    struct ParamList *currParams = createParameter(self_string, TypeLookUp(Cptr->name)) ;
                                    currParams->next = (yyvsp[-5].params);
                                    printf("done here -\n");

                                    setFunction_return_type((yyvsp[-8].type));
                                    struct Memberfunclist *currFunction = ClassFunctionLookUp(Cptr, (yyvsp[-7].str));

                                    if(currFunction == NULL || currFunction->data_type != (yyvsp[-8].type) || matchParameters(currFunction->paramlist->next,currParams->next) == 0) {
                                        printf("function not declared or No matching parameters");
                                        exit(0);

                                    }

                                    struct ParamList *curr = currParams;
                                    while(curr != NULL) {
                                        //
                                        Gsymbol *temp = searchLocalSymbol(curr->name);
                                        
                                        if(temp != NULL)
                                        {
                                            temp->Addr = getparameterBind();
                                            /* printf("param :%s\n" , temp->name); */
                                        }
                                        curr = curr->next;
                                    }

                                    currFunction->localAddrSpace = calculateLocalVar();
                                    int label_1 = currFunction->Flabel;
                                    fprintf(target_file,"LABEL %d:\n", label_1);
                                    fprintf(target_file,"PUSH BP\n");
                                    fprintf(target_file,"MOV BP, SP\n");
                                    fprintf(target_file,"ADD SP, %d\n", currFunction->localAddrSpace);
                                    printf("done here -\n");
                                    genCode((yyvsp[-1].snode));
                                    fprintf(target_file, "MOV SP, BP\n");
                                    fprintf(target_file, "POP BP\n");
                                    fprintf(target_file, "RET\n");
                                    printf("done here\n");
                                    initializeLocalSymbolTable();
                                    Gsymbol *curr_sym = installLocalSymbol(self_string, 0 , data_t);
                                    curr_sym->data_type = TypeLookUp(Cptr->name);
                                }
#line 1724 "y.tab.c"
    break;

  case 22: /* TYPEDEFBLOCK: TYPEDEFBEG TYPEDEFEND  */
#line 239 "parser.y"
                                {
                                    initializeFeildTypes();
                                }
#line 1732 "y.tab.c"
    break;

  case 23: /* TYPEDEFBLOCK: TYPEDEFBEG TYPEDEFLIST TYPEDEFEND  */
#line 243 "parser.y"
                                {
                                    initializeFeildTypes();
                                }
#line 1740 "y.tab.c"
    break;

  case 24: /* TYPEDEFBLOCK: %empty  */
#line 247 "parser.y"
                                {
                                    printf("no custom types\n");
                                    initializeFeildTypes();
                                }
#line 1749 "y.tab.c"
    break;

  case 27: /* TYPEDEFINATION: ID '{' FEILD_DEFINATION_LIST '}'  */
#line 258 "parser.y"
                                {
                                    addType((yyvsp[-3].str), calculateSizeOfFeilds((yyvsp[-1].feilds)), (yyvsp[-1].feilds));
                                    checkForDuplicateFeilds((yyvsp[-1].feilds));
                                }
#line 1758 "y.tab.c"
    break;

  case 28: /* FEILD_DEFINATION_LIST: FEILD_DEFINATION_ITEM FEILD_DEFINATION_LIST  */
#line 266 "parser.y"
                                {
                                    (yyvsp[-1].feilds)->next = (yyvsp[0].feilds);
                                    (yyval.feilds) = (yyvsp[-1].feilds);
                                }
#line 1767 "y.tab.c"
    break;

  case 29: /* FEILD_DEFINATION_LIST: FEILD_DEFINATION_ITEM  */
#line 271 "parser.y"
                                {
                                    (yyval.feilds) = (yyvsp[0].feilds);
                                }
#line 1775 "y.tab.c"
    break;

  case 30: /* FEILD_DEFINATION_ITEM: INT ID ';'  */
#line 277 "parser.y"
                                {
                                    (yyval.feilds) = createFeild((yyvsp[-1].str), int_string);
                                }
#line 1783 "y.tab.c"
    break;

  case 31: /* FEILD_DEFINATION_ITEM: STRING ID ';'  */
#line 281 "parser.y"
                                {
                                    (yyval.feilds) = createFeild((yyvsp[-1].str), str_string);
                                }
#line 1791 "y.tab.c"
    break;

  case 32: /* FEILD_DEFINATION_ITEM: ID ID ';'  */
#line 285 "parser.y"
                                {
                                    (yyval.feilds) = createFeild((yyvsp[-1].str), (yyvsp[-2].str));
                                }
#line 1799 "y.tab.c"
    break;

  case 38: /* GDECL: TYPE GidLIST ';'  */
#line 300 "parser.y"
                                {
                                    setType((yyvsp[-1].decl),(yyvsp[-2].type));   
                                    ClassTable *currClass = searchClassTable((yyvsp[-2].type)->name);
                                    if(currClass != NULL) 
                                        setClassType((yyvsp[-1].decl), currClass);
                                }
#line 1810 "y.tab.c"
    break;

  case 39: /* GidLIST: ID ',' GidLIST  */
#line 309 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-2].str), 1 , data_t);
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1819 "y.tab.c"
    break;

  case 40: /* GidLIST: ID  */
#line 314 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[0].str), 1, data_t);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1828 "y.tab.c"
    break;

  case 41: /* GidLIST: ID '(' PARAMDEFLIST ')'  */
#line 319 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-3].str), 0, function_type);
                                    curr->paramList = (yyvsp[-1].params);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1838 "y.tab.c"
    break;

  case 42: /* GidLIST: ID '(' PARAMDEFLIST ')' ',' GidLIST  */
#line 325 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-5].str), 0, function_type);
                                    curr->paramList = (yyvsp[-3].params);
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1848 "y.tab.c"
    break;

  case 43: /* GidLIST: ARRAYDECL ',' GidLIST  */
#line 331 "parser.y"
                                {  
                                    (yyvsp[-2].decl)->next = (yyvsp[0].decl);
                                    (yyval.decl) = (yyvsp[-2].decl);
                                }
#line 1857 "y.tab.c"
    break;

  case 44: /* GidLIST: ARRAYDECL  */
#line 336 "parser.y"
                                {
                                    (yyval.decl) = (yyvsp[0].decl);
                                }
#line 1865 "y.tab.c"
    break;

  case 45: /* TYPE: INT  */
#line 342 "parser.y"
                                {
                                    (yyval.type) = TypeLookUp("int");
                                }
#line 1873 "y.tab.c"
    break;

  case 46: /* TYPE: STRING  */
#line 346 "parser.y"
                                {
                                    (yyval.type) = TypeLookUp("string");
                                }
#line 1881 "y.tab.c"
    break;

  case 47: /* TYPE: ID  */
#line 350 "parser.y"
                                {
                                    (yyval.type) = TypeLookUp((yyvsp[0].str));
                                }
#line 1889 "y.tab.c"
    break;

  case 50: /* FDEF: TYPE ID '(' PARAMLIST ')' '{' LDECLBLOCK BODY '}'  */
#line 360 "parser.y"
                                {
                                    setFunction_return_type((yyvsp[-8].type));
                                    struct Gsymbol *currFunction = searchSymbol((yyvsp[-7].str));

                                    if(currFunction == NULL || currFunction->data_type != (yyvsp[-8].type) || matchParameters(currFunction->paramList,(yyvsp[-5].params)) == 0) {
                                        printf("function not declared or No matching parameters");
                                        exit(0);
                                    }

                                    struct ParamList *curr = (yyvsp[-5].params);
                                    while(curr != NULL) {
                                        Gsymbol *temp = searchLocalSymbol(curr->name);
                                        if(temp != NULL)
                                            temp->Addr = getparameterBind();
                                        curr = curr->next;
                                    }

                                    currFunction->localAddrSpace = calculateLocalVar();
                                    int label_1 = getLabel();
                                    currFunction->flabel = label_1;
                                    fprintf(target_file,"LABEL %d:\n", label_1);
                                    fprintf(target_file,"PUSH BP\n");
                                    fprintf(target_file,"MOV BP, SP\n");
                                    fprintf(target_file,"ADD SP, %d\n", currFunction->localAddrSpace);
                                    genCode((yyvsp[-1].snode));
                                    initializeLocalSymbolTable();
                                    fprintf(target_file, "MOV SP, BP\n");
                                    fprintf(target_file, "POP BP\n");
                                    fprintf(target_file, "RET\n");
                                }
#line 1924 "y.tab.c"
    break;

  case 51: /* PARAMDEFLIST: PARAMLIST  */
#line 393 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                }
#line 1932 "y.tab.c"
    break;

  case 52: /* PARAMLIST: PARAM ',' PARAMLIST  */
#line 399 "parser.y"
                                {
                                    (yyval.params) = (yyvsp[-2].params);
                                    (yyval.params)->next = (yyvsp[0].params);

                                }
#line 1942 "y.tab.c"
    break;

  case 53: /* PARAMLIST: PARAM  */
#line 405 "parser.y"
                                {
                                    (yyval.params) = (yyvsp[0].params);
                                }
#line 1950 "y.tab.c"
    break;

  case 54: /* PARAMLIST: %empty  */
#line 409 "parser.y"
                                {
                                    (yyval.params) = NULL;
                                }
#line 1958 "y.tab.c"
    break;

  case 55: /* PARAM: TYPE ID  */
#line 415 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[0].str), 0 , data_t);
                                    curr->data_type = (yyvsp[-1].type);
                                    (yyval.params) = createParameter((yyvsp[0].str), (yyvsp[-1].type));
                                }
#line 1968 "y.tab.c"
    break;

  case 61: /* LDECL: TYPE LIDLIST  */
#line 432 "parser.y"
                                {
                                    setType((yyvsp[0].decl), (yyvsp[-1].type));
                                    ClassTable *currClass = searchClassTable((yyvsp[-1].type)->name);
                                    if(currClass != NULL) 
                                        setClassType((yyvsp[0].decl), currClass);
                                }
#line 1979 "y.tab.c"
    break;

  case 62: /* LIDLIST: ID ',' LIDLIST  */
#line 441 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[-2].str), 0 , data_t);
                                    curr->Addr = getLocalBind();
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1989 "y.tab.c"
    break;

  case 63: /* LIDLIST: ID  */
#line 447 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[0].str), 0 , data_t);
                                    curr->Addr = getLocalBind();
                                    (yyval.decl) = createDeclList(curr, NULL);
                                }
#line 1999 "y.tab.c"
    break;

  case 64: /* MAINBLOCK: INT MAIN '(' ')' '{' LDECLBLOCK BODY '}'  */
#line 455 "parser.y"
                                {
                                    printf("INMAIN\n");
                                    setFunction_return_type(TypeLookUp("int"));
                                    Gsymbol *currFunction = installSymbol("main", 0,function_type);
                                    int label_1 = main_label;
                                    currFunction->flabel = label_1;
                                    fprintf(target_file,"LABEL %d:\n", label_1);
                                    fprintf(target_file, "MOV SP, 4096\n");
                                    generateAllVirFunTables();
                                    fprintf(target_file, "ADD SP, %d\n", bindAddr(0) - LAST_BASE);
                                    fprintf(target_file,"MOV BP, SP\n");
                                    currFunction->localAddrSpace = calculateLocalVar(); 
                                    fprintf(target_file,"ADD SP, %d\n", currFunction->localAddrSpace);
                                    genCode((yyvsp[-1].snode));
                                    initializeLocalSymbolTable();
                                    fprintf(target_file, "MOV SP, BP\n");
                                    fprintf(target_file, "POP BP\n");
                                    fprintf(target_file, "RET\n");
                                    main_label = label_1;
                                }
#line 2024 "y.tab.c"
    break;

  case 65: /* BODY: BEG STATEMENTS END  */
#line 478 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2032 "y.tab.c"
    break;

  case 67: /* ARRAYDECL: ID '[' INT_CONST ']'  */
#line 506 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-3].str), (yyvsp[-1].val), arr_t);
                                    curr->dimensions = 1;
                                    curr->rowSize = (yyvsp[-1].val);
                                    curr->columnSize = -1;
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 2044 "y.tab.c"
    break;

  case 68: /* ARRAYDECL: ID '[' INT_CONST ']' '[' INT_CONST ']'  */
#line 514 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-6].str), (yyvsp[-4].val) * (yyvsp[-1].val), arr_t);
                                    curr->dimensions = 2;
                                    curr->rowSize = (yyvsp[-4].val);
                                    curr->columnSize = (yyvsp[-1].val);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 2056 "y.tab.c"
    break;

  case 69: /* STATEMENTS: STATEMENT STATEMENTS  */
#line 526 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                    (yyval.snode)->next = (yyvsp[0].snode);
                                }
#line 2065 "y.tab.c"
    break;

  case 70: /* STATEMENTS: STATEMENT  */
#line 531 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                    (yyval.snode)->next = NULL;
                                }
#line 2074 "y.tab.c"
    break;

  case 71: /* STATEMENT: ASSIGN_STATEMENT ';'  */
#line 538 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2082 "y.tab.c"
    break;

  case 72: /* STATEMENT: WRITE_STATEMENT ';'  */
#line 542 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2090 "y.tab.c"
    break;

  case 73: /* STATEMENT: READ_STATEMENT ';'  */
#line 546 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2098 "y.tab.c"
    break;

  case 74: /* @1: %empty  */
#line 550 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2106 "y.tab.c"
    break;

  case 75: /* STATEMENT: CONDITIONAL ';' @1  */
#line 553 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-2].snode);
                                }
#line 2114 "y.tab.c"
    break;

  case 76: /* STATEMENT: BREAK_STATEMENT ';'  */
#line 557 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2122 "y.tab.c"
    break;

  case 77: /* STATEMENT: CONTINUE_STATEMENT ';'  */
#line 561 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2130 "y.tab.c"
    break;

  case 78: /* STATEMENT: WHILE_STMT ';'  */
#line 565 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2138 "y.tab.c"
    break;

  case 79: /* STATEMENT: RETURN EXPR ';'  */
#line 569 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = return_stmt;
                                    temp.expr = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2150 "y.tab.c"
    break;

  case 80: /* STATEMENT: INITHEAPSTATEMENT  */
#line 577 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                }
#line 2158 "y.tab.c"
    break;

  case 81: /* STATEMENT: ALLOCSTATEMENT  */
#line 581 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                }
#line 2166 "y.tab.c"
    break;

  case 82: /* STATEMENT: FREESTATMENT  */
#line 585 "parser.y"
                                {

                                    (yyval.snode) = (yyvsp[0].snode);
                                }
#line 2175 "y.tab.c"
    break;

  case 83: /* STATEMENT: BREAKPONIT ';'  */
#line 590 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = breakpoint;
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2186 "y.tab.c"
    break;

  case 84: /* FREESTATMENT: REFERENCE '=' FREE '(' REFERENCE ')' ';'  */
#line 600 "parser.y"
                                {

                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = freeStatement;
                                    temp.expr = (yyvsp[-2].expr);
                                    temp.reference = (yyvsp[-6].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2200 "y.tab.c"
    break;

  case 85: /* INITHEAPSTATEMENT: REFERENCE '=' INITIALIZE '(' ')' ';'  */
#line 613 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = initializeStatement;
                                    temp.expr = (yyvsp[-3].expr);
                                    temp.reference = (yyvsp[-5].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2213 "y.tab.c"
    break;

  case 86: /* ALLOCSTATEMENT: REFERENCE '=' ALLOC '(' ')' ';'  */
#line 624 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = allocStatement;
                                    temp.expr = (yyvsp[-3].expr);
                                    temp.reference = (yyvsp[-5].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2226 "y.tab.c"
    break;

  case 87: /* ALLOCSTATEMENT: REFERENCE '=' NEW '(' TYPE ')' ';'  */
#line 633 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = new_statement;
                                    temp.reference = (yyvsp[-6].expr);
                                    ClassCompatibleCheck((yyvsp[-6].expr)->symbol->classType, ClassTableLookUp((yyvsp[-2].type)->name));
                                    (yyval.snode) = createSnode(temp);
                                    (yyval.snode)->currType = (yyvsp[-2].type);
                                }
#line 2240 "y.tab.c"
    break;

  case 88: /* ASSIGN_STATEMENT: REFERENCE '=' EXPR  */
#line 646 "parser.y"
                                {
                                    printf("EVALUATING ASSIGNMENT\n");
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = assign_stmt;
                                    temp.expr = (yyvsp[0].expr);
                                    temp.reference = (yyvsp[-2].expr);
                                    ClassTable *A = searchClassTable((yyvsp[-2].expr)->data_type->name);
                                    ClassTable *B = searchClassTable((yyvsp[0].expr)->data_type->name);
                                    if((A != NULL && B != NULL))
                                    {
                                        ClassCompatibleCheck(A,B);
                                    }
                                    else if((yyvsp[-2].expr)->data_type != (yyvsp[0].expr)->data_type && (yyvsp[0].expr)->data_type != TypeLookUp("null"))
                                    {
                                        printf("INVALID ASSGIGNMENT\n");
                                        exit(1);
                                    }
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2265 "y.tab.c"
    break;

  case 89: /* REFERENCE: ID  */
#line 675 "parser.y"
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    
                                    Gsymbol *curr_sym = searchLocalSymbol((yyvsp[0].str)); 
                                    if(curr_sym == NULL)
                                    {
                                        temp.isLocal = 0;
                                        printf("searching in global scope %s\n", (yyvsp[0].str));
                                        curr_sym = searchSymbol((yyvsp[0].str));
                                    }
                                    else 
                                    {
                                        temp.isLocal = 1;
                                    }
                                    if(curr_sym == NULL || curr_sym->type == arr_t) 
                                    {
                                        if(!curr_sym) {
                                            printf("use before declaration\n");
                                        }

                                        yyerror();
                                    }
                                    temp.type = data_t;
                                    temp.data_type = curr_sym->data_type;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 0;
                                    temp.symbol = curr_sym;
                                    (yyval.expr) = createExprNode(temp);
                                }
#line 2301 "y.tab.c"
    break;

  case 90: /* REFERENCE: ARRAY  */
#line 707 "parser.y"
                                {
                                    // check with array declaration
                                    (yyval.expr) = (yyvsp[0].expr);
                                }
#line 2310 "y.tab.c"
    break;

  case 91: /* REFERENCE: ID '.' CURRFEILD  */
#line 712 "parser.y"
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    
                                    Gsymbol *curr_sym = searchLocalSymbol((yyvsp[-2].str)); 
                                    if(curr_sym == NULL)
                                    {
                                        temp.isLocal = 0;
                                        printf("searching in global scope %s\n", (yyvsp[-2].str));
                                        curr_sym = searchSymbol((yyvsp[-2].str));
                                    }
                                    else 
                                    {
                                        temp.isLocal = 1;
                                    }
                                    if(curr_sym == NULL || curr_sym->type == arr_t) 
                                    {
                                        if(!curr_sym) {
                                            printf("use before declaration\n");
                                        }

                                        yyerror();
                                    }
                                    if(strcmp((yyvsp[-2].str), "self") != 0 && searchClassTable(curr_sym->data_type->name) != NULL){
                                        printf("private Var access\n");
                                        exit(1);
                                    }
                                    temp.type = data_t;
                                    temp.data_type = curr_sym->data_type;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 0;
                                    temp.symbol = curr_sym;
                                    (yyval.expr) = createExprNode(temp);
                                    (yyval.expr)->dref = (yyvsp[0].dref);
                                    (yyval.expr)->data_type = initDref((yyval.expr)->data_type, (yyvsp[0].dref));
                                }
#line 2352 "y.tab.c"
    break;

  case 92: /* REFERENCE: ARRAY '.' CURRFEILD  */
#line 750 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[-2].expr);
                                    (yyval.expr)->dref = (yyvsp[0].dref);
                                    (yyval.expr)->data_type = initDref((yyval.expr)->data_type, (yyvsp[0].dref));
                                    if(strcmp((yyval.expr)->symbol->name, "self") != 0 && searchClassTable((yyval.expr)->symbol->data_type->name) != NULL){
                                        printf("private Var access\n");
                                        exit(1);
                                    }
                                }
#line 2366 "y.tab.c"
    break;

  case 93: /* ARRAY: ID '[' EXPR ']'  */
#line 764 "parser.y"
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    Gsymbol *curr_sym = searchSymbol((yyvsp[-3].str));
                                    if(curr_sym == NULL || curr_sym->type != arr_t || curr_sym->dimensions != 1 || (yyvsp[-1].expr)->data_type != TypeLookUp("int"))
                                        yyerror();
                                    temp.data_type = curr_sym->data_type;
                                    temp.type = arr_t;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 1;
                                    temp.isLocal = 0;
                                    temp.symbol = curr_sym;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-1].expr), NULL);
                                }
#line 2387 "y.tab.c"
    break;

  case 94: /* ARRAY: ID '[' EXPR ']' '[' EXPR ']'  */
#line 781 "parser.y"
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    Gsymbol *curr_sym = searchSymbol((yyvsp[-6].str));
                                    if(curr_sym == NULL || curr_sym->type != arr_t || curr_sym->dimensions != 2 || (yyvsp[-4].expr)->data_type != TypeLookUp("int")|| (yyvsp[-1].expr)->data_type != TypeLookUp("int"))
                                        yyerror();
                                    temp.data_type = curr_sym->data_type;
                                    temp.type = arr_t;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.isLocal = 0;
                                    temp.is_arr = 1;
                                    temp.symbol = curr_sym;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-4].expr), (yyvsp[-1].expr));
                                }
#line 2408 "y.tab.c"
    break;

  case 95: /* WRITE_STATEMENT: WRITE '(' EXPR ')'  */
#line 801 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = write_stmt;
                                    temp.expr = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2420 "y.tab.c"
    break;

  case 96: /* READ_STATEMENT: READ '(' REFERENCE ')'  */
#line 811 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = read_stmt;
                                    temp.reference = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2432 "y.tab.c"
    break;

  case 97: /* CONDITIONAL: IF EXPR THEN STATEMENTS ENDIF  */
#line 821 "parser.y"
                                {
                                    if((yyvsp[-3].expr)->data_type != TypeLookUp("bool")) {
                                    printf("error expected boolen!\n");
                                    exit(0);
                                    }
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = if_stmt;
                                    temp.expr = (yyvsp[-3].expr);
                                    temp.left = (yyvsp[-1].snode);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2449 "y.tab.c"
    break;

  case 98: /* CONDITIONAL: IF EXPR THEN STATEMENTS ELSE STATEMENTS ENDIF  */
#line 834 "parser.y"
                                {
                                    if((yyvsp[-5].expr)->data_type != TypeLookUp("bool")) {
                                    printf("error expected boolen!\n");
                                    exit(0);
                                    }
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = if_stmt;
                                    temp.expr = (yyvsp[-5].expr);
                                    temp.left = (yyvsp[-3].snode);
                                    temp.right = (yyvsp[-1].snode);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2467 "y.tab.c"
    break;

  case 99: /* WHILE_STMT: WHILE EXPR DO STATEMENTS ENDWHILE  */
#line 850 "parser.y"
                                {
                                    if((yyvsp[-3].expr)->data_type != TypeLookUp("bool")) {
                                    printf("error expected boolen!\n");
                                    exit(0);
                                    }
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = while_stmt;
                                    temp.expr = (yyvsp[-3].expr);
                                    temp.left = (yyvsp[-1].snode);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2484 "y.tab.c"
    break;

  case 100: /* CONTINUE_STATEMENT: CONTINUE  */
#line 865 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = continue_stmt;
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2495 "y.tab.c"
    break;

  case 101: /* BREAK_STATEMENT: BREAK  */
#line 874 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = break_stmt;
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2506 "y.tab.c"
    break;

  case 102: /* EXPR: '(' EXPR ')'  */
#line 883 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[-1].expr);
                                }
#line 2514 "y.tab.c"
    break;

  case 103: /* EXPR: EXPR '+' EXPR  */
#line 887 "parser.y"
                                {
                                    typeCheck(TypeLookUp("int"), (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_ADD;
                                    temp.data_type = TypeLookUp("int");
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 2529 "y.tab.c"
    break;

  case 104: /* EXPR: EXPR '-' EXPR  */
#line 898 "parser.y"
                                {
                                    typeCheck(TypeLookUp("int"), (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_SUB;
                                    temp.data_type = TypeLookUp("int");
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 2544 "y.tab.c"
    break;

  case 105: /* EXPR: EXPR '*' EXPR  */
#line 909 "parser.y"
                                {
                                    typeCheck(TypeLookUp("int"), (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_MUL;
                                    temp.data_type = TypeLookUp("int");
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 2559 "y.tab.c"
    break;

  case 106: /* EXPR: EXPR '/' EXPR  */
#line 920 "parser.y"
                                {
                                    typeCheck(TypeLookUp("int"), (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_DIV;
                                    temp.data_type = TypeLookUp("int");
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 2574 "y.tab.c"
    break;

  case 107: /* EXPR: EXPR '%' EXPR  */
#line 931 "parser.y"
                                {
                                    typeCheck(TypeLookUp("int"), (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_MOD;
                                    temp.data_type = TypeLookUp("int");
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 2589 "y.tab.c"
    break;

  case 108: /* EXPR: EXPR EQ EXPR  */
#line 942 "parser.y"
                                {
                                    typeCheck(TypeLookUp("bool"), (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_EQ;
                                    temp.data_type = TypeLookUp("bool");
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 2604 "y.tab.c"
    break;

  case 109: /* EXPR: EXPR NE EXPR  */
#line 953 "parser.y"
                                {
                                 
                                    typeCheck(TypeLookUp("bool"), (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_NE;
                                    temp.data_type = TypeLookUp("bool");
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 2620 "y.tab.c"
    break;

  case 110: /* EXPR: EXPR GT EXPR  */
#line 965 "parser.y"
                                {
                                    typeCheck(TypeLookUp("bool"), (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_GT;
                                    temp.data_type = TypeLookUp("bool");
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));

                                }
#line 2636 "y.tab.c"
    break;

  case 111: /* EXPR: EXPR GE EXPR  */
#line 977 "parser.y"
                                {
                                    typeCheck(TypeLookUp("bool"), (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_GE;
                                    temp.data_type = TypeLookUp("bool");
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 2651 "y.tab.c"
    break;

  case 112: /* EXPR: EXPR LE EXPR  */
#line 988 "parser.y"
                                {
                                    typeCheck(TypeLookUp("bool"), (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_LE;
                                    temp.data_type = TypeLookUp("bool");
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 2666 "y.tab.c"
    break;

  case 113: /* EXPR: EXPR LT EXPR  */
#line 999 "parser.y"
                                {
                                    typeCheck(TypeLookUp("bool"), (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_LT;
                                    temp.data_type = TypeLookUp("bool");
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 2681 "y.tab.c"
    break;

  case 114: /* EXPR: REFERENCE  */
#line 1010 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[0].expr);
                                }
#line 2689 "y.tab.c"
    break;

  case 115: /* EXPR: INT_CONST  */
#line 1014 "parser.y"
                                {
                                    ExprNode temp; 
                                    initializeExprNode(&temp);
                                    temp.is_op = 0;
                                    temp.data_type = TypeLookUp("int");
                                    temp.hasval = 1;
                                    temp.val = (yyvsp[0].val);
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), NULL, NULL);
                                }
#line 2704 "y.tab.c"
    break;

  case 116: /* EXPR: null_const  */
#line 1025 "parser.y"
                                {
                                    ExprNode temp; 
                                    initializeExprNode(&temp);
                                    temp.is_op = 0;
                                    temp.data_type = TypeLookUp("null");
                                    temp.hasval = 1;
                                    temp.val = 0;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), NULL, NULL); 
                                }
#line 2719 "y.tab.c"
    break;

  case 117: /* EXPR: STR_CONST  */
#line 1036 "parser.y"
                                {
                                    ExprNode temp; 
                                    initializeExprNode(&temp);
                                    temp.is_op = 0;
                                    temp.data_type = TypeLookUp("string");
                                    temp.hasval = 1;
                                    temp.str = (yyvsp[0].str);
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), NULL, NULL);
                                }
#line 2734 "y.tab.c"
    break;

  case 118: /* EXPR: EXPR AND EXPR  */
#line 1047 "parser.y"
                                {
                                    if((yyvsp[-2].expr)->data_type != (yyvsp[0].expr)->data_type || (yyvsp[-2].expr)->data_type != TypeLookUp("bool"))
                                    {
                                        printf("LOGIAL OP ONLY BETWEEN BOOLEANS!\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_AND;
                                    temp.data_type = TypeLookUp("bool");
                                    temp.hasval = 0;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 2754 "y.tab.c"
    break;

  case 119: /* EXPR: EXPR OR EXPR  */
#line 1063 "parser.y"
                                {
                                    if((yyvsp[-2].expr)->data_type != (yyvsp[0].expr)->data_type || (yyvsp[-2].expr)->data_type != TypeLookUp("bool"))
                                    {
                                        printf("LOGIAL OP ONLY BETWEEN BOOLEANS!\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_OR;
                                    temp.data_type = TypeLookUp("bool");
                                    temp.hasval = 0;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));

                                }
#line 2775 "y.tab.c"
    break;

  case 120: /* EXPR: NOT EXPR  */
#line 1080 "parser.y"
                                {
                                    if((yyvsp[0].expr)->data_type != TypeLookUp("bool"))
                                    {
                                        printf("LOGIAL OP ONLY BETWEEN BOOLEANS!\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_NOT;
                                    temp.data_type = TypeLookUp("bool");
                                    temp.hasval = 0;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[0].expr), NULL);

                                }
#line 2796 "y.tab.c"
    break;

  case 121: /* EXPR: ID '(' ARGLIST ')'  */
#line 1097 "parser.y"
                                {
                                    struct Gsymbol *currFunction = searchSymbol((yyvsp[-3].str));
                                    if(currFunction == NULL || currFunction->type != function_type || checkArguments(currFunction, (yyvsp[-1].argList)) == 0) {
                                        printf("function call Not found! or No Matching Arguments\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.type = function_type;
                                    temp.data_type = currFunction->data_type;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 0;
                                    temp.symbol = currFunction;
                                    (yyval.expr) = createExprNode(temp);
                                    (yyval.expr)->argList = (yyvsp[-1].argList);
                                    constructExprNode((yyval.expr), NULL, NULL);
                                }
#line 2819 "y.tab.c"
    break;

  case 122: /* EXPR: ID '.' ID '(' ARGLIST ')'  */
#line 1116 "parser.y"
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    
                                    Gsymbol *curr_sym = searchLocalSymbol((yyvsp[-5].str)); 
                                    if(curr_sym == NULL)
                                    {
                                        temp.isLocal = 0;
                                        printf("searching in global scope %s\n", (yyvsp[-5].str));
                                        curr_sym = searchSymbol((yyvsp[-5].str));
                                    }
                                    else 
                                    {
                                        temp.isLocal = 1;
                                    }
                                    if(curr_sym == NULL || curr_sym->type == arr_t) 
                                    {
                                        if(!curr_sym) {
                                            printf("use before declaration\n");
                                        }

                                        yyerror();
                                    }
                                    temp.type = data_t;
                                    temp.data_type = curr_sym->data_type;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 0;
                                    temp.symbol = curr_sym;
                                    struct ExprNode *currExpr = createExprNode(temp);
                                    struct ArgList *currArg = createNewArg(currExpr);
                                    currArg->next = (yyvsp[-1].argList);

                                    struct ClassTable *currClass = ClassTableLookUp(curr_sym->data_type->name);
                                    struct Memberfunclist *currFunction = ClassFunctionLookUp(currClass, (yyvsp[-3].str));
                                    currExpr->data_type = currFunction->data_type;
                                    if(currFunction == NULL || checkArgumentsMeathod(currFunction, currArg) == 0) {
                                        printf("function call Not found! or No Matching Arguments\n");
                                        exit(0);
                                    }
                                    ExprNode temp1;
                                    initializeExprNode(&temp);
                                    temp1.type = meathodType;
                                    temp1.data_type = currFunction->data_type;
                                    temp1.is_op = 0;
                                    temp1.hasval = 0;
                                    temp1.is_arr = 0;
                                    temp1.symbol = NULL;
                                    temp1.meathod = currFunction;
                                    (yyval.expr) = createExprNode(temp1);
                                    (yyval.expr)->argList = currArg;
                                    constructExprNode((yyval.expr), NULL, NULL);

                                }
#line 2878 "y.tab.c"
    break;

  case 123: /* EXPR: ID '.' ID '.' ID '(' ARGLIST ')'  */
#line 1171 "parser.y"
                                {
                                    if(strcmp("self", (yyvsp[-7].str)) == 1) {
                                        printf("it should be self\n");
                                        exit(1);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    
                                    Gsymbol *curr_sym = searchLocalSymbol((yyvsp[-7].str)); 
                                    if(curr_sym == NULL)
                                    {
                                        temp.isLocal = 0;
                                        printf("searching in global scope %s\n", (yyvsp[-7].str));
                                        curr_sym = searchSymbol((yyvsp[-7].str));
                                    }
                                    else 
                                    {
                                        temp.isLocal = 1;
                                    }
                                    if(curr_sym == NULL || curr_sym->type == arr_t) 
                                    {
                                        if(!curr_sym) {
                                            printf("use before declaration\n");
                                        }

                                        yyerror();
                                    }
                                    temp.type = data_t;
                                    temp.data_type = curr_sym->data_type;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 0;
                                    temp.symbol = curr_sym;
                                    struct drefList *currDref = createdrefList((yyvsp[-5].str));
                                    struct ExprNode *currExpr = createExprNode(temp);
                                    currExpr->dref = currDref;
                                    currExpr->data_type = initDref(currExpr->data_type, currDref);
                                    struct ArgList *currArg = createNewArg(currExpr);
                                    currArg->next = (yyvsp[-1].argList);

                                    struct ClassTable *currClass = ClassTableLookUp(currExpr->data_type->name);
                                    struct Memberfunclist *currFunction = ClassFunctionLookUp(currClass, (yyvsp[-3].str));
                                    currExpr->data_type = currFunction->data_type;
                                    if(currFunction == NULL || checkArgumentsMeathod(currFunction, currArg) == 0) {
                                        printf("function call Not found! or No Matching Arguments\n");
                                        exit(0);
                                    }
                                    ExprNode temp1;
                                    initializeExprNode(&temp);
                                    temp1.type = meathodType;
                                    temp1.data_type = currFunction->data_type;
                                    temp1.is_op = 0;
                                    temp1.hasval = 0;
                                    temp1.is_arr = 0;
                                    temp1.symbol = NULL;
                                    temp1.meathod = currFunction;
                                    (yyval.expr) = createExprNode(temp1);
                                    (yyval.expr)->argList = currArg;
                                    constructExprNode((yyval.expr), NULL, NULL);
                                }
#line 2943 "y.tab.c"
    break;

  case 124: /* ARGLIST: EXPR ',' ARGLIST  */
#line 1261 "parser.y"
                                {
                                    (yyvsp[-2].expr)->isLocal = 1;
                                    struct ArgList *currArg = createNewArg((yyvsp[-2].expr));
                                    currArg->next = (yyvsp[0].argList);
                                    (yyval.argList) = currArg;
                                }
#line 2954 "y.tab.c"
    break;

  case 125: /* ARGLIST: EXPR  */
#line 1268 "parser.y"
                                {
                                    (yyvsp[0].expr)->isLocal = 1;
                                    struct ArgList *currArg = createNewArg((yyvsp[0].expr));
                                    (yyval.argList) = currArg;
                                }
#line 2964 "y.tab.c"
    break;

  case 126: /* ARGLIST: %empty  */
#line 1274 "parser.y"
                                {
                                    (yyval.argList) = NULL;
                                }
#line 2972 "y.tab.c"
    break;

  case 127: /* CURRFEILD: ID '.' CURRFEILD  */
#line 1281 "parser.y"
                                { 
                                    (yyval.dref) = createdrefList((yyvsp[-2].str));
                                    (yyval.dref)->next = (yyvsp[0].dref);
                                }
#line 2981 "y.tab.c"
    break;

  case 128: /* CURRFEILD: ID  */
#line 1286 "parser.y"
                                {
                                    (yyval.dref) = createdrefList((yyvsp[0].str));
                                }
#line 2989 "y.tab.c"
    break;


#line 2993 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1290 "parser.y"



/*** Auxiliary functions section ***/

yyerror(char const *s)
{
    printf("yyerror :\t%s\n",s);
    exit(1);
}


