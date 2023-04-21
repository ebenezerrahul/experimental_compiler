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


#line 85 "y.tab.c"

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
    INT_CONST = 267,               /* INT_CONST  */
    STR_CONST = 268,               /* STR_CONST  */
    ID = 269,                      /* ID  */
    IF = 270,                      /* IF  */
    THEN = 271,                    /* THEN  */
    ELSE = 272,                    /* ELSE  */
    ENDIF = 273,                   /* ENDIF  */
    WHILE = 274,                   /* WHILE  */
    DO = 275,                      /* DO  */
    ENDWHILE = 276,                /* ENDWHILE  */
    BREAK = 277,                   /* BREAK  */
    CONTINUE = 278,                /* CONTINUE  */
    READ = 279,                    /* READ  */
    WRITE = 280,                   /* WRITE  */
    NOT = 281,                     /* NOT  */
    AND = 282,                     /* AND  */
    OR = 283,                      /* OR  */
    EQ = 284,                      /* EQ  */
    NE = 285,                      /* NE  */
    GE = 286,                      /* GE  */
    GT = 287,                      /* GT  */
    LE = 288,                      /* LE  */
    LT = 289                       /* LT  */
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
#define INT_CONST 267
#define STR_CONST 268
#define ID 269
#define IF 270
#define THEN 271
#define ELSE 272
#define ENDIF 273
#define WHILE 274
#define DO 275
#define ENDWHILE 276
#define BREAK 277
#define CONTINUE 278
#define READ 279
#define WRITE 280
#define NOT 281
#define AND 282
#define OR 283
#define EQ 284
#define NE 285
#define GE 286
#define GT 287
#define LE 288
#define LT 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser.y"

struct Snode *snode;
struct ExprNode *expr;
struct ArgList *argList;
char *str;
int val;
struct DeclList *decl;
struct ParamList *params;

#line 216 "y.tab.c"

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
  YYSYMBOL_INT_CONST = 12,                 /* INT_CONST  */
  YYSYMBOL_STR_CONST = 13,                 /* STR_CONST  */
  YYSYMBOL_ID = 14,                        /* ID  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_THEN = 16,                      /* THEN  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_ENDIF = 18,                     /* ENDIF  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_DO = 20,                        /* DO  */
  YYSYMBOL_ENDWHILE = 21,                  /* ENDWHILE  */
  YYSYMBOL_BREAK = 22,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_READ = 24,                      /* READ  */
  YYSYMBOL_WRITE = 25,                     /* WRITE  */
  YYSYMBOL_NOT = 26,                       /* NOT  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_OR = 28,                        /* OR  */
  YYSYMBOL_EQ = 29,                        /* EQ  */
  YYSYMBOL_NE = 30,                        /* NE  */
  YYSYMBOL_GE = 31,                        /* GE  */
  YYSYMBOL_GT = 32,                        /* GT  */
  YYSYMBOL_LE = 33,                        /* LE  */
  YYSYMBOL_LT = 34,                        /* LT  */
  YYSYMBOL_35_ = 35,                       /* '+'  */
  YYSYMBOL_36_ = 36,                       /* '-'  */
  YYSYMBOL_37_ = 37,                       /* '*'  */
  YYSYMBOL_38_ = 38,                       /* '/'  */
  YYSYMBOL_39_ = 39,                       /* '='  */
  YYSYMBOL_40_ = 40,                       /* ';'  */
  YYSYMBOL_41_ = 41,                       /* ','  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* '{'  */
  YYSYMBOL_45_ = 45,                       /* '}'  */
  YYSYMBOL_46_ = 46,                       /* '['  */
  YYSYMBOL_47_ = 47,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_start = 49,                     /* start  */
  YYSYMBOL_PROGRAM = 50,                   /* PROGRAM  */
  YYSYMBOL_GDECLBLOCK = 51,                /* GDECLBLOCK  */
  YYSYMBOL_GDECLLIST = 52,                 /* GDECLLIST  */
  YYSYMBOL_GDECL = 53,                     /* GDECL  */
  YYSYMBOL_GidLIST = 54,                   /* GidLIST  */
  YYSYMBOL_TYPE = 55,                      /* TYPE  */
  YYSYMBOL_FDEFBLOCK = 56,                 /* FDEFBLOCK  */
  YYSYMBOL_FDEF = 57,                      /* FDEF  */
  YYSYMBOL_PARAMDEFLIST = 58,              /* PARAMDEFLIST  */
  YYSYMBOL_PARAMLIST = 59,                 /* PARAMLIST  */
  YYSYMBOL_PARAM = 60,                     /* PARAM  */
  YYSYMBOL_LDECLBLOCK = 61,                /* LDECLBLOCK  */
  YYSYMBOL_LDECLLIST = 62,                 /* LDECLLIST  */
  YYSYMBOL_LDECL = 63,                     /* LDECL  */
  YYSYMBOL_LIDLIST = 64,                   /* LIDLIST  */
  YYSYMBOL_MAINBLOCK = 65,                 /* MAINBLOCK  */
  YYSYMBOL_BODY = 66,                      /* BODY  */
  YYSYMBOL_ARRAYDECL = 67,                 /* ARRAYDECL  */
  YYSYMBOL_STATEMENTS = 68,                /* STATEMENTS  */
  YYSYMBOL_STATEMENT = 69,                 /* STATEMENT  */
  YYSYMBOL_70_1 = 70,                      /* @1  */
  YYSYMBOL_ASSIGN_STATEMENT = 71,          /* ASSIGN_STATEMENT  */
  YYSYMBOL_REFERENCE = 72,                 /* REFERENCE  */
  YYSYMBOL_ARRAY = 73,                     /* ARRAY  */
  YYSYMBOL_WRITE_STATEMENT = 74,           /* WRITE_STATEMENT  */
  YYSYMBOL_READ_STATEMENT = 75,            /* READ_STATEMENT  */
  YYSYMBOL_CONDITIONAL = 76,               /* CONDITIONAL  */
  YYSYMBOL_WHILE_STMT = 77,                /* WHILE_STMT  */
  YYSYMBOL_CONTINUE_STATEMENT = 78,        /* CONTINUE_STATEMENT  */
  YYSYMBOL_BREAK_STATEMENT = 79,           /* BREAK_STATEMENT  */
  YYSYMBOL_EXPR = 80,                      /* EXPR  */
  YYSYMBOL_ARGLIST = 81                    /* ARGLIST  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
      42,    43,    37,    35,    41,    36,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    40,
       2,    39,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    57,    57,    61,    62,    63,    66,    67,    70,    71,
      74,    86,    91,    96,   102,   108,   113,   119,   123,   129,
     130,   133,   171,   177,   183,   188,   193,   201,   202,   203,
     206,   207,   210,   216,   222,   230,   250,   254,   278,   286,
     298,   303,   310,   314,   318,   323,   322,   329,   333,   337,
     341,   352,   369,   401,   409,   426,   446,   456,   466,   479,
     495,   510,   519,   528,   532,   543,   554,   565,   576,   587,
     599,   611,   622,   633,   644,   648,   659,   670,   686,   703,
     720,   741,   748,   755
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
  "STR", "STRING", "DECLBEG", "ENDDECL", "MAIN", "RETURN", "INT_CONST",
  "STR_CONST", "ID", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO",
  "ENDWHILE", "BREAK", "CONTINUE", "READ", "WRITE", "NOT", "AND", "OR",
  "EQ", "NE", "GE", "GT", "LE", "LT", "'+'", "'-'", "'*'", "'/'", "'='",
  "';'", "','", "'('", "')'", "'{'", "'}'", "'['", "']'", "$accept",
  "start", "PROGRAM", "GDECLBLOCK", "GDECLLIST", "GDECL", "GidLIST",
  "TYPE", "FDEFBLOCK", "FDEF", "PARAMDEFLIST", "PARAMLIST", "PARAM",
  "LDECLBLOCK", "LDECLLIST", "LDECL", "LIDLIST", "MAINBLOCK", "BODY",
  "ARRAYDECL", "STATEMENTS", "STATEMENT", "@1", "ASSIGN_STATEMENT",
  "REFERENCE", "ARRAY", "WRITE_STATEMENT", "READ_STATEMENT", "CONDITIONAL",
  "WHILE_STMT", "CONTINUE_STATEMENT", "BREAK_STATEMENT", "EXPR", "ARGLIST", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-69)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,    -3,    27,    13,   -69,    46,   -69,   -23,   -69,   -69,
     -69,    38,   -69,    12,   -69,    -3,    30,    46,   -69,   -69,
      25,   -69,   -69,   -19,    32,    35,    51,   -69,   -69,    33,
      12,    66,    68,   -69,    12,    66,    87,   -69,    84,    56,
     -69,    59,    55,   -69,    60,    43,   103,   -69,    69,    66,
      61,    67,   -69,   114,   120,    91,    90,    85,    12,   -69,
     121,    87,    93,   -69,   -69,    66,   -69,    -2,    86,    -2,
      -2,   -69,   -69,   107,   108,   148,   205,    95,   115,   -69,
     113,   116,   142,   144,   145,   159,   -69,   -69,   136,   103,
     114,   -69,   -69,   -69,   -11,    -2,    -2,   -69,   204,    -2,
      54,   131,   141,    -2,   -69,   -69,   -69,    -2,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   155,   -69,    -2,   218,   143,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,   -69,    89,   205,   205,   158,   160,   218,   -69,
     -69,   177,   174,   -69,   228,   228,   238,   238,   238,   238,
     238,   238,     1,     1,   -69,   -69,   156,    57,   200,   -69,
     -69,    -2,   -69,    -2,   205,   -69,   -69,   -69,   110,   207,
     -69,   -69
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     5,     0,    17,    18,
       6,     0,     9,     0,     1,    17,     0,     0,    20,     4,
       0,     7,     8,    12,     0,    16,     0,    19,     3,     0,
       0,    25,     0,    10,     0,    25,    29,    11,     0,     0,
      22,    24,     0,    15,     0,     0,     0,    26,    13,    25,
      38,     0,    27,     0,     0,     0,     0,     0,     0,    23,
       0,    29,    34,    32,    28,    31,    37,     0,    52,     0,
       0,    62,    61,     0,     0,     0,    41,     0,     0,    53,
       0,     0,     0,     0,     0,     0,    35,    14,     0,     0,
       0,    30,    75,    76,    52,     0,     0,    74,     0,     0,
       0,     0,     0,     0,    36,    40,    42,     0,    43,    44,
      45,    49,    48,    47,    39,     0,    33,    83,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,    51,    46,
      21,    82,     0,    63,    77,    78,    68,    69,    71,    70,
      72,    73,    64,    65,    66,    67,    54,     0,     0,    57,
      56,    83,    80,     0,     0,    58,    60,    81,     0,     0,
      55,    59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -69,   -69,   -69,   -69,   211,   -16,     4,   -69,   206,
     -69,   -33,   -69,   165,   178,   -69,   187,     0,   189,   -69,
     -68,   -69,   -69,   -69,   -56,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -66,   118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,    11,    12,    24,    38,    17,    18,
      39,    40,    41,    46,    54,    55,    63,     6,    57,    25,
      75,    76,   139,    77,    97,    79,    80,    81,    82,    83,
      84,    85,   141,   142
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,    98,    44,   100,   101,    19,    13,     7,   105,    16,
      92,    93,    94,    14,    37,    13,    59,    28,    43,    20,
      78,    16,    30,    31,    95,     1,    23,    32,     2,   118,
     119,   117,     8,   133,     9,    99,    10,   137,   130,   131,
      96,   138,    87,     8,    26,     9,   136,    21,     8,    53,
       9,    15,    52,     9,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   157,   158,    29,    53,
     134,     8,    33,     9,   164,   165,    34,    36,    78,    78,
      42,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,    35,    66,    45,   169,   168,    47,    48,
      49,    67,    50,    51,    68,    69,    56,    60,    78,    70,
      58,    61,    71,    72,    73,    74,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    62,    64,
      86,    65,    99,    88,    90,   106,   156,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   102,
     103,   135,   104,   108,   107,    68,   109,   170,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   110,   114,   111,   112,   143,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   113,
     140,   159,   163,   160,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,    67,   162,   161,    68,
      69,   166,    22,    27,    70,   171,    89,    71,    72,    73,
      74,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,    91,   132,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,   128,   129,   130,   131,   116,   115,   167
};

static const yytype_uint8 yycheck[] =
{
      56,    67,    35,    69,    70,     5,     2,    10,    76,     5,
      12,    13,    14,     0,    30,    11,    49,    17,    34,    42,
      76,    17,    41,    42,    26,     5,    14,    46,     8,    95,
      96,    42,     5,    99,     7,    46,     9,   103,    37,    38,
      42,   107,    58,     5,    14,     7,   102,     9,     5,    45,
       7,     5,     9,     7,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   134,   135,    43,    65,
      16,     5,    40,     7,    17,    18,    41,    44,   134,   135,
      12,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    42,     4,     8,   164,   163,    14,    43,
      41,    11,    47,    43,    14,    15,     3,    46,   164,    19,
      41,    44,    22,    23,    24,    25,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    14,     9,
      45,    40,    46,    12,    41,    40,    47,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    42,
      42,    20,     4,    40,    39,    14,    40,    47,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    40,    47,    40,    40,    43,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    40,
      45,    43,    46,    43,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    11,    43,    41,    14,
      15,    21,    11,    17,    19,    18,    61,    22,    23,    24,
      25,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    65,    40,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    90,    89,   161
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     8,    49,    50,    51,    65,    10,     5,     7,
       9,    52,    53,    55,     0,     5,    55,    56,    57,    65,
      42,     9,    53,    14,    54,    67,    14,    57,    65,    43,
      41,    42,    46,    40,    41,    42,    44,    54,    55,    58,
      59,    60,    12,    54,    59,     8,    61,    14,    43,    41,
      47,    43,     9,    55,    62,    63,     3,    66,    41,    59,
      46,    44,    14,    64,     9,    40,     4,    11,    14,    15,
      19,    22,    23,    24,    25,    68,    69,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    45,    54,    12,    61,
      41,    62,    12,    13,    14,    26,    42,    72,    80,    46,
      80,    80,    42,    42,     4,    68,    40,    39,    40,    40,
      40,    40,    40,    40,    47,    66,    64,    42,    80,    80,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    40,    80,    16,    20,    72,    80,    80,    70,
      45,    80,    81,    43,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    47,    68,    68,    43,
      43,    41,    43,    46,    17,    18,    21,    81,    80,    68,
      47,    18
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    51,    51,    52,    52,
      53,    54,    54,    54,    54,    54,    54,    55,    55,    56,
      56,    57,    58,    59,    59,    59,    60,    61,    61,    61,
      62,    62,    63,    64,    64,    65,    66,    66,    67,    67,
      68,    68,    69,    69,    69,    70,    69,    69,    69,    69,
      69,    71,    72,    72,    73,    73,    74,    75,    76,    76,
      77,    78,    79,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    81,    81,    81
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     1,     2,     3,     2,     1,
       3,     3,     1,     4,     6,     3,     1,     1,     1,     2,
       1,     9,     1,     3,     1,     0,     2,     2,     3,     0,
       3,     2,     2,     3,     1,     8,     3,     2,     4,     7,
       2,     1,     2,     2,     2,     0,     3,     2,     2,     2,
       3,     3,     1,     1,     4,     7,     4,     4,     5,     7,
       5,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     3,     3,     2,
       4,     3,     1,     0
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
  case 10: /* GDECL: TYPE GidLIST ';'  */
