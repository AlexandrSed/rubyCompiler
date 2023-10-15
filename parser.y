%{
	#include <stdio.h>
	#include <malloc.h>
%}

%token ALIAS_KEYWORD
%token AND_KEYWORD
%token BEGIN_KEYWORD
%token BREAK_KEYWORD
%token CASE_KEYWORD
%token CLASS_KEYWORD
%token DEF_KEYWORD
%token DEFINED_KEYWORD
%token DO_KEYWORD
%token IF_KEYWORD
%token ELSE_KEYWORD
%token ELSIF_KEYWORD
%token END_KEYWORD
%token ENSURE_KEYWORD
%token FALSE_KEYWORD
%token FOR_KEYWORD
%token IN_KEYWORD
%token MODULE_KEYWORD
%token NEXT_KEYWORD
%token NIL_KEYWORD
%token NOT_KEYWORD
%token OR_KEYWORD
%token REDO_KEYWORD
%token RESCUE_KEYWORD
%token RETRY_KEYWORD
%token RETURN_KEYWORD
%token SELF_KEYWORD
%token SUPER_KEYWORD
%token THEN_KEYWORD
%token TRUE_KEYWORD
%token UNDEF_KEYWORD
%token UNLESS_KEYWORD
%token UNTIL_KEYWORD
%token WHEN_KEYWORD
%token WHILE_KEYWORD
%token YIELD_KEYWORD

%right '='
%left '+' '-'
%right UMINUS
%left '*' '/' '%'
%token ARITHMETIC_POW_OP

%token EQL_OP
%token NOT_EQL_OP
%token GREATER_OP
%token LESS_OP
%token GREATER_OR_EQL_OP
%token LESS_OR_EQL_OP
%token COMB_COMPRASION_OP
%token CASE_EQL_OP
%token RECEIVER_EQL_OP
%token OBJ_ID_EQL_OP

%token ADD_ASSIGN_OP
%token SUB_ASSIGN_OP
%token MUL_ASSIGN_OP
%token DIV_ASSIGN_OP
%token MOD_ASSIGN_OP
%token POW_ASSIGN_OP

%token BIN_AND_OP
%token BIN_OR_OP
%token BIN_XOR_OP
%token BIN_ONES_COMPLEMENT_OP
%token BIN_LEFT_SHIFT_OP
%token BIN_RIGHT_SHIFT_OP

%token LOGICAL_AND_OP
%token LOGICAL_OR_OP
%token LOGICAL_NOT_OP

%token INCLUSIVE_RANGE_OP
%token EXCLUSIVE_RANGE_OP

%nonassoc '(' ')'
%nonassoc '{' '}'
%left '.' '[' ']'

%token QUESTION_SYMBOL
%token COMMA_SYMBOL
%token COLON_SYMBOL
%token DOUBLE_COLON_SYMBOL
%token SEMICOLON_SYMBOL
%token NEW_LINE_SYMBOL

%token STRING
%token INTEGER_NUMBER
%token FLOAT_NUMBER

%token VAR_METHOD_NAME
%token VAR_NAME
%token CLASS_NAME
%token CLASS_VAR_NAME
%token CONSTANT_NAME

%token ID

%%

expr: VAR_METHOD_NAME
    | VAR_NAME
    | CLASS_NAME
    | CLASS_VAR_NAME
    | CONSTANT_NAME
    | STRING
    | TRUE_KEYWORD
    | FALSE_KEYWORD
    | NIL_KEYWORD
    | INTEGER_NUMBER
    | FLOAT_NUMBER
    | expr '=' expr
    | expr '[' expr ']'
    | expr '/' expr
    | expr '%' expr
    | expr '*' expr
    | expr '+' expr
    | expr '-' expr
    | '-' expr %prec UMINUS
    | VAR_METHOD_NAME '(' expr_list ')'
    | expr '.' VAR_METHOD_NAME
    | expr AND_KEYWORD expr
    | expr OR_KEYWORD expr
    | NOT_KEYWORD expr
    | expr ARITHMETIC_POW_OP expr
    | expr EQL_OP expr
    | expr NOT_EQL_OP expr
    | expr GREATER_OP expr
    | expr LESS_OP expr
    | expr GREATER_OR_EQL_OP expr
    | expr LESS_OR_EQL_OP expr
    | expr COMB_COMPRASION_OP expr
    | expr CASE_EQL_OP expr
    | expr '.' RECEIVER_EQL_OP expr
    | expr '.' OBJ_ID_EQL_OP expr
	| expr ADD_ASSIGN_OP expr
	| expr SUB_ASSIGN_OP expr
	| expr MUL_ASSIGN_OP expr
	| expr DIV_ASSIGN_OP expr
	| expr MOD_ASSIGN_OP expr
	| expr POW_ASSIGN_OP expr
    | expr BIN_AND_OP expr
	| expr BIN_OR_OP expr 
	| expr BIN_XOR_OP expr
	| expr BIN_ONES_COMPLEMENT_OP expr
	| expr BIN_LEFT_SHIFT_OP expr
	| expr BIN_RIGHT_SHIFT_OP expr
	| expr LOGICAL_AND_OP expr
	| expr LOGICAL_OR_OP expr
	| LOGICAL_NOT_OP expr
    | expr INCLUSIVE_RANGE_OP expr
	| expr EXCLUSIVE_RANGE_OP expr
    | '(' expr ')'
    | DEFINED_KEYWORD expr
	| DOUBLE_COLON_SYMBOL expr
	| expr DOUBLE_COLON_SYMBOL expr
    ;

expr_list:;
%%