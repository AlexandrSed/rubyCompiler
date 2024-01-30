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

#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 7 ".\\parser.y"

    #include <string>
    #include <vector>
	#include <stdio.h>
	#include <malloc.h>

    #include "parses_classes/AliasStmt/AliasStmtNode.h"
    #include "parses_classes/CaseStmt/CaseStmtNode.h"
    #include "parses_classes/ClassBodyStmt/ClassBodyStmtNode.h"
    #include "parses_classes/ClassStmt/ClassStmtNode.h"
    #include "parses_classes/ElseifNode/ElsifNode.h"
    #include "parses_classes/ExprNode/ExprNode.h"
    #include "parses_classes/ForStmt/ForStmtNode.h"
    #include "parses_classes/IfStmt/IfStmtNode.h"
    #include "parses_classes/MethodStmtNode/MethodStmtNode.h"
    #include "parses_classes/ProgramElementNode/ProgramElementNode.h"
    #include "parses_classes/ReturnStmt/ReturnStmtNode.h"
    #include "parses_classes/StmtNode/StmtNode.h"
    #include "parses_classes/UnlessStmt/UnlessStmtNode.h"
    #include "parses_classes/WhenStmt/WhenStmtNode.h"
    #include "parses_classes/WhileStmt/WhileStmtNode.h"
    

