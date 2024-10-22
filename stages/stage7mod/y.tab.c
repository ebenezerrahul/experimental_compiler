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

char *int_string = "int";
char *str_string = "string";
char *self_string = "self";
ClassTable *Cptr;

int getLabel();
struct drefList *createdrefList(char*);
ClassTable *searchClassTable(char *);

#line 93 "y.tab.c"

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
    INT_CONST = 276,               /* INT_CONST  */
    STR_CONST = 277,               /* STR_CONST  */
    ID = 278,                      /* ID  */
    IF = 279,                      /* IF  */
    THEN = 280,                    /* THEN  */
    ELSE = 281,                    /* ELSE  */
    ENDIF = 282,                   /* ENDIF  */
    WHILE = 283,                   /* WHILE  */
    DO = 284,                      /* DO  */
    ENDWHILE = 285,                /* ENDWHILE  */
    BREAK = 286,                   /* BREAK  */
    CONTINUE = 287,                /* CONTINUE  */
    READ = 288,                    /* READ  */
    WRITE = 289,                   /* WRITE  */
    NOT = 290,                     /* NOT  */
    AND = 291,                     /* AND  */
    OR = 292,                      /* OR  */
    EQ = 293,                      /* EQ  */
    NE = 294,                      /* NE  */
    GE = 295,                      /* GE  */
    GT = 296,                      /* GT  */
    LE = 297,                      /* LE  */
    LT = 298                       /* LT  */
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
#define INT_CONST 276
#define STR_CONST 277
#define ID 278
#define IF 279
#define THEN 280
#define ELSE 281
#define ENDIF 282
#define WHILE 283
#define DO 284
#define ENDWHILE 285
#define BREAK 286
#define CONTINUE 287
#define READ 288
#define WRITE 289
#define NOT 290
#define AND 291
#define OR 292
#define EQ 293
#define NE 294
#define GE 295
#define GT 296
#define LE 297
#define LT 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "parser.y"

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

