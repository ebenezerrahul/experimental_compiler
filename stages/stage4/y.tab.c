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


#line 83 "y.tab.c"

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
    STRING = 261,                  /* STRING  */
    DECLBEG = 262,                 /* DECLBEG  */
    ENDDECL = 263,                 /* ENDDECL  */
    INT_CONST = 264,               /* INT_CONST  */
    STR_CONST = 265,               /* STR_CONST  */
    ID = 266,                      /* ID  */
    IF = 267,                      /* IF  */
    THEN = 268,                    /* THEN  */
    ELSE = 269,                    /* ELSE  */
    ENDIF = 270,                   /* ENDIF  */
    WHILE = 271,                   /* WHILE  */
    DO = 272,                      /* DO  */
    ENDWHILE = 273,                /* ENDWHILE  */
    BREAK = 274,                   /* BREAK  */
    CONTINUE = 275,                /* CONTINUE  */
    READ = 276,                    /* READ  */
    WRITE = 277,                   /* WRITE  */
    NOT = 278,                     /* NOT  */
    AND = 279,                     /* AND  */
    OR = 280,                      /* OR  */
    EQ = 281,                      /* EQ  */
    NE = 282,                      /* NE  */
    GE = 283,                      /* GE  */
    GT = 284,                      /* GT  */
    LE = 285,                      /* LE  */
    LT = 286                       /* LT  */
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
#define STRING 261
#define DECLBEG 262
#define ENDDECL 263
#define INT_CONST 264
#define STR_CONST 265
#define ID 266
#define IF 267
#define THEN 268
#define ELSE 269
#define ENDIF 270
#define WHILE 271
#define DO 272
#define ENDWHILE 273
#define BREAK 274
#define CONTINUE 275
#define READ 276
#define WRITE 277
#define NOT 278
#define AND 279
#define OR 280
#define EQ 281
#define NE 282
#define GE 283
#define GT 284
#define LE 285
#define LT 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"

struct Snode *snode;
struct ExprNode *expr;
char *str;
int val;
struct DeclList *decl;

