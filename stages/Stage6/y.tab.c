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


#line 88 "y.tab.c"

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
    INT_CONST = 273,               /* INT_CONST  */
    STR_CONST = 274,               /* STR_CONST  */
    ID = 275,                      /* ID  */
    IF = 276,                      /* IF  */
    THEN = 277,                    /* THEN  */
    ELSE = 278,                    /* ELSE  */
    ENDIF = 279,                   /* ENDIF  */
    WHILE = 280,                   /* WHILE  */
    DO = 281,                      /* DO  */
    ENDWHILE = 282,                /* ENDWHILE  */
    BREAK = 283,                   /* BREAK  */
    CONTINUE = 284,                /* CONTINUE  */
    READ = 285,                    /* READ  */
    WRITE = 286,                   /* WRITE  */
    NOT = 287,                     /* NOT  */
    AND = 288,                     /* AND  */
    OR = 289,                      /* OR  */
    EQ = 290,                      /* EQ  */
    NE = 291,                      /* NE  */
    GE = 292,                      /* GE  */
    GT = 293,                      /* GT  */
    LE = 294,                      /* LE  */
    LT = 295                       /* LT  */
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
#define INT_CONST 273
#define STR_CONST 274
#define ID 275
#define IF 276
#define THEN 277
#define ELSE 278
#define ENDIF 279
#define WHILE 280
#define DO 281
#define ENDWHILE 282
#define BREAK 283
#define CONTINUE 284
#define READ 285
#define WRITE 286
#define NOT 287
#define AND 288
#define OR 289
#define EQ 290
#define NE 291
#define GE 292
#define GT 293
#define LE 294
#define LT 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "parser.y"

struct Snode *snode;
struct ExprNode *expr;
struct ArgList *argList;
char *str;
int val;
struct FeildsTable *feilds;
struct TypeTable *type;
struct DeclList *decl;
struct drefList *dref;
struct ParamList *params;