#line 75 "parser.y"
                                {
                                    setType((yyvsp[-1].decl),(yyvsp[-2].val));   
                                }
#line 1412 "y.tab.c"
    break;

  case 11: /* GidLIST: ID ',' GidLIST  */
#line 87 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-2].str), 1 , data_t);
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1421 "y.tab.c"
    break;

  case 12: /* GidLIST: ID  */
#line 92 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[0].str), 1, data_t);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1430 "y.tab.c"
    break;

  case 13: /* GidLIST: ID '(' PARAMDEFLIST ')'  */
#line 97 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-3].str), 0, function_type);
                                    curr->paramList = (yyvsp[-1].params);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1440 "y.tab.c"
    break;

  case 14: /* GidLIST: ID '(' PARAMDEFLIST ')' ',' GidLIST  */
#line 103 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-5].str), 0, function_type);
                                    curr->paramList = (yyvsp[-3].params);
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1450 "y.tab.c"
    break;

  case 15: /* GidLIST: ARRAYDECL ',' GidLIST  */
#line 109 "parser.y"
                                {  
                                    (yyvsp[-2].decl)->next = (yyvsp[0].decl);
                                    (yyval.decl) = (yyvsp[-2].decl);
                                }
#line 1459 "y.tab.c"
    break;

  case 16: /* GidLIST: ARRAYDECL  */
#line 114 "parser.y"
                                {
                                    (yyval.decl) = (yyvsp[0].decl);
                                }
#line 1467 "y.tab.c"
    break;

  case 17: /* TYPE: INT  */
#line 120 "parser.y"
                                {
                                    (yyval.val) = int_type;
                                }
#line 1475 "y.tab.c"
    break;

  case 18: /* TYPE: STRING  */
#line 124 "parser.y"
                                {
                                    (yyval.val) = str_type;
                                }
#line 1483 "y.tab.c"
    break;

  case 21: /* FDEF: TYPE ID '(' PARAMLIST ')' '{' LDECLBLOCK BODY '}'  */
#line 134 "parser.y"
                                {
                                    setFunction_return_type((yyvsp[-8].val));
                                    printf("$val>1 :%d\n",(yyvsp[-8].val));
                                    struct Gsymbol *currFunction = searchSymbol((yyvsp[-7].str));

                                    if(currFunction == NULL || currFunction->data_type != (yyvsp[-8].val) || matchParameters(currFunction->paramList,(yyvsp[-5].params)) == 0) {
                                        printf("function not declared or No matching parameters");
                                        exit(0);
                                    }

                                    struct ParamList *curr = (yyvsp[-5].params);
                                    while(curr != NULL) {
                                        /* printf(" curr->name :%s\n", curr->name); */
                                        Gsymbol *temp = searchLocalSymbol(curr->name);
                                        if(temp != NULL)
                                        {
                                            temp->Addr = getparameterBind();
                                            /* printf("parameter bind %d", temp->Addr); */
                                        }
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
#line 1523 "y.tab.c"
    break;

  case 22: /* PARAMDEFLIST: PARAMLIST  */
#line 172 "parser.y"
                                {
                                    initializeLocalSymbolTable();
                                }
#line 1531 "y.tab.c"
    break;

  case 23: /* PARAMLIST: PARAM ',' PARAMLIST  */
#line 178 "parser.y"
                                {
                                    (yyval.params) = (yyvsp[-2].params);
                                    (yyval.params)->next = (yyvsp[0].params);

                                }
#line 1541 "y.tab.c"
    break;

  case 24: /* PARAMLIST: PARAM  */
#line 184 "parser.y"
                                {
                                    (yyval.params) = (yyvsp[0].params);
                                }
#line 1549 "y.tab.c"
    break;

  case 25: /* PARAMLIST: %empty  */
#line 188 "parser.y"
                                {
                                    (yyval.params) = NULL;
                                }
#line 1557 "y.tab.c"
    break;

  case 26: /* PARAM: TYPE ID  */
#line 194 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[0].str), 0 , data_t);
                                    curr->data_type = (yyvsp[-1].val);
                                    (yyval.params) = createParameter((yyvsp[0].str), (yyvsp[-1].val));
                                }
#line 1567 "y.tab.c"
    break;

  case 32: /* LDECL: TYPE LIDLIST  */
#line 211 "parser.y"
                                {
                                    setType((yyvsp[0].decl), (yyvsp[-1].val));
                                }
#line 1575 "y.tab.c"
    break;

  case 33: /* LIDLIST: ID ',' LIDLIST  */
#line 217 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[-2].str), 0 , data_t);
                                    curr->Addr = getLocalBind();
                                    (yyval.decl) = createDeclList(curr,(yyvsp[0].decl));
                                }
