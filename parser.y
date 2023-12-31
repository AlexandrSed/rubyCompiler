%{
	#include <stdio.h>
	#include <malloc.h>
%}

%token ALIAS_KEYWORD
%token CASE_KEYWORD
%token CLASS_KEYWORD
%token DEF_KEYWORD
%token DEFINED_KEYWORD
%token DO_KEYWORD
%token IF_KEYWORD
%token ELSE_KEYWORD
%token ELSIF_KEYWORD
%token END_KEYWORD
%token FALSE_KEYWORD
%token FOR_KEYWORD
%token IN_KEYWORD
%token NIL_KEYWORD
%token RETURN_KEYWORD
%token SELF_KEYWORD
%token SUPER_KEYWORD
%token SUPERCLASS_KEYWORD
%token THEN_KEYWORD
%token TRUE_KEYWORD
%token UNLESS_KEYWORD
%token WHEN_KEYWORD
%token WHILE_KEYWORD

%token METHOD_MARK_QUESTION
%token METHOD_MARK_EXCLAMATION
%token METHOD_MARK_EQUAL

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
%left BIN_OR_OP BIN_XOR_OP
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

%token NEW_LINE_SYMBOL

%token COMMA_SYMBOL
%token SEMICOLON_SYMBOL

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
    | expr '=' linefeed_or_empty expr
    | expr '[' linefeed_or_empty expr linefeed_or_empty ']'
    | expr '/' linefeed_or_empty expr
    | expr '%' linefeed_or_empty expr
    | expr '*' linefeed_or_empty expr
    | expr '+' linefeed_or_empty expr
    | expr '-' linefeed_or_empty expr 
    | '-' linefeed_or_empty expr %prec UMINUS
    | expr '.' linefeed_or_empty SUPERCLASS_KEYWORD
    | IDENTIFIER '(' linefeed_or_empty expr_list linefeed_or_empty ')'
    | IDENTIFIER '(' linefeed_or_empty ')'
    | SUPER_KEYWORD
    | SUPER_KEYWORD '(' linefeed_or_empty expr_list linefeed_or_empty ')'
    | SUPER_KEYWORD '(' linefeed_or_empty ')'
    | expr '.' linefeed_or_empty IDENTIFIER
    | SELF_KEYWORD '.' linefeed_or_empty IDENTIFIER
    | SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_QUESTION
    | SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EXCLAMATION
    | SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EQUAL
    | expr '.' linefeed_or_empty METHOD_MARK_QUESTION
    | expr '.' linefeed_or_empty METHOD_MARK_EXCLAMATION
    | expr '.' linefeed_or_empty METHOD_MARK_EQUAL
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
    | '[' linefeed_or_empty ']'
    | DEFINED_KEYWORD linefeed_or_empty expr
	| DOUBLE_COLON_SYMBOL linefeed_or_empty expr // 1
	| expr DOUBLE_COLON_SYMBOL linefeed_or_empty expr // 1
    | expr QUESTION_SYMBOL linefeed_or_empty expr linefeed_or_empty COLON_SYMBOL linefeed_or_empty expr
    ;

linefeed_or_empty: /*empty*/
    | linefeed
    ;

linefeed: NEW_LINE_SYMBOL
    | linefeed NEW_LINE_SYMBOL
    ;

programm_element: class_stmt delimiter
    | method_stmt delimiter
    | stmt
    ;

programm_el_list_not_empty: programm_element
    | programm_el_list_not_empty programm_element
    ;

delimiter: NEW_LINE_SYMBOL
    | SEMICOLON_SYMBOL
    | delimiter SEMICOLON_SYMBOL
    | delimiter NEW_LINE_SYMBOL
    ;

expr_list: expr
    | expr_list COMMA_SYMBOL expr
    ;

stmt_list: stmt
    | stmt_list stmt
    ;
    
stmt: expr delimiter
    | if_stmt delimiter
    | while_stmt delimiter
    | for_stmt delimiter
    | case_stmt delimiter
    | unless_stmt delimiter
    | return_stmt delimiter
    | alias_stmt delimiter
    ;

param_list_not_empty: IDENTIFIER linefeed_or_empty
    | param_list_not_empty COMMA_SYMBOL linefeed_or_empty IDENTIFIER linefeed_or_empty
    ;

param_list: /* empty */
    | param_list_not_empty
    ;