#line 234 "y.tab.c"

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
  YYSYMBOL_INT_CONST = 18,                 /* INT_CONST  */
  YYSYMBOL_STR_CONST = 19,                 /* STR_CONST  */
  YYSYMBOL_ID = 20,                        /* ID  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_THEN = 22,                      /* THEN  */
  YYSYMBOL_ELSE = 23,                      /* ELSE  */
  YYSYMBOL_ENDIF = 24,                     /* ENDIF  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_DO = 26,                        /* DO  */
  YYSYMBOL_ENDWHILE = 27,                  /* ENDWHILE  */
  YYSYMBOL_BREAK = 28,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 29,                  /* CONTINUE  */
  YYSYMBOL_READ = 30,                      /* READ  */
  YYSYMBOL_WRITE = 31,                     /* WRITE  */
  YYSYMBOL_NOT = 32,                       /* NOT  */
  YYSYMBOL_AND = 33,                       /* AND  */
  YYSYMBOL_OR = 34,                        /* OR  */
  YYSYMBOL_EQ = 35,                        /* EQ  */
  YYSYMBOL_NE = 36,                        /* NE  */
  YYSYMBOL_GE = 37,                        /* GE  */
  YYSYMBOL_GT = 38,                        /* GT  */
  YYSYMBOL_LE = 39,                        /* LE  */
  YYSYMBOL_LT = 40,                        /* LT  */
  YYSYMBOL_41_ = 41,                       /* '%'  */
  YYSYMBOL_42_ = 42,                       /* '+'  */
  YYSYMBOL_43_ = 43,                       /* '-'  */
  YYSYMBOL_44_ = 44,                       /* '*'  */
  YYSYMBOL_45_ = 45,                       /* '/'  */
  YYSYMBOL_46_ = 46,                       /* '='  */
  YYSYMBOL_47_ = 47,                       /* '{'  */
  YYSYMBOL_48_ = 48,                       /* '}'  */
  YYSYMBOL_49_ = 49,                       /* ';'  */
  YYSYMBOL_50_ = 50,                       /* ','  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* '['  */
  YYSYMBOL_54_ = 54,                       /* ']'  */
  YYSYMBOL_55_ = 55,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_start = 57,                     /* start  */
  YYSYMBOL_PROGRAM = 58,                   /* PROGRAM  */
  YYSYMBOL_TYPEDEFBLOCK = 59,              /* TYPEDEFBLOCK  */
  YYSYMBOL_TYPEDEFLIST = 60,               /* TYPEDEFLIST  */
  YYSYMBOL_TYPEDEFINATION = 61,            /* TYPEDEFINATION  */
  YYSYMBOL_FEILD_DEFINATION_LIST = 62,     /* FEILD_DEFINATION_LIST  */
  YYSYMBOL_FEILD_DEFINATION_ITEM = 63,     /* FEILD_DEFINATION_ITEM  */
  YYSYMBOL_GDECLBLOCK = 64,                /* GDECLBLOCK  */
  YYSYMBOL_GDECLLIST = 65,                 /* GDECLLIST  */
  YYSYMBOL_GDECL = 66,                     /* GDECL  */
  YYSYMBOL_GidLIST = 67,                   /* GidLIST  */
  YYSYMBOL_TYPE = 68,                      /* TYPE  */
  YYSYMBOL_FDEFBLOCK = 69,                 /* FDEFBLOCK  */
  YYSYMBOL_FDEF = 70,                      /* FDEF  */
  YYSYMBOL_PARAMDEFLIST = 71,              /* PARAMDEFLIST  */
  YYSYMBOL_PARAMLIST = 72,                 /* PARAMLIST  */
  YYSYMBOL_PARAM = 73,                     /* PARAM  */
  YYSYMBOL_LDECLBLOCK = 74,                /* LDECLBLOCK  */
  YYSYMBOL_LDECLLIST = 75,                 /* LDECLLIST  */
  YYSYMBOL_LDECL = 76,                     /* LDECL  */
  YYSYMBOL_LIDLIST = 77,                   /* LIDLIST  */
  YYSYMBOL_MAINBLOCK = 78,                 /* MAINBLOCK  */
  YYSYMBOL_BODY = 79,                      /* BODY  */
  YYSYMBOL_ARRAYDECL = 80,                 /* ARRAYDECL  */
  YYSYMBOL_STATEMENTS = 81,                /* STATEMENTS  */
  YYSYMBOL_STATEMENT = 82,                 /* STATEMENT  */
  YYSYMBOL_83_1 = 83,                      /* @1  */
  YYSYMBOL_FREESTATMENT = 84,              /* FREESTATMENT  */
  YYSYMBOL_INITHEAPSTATEMENT = 85,         /* INITHEAPSTATEMENT  */
  YYSYMBOL_ALLOCSTATEMENT = 86,            /* ALLOCSTATEMENT  */
  YYSYMBOL_ASSIGN_STATEMENT = 87,          /* ASSIGN_STATEMENT  */
  YYSYMBOL_REFERENCE = 88,                 /* REFERENCE  */
  YYSYMBOL_ARRAY = 89,                     /* ARRAY  */
  YYSYMBOL_WRITE_STATEMENT = 90,           /* WRITE_STATEMENT  */
  YYSYMBOL_READ_STATEMENT = 91,            /* READ_STATEMENT  */
  YYSYMBOL_CONDITIONAL = 92,               /* CONDITIONAL  */
  YYSYMBOL_WHILE_STMT = 93,                /* WHILE_STMT  */
  YYSYMBOL_CONTINUE_STATEMENT = 94,        /* CONTINUE_STATEMENT  */
  YYSYMBOL_BREAK_STATEMENT = 95,           /* BREAK_STATEMENT  */
  YYSYMBOL_EXPR = 96,                      /* EXPR  */
  YYSYMBOL_ARGLIST = 97,                   /* ARGLIST  */
  YYSYMBOL_CURRFEILD = 98                  /* CURRFEILD  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   343

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
       2,     2,     2,     2,     2,     2,     2,    41,     2,     2,
      51,    52,    44,    42,    50,    43,    55,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
       2,    46,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    66,    66,    70,    71,    76,    80,    84,    87,    88,
      91,    98,   103,   109,   113,   117,   124,   125,   126,   129,
     130,   132,   138,   143,   148,   154,   160,   165,   171,   175,
     179,   185,   186,   189,   222,   228,   234,   239,   244,   252,
     253,   254,   257,   258,   261,   267,   273,   281,   301,   305,
     329,   337,   349,   354,   361,   365,   369,   374,   373,   380,
     384,   388,   392,   400,   404,   408,   416,   429,   440,   452,
     469,   501,   506,   540,   549,   566,   586,   596,   606,   619,
     635,   650,   659,   668,   672,   683,   694,   705,   716,   727,
     738,   750,   762,   773,   784,   795,   799,   810,   821,   832,
     848,   865,   882,   903,   910,   917,   923,   928
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
  "TYPEDEFEND", "null_const", "INITIALIZE", "ALLOC", "FREE", "INT_CONST",
  "STR_CONST", "ID", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO",
  "ENDWHILE", "BREAK", "CONTINUE", "READ", "WRITE", "NOT", "AND", "OR",
  "EQ", "NE", "GE", "GT", "LE", "LT", "'%'", "'+'", "'-'", "'*'", "'/'",
  "'='", "'{'", "'}'", "';'", "','", "'('", "')'", "'['", "']'", "'.'",
  "$accept", "start", "PROGRAM", "TYPEDEFBLOCK", "TYPEDEFLIST",
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

#define YYPACT_NINF (-118)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,    14,    13,  -118,     8,  -118,   -26,    20,    29,  -118,
       5,     0,    80,  -118,  -118,  -118,  -118,  -118,  -118,    19,
    -118,    36,    35,    53,     0,  -118,  -118,    61,    64,    66,
      48,    80,  -118,  -118,    26,    55,    56,    57,    59,  -118,
    -118,    69,    71,    78,  -118,  -118,    36,   278,   136,  -118,
      36,   103,   278,  -118,  -118,  -118,  -118,    93,   104,  -118,
     107,   105,  -118,   111,   109,  -118,   110,   278,   124,   170,
     132,    36,  -118,   162,    92,   178,   170,  -118,   128,  -118,
     163,   180,   138,    94,   140,   178,  -118,   141,  -118,  -118,
     278,  -118,    23,    25,    23,    23,  -118,  -118,   146,   147,
     221,   165,  -118,  -118,  -118,   177,   181,   173,   196,   197,
     198,   200,   201,   216,  -118,   182,   163,  -118,  -118,  -118,
    -118,    -5,    23,    23,  -118,   237,    23,   209,    95,   166,
     228,    23,  -118,  -118,  -118,    75,   209,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,    23,   266,   179,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,  -118,   108,   211,  -118,   165,   165,   215,   199,   217,
     233,   272,   266,  -118,  -118,   219,   273,  -118,   252,   252,
     277,   277,   277,   277,   277,   277,     9,   -15,   -15,  -118,
    -118,   271,   209,    79,   299,  -118,  -118,   275,   276,   228,
      23,  -118,    23,  -118,   165,  -118,  -118,   280,   281,   279,
    -118,   130,   308,  -118,  -118,   284,  -118,  -118,  -118
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,     0,     0,     2,    18,     5,     0,     0,     9,     1,
       0,     0,     0,     6,     8,    28,    29,    16,    30,     0,
      20,     0,    28,     0,     0,    32,     4,     0,     0,     0,
       0,    12,    17,    19,    23,     0,    27,     0,     0,    31,
       3,     0,     0,     0,    10,    11,     0,    37,     0,    21,
       0,     0,    37,    13,    14,    15,    22,     0,     0,    34,
      36,     0,    26,     0,     0,    38,    24,    37,    50,    41,
       0,     0,    35,     0,     0,     0,    41,    25,     0,    39,
       0,     0,     0,     0,     0,     0,    51,    46,    44,    40,
      43,    49,     0,    70,     0,     0,    82,    81,     0,     0,
       0,    53,    65,    63,    64,     0,     0,    71,     0,     0,
       0,     0,     0,     0,    47,     0,     0,    42,    97,    96,
      98,    70,     0,     0,    95,     0,     0,     0,     0,     0,
       0,     0,    48,    52,    54,     0,     0,    55,    56,    57,
      61,    60,    59,    33,    45,   105,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,     0,   107,    72,     0,     0,     0,     0,     0,
       0,     0,    69,    73,    58,   104,     0,    83,    99,   100,
      89,    90,    92,    91,    93,    94,    88,    84,    85,    86,
      87,    74,     0,     0,     0,    77,    76,     0,     0,     0,
     105,   102,     0,   106,     0,    78,    80,     0,     0,     0,
     103,     0,     0,    67,    68,     0,    75,    79,    66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,  -118,  -118,  -118,   326,  -118,   304,  -118,  -118,  -118,
     317,   -35,    -2,  -118,   313,  -118,   -29,  -118,   262,   249,
    -118,   224,   318,   256,  -118,   -95,  -118,  -118,  -118,  -118,
    -118,  -118,   -83,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
     -91,   143,  -117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     7,     8,    30,    31,    11,    19,
      20,    35,    57,    24,    25,    58,    59,    60,    75,    81,
      82,    88,    26,    84,    36,   100,   101,   174,   102,   103,
     104,   105,   124,   107,   108,   109,   110,   111,   112,   113,
     175,   176,   164
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     106,   125,     1,   128,   129,    22,   133,    16,    21,    23,
      15,    56,    16,     9,    17,    62,    10,    21,   106,   173,
      18,    12,    23,    64,    15,    18,    16,     5,    32,   159,
     160,   146,   147,    13,     6,   162,    77,   118,    72,    18,
     168,   119,   120,   121,   172,    37,   145,   167,   126,     6,
     127,   157,   158,   159,   160,   122,    34,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     193,   194,    80,    38,   123,   203,    46,    47,   126,    48,
     127,    41,   106,   106,    42,    27,    43,    28,    80,   118,
     169,   170,   171,   119,   120,   121,    44,    15,    91,    16,
      29,    79,   204,   205,    49,    92,    50,   122,    51,   212,
      52,   211,    18,    65,    93,    94,   209,   165,    53,    95,
      54,   106,    96,    97,    98,    99,   123,    55,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,    61,    63,    66,    67,    69,    68,
      71,    70,   191,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,    92,    73,    74,    76,
      78,    83,    86,    87,   216,    93,    94,    90,   114,    89,
      95,   116,   166,    96,    97,    98,    99,   130,   131,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   132,   134,   135,   136,   163,
     143,   177,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   137,   138,   139,    93,   140,
     141,   196,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   142,   192,   195,   197,   200,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,    15,   198,    16,   161,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,    18,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,    -1,    -1,    -1,    -1,    -1,    -1,   156,   157,
     158,   159,   160,   199,   202,   201,   206,   207,   208,   213,
     214,   215,   217,   218,    14,    45,    33,    39,    85,   117,
     144,   115,    40,   210
};

static const yytype_uint8 yycheck[] =
{
      83,    92,    12,    94,    95,     5,   101,     7,    10,    11,
       5,    46,     7,     0,     9,    50,     8,    19,   101,   136,
      20,    47,    24,    52,     5,    20,     7,    13,     9,    44,
      45,   122,   123,    13,    20,   126,    71,    14,    67,    20,
     131,    18,    19,    20,   135,    10,    51,   130,    53,    20,
      55,    42,    43,    44,    45,    32,    20,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     165,   166,    74,    20,    51,   192,    50,    51,    53,    53,
      55,    20,   165,   166,    20,     5,    20,     7,    90,    14,
      15,    16,    17,    18,    19,    20,    48,     5,     4,     7,
      20,     9,    23,    24,    49,    11,    50,    32,    51,   204,
      51,   202,    20,    20,    20,    21,   199,    22,    49,    25,
      49,   204,    28,    29,    30,    31,    51,    49,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    18,    52,    52,    50,    47,    54,
      50,    52,    54,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    11,    53,     8,    47,
      18,     3,    54,    20,    54,    20,    21,    49,    48,     9,
      25,    50,    26,    28,    29,    30,    31,    51,    51,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     4,    49,    46,    55,    20,
      48,    52,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    49,    49,    49,    20,    49,
      49,    52,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    49,    55,    52,    51,    50,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     5,    51,     7,    49,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    20,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    51,    53,    52,    27,    52,    52,    49,
      49,    52,    24,    49,     8,    31,    19,    24,    76,    90,
     116,    85,    24,   200
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    12,    57,    58,    59,    13,    20,    60,    61,     0,
       8,    64,    47,    13,    60,     5,     7,     9,    20,    65,
      66,    68,     5,    68,    69,    70,    78,     5,     7,    20,
      62,    63,     9,    66,    20,    67,    80,    10,    20,    70,
      78,    20,    20,    20,    48,    62,    50,    51,    53,    49,
      50,    51,    51,    49,    49,    49,    67,    68,    71,    72,
      73,    18,    67,    52,    72,    20,    52,    50,    54,    47,
      52,    50,    72,    53,     8,    74,    47,    67,    18,     9,
      68,    75,    76,     3,    79,    74,    54,    20,    77,     9,
      49,     4,    11,    20,    21,    25,    28,    29,    30,    31,
      81,    82,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    48,    79,    50,    75,    14,    18,
      19,    20,    32,    51,    88,    96,    53,    55,    96,    96,
      51,    51,     4,    81,    49,    46,    55,    49,    49,    49,
      49,    49,    49,    48,    77,    51,    96,    96,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    49,    96,    20,    98,    22,    26,    88,    96,    15,
      16,    17,    96,    98,    83,    96,    97,    52,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    54,    55,    81,    81,    52,    52,    51,    51,    51,
      50,    52,    53,    98,    23,    24,    27,    52,    52,    88,
      97,    96,    81,    49,    49,    52,    54,    24,    49
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    59,    60,    60,
      61,    62,    62,    63,    63,    63,    64,    64,    64,    65,
      65,    66,    67,    67,    67,    67,    67,    67,    68,    68,
      68,    69,    69,    70,    71,    72,    72,    72,    73,    74,
      74,    74,    75,    75,    76,    77,    77,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    82,    83,    82,    82,
      82,    82,    82,    82,    82,    82,    84,    85,    86,    87,
      88,    88,    88,    88,    89,    89,    90,    91,    92,    92,
      93,    94,    95,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    97,    97,    97,    98,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     3,     2,     3,     0,     2,     1,
       4,     2,     1,     3,     3,     3,     2,     3,     0,     2,
       1,     3,     3,     1,     4,     6,     3,     1,     1,     1,
       1,     2,     1,     9,     1,     3,     1,     0,     2,     2,
       3,     0,     3,     2,     2,     3,     1,     8,     3,     2,
       4,     7,     2,     1,     2,     2,     2,     0,     3,     2,
       2,     2,     3,     1,     1,     1,     7,     6,     6,     3,
       1,     1,     3,     3,     4,     7,     4,     4,     5,     7,
       5,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     3,
       3,     2,     4,     3,     1,     0,     3,     1
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
  case 5: /* TYPEDEFBLOCK: TYPEDEFBEG TYPEDEFEND  */
