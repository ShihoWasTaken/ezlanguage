/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_OBJ_EZ_LANGUAGE_COMPILER_TAB_HPP_INCLUDED
# define YY_YY_OBJ_EZ_LANGUAGE_COMPILER_TAB_HPP_INCLUDED
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
    NOMBRE = 258,
    NUMBRE = 259,
    NAME = 260,
    COMMA = 261,
    DEGRE = 262,
    POURCENT = 263,
    DIESE = 264,
    POINT = 265,
    INTEGER = 266,
    REAL = 267,
    STRING = 268,
    BOOLEAN = 269,
    EGAL = 270,
    NE = 271,
    LT = 272,
    LE = 273,
    GT = 274,
    GE = 275,
    PLUS = 276,
    MINUS = 277,
    MULT = 278,
    DIVISE = 279,
    LEFT_PARENTHESIS = 280,
    RIGHT_PARENTHESIS = 281,
    LEFT_ACCOLADE = 282,
    RIGHT_ACCOLADE = 283,
    LEFT_BRACKET = 284,
    RIGHT_BRACKET = 285,
    FIN = 286,
    backLine = 287,
    CONST = 288,
    LOCAL = 289,
    GLOBAL = 290,
    IS = 291,
    ARE = 292,
    IF = 293,
    DO = 294,
    ELSE = 295,
    ENDIF = 296,
    WHEN = 297,
    CASE = 298,
    ENDCASE = 299,
    DEFAULT = 300,
    ENDWHEN = 301,
    WHILE = 302,
    ENDWHILE = 303,
    REPEAT = 304,
    UNTIL = 305,
    ENDREPEAT = 306,
    FOR = 307,
    IN = 308,
    STEP = 309,
    ENDFOR = 310,
    FUNCTION = 311,
    PROCEDURE = 312,
    RETURN = 313,
    ENDFUNCTION = 314,
    ENDPROCEDURE = 315,
    PRINT = 316
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_OBJ_EZ_LANGUAGE_COMPILER_TAB_HPP_INCLUDED  */