#line 246 "y.tab.c"

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
  YYSYMBOL_INT_CONST = 21,                 /* INT_CONST  */
  YYSYMBOL_STR_CONST = 22,                 /* STR_CONST  */
  YYSYMBOL_ID = 23,                        /* ID  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_THEN = 25,                      /* THEN  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_ENDIF = 27,                     /* ENDIF  */
  YYSYMBOL_WHILE = 28,                     /* WHILE  */
  YYSYMBOL_DO = 29,                        /* DO  */
  YYSYMBOL_ENDWHILE = 30,                  /* ENDWHILE  */
  YYSYMBOL_BREAK = 31,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 32,                  /* CONTINUE  */
  YYSYMBOL_READ = 33,                      /* READ  */
  YYSYMBOL_WRITE = 34,                     /* WRITE  */
  YYSYMBOL_NOT = 35,                       /* NOT  */
  YYSYMBOL_AND = 36,                       /* AND  */
  YYSYMBOL_OR = 37,                        /* OR  */
  YYSYMBOL_EQ = 38,                        /* EQ  */
  YYSYMBOL_NE = 39,                        /* NE  */
  YYSYMBOL_GE = 40,                        /* GE  */
  YYSYMBOL_GT = 41,                        /* GT  */
  YYSYMBOL_LE = 42,                        /* LE  */
  YYSYMBOL_LT = 43,                        /* LT  */
  YYSYMBOL_44_ = 44,                       /* '%'  */
  YYSYMBOL_45_ = 45,                       /* '+'  */
  YYSYMBOL_46_ = 46,                       /* '-'  */
  YYSYMBOL_47_ = 47,                       /* '*'  */
  YYSYMBOL_48_ = 48,                       /* '/'  */
  YYSYMBOL_49_ = 49,                       /* '='  */
  YYSYMBOL_50_ = 50,                       /* '{'  */
  YYSYMBOL_51_ = 51,                       /* '}'  */
  YYSYMBOL_52_ = 52,                       /* '('  */
  YYSYMBOL_53_ = 53,                       /* ')'  */
  YYSYMBOL_54_ = 54,                       /* ';'  */
  YYSYMBOL_55_ = 55,                       /* ','  */
  YYSYMBOL_56_ = 56,                       /* '['  */
  YYSYMBOL_57_ = 57,                       /* ']'  */
  YYSYMBOL_58_ = 58,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_start = 60,                     /* start  */
  YYSYMBOL_PROGRAM = 61,                   /* PROGRAM  */
  YYSYMBOL_CLASSDEFBLOCK = 62,             /* CLASSDEFBLOCK  */
  YYSYMBOL_CLASSDEFLIST = 63,              /* CLASSDEFLIST  */
  YYSYMBOL_CLASSDEF = 64,                  /* CLASSDEF  */
  YYSYMBOL_PRIVATEDECLBLOCK = 65,          /* PRIVATEDECLBLOCK  */
  YYSYMBOL_CLASSNAME = 66,                 /* CLASSNAME  */
  YYSYMBOL_MEATHODDEFBLOCK = 67,           /* MEATHODDEFBLOCK  */
  YYSYMBOL_MEATHODDECLBLOCK1 = 68,         /* MEATHODDECLBLOCK1  */
  YYSYMBOL_MEATHODDECLBLOCK = 69,          /* MEATHODDECLBLOCK  */
  YYSYMBOL_MEATHODDECL = 70,               /* MEATHODDECL  */
  YYSYMBOL_MEATHODDEF = 71,                /* MEATHODDEF  */
  YYSYMBOL_TYPEDEFBLOCK = 72,              /* TYPEDEFBLOCK  */
  YYSYMBOL_TYPEDEFLIST = 73,               /* TYPEDEFLIST  */
  YYSYMBOL_TYPEDEFINATION = 74,            /* TYPEDEFINATION  */
  YYSYMBOL_FEILD_DEFINATION_LIST = 75,     /* FEILD_DEFINATION_LIST  */
  YYSYMBOL_FEILD_DEFINATION_ITEM = 76,     /* FEILD_DEFINATION_ITEM  */
  YYSYMBOL_GDECLBLOCK = 77,                /* GDECLBLOCK  */
  YYSYMBOL_GDECLLIST = 78,                 /* GDECLLIST  */
  YYSYMBOL_GDECL = 79,                     /* GDECL  */
  YYSYMBOL_GidLIST = 80,                   /* GidLIST  */
  YYSYMBOL_TYPE = 81,                      /* TYPE  */
  YYSYMBOL_FDEFBLOCK = 82,                 /* FDEFBLOCK  */
  YYSYMBOL_FDEF = 83,                      /* FDEF  */
  YYSYMBOL_PARAMDEFLIST = 84,              /* PARAMDEFLIST  */
  YYSYMBOL_PARAMLIST = 85,                 /* PARAMLIST  */
  YYSYMBOL_PARAM = 86,                     /* PARAM  */
  YYSYMBOL_LDECLBLOCK = 87,                /* LDECLBLOCK  */
  YYSYMBOL_LDECLLIST = 88,                 /* LDECLLIST  */
  YYSYMBOL_LDECL = 89,                     /* LDECL  */
  YYSYMBOL_LIDLIST = 90,                   /* LIDLIST  */
  YYSYMBOL_MAINBLOCK = 91,                 /* MAINBLOCK  */
  YYSYMBOL_BODY = 92,                      /* BODY  */
  YYSYMBOL_ARRAYDECL = 93,                 /* ARRAYDECL  */
  YYSYMBOL_STATEMENTS = 94,                /* STATEMENTS  */
  YYSYMBOL_STATEMENT = 95,                 /* STATEMENT  */
  YYSYMBOL_96_1 = 96,                      /* @1  */
  YYSYMBOL_FREESTATMENT = 97,              /* FREESTATMENT  */
  YYSYMBOL_INITHEAPSTATEMENT = 98,         /* INITHEAPSTATEMENT  */
  YYSYMBOL_ALLOCSTATEMENT = 99,            /* ALLOCSTATEMENT  */
  YYSYMBOL_ASSIGN_STATEMENT = 100,         /* ASSIGN_STATEMENT  */
  YYSYMBOL_REFERENCE = 101,                /* REFERENCE  */
  YYSYMBOL_ARRAY = 102,                    /* ARRAY  */
  YYSYMBOL_WRITE_STATEMENT = 103,          /* WRITE_STATEMENT  */
  YYSYMBOL_READ_STATEMENT = 104,           /* READ_STATEMENT  */
  YYSYMBOL_CONDITIONAL = 105,              /* CONDITIONAL  */
  YYSYMBOL_WHILE_STMT = 106,               /* WHILE_STMT  */
  YYSYMBOL_CONTINUE_STATEMENT = 107,       /* CONTINUE_STATEMENT  */
  YYSYMBOL_BREAK_STATEMENT = 108,          /* BREAK_STATEMENT  */
  YYSYMBOL_EXPR = 109,                     /* EXPR  */
  YYSYMBOL_ARGLIST = 110,                  /* ARGLIST  */
  YYSYMBOL_CURRFEILD = 111                 /* CURRFEILD  */
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
#define YYLAST   394

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  273

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
       2,     2,     2,     2,     2,     2,     2,    44,     2,     2,
      52,    53,    47,    45,    55,    46,    58,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
       2,    49,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    73,    73,    77,    78,    84,    88,    89,    92,    97,
     104,   107,   114,   122,   129,   130,   132,   139,   143,   149,
     160,   209,   213,   218,   224,   225,   228,   236,   241,   247,
     251,   255,   262,   263,   264,   267,   268,   270,   276,   281,
     286,   292,   298,   303,   309,   313,   317,   323,   324,   327,
     360,   366,   372,   377,   382,   390,   391,   392,   395,   396,
     399,   405,   411,   419,   440,   444,   468,   476,   488,   493,
     500,   504,   508,   513,   512,   519,   523,   527,   531,   539,
     543,   547,   555,   568,   579,   588,   600,   623,   655,   660,
     698,   712,   729,   749,   759,   769,   782,   798,   813,   822,
     831,   835,   846,   857,   868,   879,   890,   901,   913,   925,
     936,   947,   958,   962,   973,   984,   995,  1011,  1028,  1045,
    1064,  1119,  1209,  1216,  1223,  1229,  1234
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
  "ENDCLASS", "NEW", "INT_CONST", "STR_CONST", "ID", "IF", "THEN", "ELSE",
  "ENDIF", "WHILE", "DO", "ENDWHILE", "BREAK", "CONTINUE", "READ", "WRITE",
  "NOT", "AND", "OR", "EQ", "NE", "GE", "GT", "LE", "LT", "'%'", "'+'",
  "'-'", "'*'", "'/'", "'='", "'{'", "'}'", "'('", "')'", "';'", "','",
  "'['", "']'", "'.'", "$accept", "start", "PROGRAM", "CLASSDEFBLOCK",
  "CLASSDEFLIST", "CLASSDEF", "PRIVATEDECLBLOCK", "CLASSNAME",
  "MEATHODDEFBLOCK", "MEATHODDECLBLOCK1", "MEATHODDECLBLOCK",
  "MEATHODDECL", "MEATHODDEF", "TYPEDEFBLOCK", "TYPEDEFLIST",
  "TYPEDEFINATION", "FEILD_DEFINATION_LIST", "FEILD_DEFINATION_ITEM",
  "GDECLBLOCK", "GDECLLIST", "GDECL", "GidLIST", "TYPE", "FDEFBLOCK",
  "FDEF", "PARAMDEFLIST", "PARAMLIST", "PARAM", "LDECLBLOCK", "LDECLLIST",
  "LDECL", "LIDLIST", "MAINBLOCK", "BODY", "ARRAYDECL", "STATEMENTS",
  "STATEMENT", "@1", "FREESTATMENT", "INITHEAPSTATEMENT", "ALLOCSTATEMENT",
  "ASSIGN_STATEMENT", "REFERENCE", "ARRAY", "WRITE_STATEMENT",
  "READ_STATEMENT", "CONDITIONAL", "WHILE_STMT", "CONTINUE_STATEMENT",
  "BREAK_STATEMENT", "EXPR", "ARGLIST", "CURRFEILD", YY_NULLPTR
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
      -8,    18,    35,  -227,    48,  -227,    20,    40,    45,  -227,
       1,    77,    29,  -227,  -227,  -227,  -227,     9,  -227,    33,
      56,    41,    72,    74,    95,    82,    29,  -227,  -227,   129,
    -227,  -227,  -227,  -227,   262,  -227,   117,   131,   119,    41,
    -227,  -227,    90,    97,   101,  -227,  -227,    29,  -227,  -227,
      75,   103,    99,   104,   108,  -227,  -227,  -227,  -227,  -227,
     152,  -227,   127,   117,   142,  -227,   117,   137,   127,   183,
     169,   140,  -227,   139,  -227,   138,  -227,   146,   144,   127,
    -227,   157,   127,   159,   205,   166,   209,   127,  -227,   196,
     117,  -227,   226,   268,   245,   205,   127,  -227,   197,  -227,
     193,  -227,   228,   243,   214,    58,   219,   245,     3,  -227,
     251,   127,  -227,   221,  -227,  -227,   127,  -227,    -5,     0,
      -5,    -5,  -227,  -227,   227,   229,   276,   115,  -227,  -227,
    -227,   224,   233,   225,   230,   232,   234,   235,   236,   252,
    -227,   254,  -227,  -227,   255,   270,   228,  -227,  -227,  -227,
    -227,    -1,    -5,    -5,  -227,   218,    -5,   264,   128,   185,
     285,    -5,  -227,  -227,  -227,   100,   264,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,   127,   271,  -227,    -5,   301,   292,
     256,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,
      -5,    -5,    -5,    -5,  -227,   141,   305,  -227,   115,   115,
     273,   274,   312,   313,   315,   316,   292,  -227,  -227,   317,
    -227,   198,   318,   -29,  -227,   303,   303,   314,   314,   314,
     314,   314,   314,    -3,    46,    46,  -227,  -227,   310,   264,
     102,   339,  -227,  -227,   319,   320,   285,   127,   324,    -5,
    -227,    -5,   352,    -5,  -227,   115,  -227,  -227,   322,   323,
     325,   326,   205,  -227,   327,    67,   163,   354,  -227,  -227,
     328,   329,   245,  -227,    -5,  -227,  -227,  -227,  -227,   333,
     332,  -227,  -227
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      23,     0,     0,     2,     7,    21,     0,     0,    25,     1,
       0,    34,     0,    22,    24,     6,    13,     0,     9,     0,
       0,     0,     0,     0,     0,     0,    28,     5,     8,     0,
      44,    45,    32,    46,     0,    36,     0,    44,     0,     0,
      48,     4,     0,     0,     0,    26,    27,    12,    33,    35,
      39,     0,    43,     0,     0,    47,     3,    29,    30,    31,
       0,    11,    53,     0,     0,    37,     0,     0,    53,     0,
       0,     0,    50,    52,    38,     0,    42,     0,     0,     0,
      54,    40,    53,    66,    57,     0,     0,    16,    18,     0,
       0,    51,     0,     0,     0,    57,     0,    17,     0,    41,
       0,    55,     0,     0,     0,     0,     0,     0,     0,    15,
       0,    53,    67,    62,    60,    56,    59,    65,     0,    87,
       0,     0,    99,    98,     0,     0,     0,    69,    81,    79,
      80,     0,     0,    88,     0,     0,     0,     0,     0,     0,
      63,     0,    10,    14,     0,     0,     0,    58,   114,   113,
     115,    87,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,    64,    68,    70,     0,     0,    71,    72,    73,
      77,    76,    75,    49,    53,     0,    61,   124,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,   126,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    90,    74,     0,
      19,   123,     0,   126,   100,   116,   117,   106,   107,   109,
     108,   110,   111,   105,   101,   102,   103,   104,    91,     0,
       0,     0,    94,    93,     0,     0,     0,     0,     0,   124,
     119,   124,     0,     0,   125,     0,    95,    97,     0,     0,
       0,     0,    57,   122,     0,   126,     0,     0,    83,    84,
       0,     0,     0,   120,   124,    92,    96,    82,    85,     0,
       0,    20,   121
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -227,  -227,  -227,  -227,  -227,   369,  -227,  -227,  -227,  -227,
    -227,   300,   280,  -227,   381,  -227,   -14,  -227,  -227,  -227,
     356,   -41,   -20,  -227,   353,  -227,   -61,  -227,   -93,   275,
    -227,   247,   355,  -104,  -227,  -121,  -227,  -227,  -227,  -227,
    -227,  -227,  -100,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
     -81,  -226,  -155
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    11,    17,    18,    60,    19,   108,    86,
      87,    88,   109,     4,     7,     8,    25,    26,    21,    34,
      35,    51,    70,    39,    40,    71,    72,    73,    94,   103,
     104,   114,    41,   106,    52,   126,   127,   208,   128,   129,
     130,   131,   154,   133,   134,   135,   136,   137,   138,   139,
     211,   212,   197
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    38,   107,   141,     1,   132,   163,    78,    30,   148,
      31,   207,    46,   253,    36,   254,   149,   150,   151,    38,
      15,    91,    74,   241,    16,    76,    33,   132,    27,   242,
     152,     5,    16,    61,    22,     9,    23,   155,   270,   158,
     159,     6,   190,   191,   192,   193,    37,   153,    31,    99,
     145,   177,    24,    13,   142,   156,   156,   178,   157,    89,
     200,    30,   117,    31,    33,    32,    10,    89,     6,   118,
      12,   179,   180,   102,   244,   195,   110,   230,   231,    33,
     201,   119,   120,    29,   206,    20,   121,   244,   110,   122,
     123,   124,   125,   192,   193,    42,   102,    43,   132,   132,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   209,   148,   202,   203,   204,    44,   264,
     205,   149,   150,   151,   257,   229,   118,    62,   245,   246,
      63,    64,    30,    45,    31,   152,   250,    47,   119,   120,
      50,    53,    54,   121,    57,   132,   122,   123,   124,   125,
      33,    58,   153,   198,    66,    59,    67,    65,   269,   262,
      68,    69,   256,    75,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
      77,    79,    80,    81,    82,    83,    84,    85,   228,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,    90,    93,   199,    92,    95,   251,    96,    98,
     265,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   100,   105,   111,
     112,   113,   115,   239,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,    30,   116,    31,
     140,    48,   194,    30,   144,    31,   146,   101,   164,   160,
     162,   161,   165,   166,   167,    33,   168,   196,   169,   170,
     171,    33,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   173,   172,   174,   119,   214,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   175,   213,   210,   232,   233,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,    -1,    -1,    -1,    -1,    -1,    -1,   189,   190,
     191,   192,   193,   229,   234,   235,   243,   236,   237,   247,
     238,   240,   248,   249,   252,   255,   258,   259,   260,   261,
     263,   266,   267,   268,   271,   272,    28,    97,   143,    14,
      49,   147,    55,   176,    56
};