#line 1585 "y.tab.c"
    break;

  case 34: /* LIDLIST: ID  */
#line 223 "parser.y"
                                {
                                    Gsymbol *curr = installLocalSymbol((yyvsp[0].str), 0 , data_t);
                                    curr->Addr = getLocalBind();
                                    (yyval.decl) = createDeclList(curr, NULL);
                                }
#line 1595 "y.tab.c"
    break;

  case 35: /* MAINBLOCK: INT MAIN '(' ')' '{' LDECLBLOCK BODY '}'  */
#line 231 "parser.y"
                                {
                                    setFunction_return_type(int_type);
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
#line 1617 "y.tab.c"
    break;

  case 36: /* BODY: BEG STATEMENTS END  */
#line 251 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1625 "y.tab.c"
    break;

  case 38: /* ARRAYDECL: ID '[' INT_CONST ']'  */
#line 279 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-3].str), (yyvsp[-1].val), arr_t);
                                    curr->dimensions = 1;
                                    curr->rowSize = (yyvsp[-1].val);
                                    curr->columnSize = -1;
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1637 "y.tab.c"
    break;

  case 39: /* ARRAYDECL: ID '[' INT_CONST ']' '[' INT_CONST ']'  */
#line 287 "parser.y"
                                {
                                    Gsymbol *curr = installSymbol((yyvsp[-6].str), (yyvsp[-4].val) * (yyvsp[-1].val), arr_t);
                                    curr->dimensions = 2;
                                    curr->rowSize = (yyvsp[-4].val);
                                    curr->columnSize = (yyvsp[-1].val);
                                    (yyval.decl) = createDeclList(curr,NULL);
                                }
#line 1649 "y.tab.c"
    break;

  case 40: /* STATEMENTS: STATEMENT STATEMENTS  */
#line 299 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                    (yyval.snode)->next = (yyvsp[0].snode);
                                }
