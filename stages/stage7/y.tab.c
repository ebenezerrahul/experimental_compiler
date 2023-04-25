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

#line 89 "y.tab.c"

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
#line 20 "parser.y"

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

#line 242 "y.tab.c"

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
#define YYLAST   388

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  268

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
       0,    69,    69,    73,    74,    80,    84,    85,    88,    93,
     100,   103,   112,   119,   120,   122,   129,   133,   139,   150,
     199,   203,   208,   214,   215,   218,   226,   231,   237,   241,
     245,   252,   253,   254,   257,   258,   260,   266,   271,   276,
     282,   288,   293,   299,   303,   307,   313,   314,   317,   350,
     356,   362,   367,   372,   380,   381,   382,   385,   386,   389,
     395,   401,   409,   430,   434,   458,   466,   478,   483,   490,
     494,   498,   503,   502,   509,   513,   517,   521,   529,   533,
     537,   545,   558,   569,   578,   590,   607,   639,   644,   678,
     687,   704,   724,   734,   744,   757,   773,   788,   797,   806,
     810,   821,   832,   843,   854,   865,   876,   888,   900,   911,
     922,   933,   937,   948,   959,   970,   986,  1003,  1020,  1039,
    1096,  1103,  1110,  1116,  1121
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

#define YYPACT_NINF (-157)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,    19,    28,  -157,    17,  -157,    -7,    40,    45,  -157,
       1,    79,     8,  -157,  -157,  -157,  -157,    47,  -157,    74,
      29,    41,    72,   108,   111,    84,     8,  -157,  -157,    89,
    -157,  -157,  -157,  -157,    56,  -157,   114,   128,   116,    41,
    -157,  -157,    87,    88,    95,  -157,  -157,     8,  -157,  -157,
     -11,    96,    97,    91,   101,  -157,  -157,  -157,  -157,  -157,
     145,  -157,   110,   114,   134,  -157,   114,   106,   110,   152,
     166,   137,  -157,   136,  -157,   155,  -157,   143,   141,   110,
    -157,   158,   110,   159,   206,   168,   210,   110,  -157,   193,
     114,  -157,   213,   109,   232,   206,   110,  -157,   186,  -157,
     180,  -157,   216,   231,   187,    58,   218,   232,     3,  -157,
     247,   110,  -157,   217,  -157,  -157,   110,  -157,    -5,     0,
      -5,    -5,  -157,  -157,   219,   221,   270,   164,  -157,  -157,
    -157,   235,   241,   233,   238,   239,   254,   255,   256,   257,
    -157,   275,  -157,  -157,   276,   274,   216,  -157,  -157,  -157,
    -157,    -1,    -5,    -5,  -157,   240,    -5,   332,   126,   207,
     333,    -5,  -157,  -157,  -157,   105,   332,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,   110,   303,  -157,    -5,   335,   295,
     259,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,
      -5,    -5,    -5,    -5,  -157,   163,   271,  -157,   164,   164,
     307,   277,   309,   310,   311,   312,   295,  -157,  -157,   313,
    -157,   220,   314,   -29,  -157,   138,   138,   306,   306,   306,
     306,   306,   306,   100,    46,    46,  -157,  -157,   315,   332,
     103,   329,  -157,  -157,   316,   317,   333,   110,   318,    -5,
    -157,    -5,    -5,  -157,   164,  -157,  -157,   319,   320,   322,
     323,   206,  -157,   324,   185,   338,  -157,  -157,   325,   326,
     232,  -157,  -157,  -157,  -157,  -157,   321,  -157
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      22,     0,     0,     2,     7,    20,     0,     0,    24,     1,
       0,    33,     0,    21,    23,     6,    12,     0,     9,     0,
       0,     0,     0,     0,     0,     0,    27,     5,     8,     0,
      43,    44,    31,    45,     0,    35,     0,    43,     0,     0,
      47,     4,     0,     0,     0,    25,    26,     0,    32,    34,
      38,     0,    42,     0,     0,    46,     3,    28,    29,    30,
       0,    11,    52,     0,     0,    36,     0,     0,    52,     0,
       0,     0,    49,    51,    37,     0,    41,     0,     0,     0,
      53,    39,    52,    65,    56,     0,     0,    15,    17,     0,
       0,    50,     0,     0,     0,    56,     0,    16,     0,    40,
       0,    54,     0,     0,     0,     0,     0,     0,     0,    14,
       0,    52,    66,    61,    59,    55,    58,    64,     0,    86,
       0,     0,    98,    97,     0,     0,     0,    68,    80,    78,
      79,     0,     0,    87,     0,     0,     0,     0,     0,     0,
      62,     0,    10,    13,     0,     0,     0,    57,   113,   112,
     114,    86,     0,     0,   111,     0,     0,     0,     0,     0,
       0,     0,    63,    67,    69,     0,     0,    70,    71,    72,
      76,    75,    74,    48,    52,     0,    60,   122,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,   124,    88,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    89,    73,     0,
      18,   121,     0,   124,    99,   115,   116,   105,   106,   108,
     107,   109,   110,   104,   100,   101,   102,   103,    90,     0,
       0,     0,    93,    92,     0,     0,     0,     0,     0,   122,
     118,   122,     0,   123,     0,    94,    96,     0,     0,     0,
       0,    56,   120,     0,     0,     0,    82,    83,     0,     0,
       0,   119,    91,    95,    81,    84,     0,    19
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,  -157,  -157,  -157,   361,  -157,  -157,  -157,  -157,
    -157,   294,   278,  -157,   374,  -157,   -14,  -157,  -157,  -157,
     349,   -41,   -20,  -157,   345,  -157,   -61,  -157,   -93,   269,
    -157,   242,   348,  -104,  -157,  -121,  -157,  -157,  -157,  -157,
    -157,  -157,  -100,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
     -81,  -156,  -155
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
      31,   207,    46,    22,    36,    23,   149,   150,   151,    38,
      15,    91,    74,   241,    16,    76,    33,   132,     9,   229,
     152,    24,     5,    61,    30,    10,    31,   155,    32,   158,
     159,    62,     6,    12,    63,    64,    37,   153,    31,    99,
     145,   177,    33,    13,   142,   156,   156,   178,   157,    89,
     200,    30,   117,    31,    33,    48,    27,    89,     6,   118,
      16,   179,   180,   102,   243,   195,   110,   230,   231,    33,
     201,   119,   120,   252,   206,   253,   121,    20,   110,   122,
     123,   124,   125,   192,   193,    42,   102,    47,   132,   132,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   209,    30,    30,    31,    31,   101,   148,
     202,   203,   204,   255,    29,   205,   149,   150,   151,   244,
     245,    43,    33,    33,    44,    45,   249,    50,    53,    54,
     152,    57,    58,    67,   132,   190,   191,   192,   193,    59,
      65,   198,    66,    68,    69,    75,   266,   153,   260,    77,
      79,   254,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   118,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   119,   120,    80,
      81,    82,   121,    84,    85,   122,   123,   124,   125,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,    83,    90,    93,    92,    98,   250,    95,    96,
     228,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   100,   105,   199,   112,   111,   113,
     115,   116,   262,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   140,
     144,   160,   146,   161,   162,   239,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   164,
     165,   166,   167,   168,   194,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   169,   170,
     171,   172,   214,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   173,   175,   174,   229,
     233,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   190,   191,   192,   193,   196,   119,   210,   213,   246,
     232,   234,   235,   236,   237,   263,   238,   240,   251,   247,
     248,   242,   267,   256,   257,   258,   259,   261,    28,   264,
     265,    97,    14,    49,    55,   147,   143,    56,   176
};