#line 73 ".\\parser.tab.hpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ALIAS_KEYWORD = 258,           /* ALIAS_KEYWORD  */
    CASE_KEYWORD = 259,            /* CASE_KEYWORD  */
    CLASS_KEYWORD = 260,           /* CLASS_KEYWORD  */
    DEF_KEYWORD = 261,             /* DEF_KEYWORD  */
    DEFINED_KEYWORD = 262,         /* DEFINED_KEYWORD  */
    DO_KEYWORD = 263,              /* DO_KEYWORD  */
    IF_KEYWORD = 264,              /* IF_KEYWORD  */
    ELSE_KEYWORD = 265,            /* ELSE_KEYWORD  */
    ELSIF_KEYWORD = 266,           /* ELSIF_KEYWORD  */
    END_KEYWORD = 267,             /* END_KEYWORD  */
    FALSE_KEYWORD = 268,           /* FALSE_KEYWORD  */
    FOR_KEYWORD = 269,             /* FOR_KEYWORD  */
    IN_KEYWORD = 270,              /* IN_KEYWORD  */
    NIL_KEYWORD = 271,             /* NIL_KEYWORD  */
    RETURN_KEYWORD = 272,          /* RETURN_KEYWORD  */
    SELF_KEYWORD = 273,            /* SELF_KEYWORD  */
    SUPER_KEYWORD = 274,           /* SUPER_KEYWORD  */
    SUPERCLASS_KEYWORD = 275,      /* SUPERCLASS_KEYWORD  */
    THEN_KEYWORD = 276,            /* THEN_KEYWORD  */
    TRUE_KEYWORD = 277,            /* TRUE_KEYWORD  */
    UNLESS_KEYWORD = 278,          /* UNLESS_KEYWORD  */
    WHEN_KEYWORD = 279,            /* WHEN_KEYWORD  */
    WHILE_KEYWORD = 280,           /* WHILE_KEYWORD  */
    METHOD_MARK_QUESTION = 281,    /* METHOD_MARK_QUESTION  */
    METHOD_MARK_EXCLAMATION = 282, /* METHOD_MARK_EXCLAMATION  */
    METHOD_MARK_EQUAL = 283,       /* METHOD_MARK_EQUAL  */
    OR_KEYWORD = 284,              /* OR_KEYWORD  */
    AND_KEYWORD = 285,             /* AND_KEYWORD  */
    NOT_KEYWORD = 286,             /* NOT_KEYWORD  */
    ADD_ASSIGN_OP = 287,           /* ADD_ASSIGN_OP  */
    SUB_ASSIGN_OP = 288,           /* SUB_ASSIGN_OP  */
    MUL_ASSIGN_OP = 289,           /* MUL_ASSIGN_OP  */
    DIV_ASSIGN_OP = 290,           /* DIV_ASSIGN_OP  */
    MOD_ASSIGN_OP = 291,           /* MOD_ASSIGN_OP  */
    POW_ASSIGN_OP = 292,           /* POW_ASSIGN_OP  */
    QUESTION_SYMBOL = 293,         /* QUESTION_SYMBOL  */
    COLON_SYMBOL = 294,            /* COLON_SYMBOL  */
    EXCLUSIVE_RANGE_OP = 295,      /* EXCLUSIVE_RANGE_OP  */
    INCLUSIVE_RANGE_OP = 296,      /* INCLUSIVE_RANGE_OP  */
    LOGICAL_OR_OP = 297,           /* LOGICAL_OR_OP  */
    LOGICAL_AND_OP = 298,          /* LOGICAL_AND_OP  */
    EQL_OP = 299,                  /* EQL_OP  */
    NOT_EQL_OP = 300,              /* NOT_EQL_OP  */
    COMB_COMPARISON_OP = 301,      /* COMB_COMPARISON_OP  */
    CASE_EQL_OP = 302,             /* CASE_EQL_OP  */
    GREATER_OP = 303,              /* GREATER_OP  */
    LESS_OP = 304,                 /* LESS_OP  */
    GREATER_OR_EQL_OP = 305,       /* GREATER_OR_EQL_OP  */
    LESS_OR_EQL_OP = 306,          /* LESS_OR_EQL_OP  */
    BIN_OR_OP = 307,               /* BIN_OR_OP  */
    BIN_XOR_OP = 308,              /* BIN_XOR_OP  */
    BIN_AND_OP = 309,              /* BIN_AND_OP  */
    BIN_LEFT_SHIFT_OP = 310,       /* BIN_LEFT_SHIFT_OP  */
    BIN_RIGHT_SHIFT_OP = 311,      /* BIN_RIGHT_SHIFT_OP  */
    UMINUS = 312,                  /* UMINUS  */
    LOGICAL_NOT_OP = 313,          /* LOGICAL_NOT_OP  */
    BIN_ONES_COMPLEMENT_OP = 314,  /* BIN_ONES_COMPLEMENT_OP  */
    ARITHMETIC_POW_OP = 315,       /* ARITHMETIC_POW_OP  */
    DOUBLE_COLON_SYMBOL = 316,     /* DOUBLE_COLON_SYMBOL  */
    NEW_LINE_SYMBOL = 317,         /* NEW_LINE_SYMBOL  */
    COMMA_SYMBOL = 318,            /* COMMA_SYMBOL  */
    SEMICOLON_SYMBOL = 319,        /* SEMICOLON_SYMBOL  */
    STRING = 320,                  /* STRING  */
    INTEGER_NUMBER = 321,          /* INTEGER_NUMBER  */
    FLOAT_NUMBER = 322,            /* FLOAT_NUMBER  */
    IDENTIFIER = 323,              /* IDENTIFIER  */
    OBJECT_VAR_NAME = 324,         /* OBJECT_VAR_NAME  */
    CLASS_VAR_NAME = 325,          /* CLASS_VAR_NAME  */
    CONSTANT_NAME = 326            /* CONSTANT_NAME  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 ".\\parser.y"

    int Int;
    float Float;
    //TODO: строки поправить - везде в программе должны быть со зведочкой
    std::string* Str;
	ExprNode* expr_union;
	IfStmtNode* if_union;
    UnlessStmtNode* unless_union;
    ElsifNode* elsif_union;
    WhileStmtNode* while_union;
    ForStmtNode* for_union;
	std::vector<ExprNode*>* expr_list_union;
    std::vector<ElsifNode*>* elsif_list_union;
    WhenStmtNode* when_union;
    std::vector<WhenStmtNode*>* when_list_union;
    CaseStmtNode* case_union;
    AliasStmtNode* alias_union;
    ReturnStmtNode* return_union;
    StmtNode* stmt_union;
    std::vector<StmtNode*>* stmt_list_union;
    MethodStmtNode* method_union;
    std::vector<std::string*>* param_list_union;
    ClassBodyStmtNode* class_body_stmt_union;
    std::vector<ClassBodyStmtNode*>* class_body_union;
    ClassStmtNode* class_stmt_union;
    ProgramElementNode* programm_el_union;
    std::vector<ProgramElementNode*>* programm_el_list_union;

#line 190 ".\\parser.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */
