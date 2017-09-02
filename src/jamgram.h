/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Skeleton interface for Bison GLR parsers in C

   Copyright (C) 2002-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_JAMGRAM_TAB_H_INCLUDED
# define YY_YY_JAMGRAM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _SEMIC_t = 258,
    _COLON_t = 259,
    _BANG_t = 260,
    _BANG_EQUALS_t = 261,
    _QUESTION_EQUALS_t = 262,
    _LPAREN_t = 263,
    _RPAREN_t = 264,
    _LBRACKET_t = 265,
    _RBRACKET_t = 266,
    _LBRACE_t = 267,
    _RBRACE_t = 268,
    _AMPER_t = 269,
    _AMPERAMPER_t = 270,
    _PLUS_EQUALS_t = 271,
    _LANGLE_t = 272,
    _LANGLE_EQUALS_t = 273,
    _EQUALS_t = 274,
    _RANGLE_t = 275,
    _RANGLE_EQUALS_t = 276,
    _BAR_t = 277,
    _BARBAR_t = 278,
    ACTIONS_t = 279,
    BIND_t = 280,
    BREAK_t = 281,
    CASE_t = 282,
    CONTINUE_t = 283,
    DEFAULT_t = 284,
    ELSE_t = 285,
    EXISTING_t = 286,
    FOR_t = 287,
    IF_t = 288,
    IGNORE_t = 289,
    IN_t = 290,
    INCLUDE_t = 291,
    JUMPTOEOF_t = 292,
    LOCAL_t = 293,
    MAXLINE_t = 294,
    ON_t = 295,
    PIECEMEAL_t = 296,
    QUIETLY_t = 297,
    RETURN_t = 298,
    RULE_t = 299,
    SWITCH_t = 300,
    TOGETHER_t = 301,
    UPDATED_t = 302,
    WHILE_t = 303,
    ARG = 304,
    STRING = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_JAMGRAM_TAB_H_INCLUDED  */