static const yytype_int16 yycheck[] =
{
      20,    21,    95,   107,    12,   105,   127,    68,     5,    14,
       7,   166,    26,   239,    34,   241,    21,    22,    23,    39,
      19,    82,    63,    52,    23,    66,    23,   127,    19,    58,
      35,    13,    23,    47,     5,     0,     7,   118,   264,   120,
     121,    23,    45,    46,    47,    48,     5,    52,     7,    90,
     111,    52,    23,    13,    51,    56,    56,    58,    58,    79,
     160,     5,     4,     7,    23,     9,    18,    87,    23,    11,
      50,   152,   153,    93,   229,   156,    96,   198,   199,    23,
     161,    23,    24,    50,   165,     8,    28,   242,   108,    31,
      32,    33,    34,    47,    48,    23,   116,    23,   198,   199,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   174,    14,    15,    16,    17,    23,    52,
      20,    21,    22,    23,   245,    58,    11,    52,    26,    27,
      55,    56,     5,    51,     7,    35,   236,     8,    23,    24,
      23,    10,    23,    28,    54,   245,    31,    32,    33,    34,
      23,    54,    52,    25,    55,    54,    52,    54,   262,   252,
      52,     9,   243,    21,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      53,     8,    23,    53,    55,    57,    50,    53,    57,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    55,     8,    29,    56,    50,   237,     9,    23,
      57,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    21,     3,    52,
      57,    23,     9,    55,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     5,    54,     7,
      51,     9,    54,     5,    23,     7,    55,     9,    54,    52,
       4,    52,    49,    58,    54,    23,    54,    23,    54,    54,
      54,    23,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    51,    54,    52,    23,    53,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    53,    23,    54,    53,    53,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    58,    52,    52,    56,    52,    52,    30,
      53,    53,    53,    53,    50,    23,    54,    54,    53,    53,
      53,    27,    54,    54,    51,    53,    17,    87,   108,     8,
      34,   116,    39,   146,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    12,    60,    61,    72,    13,    23,    73,    74,     0,
      18,    62,    50,    13,    73,    19,    23,    63,    64,    66,
       8,    77,     5,     7,    23,    75,    76,    19,    64,    50,
       5,     7,     9,    23,    78,    79,    81,     5,    81,    82,
      83,    91,    23,    23,    23,    51,    75,     8,     9,    79,
      23,    80,    93,    10,    23,    83,    91,    54,    54,    54,
      65,    75,    52,    55,    56,    54,    55,    52,    52,     9,
      81,    84,    85,    86,    80,    21,    80,    53,    85,     8,
      23,    53,    55,    57,    50,    53,    68,    69,    70,    81,
      55,    85,    56,     8,    87,    50,     9,    70,    23,    80,
      21,     9,    81,    88,    89,     3,    92,    87,    67,    71,
      81,    52,    57,    23,    90,     9,    54,     4,    11,    23,
      24,    28,    31,    32,    33,    34,    94,    95,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      51,    92,    51,    71,    23,    85,    55,    88,    14,    21,
      22,    23,    35,    52,   101,   109,    56,    58,   109,   109,
      52,    52,     4,    94,    54,    49,    58,    54,    54,    54,
      54,    54,    54,    51,    52,    53,    90,    52,    58,   109,
     109,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    54,   109,    23,   111,    25,    29,
     101,   109,    15,    16,    17,    20,   109,   111,    96,    85,
      54,   109,   110,    23,    53,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,    57,    58,
      94,    94,    53,    53,    52,    52,    52,    52,    53,    55,
      53,    52,    58,    56,   111,    26,    27,    30,    53,    53,
     101,    81,    50,   110,   110,    23,   109,    94,    54,    54,
      53,    53,    87,    53,    52,    57,    27,    54,    54,    92,
     110,    51,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    62,    63,    63,
      64,    65,    65,    66,    67,    67,    68,    69,    69,    70,
      71,    72,    72,    72,    73,    73,    74,    75,    75,    76,
      76,    76,    77,    77,    77,    78,    78,    79,    80,    80,
      80,    80,    80,    80,    81,    81,    81,    82,    82,    83,
      84,    85,    85,    85,    86,    87,    87,    87,    88,    88,
      89,    90,    90,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    95,    96,    95,    95,    95,    95,    95,    95,
      95,    95,    97,    98,    99,    99,   100,   101,   101,   101,
     101,   102,   102,   103,   104,   105,   105,   106,   107,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   110,   110,   110,   111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     5,     4,     3,     2,     0,     2,     1,
      10,     1,     0,     1,     2,     1,     1,     2,     1,     6,
       9,     2,     3,     0,     2,     1,     4,     2,     1,     3,
       3,     3,     2,     3,     0,     2,     1,     3,     3,     1,
       4,     6,     3,     1,     1,     1,     1,     2,     1,     9,
       1,     3,     1,     0,     2,     2,     3,     0,     3,     2,
       2,     3,     1,     8,     3,     2,     4,     7,     2,     1,
       2,     2,     2,     0,     3,     2,     2,     2,     3,     1,
       1,     1,     7,     6,     6,     7,     3,     1,     1,     3,
       3,     4,     7,     4,     4,     5,     7,     5,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     3,     3,     2,     4,
       6,     8,     3,     1,     0,     3,     1
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
#line 85 "parser.y"
                                {
                                    initializeFeildTypes();
                                }
#line 1550 "y.tab.c"
    break;

  case 8: /* CLASSDEFLIST: CLASSDEFLIST CLASSDEF  */
#line 93 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                    initializeFeildTypes();
                                }