#line 203 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



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
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_DECLBEG = 7,                    /* DECLBEG  */
  YYSYMBOL_ENDDECL = 8,                    /* ENDDECL  */
  YYSYMBOL_INT_CONST = 9,                  /* INT_CONST  */
  YYSYMBOL_STR_CONST = 10,                 /* STR_CONST  */
  YYSYMBOL_ID = 11,                        /* ID  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_THEN = 13,                      /* THEN  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_ENDIF = 15,                     /* ENDIF  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_DO = 17,                        /* DO  */
  YYSYMBOL_ENDWHILE = 18,                  /* ENDWHILE  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 20,                  /* CONTINUE  */
  YYSYMBOL_READ = 21,                      /* READ  */
  YYSYMBOL_WRITE = 22,                     /* WRITE  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_AND = 24,                       /* AND  */
  YYSYMBOL_OR = 25,                        /* OR  */
  YYSYMBOL_EQ = 26,                        /* EQ  */
  YYSYMBOL_NE = 27,                        /* NE  */
  YYSYMBOL_GE = 28,                        /* GE  */
  YYSYMBOL_GT = 29,                        /* GT  */
  YYSYMBOL_LE = 30,                        /* LE  */
  YYSYMBOL_LT = 31,                        /* LT  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '-'  */
  YYSYMBOL_34_ = 34,                       /* '*'  */
  YYSYMBOL_35_ = 35,                       /* '/'  */
  YYSYMBOL_36_ = 36,                       /* '='  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* ','  */
  YYSYMBOL_39_ = 39,                       /* '['  */
  YYSYMBOL_40_ = 40,                       /* ']'  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_start = 44,                     /* start  */
  YYSYMBOL_DECLSECTION = 45,               /* DECLSECTION  */
  YYSYMBOL_DECL = 46,                      /* DECL  */
  YYSYMBOL_DECLLIST = 47,                  /* DECLLIST  */
  YYSYMBOL_ARRAYDECL = 48,                 /* ARRAYDECL  */
  YYSYMBOL_PROGRAM = 49,                   /* PROGRAM  */
  YYSYMBOL_STATEMENTS = 50,                /* STATEMENTS  */
  YYSYMBOL_STATEMENT = 51,                 /* STATEMENT  */
  YYSYMBOL_52_1 = 52,                      /* @1  */
  YYSYMBOL_ASSIGN_STATEMENT = 53,          /* ASSIGN_STATEMENT  */
  YYSYMBOL_REFERENCE = 54,                 /* REFERENCE  */
  YYSYMBOL_ARRAY = 55,                     /* ARRAY  */
  YYSYMBOL_WRITE_STATEMENT = 56,           /* WRITE_STATEMENT  */
  YYSYMBOL_READ_STATEMENT = 57,            /* READ_STATEMENT  */
  YYSYMBOL_CONDITIONAL = 58,               /* CONDITIONAL  */
  YYSYMBOL_WHILE_STMT = 59,                /* WHILE_STMT  */
  YYSYMBOL_CONTINUE_STATEMENT = 60,        /* CONTINUE_STATEMENT  */
  YYSYMBOL_BREAK_STATEMENT = 61,           /* BREAK_STATEMENT  */
  YYSYMBOL_EXPR = 62                       /* EXPR  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   245

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  115

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,    34,    32,    38,    33,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,    36,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    53,    58,    62,    66,    70,    76,    81,
      86,    91,    97,   105,   116,   117,   123,   128,   135,   139,
     143,   148,   147,   154,   158,   162,   169,   185,   206,   214,
     230,   249,   259,   269,   282,   298,   313,   322,   331,   335,
     346,   357,   368,   379,   390,   402,   414,   425,   436,   447,
     451,   462,   473,   489,   506
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
  "STRING", "DECLBEG", "ENDDECL", "INT_CONST", "STR_CONST", "ID", "IF",
  "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "BREAK", "CONTINUE",
  "READ", "WRITE", "NOT", "AND", "OR", "EQ", "NE", "GE", "GT", "LE", "LT",
  "'+'", "'-'", "'*'", "'/'", "'='", "';'", "','", "'['", "']'", "'('",
  "')'", "$accept", "start", "DECLSECTION", "DECL", "DECLLIST",
  "ARRAYDECL", "PROGRAM", "STATEMENTS", "STATEMENT", "@1",
  "ASSIGN_STATEMENT", "REFERENCE", "ARRAY", "WRITE_STATEMENT",
  "READ_STATEMENT", "CONDITIONAL", "WHILE_STMT", "CONTINUE_STATEMENT",
  "BREAK_STATEMENT", "EXPR", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-30)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,     7,     8,    11,    17,    17,    14,   -30,    83,   -30,
     -14,     0,    -9,     1,   -30,   -30,     2,    -6,    -6,   -30,
     -30,    -7,     4,    32,    -1,     3,     6,   -30,     9,    13,
      15,    18,    19,    21,    17,    34,     7,    17,     7,    -6,
     -30,   -30,    -6,    -6,   -30,    87,   106,    40,    -6,   -30,
     -30,   -30,    -6,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
      20,   -30,   -30,   -30,   156,   190,   118,    -1,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
      -1,    22,   137,   190,   -30,    24,    26,   -30,    12,   200,
     200,   210,   210,   210,   210,   210,   210,    -3,    -3,   -30,
     -30,    36,   -30,   -30,    52,    -6,    -1,   -30,   -30,    27,
     173,    51,   -30,   -30,   -30
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       9,     0,    11,     0,     3,    14,    27,     0,     0,    37,
      36,     0,     0,     0,    17,     0,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     6,     0,
      50,    51,     0,     0,    49,     0,     0,     0,     0,    15,
      16,    18,     0,    19,    20,    21,    25,    24,    23,     8,
       0,     4,    10,     5,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    22,    12,    29,    38,     0,    52,
      53,    43,    44,    46,    45,    47,    48,    39,    40,    41,
      42,     0,    32,    31,     0,     0,     0,    33,    35,     0,
       0,     0,    13,    30,    34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -30,   -30,   -30,   -29,    -4,   -30,   -30,   -18,   -30,   -30,
     -30,    -8,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     6,    11,    12,     9,    23,    24,    84,
      25,    44,    27,    28,    29,    30,    31,    32,    33,    45
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      26,    13,     1,    40,    41,    16,    50,    61,     7,    63,
      16,    17,     4,     5,     8,    18,    26,    42,    19,    20,
      21,    22,    14,    46,    34,    35,   106,   107,    10,    37,
      59,    78,    79,    62,    47,    43,    49,    36,    38,    81,
      51,    39,    52,    60,    64,    48,    53,    65,    66,    88,
      54,    16,    55,    82,   108,    56,    57,    83,    58,    26,
      85,   109,   101,   104,   102,   105,   114,   112,     0,     0,
       0,     0,    26,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     0,     0,    15,   111,     0,
       0,     0,     0,     0,    16,    17,     0,     0,    26,    18,
      67,     0,    19,    20,    21,    22,     0,     0,     0,     0,
     110,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
      87,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,     0,   103,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,    86,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,   113,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79
};

static const yytype_int8 yycheck[] =
{
       8,     5,     7,     9,    10,    11,    24,    36,     0,    38,
      11,    12,     5,     6,     3,    16,    24,    23,    19,    20,
      21,    22,     8,    18,    38,    39,    14,    15,    11,    38,
      34,    34,    35,    37,    41,    41,     4,    37,    37,    47,
      37,    39,    36,     9,    39,    41,    37,    42,    43,    67,
      37,    11,    37,    48,    18,    37,    37,    52,    37,    67,
      40,     9,    80,    39,    42,    39,    15,    40,    -1,    -1,
      -1,    -1,    80,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,     4,   106,    -1,
      -1,    -1,    -1,    -1,    11,    12,    -1,    -1,   106,    16,
      13,    -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
     105,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    40,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    40,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    44,    45,     5,     6,    46,     0,     3,    49,
      11,    47,    48,    47,     8,     4,    11,    12,    16,    19,
      20,    21,    22,    50,    51,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    38,    39,    37,    38,    37,    39,
       9,    10,    23,    41,    54,    62,    62,    41,    41,     4,
      50,    37,    36,    37,    37,    37,    37,    37,    37,    47,
       9,    46,    47,    46,    62,    62,    62,    13,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      17,    54,    62,    62,    52,    40,    40,    42,    50,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    50,    42,    42,    39,    39,    14,    15,    18,     9,
      62,    50,    40,    40,    15
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    46,    46,    46,    46,    47,    47,
      47,    47,    48,    48,    49,    49,    50,    50,    51,    51,
      51,    52,    51,    51,    51,    51,    53,    54,    54,    55,
      55,    56,    57,    58,    58,    59,    60,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     4,     4,     3,     3,     3,     1,
       3,     1,     4,     7,     2,     3,     2,     1,     2,     2,
       2,     0,     3,     2,     2,     2,     3,     1,     1,     4,
       7,     4,     4,     5,     7,     5,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     3,     3,     2
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
  case 4: /* DECL: INT DECLLIST ';' DECL  */