static const yytype_int16 yycheck[] =
{
      20,    21,    95,   107,    12,   105,   127,    68,     5,    14,
       7,   166,    26,     5,    34,     7,    21,    22,    23,    39,
      19,    82,    63,    52,    23,    66,    23,   127,     0,    58,
      35,    23,    13,    47,     5,    18,     7,   118,     9,   120,
     121,    52,    23,    50,    55,    56,     5,    52,     7,    90,
     111,    52,    23,    13,    51,    56,    56,    58,    58,    79,
     160,     5,     4,     7,    23,     9,    19,    87,    23,    11,
      23,   152,   153,    93,   229,   156,    96,   198,   199,    23,
     161,    23,    24,   239,   165,   241,    28,     8,   108,    31,
      32,    33,    34,    47,    48,    23,   116,     8,   198,   199,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   174,     5,     5,     7,     7,     9,    14,
      15,    16,    17,   244,    50,    20,    21,    22,    23,    26,
      27,    23,    23,    23,    23,    51,   236,    23,    10,    23,
      35,    54,    54,    52,   244,    45,    46,    47,    48,    54,
      54,    25,    55,    52,     9,    21,   260,    52,   251,    53,
       8,   242,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    11,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    23,    24,    23,
      53,    55,    28,    50,    53,    31,    32,    33,    34,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    57,    55,     8,    56,    23,   237,    50,     9,
      57,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    21,     3,    29,    57,    52,    23,
       9,    54,    57,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    51,
      23,    52,    55,    52,     4,    55,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    54,
      49,    58,    54,    54,    54,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    54,    54,
      54,    54,    53,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    51,    53,    52,    58,
      53,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    23,    23,    54,    23,    30,
      53,    52,    52,    52,    52,    27,    53,    53,    50,    53,
      53,    56,    51,    54,    54,    53,    53,    53,    17,    54,
      54,    87,     8,    34,    39,   116,   108,    39,   146
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
      53,    52,    56,   111,    26,    27,    30,    53,    53,   101,
      81,    50,   110,   110,   109,    94,    54,    54,    53,    53,
      87,    53,    57,    27,    54,    54,    92,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    62,    63,    63,
      64,    65,    66,    67,    67,    68,    69,    69,    70,    71,
      72,    72,    72,    73,    73,    74,    75,    75,    76,    76,
      76,    77,    77,    77,    78,    78,    79,    80,    80,    80,
      80,    80,    80,    81,    81,    81,    82,    82,    83,    84,
      85,    85,    85,    86,    87,    87,    87,    88,    88,    89,
      90,    90,    91,    92,    92,    93,    93,    94,    94,    95,
      95,    95,    96,    95,    95,    95,    95,    95,    95,    95,
      95,    97,    98,    99,    99,   100,   101,   101,   101,   101,
     102,   102,   103,   104,   105,   105,   106,   107,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     110,   110,   110,   111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     5,     4,     3,     2,     0,     2,     1,
      10,     1,     1,     2,     1,     1,     2,     1,     6,     9,
       2,     3,     0,     2,     1,     4,     2,     1,     3,     3,
       3,     2,     3,     0,     2,     1,     3,     3,     1,     4,
       6,     3,     1,     1,     1,     1,     2,     1,     9,     1,
       3,     1,     0,     2,     2,     3,     0,     3,     2,     2,
       3,     1,     8,     3,     2,     4,     7,     2,     1,     2,
       2,     2,     0,     3,     2,     2,     2,     3,     1,     1,
       1,     7,     6,     6,     7,     3,     1,     1,     3,     3,
       4,     7,     4,     4,     5,     7,     5,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     3,     3,     2,     4,     6,
       3,     1,     0,     3,     1
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
#line 81 "parser.y"
                                {
                                    initializeFeildTypes();
                                }
#line 1541 "y.tab.c"
    break;

  case 8: /* CLASSDEFLIST: CLASSDEFLIST CLASSDEF  */
#line 89 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                    initializeFeildTypes();
                                }
