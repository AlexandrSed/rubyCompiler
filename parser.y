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
    | expr '=' expr
    | expr '[' expr ']'
    | expr '/' expr
    | expr '%' expr
    | expr '*' expr
    | expr '+' expr
    | expr '-' expr
    | '-' expr %prec UMINUS
    | IDENTIFIER '(' expr_list ')'
    | expr '.' IDENTIFIER
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
    | '[' expr_list ']'
    | DEFINED_KEYWORD expr
	| DOUBLE_COLON_SYMBOL expr
	| expr DOUBLE_COLON_SYMBOL expr
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

    
stmt: expr NEW_LINE_SYMBOL
    | expr SEMICOLON_SYMBOL
    | if_stmt NEW_LINE_SYMBOL
    | while_stmt NEW_LINE_SYMBOL
    | for_stmt NEW_LINE_SYMBOL
    | until_stmt NEW_LINE_SYMBOL
    | case_stmt NEW_LINE_SYMBOL
    | unless_stmt NEW_LINE_SYMBOL
    | ternary_op_stmt NEW_LINE_SYMBOL
    | stmt_list NEW_LINE_SYMBOL
    | return_stmt NEW_LINE_SYMBOL
    | if_stmt SEMICOLON_SYMBOL
    | while_stmt SEMICOLON_SYMBOL
    | for_stmt SEMICOLON_SYMBOL
    | until_stmt SEMICOLON_SYMBOL
    | case_stmt SEMICOLON_SYMBOL
    | unless_stmt SEMICOLON_SYMBOL
    | ternary_op_stmt SEMICOLON_SYMBOL
    | stmt_list SEMICOLON_SYMBOL
    | return_stmt SEMICOLON_SYMBOL
    | alias_stmt SEMICOLON_SYMBOL
    | alias_stmt NEW_LINE_SYMBOL
    | begin_rescue_stmt SEMICOLON_SYMBOL
    | begin_rescue_stmt NEW_LINE_SYMBOL

param_list_not_empty:
    | IDENTIFIER
    | param_list COMMA_SYMBOL IDENTIFIER
    ;

param_list: /* empty */
    | param_list_not_empty
    ;

method_stmt:
    | DEF_KEYWORD IDENTIFIER '(' param_list ')' NEW_LINE_SYMBOL stmt_list END_KEYWORD
    | DEF_KEYWORD IDENTIFIER '(' param_list ')' SEMICOLON_SYMBOL stmt_list END_KEYWORD
    | DEF_KEYWORD IDENTIFIER NEW_LINE_SYMBOL stmt_list END_KEYWORD
    | DEF_KEYWORD IDENTIFIER SEMICOLON_SYMBOL stmt_list END_KEYWORD

method_list_not_empty:
    | method_stmt
    | method_list NEW_LINE_SYMBOL method_stmt
    | method_list SEMICOLON_SYMBOL method_stmt
    ;

method_list: /* empty */
    | method_stmt
    ;

class_var_name:
    | CLASS_VAR_NAME NEW_LINE_SYMBOL
    | CLASS_VAR_NAME SEMICOLON_SYMBOL
    | CLASS_VAR_NAME '=' expr NEW_LINE_SYMBOL
    | CLASS_VAR_NAME '=' expr SEMICOLON_SYMBOL

class_stmt:
    | CLASS_KEYWORD CONSTANT_NAME NEW_LINE_SYMBOL method_list END_KEYWORD
    | CLASS_KEYWORD CONSTANT_NAME SEMICOLON_SYMBOL method_list END_KEYWORD
    | CLASS_KEYWORD CONSTANT_NAME NEW_LINE_SYMBOL class_var_name method_list END_KEYWORD
    | CLASS_KEYWORD CONSTANT_NAME SEMICOLON_SYMBOL class_var_name method_list END_KEYWORD

if_stmt:
    | IF_KEYWORD expr stmt END_KEYWORD
    | IF_KEYWORD expr THEN_KEYWORD stmt END_KEYWORD
    | IF_KEYWORD expr stmt ELSE_KEYWORD stmt END_KEYWORD
    | IF_KEYWORD expr THEN_KEYWORD stmt ELSE_KEYWORD stmt END_KEYWORD
    | IF_KEYWORD expr stmt elsif_list stmt END_KEYWORD
    | IF_KEYWORD expr THEN_KEYWORD stmt elsif_list stmt END_KEYWORD
    | IF_KEYWORD expr stmt elsif_list NEW_LINE_SYMBOL ELSE_KEYWORD stmt END_KEYWORD
    | IF_KEYWORD expr THEN_KEYWORD stmt elsif_list NEW_LINE_SYMBOL ELSE_KEYWORD stmt END_KEYWORD
    | expr IF_KEYWORD expr
    ;

unless_stmt:
    | UNLESS_KEYWORD expr THEN_KEYWORD stmt END_KEYWORD
    | UNLESS_KEYWORD expr stmt END_KEYWORD
    | UNLESS_KEYWORD expr THEN_KEYWORD stmt ELSE_KEYWORD stmt END_KEYWORD
    | UNLESS_KEYWORD expr stmt ELSE_KEYWORD stmt END_KEYWORD
    | expr UNLESS_KEYWORD expr

elsif_list:
    | ELSIF_KEYWORD expr stmt
    | ELSE_KEYWORD expr THEN_KEYWORD stmt
    | elsif_list ELSIF_KEYWORD expr stmt
    | elsif_list ELSE_KEYWORD expr THEN_KEYWORD stmt
    ;

ternary_op_stmt:
    | expr QUESTION_SYMBOL '(' expr ')' COLON_SYMBOL '(' expr ')'

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
    | WHEN_KEYWORD expr_list NEW_LINE_SYMBOL stmt
    | WHEN_KEYWORD expr_list THEN_KEYWORD stmt
    | WHEN_KEYWORD expr_list SEMICOLON_SYMBOL stmt
    | when_list expr_list NEW_LINE_SYMBOL stmt
    | when_list expr_list THEN_KEYWORD stmt
    | when_list expr_list SEMICOLON_SYMBOL stmt

alias_stmt: ALIAS_KEYWORD IDENTIFIER IDENTIFIER

begin_rescue_stmt: BEGIN_KEYWORD NEW_LINE_SYMBOL stmt_list RESCUE_KEYWORD NEW_LINE_SYMBOL stmt_list END_KEYWORD
    | BEGIN_KEYWORD SEMICOLON_SYMBOL stmt_list RESCUE_KEYWORD SEMICOLON_SYMBOL stmt_list END_KEYWORD
    | BEGIN_KEYWORD NEW_LINE_SYMBOL stmt_list RESCUE_KEYWORD NEW_LINE_SYMBOL stmt_list ENSURE_KEYWORD NEW_LINE_SYMBOL END_KEYWORD
%%