#line 1658 "y.tab.c"
    break;

  case 41: /* STATEMENTS: STATEMENT  */
#line 304 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[0].snode);
                                    (yyval.snode)->next = NULL;
                                }
#line 1667 "y.tab.c"
    break;

  case 42: /* STATEMENT: ASSIGN_STATEMENT ';'  */
#line 311 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1675 "y.tab.c"
    break;

  case 43: /* STATEMENT: WRITE_STATEMENT ';'  */
#line 315 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1683 "y.tab.c"
    break;

  case 44: /* STATEMENT: READ_STATEMENT ';'  */
#line 319 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1691 "y.tab.c"
    break;

  case 45: /* @1: %empty  */
#line 323 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1699 "y.tab.c"
    break;

  case 46: /* STATEMENT: CONDITIONAL ';' @1  */
#line 326 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-2].snode);
                                }
#line 1707 "y.tab.c"
    break;

  case 47: /* STATEMENT: BREAK_STATEMENT ';'  */
#line 330 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1715 "y.tab.c"
    break;

  case 48: /* STATEMENT: CONTINUE_STATEMENT ';'  */
#line 334 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1723 "y.tab.c"
    break;

  case 49: /* STATEMENT: WHILE_STMT ';'  */
#line 338 "parser.y"
                                {
                                    (yyval.snode) = (yyvsp[-1].snode);
                                }
#line 1731 "y.tab.c"
    break;

  case 50: /* STATEMENT: RETURN EXPR ';'  */
#line 342 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = return_stmt;
                                    temp.expr = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1743 "y.tab.c"
    break;

  case 51: /* ASSIGN_STATEMENT: REFERENCE '=' EXPR  */
#line 353 "parser.y"
                                {
                                    printf("EVALUATING ASSIGNMENT\n");
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
#line 1762 "y.tab.c"
    break;

  case 52: /* REFERENCE: ID  */
#line 370 "parser.y"
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
#line 1798 "y.tab.c"
    break;

  case 53: /* REFERENCE: ARRAY  */
#line 402 "parser.y"
                                {
                                    // check with array declaration
                                    (yyval.expr) = (yyvsp[0].expr);
                                }
#line 1807 "y.tab.c"
    break;

  case 54: /* ARRAY: ID '[' EXPR ']'  */
#line 410 "parser.y"
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
                                    temp.isLocal = 0;
                                    temp.symbol = curr_sym;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-1].expr), NULL);
                                }
#line 1828 "y.tab.c"
    break;

  case 55: /* ARRAY: ID '[' EXPR ']' '[' EXPR ']'  */
#line 427 "parser.y"
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
                                    temp.isLocal = 0;
                                    temp.is_arr = 1;
                                    temp.symbol = curr_sym;
                                    (yyval.expr) = createExprNode(temp);
                                    constructExprNode((yyval.expr), (yyvsp[-4].expr), (yyvsp[-1].expr));
                                }
#line 1849 "y.tab.c"
    break;

  case 56: /* WRITE_STATEMENT: WRITE '(' EXPR ')'  */
#line 447 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = write_stmt;
                                    temp.expr = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1861 "y.tab.c"
    break;

  case 57: /* READ_STATEMENT: READ '(' REFERENCE ')'  */
#line 457 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = read_stmt;
                                    temp.reference = (yyvsp[-1].expr);
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1873 "y.tab.c"
    break;

  case 58: /* CONDITIONAL: IF EXPR THEN STATEMENTS ENDIF  */
#line 467 "parser.y"
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
#line 1890 "y.tab.c"
    break;

  case 59: /* CONDITIONAL: IF EXPR THEN STATEMENTS ELSE STATEMENTS ENDIF  */
#line 480 "parser.y"
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
#line 1908 "y.tab.c"
    break;

  case 60: /* WHILE_STMT: WHILE EXPR DO STATEMENTS ENDWHILE  */