#line 1550 "y.tab.c"
    break;

  case 9: /* CLASSDEFLIST: CLASSDEF  */
#line 94 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                    initializeFeildTypes();
                                }
#line 1559 "y.tab.c"
    break;

  case 11: /* PRIVATEDECLBLOCK: FEILD_DEFINATION_LIST  */
#line 104 "parser.y"
                                {
                                    addType(Cptr->name, calculateSizeOfFeilds((yyvsp[0].feilds)), (yyvsp[0].feilds));
                                    checkForDuplicateFeilds((yyvsp[0].feilds));
                                    initializeFeildTypes();
                                }
#line 1569 "y.tab.c"
    break;

  case 12: /* CLASSNAME: ID  */
#line 113 "parser.y"
                                {
                                    printf("class name %s\n", (yyvsp[0].str));
                                    Cptr = ClassTableInstall((yyvsp[0].str), NULL);
                                }
#line 1578 "y.tab.c"
    break;

  case 15: /* MEATHODDECLBLOCK1: MEATHODDECLBLOCK  */
#line 123 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                    Gsymbol *curr_sym = installLocalSymbol(self_string, 0 , data_t);
                                    curr_sym->data_type = TypeLookUp(ClassTableLookUp(Cptr->name)->name);
                                }
#line 1588 "y.tab.c"
    break;

  case 16: /* MEATHODDECLBLOCK: MEATHODDECLBLOCK MEATHODDECL  */