#line 59 "parser.y"
                                {
                                    setType((yyvsp[-2].decl),int_type);   
                                }
#line 1341 "y.tab.c"
    break;

  case 5: /* DECL: STRING DECLLIST ';' DECL  */
#line 63 "parser.y"
                                {
                                    setType((yyvsp[-2].decl), str_type);
                                }
#line 1349 "y.tab.c"
    break;

  case 6: /* DECL: STRING DECLLIST ';'  */
#line 67 "parser.y"
                                {
                                    setType((yyvsp[-1].decl), str_type);
                                }
#line 1357 "y.tab.c"
    break;

  case 7: /* DECL: INT DECLLIST ';'  */
#line 71 "parser.y"
                                {
                                    setType((yyvsp[-1].decl),int_type);   
                                }
#line 1365 "y.tab.c"
    break;

  case 8: /* DECLLIST: ID ',' DECLLIST  */
#line 77 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-2].str), 1 , data_t);
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1374 "y.tab.c"
    break;

  case 9: /* DECLLIST: ID  */
#line 82 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[0].str), 1, data_t);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1383 "y.tab.c"
    break;

  case 10: /* DECLLIST: ARRAYDECL ',' DECLLIST  */
#line 87 "parser.y"
                                {  
                                    (yyvsp[-2].decl)->next = (yyvsp[0].decl);
                                    (yyval.decl) = (yyvsp[-2].decl);
                                }
