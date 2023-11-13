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
%left '*' '/' '%'
%right UMINUS
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

%token IDENTIFIER
%token OBJECT_VAR_NAME // Поле класса, видно только в рамках одного объекта класса
%token CLASS_VAR_NAME // Для всех объектов класса
%token CONSTANT_NAME
%%

expr: IDENTIFIER
    | OBJECT_VAR_NAME
    | CLASS_VAR_NAME
    | CONSTANT_NAME
    | STRING
    | TRUE_KEYWORD
    | FALSE_KEYWORD
    | NIL_KEYWORD
    | INTEGER_NUMBER
    | FLOAT_NUMBER
    | expr linefeed_or_empty '=' linefeed_or_empty expr
    | expr '[' linefeed_or_empty expr linefeed_or_empty ']'
    | expr '/' linefeed_or_empty expr
    | expr '%' linefeed_or_empty expr
    | expr '*' linefeed_or_empty expr
    | expr '+' linefeed_or_empty expr
    | expr '-' linefeed_or_empty expr
    | '-'  linefeed_or_empty expr %prec UMINUS
    | IDENTIFIER '(' linefeed_or_empty expr_list linefeed_or_empty ')'
    | expr linefeed_or_empty '.' linefeed_or_empty IDENTIFIER
    | expr AND_KEYWORD linefeed_or_empty expr
    | expr OR_KEYWORD linefeed_or_empty expr
    | NOT_KEYWORD '(' linefeed_or_empty expr linefeed_or_empty ')'
    | expr ARITHMETIC_POW_OP linefeed_or_empty expr
    | expr EQL_OP linefeed_or_empty expr
    | expr NOT_EQL_OP linefeed_or_empty expr
    | expr GREATER_OP linefeed_or_empty expr
    | expr LESS_OP linefeed_or_empty expr
    | expr GREATER_OR_EQL_OP linefeed_or_empty expr
    | expr LESS_OR_EQL_OP linefeed_or_empty expr
    | expr COMB_COMPRASION_OP linefeed_or_empty expr
    | expr CASE_EQL_OP linefeed_or_empty expr
    | expr '.' RECEIVER_EQL_OP expr
    | expr '.' OBJ_ID_EQL_OP expr
	| expr ADD_ASSIGN_OP linefeed_or_empty expr
	| expr SUB_ASSIGN_OP linefeed_or_empty expr
	| expr MUL_ASSIGN_OP linefeed_or_empty expr
	| expr DIV_ASSIGN_OP linefeed_or_empty expr
	| expr MOD_ASSIGN_OP linefeed_or_empty expr
	| expr POW_ASSIGN_OP linefeed_or_empty expr
    | expr BIN_AND_OP linefeed_or_empty expr
	| expr BIN_OR_OP linefeed_or_empty expr 
	| expr BIN_XOR_OP linefeed_or_empty expr
	| expr BIN_ONES_COMPLEMENT_OP linefeed_or_empty expr
	| expr BIN_LEFT_SHIFT_OP linefeed_or_empty expr
	| expr BIN_RIGHT_SHIFT_OP linefeed_or_empty expr
	| expr LOGICAL_AND_OP linefeed_or_empty expr
	| expr LOGICAL_OR_OP linefeed_or_empty expr
	| LOGICAL_NOT_OP linefeed_or_empty expr
    | expr INCLUSIVE_RANGE_OP linefeed_or_empty expr
	| expr EXCLUSIVE_RANGE_OP linefeed_or_empty expr
    | '(' linefeed_or_empty expr linefeed_or_empty ')'
    | '[' linefeed_or_empty expr_list linefeed_or_empty ']'
    | DEFINED_KEYWORD linefeed_or_empty expr
	| DOUBLE_COLON_SYMBOL linefeed_or_empty expr
	| expr DOUBLE_COLON_SYMBOL linefeed_or_empty expr
    | expr QUESTION_SYMBOL linefeed_or_empty expr linefeed_or_empty COLON_SYMBOL linefeed_or_empty  expr
    | expr IF_KEYWORD linefeed_or_empty expr
    | expr UNLESS_KEYWORD linefeed_or_empty expr
    ;

linefeed_or_empty: /*empty*/
    | NEW_LINE_SYMBOL
    | linefeed_or_empty NEW_LINE_SYMBOL
    ;

delimiter: NEW_LINE_SYMBOL
    | SEMICOLON_SYMBOL
    | delimiter NEW_LINE_SYMBOL
    ;

expr_list: /* empty */
	| expr_list_not_empty
    ;

expr_list_not_empty: expr
    | expr_list_not_empty COMMA_SYMBOL expr
    ;

stmt_list:
    | stmt
    | stmt_list stmt
    ;
    
stmt: expr delimiter
    | if_stmt delimiter
    | while_stmt delimiter
    | for_stmt delimiter
    | until_stmt delimiter
    | case_stmt delimiter
    | unless_stmt delimiter
    | stmt_list delimiter
    | return_stmt delimiter
    | alias_stmt delimiter
    | begin_rescue_stmt delimiter
    ;