#line 77 "parser.y"
                                {
                                    initializeFeildTypes();
                                }
#line 1486 "y.tab.c"
    break;

  case 6: /* TYPEDEFBLOCK: TYPEDEFBEG TYPEDEFLIST TYPEDEFEND  */
#line 81 "parser.y"
                                {
                                    initializeFeildTypes();
                                }
#line 1494 "y.tab.c"
    break;

  case 10: /* TYPEDEFINATION: ID '{' FEILD_DEFINATION_LIST '}'  */
#line 92 "parser.y"
                                {
                                    addType((yyvsp[-3].str), calculateSizeOfFeilds((yyvsp[-1].feilds)), (yyvsp[-1].feilds));
                                }
#line 1502 "y.tab.c"
    break;

  case 11: /* FEILD_DEFINATION_LIST: FEILD_DEFINATION_ITEM FEILD_DEFINATION_LIST  */
#line 99 "parser.y"
                                {
                                    (yyvsp[-1].feilds)->next = (yyvsp[0].feilds);
                                    (yyval.feilds) = (yyvsp[-1].feilds);
                                }
#line 1511 "y.tab.c"
    break;

  case 12: /* FEILD_DEFINATION_LIST: FEILD_DEFINATION_ITEM  */
#line 104 "parser.y"
                                {
                                    (yyval.feilds) = (yyvsp[0].feilds);
                                }