#line 130 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                }
#line 1596 "y.tab.c"
    break;

  case 17: /* MEATHODDECLBLOCK: MEATHODDECL  */
#line 134 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                }
#line 1604 "y.tab.c"
    break;

  case 18: /* MEATHODDECL: TYPE ID '(' PARAMLIST ')' ';'  */
#line 140 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol(self_string, 0 , data_t);
                                    curr->data_type = (yyvsp[-5].type);
                                    ParamList *currParams = createParameter(self_string, (yyvsp[-5].type)) ;
                                    currParams->next = (yyvsp[-2].params);
                                    ClassFunctionsInstall(Cptr, (yyvsp[-4].str), currParams, (yyvsp[-5].type));
                                }
#line 1616 "y.tab.c"
    break;

  case 19: /* MEATHODDEF: TYPE ID '(' PARAMLIST ')' '{' LDECLBLOCK BODY '}'  */
#line 151 "parser.y"
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
#line 1664 "y.tab.c"
    break;

  case 20: /* TYPEDEFBLOCK: TYPEDEFBEG TYPEDEFEND  */
#line 200 "parser.y"
                                {
                                    initializeFeildTypes();
                                }
#line 1672 "y.tab.c"
    break;

  case 21: /* TYPEDEFBLOCK: TYPEDEFBEG TYPEDEFLIST TYPEDEFEND  */
#line 204 "parser.y"
                                {
                                    initializeFeildTypes();
                                }
#line 1680 "y.tab.c"
    break;

  case 22: /* TYPEDEFBLOCK: %empty  */
#line 208 "parser.y"
                                {
                                    printf("no custom types\n");
                                    initializeFeildTypes();
                                }
#line 1689 "y.tab.c"
    break;

  case 25: /* TYPEDEFINATION: ID '{' FEILD_DEFINATION_LIST '}'  */
#line 219 "parser.y"
                                {
                                    addType((yyvsp[-3].str), calculateSizeOfFeilds((yyvsp[-1].feilds)), (yyvsp[-1].feilds));
                                    checkForDuplicateFeilds((yyvsp[-1].feilds));
                                }
#line 1698 "y.tab.c"
    break;

  case 26: /* FEILD_DEFINATION_LIST: FEILD_DEFINATION_ITEM FEILD_DEFINATION_LIST  */
#line 227 "parser.y"
                                {
                                    (yyvsp[-1].feilds)->next = (yyvsp[0].feilds);
                                    (yyval.feilds) = (yyvsp[-1].feilds);
                                }
#line 1707 "y.tab.c"
    break;

  case 27: /* FEILD_DEFINATION_LIST: FEILD_DEFINATION_ITEM  */
#line 232 "parser.y"
                                {
                                    (yyval.feilds) = (yyvsp[0].feilds);
                                }
#line 1715 "y.tab.c"
    break;

  case 28: /* FEILD_DEFINATION_ITEM: INT ID ';'  */
#line 238 "parser.y"
                                {
                                    (yyval.feilds) = createFeild((yyvsp[-1].str), int_string);
                                }
#line 1723 "y.tab.c"
    break;

  case 29: /* FEILD_DEFINATION_ITEM: STRING ID ';'  */
#line 242 "parser.y"
                                {
                                    (yyval.feilds) = createFeild((yyvsp[-1].str), str_string);
                                }