#line 1392 "y.tab.c"
    break;

  case 11: /* DECLLIST: ARRAYDECL  */
#line 92 "parser.y"
                                {
                                    (yyval.decl) = (yyvsp[0].decl);
                                }
#line 1400 "y.tab.c"
    break;

  case 12: /* ARRAYDECL: ID '[' INT_CONST ']'  */
#line 98 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-3].str), (yyvsp[-1].val), arr_t);
                                    curr->dimensions = 1;
                                    curr->rowSize = (yyvsp[-1].val);
                                    curr->columnSize = -1;
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1412 "y.tab.c"
    break;

  case 13: /* ARRAYDECL: ID '[' INT_CONST ']' '[' INT_CONST ']'  */
#line 106 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-6].str), (yyvsp[-4].val) * (yyvsp[-1].val), arr_t);
                                    curr->dimensions = 2;
                                    curr->rowSize = (yyvsp[-4].val);
                                    curr->columnSize = (yyvsp[-1].val);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1424 "y.tab.c"
    break;

  case 15: /* PROGRAM: BEG STATEMENTS END  */
#line 118 "parser.y"
                                {
                                    root = (yyvsp[-1].snode);
                                }
#line 1432 "y.tab.c"
    break;

  case 16: /* STATEMENTS: STATEMENT STATEMENTS  */
#line 124 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                    (yyval.snode)->next = (yyvsp[0].snode);
                                }
#line 1441 "y.tab.c"
    break;

  case 17: /* STATEMENTS: STATEMENT  */
#line 129 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                    (yyval.snode)->next = NULL;
                                }
#line 1450 "y.tab.c"
    break;

  case 18: /* STATEMENT: ASSIGN_STATEMENT ';'  */
#line 136 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1458 "y.tab.c"
    break;

  case 19: /* STATEMENT: WRITE_STATEMENT ';'  */
#line 140 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1466 "y.tab.c"
    break;

  case 20: /* STATEMENT: READ_STATEMENT ';'  */
#line 144 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1474 "y.tab.c"
    break;

  case 21: /* @1: %empty  */
#line 148 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1482 "y.tab.c"
    break;

  case 22: /* STATEMENT: CONDITIONAL ';' @1  */
#line 151 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-2].snode);
                                }
#line 1490 "y.tab.c"
    break;

  case 23: /* STATEMENT: BREAK_STATEMENT ';'  */
#line 155 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1498 "y.tab.c"
    break;

  case 24: /* STATEMENT: CONTINUE_STATEMENT ';'  */
#line 159 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1506 "y.tab.c"
    break;

  case 25: /* STATEMENT: WHILE_STMT ';'  */
#line 163 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1514 "y.tab.c"
    break;

  case 26: /* ASSIGN_STATEMENT: REFERENCE '=' EXPR  */
#line 170 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = assign_stmt;
                                    temp.expr = (yyvsp[0].expr);
                                    temp.reference = (yyvsp[-2].expr);
                                    if((yyvsp[-2].expr)->data_type != (yyvsp[0].expr)->data_type)
                                    {
                                    printf("INVALID ASSGIGNMENT\n");
                                        exit(1);
                                    }
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1532 "y.tab.c"
    break;

  case 27: /* REFERENCE: ID  */
#line 186 "parser.y"
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    Gsymbol *curr_sym = searchSymbol((yyvsp[0].str));
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
#line 1557 "y.tab.c"
    break;

  case 28: /* REFERENCE: ARRAY  */
#line 207 "parser.y"
                                {
                                    // check with array declaration
                                    (yyval.expr) = (yyvsp[0].expr);
                                }
#line 1566 "y.tab.c"
    break;

  case 29: /* ARRAY: ID '[' EXPR ']'  */