method_stmt: DEF_KEYWORD linefeed_or_empty IDENTIFIER '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD
    | DEF_KEYWORD linefeed_or_empty METHOD_MARK_QUESTION '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD
    | DEF_KEYWORD linefeed_or_empty IDENTIFIER delimiter stmt_list END_KEYWORD
    | DEF_KEYWORD linefeed_or_empty METHOD_MARK_QUESTION delimiter stmt_list END_KEYWORD
    | DEF_KEYWORD linefeed_or_empty METHOD_MARK_EXCLAMATION '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD
    | DEF_KEYWORD linefeed_or_empty METHOD_MARK_EXCLAMATION delimiter stmt_list END_KEYWORD
    | DEF_KEYWORD linefeed_or_empty METHOD_MARK_EQUAL '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD
    | DEF_KEYWORD linefeed_or_empty METHOD_MARK_EQUAL delimiter stmt_list END_KEYWORD
    ;

class_stmt: CLASS_KEYWORD linefeed_or_empty CONSTANT_NAME delimiter class_body END_KEYWORD
    | CLASS_KEYWORD linefeed_or_empty CONSTANT_NAME '<' CONSTANT_NAME delimiter class_body END_KEYWORD
    ;

class_body_stmt: method_stmt delimiter
    | CLASS_VAR_NAME delimiter
    | CLASS_VAR_NAME '=' expr delimiter
    | OBJECT_VAR_NAME delimiter
    | OBJECT_VAR_NAME '=' expr delimiter
    ;

class_body_not_empty: class_body_stmt
    | class_body_not_empty class_body_stmt
    ;

class_body: /* empty */
    | class_body_not_empty
    ;

delimeter_or_empty: /* empty */
    | delimiter
    ;

if_stmt: IF_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD
    | IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list END_KEYWORD
    | IF_KEYWORD linefeed_or_empty expr delimiter stmt_list ELSE_KEYWORD stmt_list END_KEYWORD
    | IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list ELSE_KEYWORD stmt_list END_KEYWORD
    | IF_KEYWORD linefeed_or_empty expr delimiter stmt_list elsif_list END_KEYWORD
    | IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list elsif_list END_KEYWORD
    | IF_KEYWORD linefeed_or_empty expr delimiter stmt_list elsif_list ELSE_KEYWORD stmt_list END_KEYWORD
    | IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list elsif_list ELSE_KEYWORD stmt_list END_KEYWORD
    | expr IF_KEYWORD linefeed_or_empty expr
    ;

unless_stmt: UNLESS_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list END_KEYWORD
    | UNLESS_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD
    | UNLESS_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list ELSE_KEYWORD stmt_list END_KEYWORD
    | UNLESS_KEYWORD linefeed_or_empty expr delimiter stmt_list ELSE_KEYWORD stmt_list END_KEYWORD
    | expr UNLESS_KEYWORD linefeed_or_empty expr
    ;

elsif_list: ELSIF_KEYWORD linefeed_or_empty expr delimiter stmt_list
    | ELSIF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list
    | elsif_list ELSIF_KEYWORD linefeed_or_empty expr delimiter stmt_list
    | elsif_list ELSIF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list
    ;

while_stmt: WHILE_KEYWORD linefeed_or_empty expr DO_KEYWORD delimeter_or_empty stmt_list END_KEYWORD
    | WHILE_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD
    ;

for_stmt: FOR_KEYWORD linefeed_or_empty expr IN_KEYWORD linefeed_or_empty expr DO_KEYWORD delimeter_or_empty stmt_list END_KEYWORD
    | FOR_KEYWORD linefeed_or_empty expr IN_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD
    ;

return_stmt: RETURN_KEYWORD expr
    | RETURN_KEYWORD
    ;

case_stmt: CASE_KEYWORD linefeed_or_empty expr delimeter_or_empty when_list END_KEYWORD
    | CASE_KEYWORD linefeed_or_empty expr delimeter_or_empty when_list ELSE_KEYWORD delimeter_or_empty stmt_list END_KEYWORD
    ;

when_list: WHEN_KEYWORD linefeed_or_empty expr_list delimiter stmt_list
    | WHEN_KEYWORD linefeed_or_empty expr_list THEN_KEYWORD stmt_list
    | when_list WHEN_KEYWORD linefeed_or_empty expr_list delimiter stmt_list
    | when_list WHEN_KEYWORD linefeed_or_empty expr_list delimeter_or_empty THEN_KEYWORD stmt_list
    ;

alias_stmt: ALIAS_KEYWORD IDENTIFIER IDENTIFIER
    ;
%%