#line 1731 "y.tab.c"
    break;

  case 30: /* FEILD_DEFINATION_ITEM: ID ID ';'  */
#line 246 "parser.y"
                                {
                                    (yyval.feilds) = createFeild((yyvsp[-1].str), (yyvsp[-2].str));
                                }
#line 1739 "y.tab.c"
    break;

  case 36: /* GDECL: TYPE GidLIST ';'  */
#line 261 "parser.y"
                                {
                                    setType((yyvsp[-1].decl),(yyvsp[-2].type));   
                                }
#line 1747 "y.tab.c"
    break;

  case 37: /* GidLIST: ID ',' GidLIST  */
#line 267 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-2].str), 1 , data_t);
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1756 "y.tab.c"
    break;

  case 38: /* GidLIST: ID  */
#line 272 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[0].str), 1, data_t);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1765 "y.tab.c"
    break;

  case 39: /* GidLIST: ID '(' PARAMDEFLIST ')'  */
#line 277 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-3].str), 0, function_type);
                                    curr->paramList = (yyvsp[-1].params);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1775 "y.tab.c"
    break;

  case 40: /* GidLIST: ID '(' PARAMDEFLIST ')' ',' GidLIST  */
#line 283 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-5].str), 0, function_type);
                                    curr->paramList = (yyvsp[-3].params);
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1785 "y.tab.c"
    break;

  case 41: /* GidLIST: ARRAYDECL ',' GidLIST  */
#line 289 "parser.y"
                                {  
                                    (yyvsp[-2].decl)->next = (yyvsp[0].decl);
                                    (yyval.decl) = (yyvsp[-2].decl);
                                }
#line 1794 "y.tab.c"
    break;

  case 42: /* GidLIST: ARRAYDECL  */
#line 294 "parser.y"
                                {
                                    (yyval.decl) = (yyvsp[0].decl);
                                }
#line 1802 "y.tab.c"
    break;

  case 43: /* TYPE: INT  */
#line 300 "parser.y"
                                {
                                    (yyval.type) = TypeLookUp("int");
                                }
#line 1810 "y.tab.c"
    break;

  case 44: /* TYPE: STRING  */
#line 304 "parser.y"
                                {
                                    (yyval.type) = TypeLookUp("string");
                                }
#line 1818 "y.tab.c"
    break;

  case 45: /* TYPE: ID  */
#line 308 "parser.y"
                                {
                                    (yyval.type) = TypeLookUp((yyvsp[0].str));
                                }
#line 1826 "y.tab.c"
    break;

  case 48: /* FDEF: TYPE ID '(' PARAMLIST ')' '{' LDECLBLOCK BODY '}'  */
#line 318 "parser.y"
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
#line 1861 "y.tab.c"
    break;

  case 49: /* PARAMDEFLIST: PARAMLIST  */
#line 351 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                }
#line 1869 "y.tab.c"
    break;

  case 50: /* PARAMLIST: PARAM ',' PARAMLIST  */
#line 357 "parser.y"
                                {
                                    (yyval.params) = (yyvsp[-2].params);
                                    (yyval.params)->next = (yyvsp[0].params);

                                }
#line 1879 "y.tab.c"
    break;

  case 51: /* PARAMLIST: PARAM  */
#line 363 "parser.y"
                                {
                                    (yyval.params) = (yyvsp[0].params);
                                }
#line 1887 "y.tab.c"
    break;

  case 52: /* PARAMLIST: %empty  */
#line 367 "parser.y"
                                {
                                    (yyval.params) = NULL;
                                }
#line 1895 "y.tab.c"
    break;

  case 53: /* PARAM: TYPE ID  */
#line 373 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[0].str), 0 , data_t);
                                    curr->data_type = (yyvsp[-1].type);
                                    (yyval.params) = createParameter((yyvsp[0].str), (yyvsp[-1].type));
                                }
#line 1905 "y.tab.c"
    break;

  case 59: /* LDECL: TYPE LIDLIST  */
#line 390 "parser.y"
                                {
                                    setType((yyvsp[0].decl), (yyvsp[-1].type));
                                }
#line 1913 "y.tab.c"
    break;

  case 60: /* LIDLIST: ID ',' LIDLIST  */