#line 1519 "y.tab.c"
    break;

  case 13: /* FEILD_DEFINATION_ITEM: INT ID ';'  */
#line 110 "parser.y"
                                {
                                    (yyval.feilds) = createFeild((yyvsp[-1].str), int_string);
                                }
#line 1527 "y.tab.c"
    break;

  case 14: /* FEILD_DEFINATION_ITEM: STRING ID ';'  */
#line 114 "parser.y"
                                {
                                    (yyval.feilds) = createFeild((yyvsp[-1].str), str_string);
                                }
#line 1535 "y.tab.c"
    break;

  case 15: /* FEILD_DEFINATION_ITEM: ID ID ';'  */
#line 118 "parser.y"
                                {
                                    (yyval.feilds) = createFeild((yyvsp[-1].str), (yyvsp[-2].str));
                                }
#line 1543 "y.tab.c"
    break;

  case 21: /* GDECL: TYPE GidLIST ';'  */
#line 133 "parser.y"
                                {
                                    setType((yyvsp[-1].decl),(yyvsp[-2].type));   
                                }
#line 1551 "y.tab.c"
    break;

  case 22: /* GidLIST: ID ',' GidLIST  */
#line 139 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-2].str), 1 , data_t);
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1560 "y.tab.c"
    break;

  case 23: /* GidLIST: ID  */