#line 215 "parser.y"
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    Gsymbol *curr_sym = searchSymbol((yyvsp[-3].str));
                                    if(curr_sym == NULL || curr_sym->type != arr_t || curr_sym->dimensions != 1 || (yyvsp[-1].expr)->data_type != int_type)
                                        yyerror();
                                    temp.data_type = curr_sym->data_type;
                                    temp.type = arr_t;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 1;
                                    temp.symbol = curr_sym;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-1].expr), NULL);
                                }
#line 1586 "y.tab.c"
    break;

  case 30: /* ARRAY: ID '[' EXPR ']' '[' EXPR ']'  */
#line 231 "parser.y"
                                {
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    Gsymbol *curr_sym = searchSymbol((yyvsp[-6].str));
                                    if(curr_sym == NULL || curr_sym->type != arr_t || curr_sym->dimensions != 2 || (yyvsp[-4].expr)->data_type != int_type|| (yyvsp[-1].expr)->data_type != int_type)
                                        yyerror();
                                    temp.data_type = curr_sym->data_type;
                                    temp.type = arr_t;
                                    temp.is_op = 0;
                                    temp.hasval = 0;
                                    temp.is_arr = 1;
                                    temp.symbol = curr_sym;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-4].expr), (yyvsp[-1].expr));
                                }
#line 1606 "y.tab.c"
    break;

  case 31: /* WRITE_STATEMENT: WRITE '(' EXPR ')'  */
#line 250 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = write_stmt;
                                    temp.expr = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1618 "y.tab.c"
    break;

  case 32: /* READ_STATEMENT: READ '(' REFERENCE ')'  */
#line 260 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = read_stmt;
                                    temp.reference = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1630 "y.tab.c"
    break;

  case 33: /* CONDITIONAL: IF EXPR THEN STATEMENTS ENDIF  */
