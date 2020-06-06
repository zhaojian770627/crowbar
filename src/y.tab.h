/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT_LITERAL = 258,
     DOUBLE_LITERAL = 259,
     STRING_LITERAL = 260,
     IDENTIFIER = 261,
     FUNCTION = 262,
     IF = 263,
     ELSE = 264,
     ELSIF = 265,
     WHILE = 266,
     FOR = 267,
     RETURN_T = 268,
     BREAK = 269,
     CONTINUE = 270,
     NULL_T = 271,
     LP = 272,
     RP = 273,
     LC = 274,
     RC = 275,
     LB = 276,
     RB = 277,
     SEMICOLON = 278,
     COMMA = 279,
     ASSIGN = 280,
     LOGICAL_AND = 281,
     LOGICAL_OR = 282,
     EQ = 283,
     NE = 284,
     GT = 285,
     GE = 286,
     LT = 287,
     LE = 288,
     ADD = 289,
     SUB = 290,
     MUL = 291,
     DIV = 292,
     MOD = 293,
     TRUE_T = 294,
     FALSE_T = 295,
     GLOBAL_T = 296,
     DOT = 297,
     INCREMENT = 298,
     DECREMENT = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 6 "crowbar.y"

  char *identifier;
  ParameterList *parameter_list;
  ArgumentList *argument_list;
  Expression *expression;
  ExpressionList *expression_list;
  Statement *statement;
  StatementList *statement_list;
  Block *block;
  Elsif *elsif;
  IdentifierList *identifier_list;
 


/* Line 1685 of yacc.c  */
#line 110 "crowbar.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