#line 144 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[0].str), 1, data_t);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1569 "y.tab.c"
    break;

  case 24: /* GidLIST: ID '(' PARAMDEFLIST ')'  */
#line 149 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-3].str), 0, function_type);
                                    curr->paramList = (yyvsp[-1].params);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1579 "y.tab.c"
    break;

  case 25: /* GidLIST: ID '(' PARAMDEFLIST ')' ',' GidLIST  */
#line 155 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-5].str), 0, function_type);
                                    curr->paramList = (yyvsp[-3].params);
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1589 "y.tab.c"
    break;

  case 26: /* GidLIST: ARRAYDECL ',' GidLIST  */
#line 161 "parser.y"
                                {  
                                    (yyvsp[-2].decl)->next = (yyvsp[0].decl);
                                    (yyval.decl) = (yyvsp[-2].decl);
                                }
#line 1598 "y.tab.c"
    break;

  case 27: /* GidLIST: ARRAYDECL  */
#line 166 "parser.y"
                                {
                                    (yyval.decl) = (yyvsp[0].decl);
                                }
#line 1606 "y.tab.c"
    break;

  case 28: /* TYPE: INT  */
#line 172 "parser.y"
                                {
                                    (yyval.type) = TypeLookUp("int");
                                }
#line 1614 "y.tab.c"
    break;

  case 29: /* TYPE: STRING  */
