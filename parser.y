%{
	#include <stdio.h>
	#include <malloc.h>
%}

%token ALIAS_KEYWORD
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

%left OR_KEYWORD AND_KEYWORD
%left NOT_KEYWORD
%left DEFINED_KEYWORD
%right '=' ADD_ASSIGN_OP SUB_ASSIGN_OP MUL_ASSIGN_OP DIV_ASSIGN_OP MOD_ASSIGN_OP POW_ASSIGN_OP
%left QUESTION_SYMBOL COLON_SYMBOL
%left EXCLUSIVE_RANGE_OP INCLUSIVE_RANGE_OP
%left LOGICAL_OR_OP
%left LOGICAL_AND_OP
%left EQL_OP NOT_EQL_OP COMB_COMPRASION_OP CASE_EQL_OP
%left GREATER_OP LESS_OP GREATER_OR_EQL_OP LESS_OR_EQL_OP
%left BIN_OR_OP
%left BIN_AND_OP
%left BIN_LEFT_SHIFT_OP BIN_RIGHT_SHIFT_OP
%left '+' '-'
%left '*' '/' '%'
%right UMINUS LOGICAL_NOT_OP BIN_ONES_COMPLEMENT_OP
%left ARITHMETIC_POW_OP
%nonassoc '(' ')'
%nonassoc '{' '}'
%left '.' '[' ']'
%left DOUBLE_COLON_SYMBOL

%token RECEIVER_EQL_OP
%token OBJ_ID_EQL_OP

%token BIN_XOR_OP

%token COMMA_SYMBOL
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

programm: /*empty*/
    |programm_el_list_not_empty
    ;

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
    | expr '=' expr
    | expr '[' expr ']'
    | expr '/' expr
    | expr '%' expr
    | expr '*' expr
    | expr '+' expr
    | expr '-' expr
    | '-'  expr %prec UMINUS
    | IDENTIFIER '(' expr_list ')'
    | expr '.' IDENTIFIER
    | expr AND_KEYWORD expr
    | expr OR_KEYWORD expr
    | NOT_KEYWORD '(' expr ')'
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
    | '[' expr_list ']'
    | DEFINED_KEYWORD expr
	| DOUBLE_COLON_SYMBOL expr
	| expr DOUBLE_COLON_SYMBOL expr
    | expr QUESTION_SYMBOL expr COLON_SYMBOL  expr
    | expr IF_KEYWORD expr
    | expr UNLESS_KEYWORD expr
    | expr linefeed '=' linefeed expr
    | expr '[' linefeed expr linefeed ']'
    | expr '/' linefeed expr
    | expr '%' linefeed expr
    | expr '*' linefeed expr
    | expr '+' linefeed expr
    | expr '-' linefeed expr
    | '-'  linefeed expr %prec UMINUS
    | IDENTIFIER '(' linefeed expr_list linefeed ')'
    | expr linefeed '.' linefeed IDENTIFIER
    | expr AND_KEYWORD linefeed expr
    | expr OR_KEYWORD linefeed expr
    | NOT_KEYWORD '(' linefeed expr linefeed ')'
    | expr ARITHMETIC_POW_OP linefeed expr
    | expr EQL_OP linefeed expr
    | expr NOT_EQL_OP linefeed expr
    | expr GREATER_OP linefeed expr
    | expr LESS_OP linefeed expr
    | expr GREATER_OR_EQL_OP linefeed expr
    | expr LESS_OR_EQL_OP linefeed expr
    | expr COMB_COMPRASION_OP linefeed expr
    | expr CASE_EQL_OP linefeed expr
	| expr ADD_ASSIGN_OP linefeed expr
	| expr SUB_ASSIGN_OP linefeed expr
	| expr MUL_ASSIGN_OP linefeed expr
	| expr DIV_ASSIGN_OP linefeed expr
	| expr MOD_ASSIGN_OP linefeed expr
	| expr POW_ASSIGN_OP linefeed expr
    | expr BIN_AND_OP linefeed expr
	| expr BIN_OR_OP linefeed expr 
	| expr BIN_XOR_OP linefeed expr
	| expr BIN_ONES_COMPLEMENT_OP linefeed expr
	| expr BIN_LEFT_SHIFT_OP linefeed expr
	| expr BIN_RIGHT_SHIFT_OP linefeed expr
	| expr LOGICAL_AND_OP linefeed expr
	| expr LOGICAL_OR_OP linefeed expr
	| LOGICAL_NOT_OP linefeed expr
    | expr INCLUSIVE_RANGE_OP linefeed expr
	| expr EXCLUSIVE_RANGE_OP linefeed expr
    | '(' linefeed expr linefeed ')'
    | '[' linefeed expr_list linefeed ']'
    | DEFINED_KEYWORD linefeed expr
	| DOUBLE_COLON_SYMBOL linefeed expr
	| expr DOUBLE_COLON_SYMBOL linefeed expr
    | expr QUESTION_SYMBOL linefeed expr linefeed COLON_SYMBOL linefeed  expr
    | expr IF_KEYWORD linefeed expr
    | expr UNLESS_KEYWORD linefeed expr
    ;

linefeed: NEW_LINE_SYMBOL
    | linefeed NEW_LINE_SYMBOL
    ;

programm_element: class_stmt
    | method_stmt
    | module_stmt
    ;

programm_el_list_not_empty: programm_element
    | programm_el_list_not_empty programm_element
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

stmt_list: stmt
    | stmt_list stmt
    ;
    