#line 270 "parser.y"
                                {
                                    if((yyvsp[-3].expr)->data_type != bool_type) {
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
#line 1647 "y.tab.c"
    break;

  case 34: /* CONDITIONAL: IF EXPR THEN STATEMENTS ELSE STATEMENTS ENDIF  */
#line 283 "parser.y"
                                {
                                    if((yyvsp[-5].expr)->data_type != bool_type) {
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
#line 1665 "y.tab.c"
    break;

  case 35: /* WHILE_STMT: WHILE EXPR DO STATEMENTS ENDWHILE  */
#line 299 "parser.y"
                                {
                                    if((yyvsp[-3].expr)->data_type != bool_type) {
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
#line 1682 "y.tab.c"
    break;

  case 36: /* CONTINUE_STATEMENT: CONTINUE  */
#line 314 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = continue_stmt;
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1693 "y.tab.c"
    break;

  case 37: /* BREAK_STATEMENT: BREAK  */
#line 323 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = break_stmt;
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1704 "y.tab.c"
    break;

  case 38: /* EXPR: '(' EXPR ')'  */
#line 332 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[-1].expr);
                                }
#line 1712 "y.tab.c"
    break;

  case 39: /* EXPR: EXPR '+' EXPR  */
#line 336 "parser.y"
                                {
                                    typeCheck(int_type, (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_ADD;
                                    temp.data_type = int_type;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 1727 "y.tab.c"
    break;

  case 40: /* EXPR: EXPR '-' EXPR  */
#line 347 "parser.y"
                                {
                                    typeCheck(int_type, (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_SUB;
                                    temp.data_type = int_type;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 1742 "y.tab.c"
    break;

  case 41: /* EXPR: EXPR '*' EXPR  */
#line 358 "parser.y"
                                {
                                    typeCheck(int_type, (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_MUL;
                                    temp.data_type = int_type;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 1757 "y.tab.c"
    break;

  case 42: /* EXPR: EXPR '/' EXPR  */
#line 369 "parser.y"
                                {
                                    typeCheck(int_type, (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_DIV;
                                    temp.data_type = int_type;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 1772 "y.tab.c"
    break;

  case 43: /* EXPR: EXPR EQ EXPR  */
#line 380 "parser.y"
                                {
                                    typeCheck(bool_type, (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_EQ;
                                    temp.data_type = bool_type;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 1787 "y.tab.c"
    break;

  case 44: /* EXPR: EXPR NE EXPR  */
#line 391 "parser.y"
                                {
                                 
                                    typeCheck(bool_type, (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_NE;
                                    temp.data_type = bool_type;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 1803 "y.tab.c"
    break;

  case 45: /* EXPR: EXPR GT EXPR  */
#line 403 "parser.y"
                                {
                                    typeCheck(bool_type, (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_GT;
                                    temp.data_type = bool_type;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));

                                }
#line 1819 "y.tab.c"
    break;

  case 46: /* EXPR: EXPR GE EXPR  */
#line 415 "parser.y"
                                {
                                    typeCheck(bool_type, (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_GE;
                                    temp.data_type = bool_type;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 1834 "y.tab.c"
    break;

  case 47: /* EXPR: EXPR LE EXPR  */
#line 426 "parser.y"
                                {
                                    typeCheck(bool_type, (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_LE;
                                    temp.data_type = bool_type;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 1849 "y.tab.c"
    break;

  case 48: /* EXPR: EXPR LT EXPR  */
#line 437 "parser.y"
                                {
                                    typeCheck(bool_type, (yyvsp[-2].expr)->data_type, (yyvsp[0].expr)->data_type);
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_LT;
                                    temp.data_type = bool_type;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 1864 "y.tab.c"
    break;

  case 49: /* EXPR: REFERENCE  */
#line 448 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[0].expr);
                                }
#line 1872 "y.tab.c"
    break;

  case 50: /* EXPR: INT_CONST  */
#line 452 "parser.y"
                                {
                                    ExprNode temp; 
                                    initializeExprNode(&temp);
                                    temp.is_op = 0;
                                    temp.data_type = int_type;
                                    temp.hasval = 1;
                                    temp.val = (yyvsp[0].val);
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), NULL, NULL);
                                }
#line 1887 "y.tab.c"
    break;

  case 51: /* EXPR: STR_CONST  */
#line 463 "parser.y"
                                {
                                    ExprNode temp; 
                                    initializeExprNode(&temp);
                                    temp.is_op = 0;
                                    temp.data_type = str_type;
                                    temp.hasval = 1;
                                    temp.str = (yyvsp[0].str);
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), NULL, NULL);
                                }
#line 1902 "y.tab.c"
    break;

  case 52: /* EXPR: EXPR AND EXPR  */
#line 474 "parser.y"
                                {
                                    if((yyvsp[-2].expr)->data_type != (yyvsp[0].expr)->data_type && (yyvsp[-2].expr)->data_type != bool_type)
                                    {
                                        printf("LOGIAL OP ONLY BETWEEN BOOLEANS!\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_AND;
                                    temp.data_type = bool_type;
                                    temp.hasval = 0;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));
                                }
#line 1922 "y.tab.c"
    break;

  case 53: /* EXPR: EXPR OR EXPR  */
#line 490 "parser.y"
                                {
                                    if((yyvsp[-2].expr)->data_type != (yyvsp[0].expr)->data_type && (yyvsp[-2].expr)->data_type != bool_type)
                                    {
                                        printf("LOGIAL OP ONLY BETWEEN BOOLEANS!\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_OR;
                                    temp.data_type = bool_type;
                                    temp.hasval = 0;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-2].expr), (yyvsp[0].expr));

                                }
#line 1943 "y.tab.c"
    break;

  case 54: /* EXPR: NOT EXPR  */
#line 507 "parser.y"
                                {
                                    if((yyvsp[0].expr)->data_type != bool_type)
                                    {
                                        printf("LOGIAL OP ONLY BETWEEN BOOLEANS!\n");
                                        exit(0);
                                    }
                                    ExprNode temp;
                                    initializeExprNode(&temp);
                                    temp.is_op = 1;
                                    temp.op_code = OP_NOT;
                                    temp.data_type = bool_type;
                                    temp.hasval = 0;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[0].expr), NULL);

                                }
#line 1964 "y.tab.c"
    break;


#line 1968 "y.tab.c"

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

#line 525 "parser.y"



/*** Auxiliary functions section ***/

yyerror(char const *s)
{
    printf("yyerror :\t%s\n",s);
    exit(1);
}