#line 496 "parser.y"
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
#line 1925 "y.tab.c"
    break;

  case 61: /* CONTINUE_STATEMENT: CONTINUE  */
#line 511 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = continue_stmt;
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1936 "y.tab.c"
    break;

  case 62: /* BREAK_STATEMENT: BREAK  */
#line 520 "parser.y"
                                {
                                    Snode temp;
                                    initializeSnode(&temp);
                                    temp.stmt_type = break_stmt;
                                    (yyval.snode) = createSnode(temp);
                                }
#line 1947 "y.tab.c"
    break;

  case 63: /* EXPR: '(' EXPR ')'  */
#line 529 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[-1].expr);
                                }
#line 1955 "y.tab.c"
    break;

  case 64: /* EXPR: EXPR '+' EXPR  */
#line 533 "parser.y"
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
#line 1970 "y.tab.c"
    break;

  case 65: /* EXPR: EXPR '-' EXPR  */
#line 544 "parser.y"
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
#line 1985 "y.tab.c"
    break;

  case 66: /* EXPR: EXPR '*' EXPR  */
#line 555 "parser.y"
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
#line 2000 "y.tab.c"
    break;

  case 67: /* EXPR: EXPR '/' EXPR  */
#line 566 "parser.y"
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
#line 2015 "y.tab.c"
    break;

  case 68: /* EXPR: EXPR EQ EXPR  */
#line 577 "parser.y"
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
#line 2030 "y.tab.c"
    break;

  case 69: /* EXPR: EXPR NE EXPR  */
#line 588 "parser.y"
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
#line 2046 "y.tab.c"
    break;

  case 70: /* EXPR: EXPR GT EXPR  */
#line 600 "parser.y"
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
#line 2062 "y.tab.c"
    break;

  case 71: /* EXPR: EXPR GE EXPR  */
#line 612 "parser.y"
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
#line 2077 "y.tab.c"
    break;

  case 72: /* EXPR: EXPR LE EXPR  */
#line 623 "parser.y"
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
#line 2092 "y.tab.c"
    break;

  case 73: /* EXPR: EXPR LT EXPR  */
#line 634 "parser.y"
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
#line 2107 "y.tab.c"
    break;

  case 74: /* EXPR: REFERENCE  */
#line 645 "parser.y"
                                {
                                    (yyval.expr) = (yyvsp[0].expr);
                                }
#line 2115 "y.tab.c"
    break;

  case 75: /* EXPR: INT_CONST  */
#line 649 "parser.y"
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
#line 2130 "y.tab.c"
    break;

  case 76: /* EXPR: STR_CONST  */
#line 660 "parser.y"
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
#line 2145 "y.tab.c"
    break;

  case 77: /* EXPR: EXPR AND EXPR  */
#line 671 "parser.y"
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
#line 2165 "y.tab.c"
    break;

  case 78: /* EXPR: EXPR OR EXPR  */
#line 687 "parser.y"
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
#line 2186 "y.tab.c"
    break;

  case 79: /* EXPR: NOT EXPR  */
#line 704 "parser.y"
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
#line 2207 "y.tab.c"
    break;

  case 80: /* EXPR: ID '(' ARGLIST ')'  */
#line 721 "parser.y"
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
#line 2230 "y.tab.c"
    break;

  case 81: /* ARGLIST: EXPR ',' ARGLIST  */
#line 742 "parser.y"
                                {
                                    (yyvsp[-2].expr)->isLocal = 1;
                                    struct ArgList *currArg = createNewArg((yyvsp[-2].expr));
                                    currArg->next = (yyvsp[0].argList);
                                    (yyval.argList) = currArg;
                                }
#line 2241 "y.tab.c"
    break;

  case 82: /* ARGLIST: EXPR  */
#line 749 "parser.y"
                                {
                                    (yyvsp[0].expr)->isLocal = 1;
                                    struct ArgList *currArg = createNewArg((yyvsp[0].expr));
                                    (yyval.argList) = currArg;
                                }
#line 2251 "y.tab.c"
    break;

  case 83: /* ARGLIST: %empty  */
#line 755 "parser.y"
                                {
                                    (yyval.argList) = NULL;
                                }
#line 2259 "y.tab.c"
    break;


#line 2263 "y.tab.c"

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

#line 760 "parser.y"



/*** Auxiliary functions section ***/

yyerror(char const *s)
{
    printf("yyerror :\t%s\n",s);
    exit(1);
}