stmt: expr delimiter
    | if_stmt delimiter
    | while_stmt delimiter
    | for_stmt delimiter
    | until_stmt delimiter
    | case_stmt delimiter
    | unless_stmt delimiter
    | return_stmt delimiter
    | alias_stmt delimiter
    | begin_rescue_stmt delimiter
    ;

param_list_not_empty: IDENTIFIER
    | param_list_not_empty COMMA_SYMBOL IDENTIFIER
    ;

param_list: /* empty */
    | param_list_not_empty 
    ;

method_stmt: DEF_KEYWORD IDENTIFIER '(' param_list ')' delimiter stmt_list END_KEYWORD
    | DEF_KEYWORD IDENTIFIER delimiter stmt_list END_KEYWORD
    ;

class_stmt: CLASS_KEYWORD CONSTANT_NAME delimiter class_body END_KEYWORD
    ;

class_body_stmt: method_stmt delimiter
    | CLASS_VAR_NAME delimiter
    | CLASS_VAR_NAME '=' expr delimiter
    | OBJECT_VAR_NAME delimiter
    | OBJECT_VAR_NAME '=' expr delimiter
    | class_stmt delimiter

class_body_not_empty: class_body_stmt
    | class_body_not_empty class_body_stmt
    ;

class_body: /* empty */
    | class_body_not_empty
    ;

if_stmt: IF_KEYWORD expr delimiter stmt END_KEYWORD
    | IF_KEYWORD expr THEN_KEYWORD stmt END_KEYWORD
    | IF_KEYWORD expr delimiter stmt ELSE_KEYWORD stmt END_KEYWORD
    | IF_KEYWORD expr THEN_KEYWORD stmt ELSE_KEYWORD stmt END_KEYWORD
    | IF_KEYWORD expr delimiter stmt elsif_list stmt END_KEYWORD
    | IF_KEYWORD expr THEN_KEYWORD stmt elsif_list stmt END_KEYWORD
    | IF_KEYWORD expr delimiter stmt elsif_list ELSE_KEYWORD stmt END_KEYWORD
    | IF_KEYWORD expr THEN_KEYWORD stmt elsif_list ELSE_KEYWORD stmt END_KEYWORD
    ;

unless_stmt: UNLESS_KEYWORD expr THEN_KEYWORD stmt END_KEYWORD
    | UNLESS_KEYWORD expr stmt END_KEYWORD
    | UNLESS_KEYWORD expr THEN_KEYWORD stmt ELSE_KEYWORD stmt END_KEYWORD
    | UNLESS_KEYWORD expr stmt ELSE_KEYWORD stmt END_KEYWORD

elsif_list: ELSIF_KEYWORD expr delimiter stmt
    | ELSIF_KEYWORD expr THEN_KEYWORD stmt
    | elsif_list ELSIF_KEYWORD expr delimiter stmt
    | elsif_list ELSIF_KEYWORD expr THEN_KEYWORD stmt
    ;

while_stmt: WHILE_KEYWORD expr DO_KEYWORD stmt END_KEYWORD
    | WHILE_KEYWORD expr stmt END_KEYWORD
    | WHILE_KEYWORD expr stmt redo_stmt END_KEYWORD
    ;

for_stmt: FOR_KEYWORD expr IN_KEYWORD expr DO_KEYWORD stmt END_KEYWORD
    | FOR_KEYWORD expr IN_KEYWORD expr stmt END_KEYWORD
    ;

until_stmt: UNTIL_KEYWORD expr stmt END_KEYWORD
    | UNTIL_KEYWORD expr DO_KEYWORD stmt END_KEYWORD
    | expr UNTIL_KEYWORD expr
    ;

return_stmt: RETURN_KEYWORD expr
    | RETURN_KEYWORD
    ;

break_stmt: BREAK_KEYWORD IF_KEYWORD expr
    | BREAK_KEYWORD expr IF_KEYWORD expr
    ;

next_stmt: NEXT_KEYWORD IF_KEYWORD expr
    | NEXT_KEYWORD expr IF_KEYWORD expr
    ;

redo_stmt:  REDO_KEYWORD IF_KEYWORD expr
    | REDO_KEYWORD expr IF_KEYWORD expr
    ;

case_stmt: CASE_KEYWORD expr when_list END_KEYWORD
    | CASE_KEYWORD expr when_list ELSE_KEYWORD stmt END_KEYWORD
    ;

when_list: WHEN_KEYWORD expr_list delimiter stmt
    | WHEN_KEYWORD expr_list THEN_KEYWORD stmt
    | when_list expr_list delimiter stmt
    | when_list expr_list THEN_KEYWORD stmt
    ;

alias_stmt: ALIAS_KEYWORD IDENTIFIER IDENTIFIER
    ;

module_stmt: MODULE_KEYWORD CONSTANT_NAME delimiter module_body END_KEYWORD
    ;

module_body_stmt: expr delimiter
    | method_stmt delimiter
    | alias_stmt delimiter
    | class_stmt delimiter
    | module_stmt delimiter
    ;

module_body_not_empty: module_body_stmt
    | module_body_not_empty module_body_stmt
    ;

module_body: /* empty */
    | module_body_not_empty
    ;

begin_rescue_stmt: BEGIN_KEYWORD delimiter stmt_list RESCUE_KEYWORD delimiter stmt_list END_KEYWORD
    | BEGIN_KEYWORD delimiter stmt_list RESCUE_KEYWORD delimiter stmt_list ENSURE_KEYWORD delimiter END_KEYWORD
    ;
%%