#line 1559 "y.tab.c"
    break;

  case 9: /* CLASSDEFLIST: CLASSDEF  */
#line 98 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                    initializeFeildTypes();
                                }
#line 1568 "y.tab.c"
    break;

  case 11: /* PRIVATEDECLBLOCK: FEILD_DEFINATION_LIST  */
#line 108 "parser.y"
                                {
                                    addType(Cptr->name, calculateSizeOfFeilds((yyvsp[0].feilds)), (yyvsp[0].feilds));
                                    checkForDuplicateFeilds((yyvsp[0].feilds));
                                    initializeFeildTypes();
                                }
#line 1578 "y.tab.c"
    break;

  case 12: /* PRIVATEDECLBLOCK: %empty  */
#line 114 "parser.y"
                                {
                                    addType(Cptr->name, calculateSizeOfFeilds(NULL), NULL);
                                    checkForDuplicateFeilds(NULL);
                                    initializeFeildTypes();
                                }
#line 1588 "y.tab.c"
    break;

  case 13: /* CLASSNAME: ID  */
#line 123 "parser.y"
                                {
                                    printf("class name %s\n", (yyvsp[0].str));
                                    Cptr = ClassTableInstall((yyvsp[0].str), NULL);
                                }
#line 1597 "y.tab.c"
    break;

  case 16: /* MEATHODDECLBLOCK1: MEATHODDECLBLOCK  */