#line 396 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[-2].str), 0 , data_t);
                                    curr->Addr = getLocalBind();
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1923 "y.tab.c"
    break;

  case 61: /* LIDLIST: ID  */
#line 402 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[0].str), 0 , data_t);
                                    curr->Addr = getLocalBind();
                                    (yyval.decl) = createDeclList(curr, NULL);
                                }
#line 1933 "y.tab.c"
    break;

  case 62: /* MAINBLOCK: INT MAIN '(' ')' '{' LDECLBLOCK BODY '}'  */
#line 410 "parser.y"
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
#line 1956 "y.tab.c"
    break;

  case 63: /* BODY: BEG STATEMENTS END  */
#line 431 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1964 "y.tab.c"
    break;

  case 65: /* ARRAYDECL: ID '[' INT_CONST ']'  */
#line 459 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-3].str), (yyvsp[-1].val), arr_t);
                                    curr->dimensions = 1;
                                    curr->rowSize = (yyvsp[-1].val);
                                    curr->columnSize = -1;
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1976 "y.tab.c"
    break;

  case 66: /* ARRAYDECL: ID '[' INT_CONST ']' '[' INT_CONST ']'  */
#line 467 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-6].str), (yyvsp[-4].val) * (yyvsp[-1].val), arr_t);
                                    curr->dimensions = 2;
                                    curr->rowSize = (yyvsp[-4].val);
                                    curr->columnSize = (yyvsp[-1].val);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1988 "y.tab.c"
    break;

  case 67: /* STATEMENTS: STATEMENT STATEMENTS  */
#line 479 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                    (yyval.snode)->next = (yyvsp[0].snode);
                                }
#line 1997 "y.tab.c"
    break;

  case 68: /* STATEMENTS: STATEMENT  */
#line 484 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                    (yyval.snode)->next = NULL;
                                }
#line 2006 "y.tab.c"
    break;

  case 69: /* STATEMENT: ASSIGN_STATEMENT ';'  */
#line 491 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2014 "y.tab.c"
    break;

  case 70: /* STATEMENT: WRITE_STATEMENT ';'  */
#line 495 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2022 "y.tab.c"
    break;

  case 71: /* STATEMENT: READ_STATEMENT ';'  */
#line 499 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2030 "y.tab.c"
    break;

  case 72: /* @1: %empty  */
#line 503 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2038 "y.tab.c"
    break;

  case 73: /* STATEMENT: CONDITIONAL ';' @1  */
#line 506 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-2].snode);
                                }
#line 2046 "y.tab.c"
    break;

  case 74: /* STATEMENT: BREAK_STATEMENT ';'  */
#line 510 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2054 "y.tab.c"
    break;

  case 75: /* STATEMENT: CONTINUE_STATEMENT ';'  */
#line 514 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2062 "y.tab.c"
    break;

  case 76: /* STATEMENT: WHILE_STMT ';'  */
#line 518 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 2070 "y.tab.c"
    break;

  case 77: /* STATEMENT: RETURN EXPR ';'  */
#line 522 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = return_stmt;
                                    temp.expr = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2082 "y.tab.c"
    break;

  case 78: /* STATEMENT: INITHEAPSTATEMENT  */
#line 530 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                }
#line 2090 "y.tab.c"
    break;

  case 79: /* STATEMENT: ALLOCSTATEMENT  */
#line 534 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                }
#line 2098 "y.tab.c"
    break;

  case 80: /* STATEMENT: FREESTATMENT  */
#line 538 "parser.y"
                                {

                                    (yyval.snode) = (yyvsp[0].snode);
                                }
#line 2107 "y.tab.c"
    break;

  case 81: /* FREESTATMENT: REFERENCE '=' FREE '(' REFERENCE ')' ';'  */