param_list_not_empty:
    | IDENTIFIER
    | param_list COMMA_SYMBOL IDENTIFIER
    ;

param_list: /* empty */
    | param_list_not_empty
    ;

method_stmt:
    | DEF_KEYWORD IDENTIFIER '(' param_list ')' delimiter stmt_list END_KEYWORD
    | DEF_KEYWORD IDENTIFIER delimiter stmt_list END_KEYWORD

class_stmt:
    | CLASS_KEYWORD CONSTANT_NAME delimiter class_body END_KEYWORD

class_body_stmt: method_stmt delimiter
    | CLASS_VAR_NAME delimiter
    | CLASS_VAR_NAME '=' expr delimiter
    | class_stmt delimiter

class_body_not_empty: class_body_stmt
    | class_body_not_empty class_body_stmt
    ;

class_body: /* empty */
    | class_body_not_empty
    ;

if_stmt:
    | IF_KEYWORD expr delimiter stmt END_KEYWORD
    | IF_KEYWORD expr THEN_KEYWORD stmt END_KEYWORD
    | IF_KEYWORD expr delimiter stmt ELSE_KEYWORD stmt END_KEYWORD
    | IF_KEYWORD expr THEN_KEYWORD stmt ELSE_KEYWORD stmt END_KEYWORD
    | IF_KEYWORD expr delimiter stmt elsif_list stmt END_KEYWORD
    | IF_KEYWORD expr THEN_KEYWORD stmt elsif_list stmt END_KEYWORD
    | IF_KEYWORD expr delimiter stmt elsif_list ELSE_KEYWORD stmt END_KEYWORD
    | IF_KEYWORD expr THEN_KEYWORD stmt elsif_list ELSE_KEYWORD stmt END_KEYWORD
    ;

unless_stmt:
    | UNLESS_KEYWORD expr THEN_KEYWORD stmt END_KEYWORD
    | UNLESS_KEYWORD expr stmt END_KEYWORD
    | UNLESS_KEYWORD expr THEN_KEYWORD stmt ELSE_KEYWORD stmt END_KEYWORD
    | UNLESS_KEYWORD expr stmt ELSE_KEYWORD stmt END_KEYWORD

elsif_list:
    | ELSIF_KEYWORD expr delimiter stmt
    | ELSIF_KEYWORD expr THEN_KEYWORD stmt
    | elsif_list ELSIF_KEYWORD expr delimiter stmt
    | elsif_list ELSIF_KEYWORD expr THEN_KEYWORD stmt
    ;

while_stmt:
    | WHILE_KEYWORD expr DO_KEYWORD stmt END_KEYWORD
    | WHILE_KEYWORD expr stmt END_KEYWORD
    | WHILE_KEYWORD expr stmt redo_stmt END_KEYWORD
    ;

for_stmt:
    | FOR_KEYWORD expr IN_KEYWORD expr DO_KEYWORD stmt END_KEYWORD
    | FOR_KEYWORD expr IN_KEYWORD expr stmt END_KEYWORD
    ;

until_stmt:
    | UNTIL_KEYWORD expr stmt END_KEYWORD
    | UNTIL_KEYWORD expr DO_KEYWORD stmt END_KEYWORD
    | expr UNTIL_KEYWORD expr
    ;

return_stmt: RETURN_KEYWORD expr
    | RETURN_KEYWORD

break_stmt:
    | BREAK_KEYWORD IF_KEYWORD expr
    | BREAK_KEYWORD expr IF_KEYWORD expr

next_stmt:
    | NEXT_KEYWORD IF_KEYWORD expr
    | NEXT_KEYWORD expr IF_KEYWORD expr

redo_stmt: 
    | REDO_KEYWORD IF_KEYWORD expr
    | REDO_KEYWORD expr IF_KEYWORD expr

case_stmt:
    | CASE_KEYWORD expr when_list END_KEYWORD
    | CASE_KEYWORD expr when_list ELSE_KEYWORD stmt END_KEYWORD


when_list:
    | WHEN_KEYWORD expr_list delimiter stmt
    | WHEN_KEYWORD expr_list THEN_KEYWORD stmt
    | when_list expr_list delimiter stmt
    | when_list expr_list THEN_KEYWORD stmt

alias_stmt: ALIAS_KEYWORD IDENTIFIER IDENTIFIER

module_stmt: MODULE_KEYWORD CONSTANT_NAME delimiter module_stmt END_KEYWORD

module_body_stmt: expr delimiter
    | method_stmt delimiter
    | alias_stmt delimiter
    | class_stmt delimiter
    | module_stmt delimiter

module_body_not_empty: module_body_stmt
    | module_body_not_empty module_body_stmt

module_body: /* empty */
    | module_body_not_empty

begin_rescue_stmt: BEGIN_KEYWORD delimiter stmt_list RESCUE_KEYWORD delimiter stmt_list END_KEYWORD
    | BEGIN_KEYWORD delimiter stmt_list RESCUE_KEYWORD delimiter stmt_list ENSURE_KEYWORD delimiter END_KEYWORD
%%