#line 133 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                    Gsymbol *curr_sym = installLocalSymbol(self_string, 0 , data_t);
                                    curr_sym->data_type = TypeLookUp(ClassTableLookUp(Cptr->name)->name);
                                }
#line 1607 "y.tab.c"
    break;

  case 17: /* MEATHODDECLBLOCK: MEATHODDECLBLOCK MEATHODDECL  */
#line 140 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                }
#line 1615 "y.tab.c"
    break;

  case 18: /* MEATHODDECLBLOCK: MEATHODDECL  */
#line 144 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                }
#line 1623 "y.tab.c"
    break;

  case 19: /* MEATHODDECL: TYPE ID '(' PARAMLIST ')' ';'  */
#line 150 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol(self_string, 0 , data_t);
                                    curr->data_type = (yyvsp[-5].type);
                                    ParamList *currParams = createParameter(self_string, (yyvsp[-5].type)) ;
                                    currParams->next = (yyvsp[-2].params);
                                    ClassFunctionsInstall(Cptr, (yyvsp[-4].str), currParams, (yyvsp[-5].type));
                                }
#line 1635 "y.tab.c"
    break;

  case 20: /* MEATHODDEF: TYPE ID '(' PARAMLIST ')' '{' LDECLBLOCK BODY '}'  */
#line 161 "parser.y"
                                {
                                    struct ParamList *currParams = createParameter(self_string, (yyvsp[-8].type)) ;
                                    currParams->next = (yyvsp[-5].params);
                                    printf("done here -\n");

                                    setFunction_return_type((yyvsp[-8].type));
                                    struct Memberfunclist *currFunction = ClassFunctionLookUp(Cptr, (yyvsp[-7].str));

                                    if(currFunction == NULL || currFunction->data_type != (yyvsp[-8].type) || matchParameters(currFunction->paramlist,currParams) == 0) {
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
                                    curr_sym->data_type = TypeLookUp(ClassTableLookUp(Cptr->name)->name);
                                }
#line 1683 "y.tab.c"
    break;

  case 21: /* TYPEDEFBLOCK: TYPEDEFBEG TYPEDEFEND  */
#line 210 "parser.y"
                                {
                                    initializeFeildTypes();
                                }
#line 1691 "y.tab.c"
    break;

  case 22: /* TYPEDEFBLOCK: TYPEDEFBEG TYPEDEFLIST TYPEDEFEND  */
#line 214 "parser.y"
                                {
                                    initializeFeildTypes();
                                }
#line 1699 "y.tab.c"
    break;

  case 23: /* TYPEDEFBLOCK: %empty  */
#line 218 "parser.y"
                                {
                                    printf("no custom types\n");
                                    initializeFeildTypes();
                                }
#line 1708 "y.tab.c"
    break;

  case 26: /* TYPEDEFINATION: ID '{' FEILD_DEFINATION_LIST '}'  */
#line 229 "parser.y"
                                {
                                    addType((yyvsp[-3].str), calculateSizeOfFeilds((yyvsp[-1].feilds)), (yyvsp[-1].feilds));
                                    checkForDuplicateFeilds((yyvsp[-1].feilds));
                                }
#line 1717 "y.tab.c"
    break;

  case 27: /* FEILD_DEFINATION_LIST: FEILD_DEFINATION_ITEM FEILD_DEFINATION_LIST  */
#line 237 "parser.y"
                                {
                                    (yyvsp[-1].feilds)->next = (yyvsp[0].feilds);
                                    (yyval.feilds) = (yyvsp[-1].feilds);
                                }
#line 1726 "y.tab.c"
    break;

  case 28: /* FEILD_DEFINATION_LIST: FEILD_DEFINATION_ITEM  */
#line 242 "parser.y"
                                {
                                    (yyval.feilds) = (yyvsp[0].feilds);
                                }
#line 1734 "y.tab.c"
    break;

  case 29: /* FEILD_DEFINATION_ITEM: INT ID ';'  */
#line 248 "parser.y"
                                {
                                    (yyval.feilds) = createFeild((yyvsp[-1].str), int_string);
                                }
#line 1742 "y.tab.c"
    break;

  case 30: /* FEILD_DEFINATION_ITEM: STRING ID ';'  */
#line 252 "parser.y"
                                {
                                    (yyval.feilds) = createFeild((yyvsp[-1].str), str_string);
                                }
#line 1750 "y.tab.c"
    break;

  case 31: /* FEILD_DEFINATION_ITEM: ID ID ';'  */
#line 256 "parser.y"
                                {
                                    (yyval.feilds) = createFeild((yyvsp[-1].str), (yyvsp[-2].str));
                                }
#line 1758 "y.tab.c"
    break;

  case 37: /* GDECL: TYPE GidLIST ';'  */
#line 271 "parser.y"
                                {
                                    setType((yyvsp[-1].decl),(yyvsp[-2].type));   
                                }
#line 1766 "y.tab.c"
    break;

  case 38: /* GidLIST: ID ',' GidLIST  */
#line 277 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-2].str), 1 , data_t);
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1775 "y.tab.c"
    break;

  case 39: /* GidLIST: ID  */
#line 282 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[0].str), 1, data_t);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1784 "y.tab.c"
    break;

  case 40: /* GidLIST: ID '(' PARAMDEFLIST ')'  */
#line 287 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-3].str), 0, function_type);
                                    curr->paramList = (yyvsp[-1].params);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1794 "y.tab.c"
    break;

  case 41: /* GidLIST: ID '(' PARAMDEFLIST ')' ',' GidLIST  */
#line 293 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-5].str), 0, function_type);
                                    curr->paramList = (yyvsp[-3].params);
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1804 "y.tab.c"
    break;

  case 42: /* GidLIST: ARRAYDECL ',' GidLIST  */
#line 299 "parser.y"
                                {  
                                    (yyvsp[-2].decl)->next = (yyvsp[0].decl);
                                    (yyval.decl) = (yyvsp[-2].decl);
                                }
#line 1813 "y.tab.c"
    break;

  case 43: /* GidLIST: ARRAYDECL  */
#line 304 "parser.y"
                                {
                                    (yyval.decl) = (yyvsp[0].decl);
                                }
#line 1821 "y.tab.c"
    break;

  case 44: /* TYPE: INT  */
#line 310 "parser.y"
                                {
                                    (yyval.type) = TypeLookUp("int");
                                }
#line 1829 "y.tab.c"
    break;

  case 45: /* TYPE: STRING  */
#line 314 "parser.y"
                                {
                                    (yyval.type) = TypeLookUp("string");
                                }
#line 1837 "y.tab.c"
    break;

  case 46: /* TYPE: ID  */
#line 318 "parser.y"
                                {
                                    (yyval.type) = TypeLookUp((yyvsp[0].str));
                                }
#line 1845 "y.tab.c"
    break;

  case 49: /* FDEF: TYPE ID '(' PARAMLIST ')' '{' LDECLBLOCK BODY '}'  */
#line 328 "parser.y"
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
#line 1880 "y.tab.c"
    break;

  case 50: /* PARAMDEFLIST: PARAMLIST  */
#line 361 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                }
#line 1888 "y.tab.c"
    break;

  case 51: /* PARAMLIST: PARAM ',' PARAMLIST  */
#line 367 "parser.y"
                                {
                                    (yyval.params) = (yyvsp[-2].params);
                                    (yyval.params)->next = (yyvsp[0].params);

                                }
#line 1898 "y.tab.c"
    break;

  case 52: /* PARAMLIST: PARAM  */
#line 373 "parser.y"
                                {
                                    (yyval.params) = (yyvsp[0].params);
                                }
#line 1906 "y.tab.c"
    break;

  case 53: /* PARAMLIST: %empty  */
#line 377 "parser.y"
                                {
                                    (yyval.params) = NULL;
                                }
#line 1914 "y.tab.c"
    break;

  case 54: /* PARAM: TYPE ID  */
#line 383 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[0].str), 0 , data_t);
                                    curr->data_type = (yyvsp[-1].type);
                                    (yyval.params) = createParameter((yyvsp[0].str), (yyvsp[-1].type));
                                }
#line 1924 "y.tab.c"
    break;

  case 60: /* LDECL: TYPE LIDLIST  */
#line 400 "parser.y"
                                {
                                    setType((yyvsp[0].decl), (yyvsp[-1].type));
                                }
#line 1932 "y.tab.c"
    break;

  case 61: /* LIDLIST: ID ',' LIDLIST  */
#line 406 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[-2].str), 0 , data_t);
                                    curr->Addr = getLocalBind();
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1942 "y.tab.c"
    break;

  case 62: /* LIDLIST: ID  */
#line 412 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[0].str), 0 , data_t);
                                    curr->Addr = getLocalBind();
                                    (yyval.decl) = createDeclList(curr, NULL);
                                }
#line 1952 "y.tab.c"
    break;

  case 63: /* MAINBLOCK: INT MAIN '(' ')' '{' LDECLBLOCK BODY '}'  */
#line 420 "parser.y"
                                {
                                    printf("INMAIN\n");
                                    setFunction_return_type(TypeLookUp("int"));
                                    Gsymbol *currFunction = installSymbol("main", 0,function_type);
                                    int label_1 = main_label;
                                    currFunction->flabel = label_1;
                                    fprintf(target_file,"LABEL %d:\n", label_1);
                                    fprintf(target_file, "ADD SP, %d\n", bindAddr(0) - 4096);
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
#line 1975 "y.tab.c"
    break;

  case 64: /* BODY: BEG STATEMENTS END  */
#line 441 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1983 "y.tab.c"
    break;

  case 66: /* ARRAYDECL: ID '[' INT_CONST ']'  */
#line 469 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-3].str), (yyvsp[-1].val), arr_t);
                                    curr->dimensions = 1;
                                    curr->rowSize = (yyvsp[-1].val);
                                    curr->columnSize = -1;
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1995 "y.tab.c"
    break;

  case 67: /* ARRAYDECL: ID '[' INT_CONST ']' '[' INT_CONST ']'  */
#line 477 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-6].str), (yyvsp[-4].val) * (yyvsp[-1].val), arr_t);
                                    curr->dimensions = 2;
                                    curr->rowSize = (yyvsp[-4].val);
                                    curr->columnSize = (yyvsp[-1].val);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 2007 "y.tab.c"
    break;

  case 68: /* STATEMENTS: STATEMENT STATEMENTS  */
#line 489 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                    (yyval.snode)->next = (yyvsp[0].snode);
                                }
#line 2016 "y.tab.c"
    break;

  case 69: /* STATEMENTS: STATEMENT  */
#line 494 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                    (yyval.snode)->next = NULL;
                                }
#line 2025 "y.tab.c"
    break;

  case 70: /* STATEMENT: ASSIGN_STATEMENT ';'  */
#line 501 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2033 "y.tab.c"
    break;

  case 71: /* STATEMENT: WRITE_STATEMENT ';'  */
#line 505 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2041 "y.tab.c"
    break;

  case 72: /* STATEMENT: READ_STATEMENT ';'  */
#line 509 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2049 "y.tab.c"
    break;

  case 73: /* @1: %empty  */
#line 513 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2057 "y.tab.c"
    break;

  case 74: /* STATEMENT: CONDITIONAL ';' @1  */
#line 516 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-2].snode);
                                }
#line 2065 "y.tab.c"
    break;

  case 75: /* STATEMENT: BREAK_STATEMENT ';'  */
#line 520 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2073 "y.tab.c"
    break;

  case 76: /* STATEMENT: CONTINUE_STATEMENT ';'  */
#line 524 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2081 "y.tab.c"
    break;

  case 77: /* STATEMENT: WHILE_STMT ';'  */
#line 528 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2089 "y.tab.c"
    break;

  case 78: /* STATEMENT: RETURN EXPR ';'  */
#line 532 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = return_stmt;
                                    temp.expr = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2101 "y.tab.c"
    break;

  case 79: /* STATEMENT: INITHEAPSTATEMENT  */
#line 540 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                }
#line 2109 "y.tab.c"
    break;

  case 80: /* STATEMENT: ALLOCSTATEMENT  */
#line 544 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                }
#line 2117 "y.tab.c"
    break;

  case 81: /* STATEMENT: FREESTATMENT  */
#line 548 "parser.y"
                                {

                                    (yyval.snode) = (yyvsp[0].snode);
                                }
#line 2126 "y.tab.c"
    break;

  case 82: /* FREESTATMENT: REFERENCE '=' FREE '(' REFERENCE ')' ';'  */