#line 546 "parser.y"
                                {

                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = freeStatement;
                                    temp.expr = (yyvsp[-2].expr);
                                    temp.reference = (yyvsp[-6].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2121 "y.tab.c"
    break;

  case 82: /* INITHEAPSTATEMENT: REFERENCE '=' INITIALIZE '(' ')' ';'  */
#line 559 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = initializeStatement;
                                    temp.expr = (yyvsp[-3].expr);
                                    temp.reference = (yyvsp[-5].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2134 "y.tab.c"
    break;

  case 83: /* ALLOCSTATEMENT: REFERENCE '=' ALLOC '(' ')' ';'  */
#line 570 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = allocStatement;
                                    temp.expr = (yyvsp[-3].expr);
                                    temp.reference = (yyvsp[-5].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2147 "y.tab.c"
    break;

  case 84: /* ALLOCSTATEMENT: REFERENCE '=' NEW '(' TYPE ')' ';'  */
#line 579 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = allocStatement;
                                    temp.expr = (yyvsp[-4].expr);
                                    temp.reference = (yyvsp[-6].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2160 "y.tab.c"
    break;

  case 85: /* ASSIGN_STATEMENT: REFERENCE '=' EXPR  */
#line 591 "parser.y"
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
#line 2179 "y.tab.c"
    break;

  case 86: /* REFERENCE: ID  */
#line 608 "parser.y"
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
#line 2215 "y.tab.c"
    break;

  case 87: /* REFERENCE: ARRAY  */
#line 640 "parser.y"
                                {
                                    // check with array declaration
                                    (yyval.expr) = (yyvsp[0].expr);
                                }
#line 2224 "y.tab.c"
    break;

  case 88: /* REFERENCE: ID '.' CURRFEILD  */
#line 645 "parser.y"
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
#line 2262 "y.tab.c"
    break;

  case 89: /* REFERENCE: ARRAY '.' CURRFEILD  */
#line 679 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[-2].expr);
                                    (yyval.expr)->dref = (yyvsp[0].dref);
                                    (yyval.expr)->data_type = initDref((yyval.expr)->data_type, (yyvsp[0].dref));
                                }
#line 2272 "y.tab.c"
    break;

  case 90: /* ARRAY: ID '[' EXPR ']'  */
#line 688 "parser.y"
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
#line 2293 "y.tab.c"
    break;

  case 91: /* ARRAY: ID '[' EXPR ']' '[' EXPR ']'  */
#line 705 "parser.y"
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
#line 2314 "y.tab.c"
    break;

  case 92: /* WRITE_STATEMENT: WRITE '(' EXPR ')'  */
#line 725 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = write_stmt;
                                    temp.expr = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2326 "y.tab.c"
    break;

  case 93: /* READ_STATEMENT: READ '(' REFERENCE ')'  */
#line 735 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = read_stmt;
                                    temp.reference = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2338 "y.tab.c"
    break;

  case 94: /* CONDITIONAL: IF EXPR THEN STATEMENTS ENDIF  */
#line 745 "parser.y"
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
#line 2355 "y.tab.c"
    break;

  case 95: /* CONDITIONAL: IF EXPR THEN STATEMENTS ELSE STATEMENTS ENDIF  */
#line 758 "parser.y"
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
#line 2373 "y.tab.c"
    break;

  case 96: /* WHILE_STMT: WHILE EXPR DO STATEMENTS ENDWHILE  */
#line 774 "parser.y"
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
#line 2390 "y.tab.c"
    break;

  case 97: /* CONTINUE_STATEMENT: CONTINUE  */
#line 789 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = continue_stmt;
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2401 "y.tab.c"
    break;

  case 98: /* BREAK_STATEMENT: BREAK  */
#line 798 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = break_stmt;
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2412 "y.tab.c"
    break;

  case 99: /* EXPR: '(' EXPR ')'  */
#line 807 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[-1].expr);
                                }
#line 2420 "y.tab.c"
    break;

  case 100: /* EXPR: EXPR '+' EXPR  */
#line 811 "parser.y"
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
#line 2435 "y.tab.c"
    break;

  case 101: /* EXPR: EXPR '-' EXPR  */
#line 822 "parser.y"
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
#line 2450 "y.tab.c"
    break;

  case 102: /* EXPR: EXPR '*' EXPR  */
#line 833 "parser.y"
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
#line 2465 "y.tab.c"
    break;

  case 103: /* EXPR: EXPR '/' EXPR  */
#line 844 "parser.y"
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
#line 2480 "y.tab.c"
    break;

  case 104: /* EXPR: EXPR '%' EXPR  */
#line 855 "parser.y"
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
#line 2495 "y.tab.c"
    break;

  case 105: /* EXPR: EXPR EQ EXPR  */
#line 866 "parser.y"
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
#line 2510 "y.tab.c"
    break;

  case 106: /* EXPR: EXPR NE EXPR  */
#line 877 "parser.y"
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
#line 2526 "y.tab.c"
    break;

  case 107: /* EXPR: EXPR GT EXPR  */
#line 889 "parser.y"
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
#line 2542 "y.tab.c"
    break;

  case 108: /* EXPR: EXPR GE EXPR  */
#line 901 "parser.y"
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
#line 2557 "y.tab.c"
    break;

  case 109: /* EXPR: EXPR LE EXPR  */
#line 912 "parser.y"
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
#line 2572 "y.tab.c"
    break;

  case 110: /* EXPR: EXPR LT EXPR  */
#line 923 "parser.y"
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
#line 2587 "y.tab.c"
    break;

  case 111: /* EXPR: REFERENCE  */
#line 934 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[0].expr);
                                }
#line 2595 "y.tab.c"
    break;

  case 112: /* EXPR: INT_CONST  */
#line 938 "parser.y"
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
#line 2610 "y.tab.c"
    break;

  case 113: /* EXPR: null_const  */
#line 949 "parser.y"
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
#line 2625 "y.tab.c"
    break;

  case 114: /* EXPR: STR_CONST  */
#line 960 "parser.y"
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
#line 2640 "y.tab.c"
    break;

  case 115: /* EXPR: EXPR AND EXPR  */
#line 971 "parser.y"
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
#line 2660 "y.tab.c"
    break;

  case 116: /* EXPR: EXPR OR EXPR  */
#line 987 "parser.y"
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
#line 2681 "y.tab.c"
    break;

  case 117: /* EXPR: NOT EXPR  */
#line 1004 "parser.y"
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
#line 2702 "y.tab.c"
    break;

  case 118: /* EXPR: ID '(' ARGLIST ')'  */
#line 1021 "parser.y"
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
#line 2725 "y.tab.c"
    break;

  case 119: /* EXPR: ID '.' ID '(' ARGLIST ')'  */
#line 1040 "parser.y"
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
#line 2784 "y.tab.c"
    break;

  case 120: /* ARGLIST: EXPR ',' ARGLIST  */
#line 1097 "parser.y"
                                {
                                    (yyvsp[-2].expr)->isLocal = 1;
                                    struct ArgList *currArg = createNewArg((yyvsp[-2].expr));
                                    currArg->next = (yyvsp[0].argList);
                                    (yyval.argList) = currArg;
                                }
#line 2795 "y.tab.c"
    break;

  case 121: /* ARGLIST: EXPR  */
#line 1104 "parser.y"
                                {
                                    (yyvsp[0].expr)->isLocal = 1;
                                    struct ArgList *currArg = createNewArg((yyvsp[0].expr));
                                    (yyval.argList) = currArg;
                                }
#line 2805 "y.tab.c"
    break;

  case 122: /* ARGLIST: %empty  */
#line 1110 "parser.y"
                                {
                                    (yyval.argList) = NULL;
                                }
#line 2813 "y.tab.c"
    break;

  case 123: /* CURRFEILD: ID '.' CURRFEILD  */
#line 1117 "parser.y"
                                { 
                                    (yyval.dref) = createdrefList((yyvsp[-2].str));
                                    (yyval.dref)->next = (yyvsp[0].dref);
                                }
#line 2822 "y.tab.c"
    break;

  case 124: /* CURRFEILD: ID  */
#line 1122 "parser.y"
                                {
                                    (yyval.dref) = createdrefList((yyvsp[0].str));
                                }
#line 2830 "y.tab.c"
    break;


#line 2834 "y.tab.c"

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

#line 1126 "parser.y"



/*** Auxiliary functions section ***/

yyerror(char const *s)
{
    printf("yyerror :\t%s\n",s);
    exit(1);
}


