/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 137 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