#line 556 "parser.y"
                                {

                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = freeStatement;
                                    temp.expr = (yyvsp[-2].expr);
                                    temp.reference = (yyvsp[-6].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2140 "y.tab.c"
    break;

  case 83: /* INITHEAPSTATEMENT: REFERENCE '=' INITIALIZE '(' ')' ';'  */
#line 569 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = initializeStatement;
                                    temp.expr = (yyvsp[-3].expr);
                                    temp.reference = (yyvsp[-5].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2153 "y.tab.c"
    break;

  case 84: /* ALLOCSTATEMENT: REFERENCE '=' ALLOC '(' ')' ';'  */
#line 580 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = allocStatement;
                                    temp.expr = (yyvsp[-3].expr);
                                    temp.reference = (yyvsp[-5].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2166 "y.tab.c"
    break;

  case 85: /* ALLOCSTATEMENT: REFERENCE '=' NEW '(' TYPE ')' ';'  */
#line 589 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = allocStatement;
                                    temp.expr = (yyvsp[-4].expr);
                                    temp.reference = (yyvsp[-6].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2179 "y.tab.c"
    break;

  case 86: /* ASSIGN_STATEMENT: REFERENCE '=' EXPR  */
#line 601 "parser.y"
                                {
                                    printf("EVALUATING ASSIGNMENT\n");
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = assign_stmt;
                                    temp.expr = (yyvsp[0].expr);
                                    temp.reference = (yyvsp[-2].expr);
                                    if((yyvsp[-2].expr)->data_type != (yyvsp[0].expr)->data_type && (yyvsp[0].expr)->data_type != TypeLookUp("null"))
                                    {
                                        printf("INVALID ASSGIGNMENT\n");
                                        exit(1);
                                    }
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2198 "y.tab.c"
    break;

  case 87: /* REFERENCE: ID  */
#line 624 "parser.y"
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
#line 2234 "y.tab.c"
    break;

  case 88: /* REFERENCE: ARRAY  */
#line 656 "parser.y"
                                {
                                    // check with array declaration
                                    (yyval.expr) = (yyvsp[0].expr);
                                }
#line 2243 "y.tab.c"
    break;

  case 89: /* REFERENCE: ID '.' CURRFEILD  */
#line 661 "parser.y"
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
#line 2285 "y.tab.c"
    break;

  case 90: /* REFERENCE: ARRAY '.' CURRFEILD  */
#line 699 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[-2].expr);
                                    (yyval.expr)->dref = (yyvsp[0].dref);
                                    (yyval.expr)->data_type = initDref((yyval.expr)->data_type, (yyvsp[0].dref));
                                    if(strcmp((yyval.expr)->symbol->name, "self") != 0 && searchClassTable((yyval.expr)->symbol->data_type->name) != NULL){
                                        printf("private Var access\n");
                                        exit(1);
                                    }
                                }
#line 2299 "y.tab.c"
    break;

  case 91: /* ARRAY: ID '[' EXPR ']'  */
#line 713 "parser.y"
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
#line 2320 "y.tab.c"
    break;

  case 92: /* ARRAY: ID '[' EXPR ']' '[' EXPR ']'  */
#line 730 "parser.y"
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
#line 2341 "y.tab.c"
    break;

  case 93: /* WRITE_STATEMENT: WRITE '(' EXPR ')'  */
#line 750 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = write_stmt;
                                    temp.expr = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2353 "y.tab.c"
    break;

  case 94: /* READ_STATEMENT: READ '(' REFERENCE ')'  */
#line 760 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = read_stmt;
                                    temp.reference = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2365 "y.tab.c"
    break;

  case 95: /* CONDITIONAL: IF EXPR THEN STATEMENTS ENDIF  */
#line 770 "parser.y"
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
#line 2382 "y.tab.c"
    break;

  case 96: /* CONDITIONAL: IF EXPR THEN STATEMENTS ELSE STATEMENTS ENDIF  */
#line 783 "parser.y"
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
#line 2400 "y.tab.c"
    break;

  case 97: /* WHILE_STMT: WHILE EXPR DO STATEMENTS ENDWHILE  */
#line 799 "parser.y"
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
#line 2417 "y.tab.c"
    break;

  case 98: /* CONTINUE_STATEMENT: CONTINUE  */
#line 814 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = continue_stmt;
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2428 "y.tab.c"
    break;

  case 99: /* BREAK_STATEMENT: BREAK  */
#line 823 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = break_stmt;
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2439 "y.tab.c"
    break;

  case 100: /* EXPR: '(' EXPR ')'  */
#line 832 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[-1].expr);
                                }
#line 2447 "y.tab.c"
    break;

  case 101: /* EXPR: EXPR '+' EXPR  */
#line 836 "parser.y"
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
#line 2462 "y.tab.c"
    break;

  case 102: /* EXPR: EXPR '-' EXPR  */
#line 847 "parser.y"
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
#line 2477 "y.tab.c"
    break;

  case 103: /* EXPR: EXPR '*' EXPR  */
#line 858 "parser.y"
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
#line 2492 "y.tab.c"
    break;

  case 104: /* EXPR: EXPR '/' EXPR  */
#line 869 "parser.y"
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
#line 2507 "y.tab.c"
    break;

  case 105: /* EXPR: EXPR '%' EXPR  */
#line 880 "parser.y"
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
#line 2522 "y.tab.c"
    break;

  case 106: /* EXPR: EXPR EQ EXPR  */
#line 891 "parser.y"
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
#line 2537 "y.tab.c"
    break;

  case 107: /* EXPR: EXPR NE EXPR  */
#line 902 "parser.y"
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
#line 2553 "y.tab.c"
    break;

  case 108: /* EXPR: EXPR GT EXPR  */
#line 914 "parser.y"
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
#line 2569 "y.tab.c"
    break;

  case 109: /* EXPR: EXPR GE EXPR  */
#line 926 "parser.y"
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
#line 2584 "y.tab.c"
    break;

  case 110: /* EXPR: EXPR LE EXPR  */
#line 937 "parser.y"
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
#line 2599 "y.tab.c"
    break;

  case 111: /* EXPR: EXPR LT EXPR  */
#line 948 "parser.y"
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
#line 2614 "y.tab.c"
    break;

  case 112: /* EXPR: REFERENCE  */
#line 959 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[0].expr);
                                }
#line 2622 "y.tab.c"
    break;

  case 113: /* EXPR: INT_CONST  */
#line 963 "parser.y"
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
#line 2637 "y.tab.c"
    break;

  case 114: /* EXPR: null_const  */
#line 974 "parser.y"
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
#line 2652 "y.tab.c"
    break;

  case 115: /* EXPR: STR_CONST  */
#line 985 "parser.y"
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
#line 2667 "y.tab.c"
    break;

  case 116: /* EXPR: EXPR AND EXPR  */
#line 996 "parser.y"
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
#line 2687 "y.tab.c"
    break;

  case 117: /* EXPR: EXPR OR EXPR  */
#line 1012 "parser.y"
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
#line 2708 "y.tab.c"
    break;

  case 118: /* EXPR: NOT EXPR  */
#line 1029 "parser.y"
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
#line 2729 "y.tab.c"
    break;

  case 119: /* EXPR: ID '(' ARGLIST ')'  */
#line 1046 "parser.y"
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
#line 2752 "y.tab.c"
    break;

  case 120: /* EXPR: ID '.' ID '(' ARGLIST ')'  */
#line 1065 "parser.y"
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
                                    if(currFunction == NULL){ // checkArguments(currFunction, currArg) == 0) {
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
#line 2811 "y.tab.c"
    break;

  case 121: /* EXPR: ID '.' ID '.' ID '(' ARGLIST ')'  */
#line 1120 "parser.y"
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
                                    if(currFunction == NULL){ // checkArguments(currFunction, currArg) == 0) {
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
#line 2876 "y.tab.c"
    break;

  case 122: /* ARGLIST: EXPR ',' ARGLIST  */
#line 1210 "parser.y"
                                {
                                    (yyvsp[-2].expr)->isLocal = 1;
                                    struct ArgList *currArg = createNewArg((yyvsp[-2].expr));
                                    currArg->next = (yyvsp[0].argList);
                                    (yyval.argList) = currArg;
                                }
#line 2887 "y.tab.c"
    break;

  case 123: /* ARGLIST: EXPR  */
#line 1217 "parser.y"
                                {
                                    (yyvsp[0].expr)->isLocal = 1;
                                    struct ArgList *currArg = createNewArg((yyvsp[0].expr));
                                    (yyval.argList) = currArg;
                                }
#line 2897 "y.tab.c"
    break;

  case 124: /* ARGLIST: %empty  */
#line 1223 "parser.y"
                                {
                                    (yyval.argList) = NULL;
                                }
#line 2905 "y.tab.c"
    break;

  case 125: /* CURRFEILD: ID '.' CURRFEILD  */
#line 1230 "parser.y"
                                { 
                                    (yyval.dref) = createdrefList((yyvsp[-2].str));
                                    (yyval.dref)->next = (yyvsp[0].dref);
                                }
#line 2914 "y.tab.c"
    break;

  case 126: /* CURRFEILD: ID  */
#line 1235 "parser.y"
                                {
                                    (yyval.dref) = createdrefList((yyvsp[0].str));
                                }
#line 2922 "y.tab.c"
    break;


#line 2926 "y.tab.c"

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

#line 1239 "parser.y"



/*** Auxiliary functions section ***/

yyerror(char const *s)
{
    printf("yyerror :\t%s\n",s);
    exit(1);
}