#line 176 "parser.y"
                                {
                                    (yyval.type) = TypeLookUp("string");
                                }
#line 1622 "y.tab.c"
    break;

  case 30: /* TYPE: ID  */
#line 180 "parser.y"
                                {
                                    (yyval.type) = TypeLookUp((yyvsp[0].str));
                                }
#line 1630 "y.tab.c"
    break;

  case 33: /* FDEF: TYPE ID '(' PARAMLIST ')' '{' LDECLBLOCK BODY '}'  */
#line 190 "parser.y"
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
#line 1665 "y.tab.c"
    break;

  case 34: /* PARAMDEFLIST: PARAMLIST  */
#line 223 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                }
#line 1673 "y.tab.c"
    break;

  case 35: /* PARAMLIST: PARAM ',' PARAMLIST  */
#line 229 "parser.y"
                                {
                                    (yyval.params) = (yyvsp[-2].params);
                                    (yyval.params)->next = (yyvsp[0].params);

                                }
#line 1683 "y.tab.c"
    break;

  case 36: /* PARAMLIST: PARAM  */
#line 235 "parser.y"
                                {
                                    (yyval.params) = (yyvsp[0].params);
                                }
#line 1691 "y.tab.c"
    break;

  case 37: /* PARAMLIST: %empty  */
#line 239 "parser.y"
                                {
                                    (yyval.params) = NULL;
                                }
#line 1699 "y.tab.c"
    break;

  case 38: /* PARAM: TYPE ID  */
#line 245 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[0].str), 0 , data_t);
                                    curr->data_type = (yyvsp[-1].type);
                                    (yyval.params) = createParameter((yyvsp[0].str), (yyvsp[-1].type));
                                }
#line 1709 "y.tab.c"
    break;

  case 44: /* LDECL: TYPE LIDLIST  */
#line 262 "parser.y"
                                {
                                    setType((yyvsp[0].decl), (yyvsp[-1].type));
                                }
#line 1717 "y.tab.c"
    break;

  case 45: /* LIDLIST: ID ',' LIDLIST  */
#line 268 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[-2].str), 0 , data_t);
                                    curr->Addr = getLocalBind();
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1727 "y.tab.c"
    break;

  case 46: /* LIDLIST: ID  */
#line 274 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[0].str), 0 , data_t);
                                    curr->Addr = getLocalBind();
                                    (yyval.decl) = createDeclList(curr, NULL);
                                }
#line 1737 "y.tab.c"
    break;

  case 47: /* MAINBLOCK: INT MAIN '(' ')' '{' LDECLBLOCK BODY '}'  */
#line 282 "parser.y"
                                {
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
#line 1759 "y.tab.c"
    break;

  case 48: /* BODY: BEG STATEMENTS END  */
#line 302 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1767 "y.tab.c"
    break;

  case 50: /* ARRAYDECL: ID '[' INT_CONST ']'  */
#line 330 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-3].str), (yyvsp[-1].val), arr_t);
                                    curr->dimensions = 1;
                                    curr->rowSize = (yyvsp[-1].val);
                                    curr->columnSize = -1;
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1779 "y.tab.c"
    break;

  case 51: /* ARRAYDECL: ID '[' INT_CONST ']' '[' INT_CONST ']'  */
#line 338 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-6].str), (yyvsp[-4].val) * (yyvsp[-1].val), arr_t);
                                    curr->dimensions = 2;
                                    curr->rowSize = (yyvsp[-4].val);
                                    curr->columnSize = (yyvsp[-1].val);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1791 "y.tab.c"
    break;

  case 52: /* STATEMENTS: STATEMENT STATEMENTS  */
#line 350 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                    (yyval.snode)->next = (yyvsp[0].snode);
                                }
#line 1800 "y.tab.c"
    break;

  case 53: /* STATEMENTS: STATEMENT  */
#line 355 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                    (yyval.snode)->next = NULL;
                                }
#line 1809 "y.tab.c"
    break;

  case 54: /* STATEMENT: ASSIGN_STATEMENT ';'  */
#line 362 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1817 "y.tab.c"
    break;

  case 55: /* STATEMENT: WRITE_STATEMENT ';'  */
#line 366 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1825 "y.tab.c"
    break;

  case 56: /* STATEMENT: READ_STATEMENT ';'  */
#line 370 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1833 "y.tab.c"
    break;

  case 57: /* @1: %empty  */
#line 374 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1841 "y.tab.c"
    break;

  case 58: /* STATEMENT: CONDITIONAL ';' @1  */
#line 377 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-2].snode);
                                }
#line 1849 "y.tab.c"
    break;

  case 59: /* STATEMENT: BREAK_STATEMENT ';'  */
#line 381 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1857 "y.tab.c"
    break;

  case 60: /* STATEMENT: CONTINUE_STATEMENT ';'  */
#line 385 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1865 "y.tab.c"
    break;

  case 61: /* STATEMENT: WHILE_STMT ';'  */
#line 389 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1873 "y.tab.c"
    break;

  case 62: /* STATEMENT: RETURN EXPR ';'  */
#line 393 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = return_stmt;
                                    temp.expr = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1885 "y.tab.c"
    break;

  case 63: /* STATEMENT: INITHEAPSTATEMENT  */
#line 401 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                }
#line 1893 "y.tab.c"
    break;

  case 64: /* STATEMENT: ALLOCSTATEMENT  */
#line 405 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                }
#line 1901 "y.tab.c"
    break;

  case 65: /* STATEMENT: FREESTATMENT  */
#line 409 "parser.y"
                                {

                                    (yyval.snode) = (yyvsp[0].snode);
                                }
#line 1910 "y.tab.c"
    break;

  case 66: /* FREESTATMENT: REFERENCE '=' FREE '(' REFERENCE ')' ';'  */
#line 417 "parser.y"
                                {

                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = freeStatement;
                                    temp.expr = (yyvsp[-2].expr);
                                    temp.reference = (yyvsp[-6].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1924 "y.tab.c"
    break;

  case 67: /* INITHEAPSTATEMENT: REFERENCE '=' INITIALIZE '(' ')' ';'  */
#line 430 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = initializeStatement;
                                    temp.expr = (yyvsp[-3].expr);
                                    temp.reference = (yyvsp[-5].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1937 "y.tab.c"
    break;

  case 68: /* ALLOCSTATEMENT: REFERENCE '=' ALLOC '(' ')' ';'  */
#line 441 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = allocStatement;
                                    temp.expr = (yyvsp[-3].expr);
                                    temp.reference = (yyvsp[-5].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1950 "y.tab.c"
    break;

  case 69: /* ASSIGN_STATEMENT: REFERENCE '=' EXPR  */
#line 453 "parser.y"
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
#line 1969 "y.tab.c"
    break;

  case 70: /* REFERENCE: ID  */
#line 470 "parser.y"
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
#line 2005 "y.tab.c"
    break;

  case 71: /* REFERENCE: ARRAY  */
#line 502 "parser.y"
                                {
                                    // check with array declaration
                                    (yyval.expr) = (yyvsp[0].expr);
                                }
#line 2014 "y.tab.c"
    break;

  case 72: /* REFERENCE: ID '.' CURRFEILD  */
#line 507 "parser.y"
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
#line 2052 "y.tab.c"
    break;

  case 73: /* REFERENCE: ARRAY '.' CURRFEILD  */
#line 541 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[-2].expr);
                                    (yyval.expr)->dref = (yyvsp[0].dref);
                                    (yyval.expr)->data_type = initDref((yyval.expr)->data_type, (yyvsp[0].dref));
                                }
#line 2062 "y.tab.c"
    break;

  case 74: /* ARRAY: ID '[' EXPR ']'  */
#line 550 "parser.y"
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
#line 2083 "y.tab.c"
    break;

  case 75: /* ARRAY: ID '[' EXPR ']' '[' EXPR ']'  */
#line 567 "parser.y"
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
#line 2104 "y.tab.c"
    break;

  case 76: /* WRITE_STATEMENT: WRITE '(' EXPR ')'  */
#line 587 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = write_stmt;
                                    temp.expr = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2116 "y.tab.c"
    break;

  case 77: /* READ_STATEMENT: READ '(' REFERENCE ')'  */
#line 597 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = read_stmt;
                                    temp.reference = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2128 "y.tab.c"
    break;

  case 78: /* CONDITIONAL: IF EXPR THEN STATEMENTS ENDIF  */
#line 607 "parser.y"
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
#line 2145 "y.tab.c"
    break;

  case 79: /* CONDITIONAL: IF EXPR THEN STATEMENTS ELSE STATEMENTS ENDIF  */
#line 620 "parser.y"
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
#line 2163 "y.tab.c"
    break;

  case 80: /* WHILE_STMT: WHILE EXPR DO STATEMENTS ENDWHILE  */
#line 636 "parser.y"
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
#line 2180 "y.tab.c"
    break;

  case 81: /* CONTINUE_STATEMENT: CONTINUE  */
#line 651 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = continue_stmt;
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2191 "y.tab.c"
    break;

  case 82: /* BREAK_STATEMENT: BREAK  */
#line 660 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = break_stmt;
                                    (yyval.snode) = createSnode(temp);
                                }
#line 2202 "y.tab.c"
    break;

  case 83: /* EXPR: '(' EXPR ')'  */
#line 669 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[-1].expr);
                                }
#line 2210 "y.tab.c"
    break;

  case 84: /* EXPR: EXPR '+' EXPR  */
#line 673 "parser.y"
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
#line 2225 "y.tab.c"
    break;

  case 85: /* EXPR: EXPR '-' EXPR  */
#line 684 "parser.y"
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
#line 2240 "y.tab.c"
    break;

  case 86: /* EXPR: EXPR '*' EXPR  */
#line 695 "parser.y"
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
#line 2255 "y.tab.c"
    break;

  case 87: /* EXPR: EXPR '/' EXPR  */
#line 706 "parser.y"
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
#line 2270 "y.tab.c"
    break;

  case 88: /* EXPR: EXPR '%' EXPR  */
#line 717 "parser.y"
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
#line 2285 "y.tab.c"
    break;

  case 89: /* EXPR: EXPR EQ EXPR  */
#line 728 "parser.y"
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
#line 2300 "y.tab.c"
    break;

  case 90: /* EXPR: EXPR NE EXPR  */
#line 739 "parser.y"
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
#line 2316 "y.tab.c"
    break;

  case 91: /* EXPR: EXPR GT EXPR  */
#line 751 "parser.y"
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
#line 2332 "y.tab.c"
    break;

  case 92: /* EXPR: EXPR GE EXPR  */
#line 763 "parser.y"
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
#line 2347 "y.tab.c"
    break;

  case 93: /* EXPR: EXPR LE EXPR  */
#line 774 "parser.y"
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
#line 2362 "y.tab.c"
    break;

  case 94: /* EXPR: EXPR LT EXPR  */
#line 785 "parser.y"
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
#line 2377 "y.tab.c"
    break;

  case 95: /* EXPR: REFERENCE  */
#line 796 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[0].expr);
                                }
#line 2385 "y.tab.c"
    break;

  case 96: /* EXPR: INT_CONST  */
#line 800 "parser.y"
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
#line 2400 "y.tab.c"
    break;

  case 97: /* EXPR: null_const  */
#line 811 "parser.y"
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
#line 2415 "y.tab.c"
    break;

  case 98: /* EXPR: STR_CONST  */
#line 822 "parser.y"
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
#line 2430 "y.tab.c"
    break;

  case 99: /* EXPR: EXPR AND EXPR  */
#line 833 "parser.y"
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
#line 2450 "y.tab.c"
    break;

  case 100: /* EXPR: EXPR OR EXPR  */
#line 849 "parser.y"
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
#line 2471 "y.tab.c"
    break;

  case 101: /* EXPR: NOT EXPR  */
#line 866 "parser.y"
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
#line 2492 "y.tab.c"
    break;

  case 102: /* EXPR: ID '(' ARGLIST ')'  */
#line 883 "parser.y"
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
#line 2515 "y.tab.c"
    break;

  case 103: /* ARGLIST: EXPR ',' ARGLIST  */
#line 904 "parser.y"
                                {
                                    (yyvsp[-2].expr)->isLocal = 1;
                                    struct ArgList *currArg = createNewArg((yyvsp[-2].expr));
                                    currArg->next = (yyvsp[0].argList);
                                    (yyval.argList) = currArg;
                                }
#line 2526 "y.tab.c"
    break;

  case 104: /* ARGLIST: EXPR  */
#line 911 "parser.y"
                                {
                                    (yyvsp[0].expr)->isLocal = 1;
                                    struct ArgList *currArg = createNewArg((yyvsp[0].expr));
                                    (yyval.argList) = currArg;
                                }
#line 2536 "y.tab.c"
    break;

  case 105: /* ARGLIST: %empty  */
#line 917 "parser.y"
                                {
                                    (yyval.argList) = NULL;
                                }
#line 2544 "y.tab.c"
    break;

  case 106: /* CURRFEILD: ID '.' CURRFEILD  */
#line 924 "parser.y"
                                { 
                                    (yyval.dref) = createdrefList((yyvsp[-2].str));
                                    (yyval.dref)->next = (yyvsp[0].dref);
                                }
#line 2553 "y.tab.c"
    break;

  case 107: /* CURRFEILD: ID  */
#line 929 "parser.y"
                                {
                                    (yyval.dref) = createdrefList((yyvsp[0].str));
                                }
#line 2561 "y.tab.c"
    break;


#line 2565 "y.tab.c"

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

#line 933 "parser.y"



/*** Auxiliary functions section ***/

yyerror(char const *s)
{
    printf("yyerror :\t%s\n",s);
    exit(1);
}


