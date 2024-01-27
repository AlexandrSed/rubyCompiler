%{
    #include <string>
    #include <vector>
	#include <stdio.h>
	#include <malloc.h>
    #include "parser_classes/ElsifNode/ElsifNode.h"
    #include "parser_classes/ExprNode/ExprNode.h"
    #include "parser_classes/IfStmt/IfStmtNode.h"
    #include "parser_classes/UnlessStmt/UnlessStmtNode.h"
    #include "parser_classes/WhileStmt/WhileStmtNode.h"
    #include "parser_classes/ForStmt/ForStmtNode.h"
    #include "parser_classes/WhenStmt/WhenStmtNode.h"
    #include "parser_classes/CaseStmt/CaseStmtNode.h"
    #include "parser_classes/AliasStmt/AliasStmtNode.h"
    #include "parser_classes/ReturnStmt/ReturnStmtNode.h"
    #include "parser_classes/MethodStmtNode/MethodStmtNode.h"
    #include "parser_classes/StmtNode/StmtNode.h"
    #include "parser_classes/ClassBodyStmt/ClassBodyStmtNode.h"
    #include "parser_classes/ClassStmt/ClassStmtNode.h"
%}

%union {
    int Int;
    float Float;
    string Str;
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
    std::vector<std::string>* param_list_union;
    ClassBodyStmtNode* class_body_stmt_union;
    std::vector<ClassBodyStmtNode*>* class_body_union;
    ClassStmtNode* class_stmt_union;
}

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

%token <Str> METHOD_MARK_QUESTION
%token <Str> METHOD_MARK_EXCLAMATION
%token <Str> METHOD_MARK_EQUAL

%left OR_KEYWORD AND_KEYWORD
%left NOT_KEYWORD
%left DEFINED_KEYWORD
%right '=' ADD_ASSIGN_OP SUB_ASSIGN_OP MUL_ASSIGN_OP DIV_ASSIGN_OP MOD_ASSIGN_OP POW_ASSIGN_OP
%left QUESTION_SYMBOL COLON_SYMBOL
%left EXCLUSIVE_RANGE_OP INCLUSIVE_RANGE_OP
%left LOGICAL_OR_OP
%left LOGICAL_AND_OP
%left EQL_OP NOT_EQL_OP COMB_COMPARISON_OP CASE_EQL_OP
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

%token <Str> STRING
%token <Int> INTEGER_NUMBER
%token <Float> FLOAT_NUMBER

%token <Str> IDENTIFIER
%token <Str> OBJECT_VAR_NAME // Поле класса, видно только в рамках одного объекта класса
%token <Str> CLASS_VAR_NAME // Для всех объектов класса
%token <Str> CONSTANT_NAME

%type<expr_union> expr
%type<if_union> if_stmt
%type<unless_union> unless_stmt
%type<elsif_union> elsif_stmt
%type<elsif_list_union> elsif_list
%type<expr_list_union> expr_list
%type<while_union> while_stmt
%type<for_union> for_stmt
%type<when_union> when_stmt
%type<when_list_union> when_list
%type<case_union> case_stmt
%type<alias_union> alias_stmt
%type<return_union> return_stmt
%type<stmt_union> stmt
%type<stmt_list_union> stmt_list
%type<method_union> method_stmt
%type<param_list_union> param_list_not_empty param_list
%type<class_body_stmt_union> class_body_stmt
%type<class_body_union> class_body_not_empty class_body
%type<class_stmt_union> class_stmt

%%

programm: /*empty*/
    |programm_el_list_not_empty
    ;

expr: IDENTIFIER    {$$=ExprNode::createExprFromVarName(ExprType.id, $1);}
    | OBJECT_VAR_NAME   {$$=ExprNode::createExprFromVarName(ExprType.objectVarName, $1);}
    | CLASS_VAR_NAME    {$$=ExprNode::createExprFromVarName(ExprType.classVarName, $1);}
    | CONSTANT_NAME {$$=ExprNode::createExprFromVarName(ExprType.constantName, $1);}
    | STRING    {$$=ExprNode::createExprFromString($1);}
    | TRUE_KEYWORD  {$$=ExprNode::createExprFromTrue();}
    | FALSE_KEYWORD {$$=ExprNode::createExprFromFalse();}
    | NIL_KEYWORD   {$$=ExprNode::createExprFromNil();}
    | INTEGER_NUMBER    {$$=ExprNode::createExprFromInt($1);}
    | FLOAT_NUMBER  {$$=ExprNode::createExprFromFloat($1);}
    | expr '=' linefeed_or_empty expr   {$$=ExprNode::createExprFromBinOp(ExprType.assign, $1, $4);}
    | expr '[' linefeed_or_empty expr linefeed_or_empty ']' {$$=ExprNode::createExprFromBinOp(ExprType.arrayElement, $1, $4);}
    | expr '/' linefeed_or_empty expr   {$$=ExprNode::createExprFromBinOp(ExprType.division, $1, $4);}
    | expr '%' linefeed_or_empty expr   {$$=ExprNode::createExprFromBinOp(ExprType.remainderOfDivision, $1, $4);}
    | expr '*' linefeed_or_empty expr   {$$=ExprNode::createExprFromBinOp(ExprType.multiplication, $1, $4);}
    | expr '+' linefeed_or_empty expr   {$$=ExprNode::createExprFromBinOp(ExprType.sum, $1, $4);}
    | expr '-' linefeed_or_empty expr   {$$=ExprNode::createExprFromBinOp(ExprType.subtraction, $1, $4);}
    | '-' linefeed_or_empty expr %prec UMINUS {$$=ExprNode::createExprFromUnary(ExprType.unaryMinus, $3);}
    | expr '.' linefeed_or_empty SUPERCLASS_KEYWORD {$$=ExprNode::createExprFromUnary(ExprType.superclass, $1);}
    | IDENTIFIER '(' linefeed_or_empty expr_list linefeed_or_empty ')'  {$$=ExprNode::createExprFromFuncCall(ExprType.function, $4, $1);}
    | IDENTIFIER '(' linefeed_or_empty ')'  {$$=ExprNode::createExprFromFuncCall(ExprType.funcWithoutParams, std::vector<ExprNode*>* empty, $1);}
    | SUPER_KEYWORD {$$=ExprNode::createExprFromSuper(ExprType.superWithoutParamsAndBrackets, std::vector<ExprNode*>* empty);}
    | SUPER_KEYWORD '(' linefeed_or_empty expr_list linefeed_or_empty ')'   {$$=ExprNode::createExprFromSuper(ExprType.super, $4);}
    | SUPER_KEYWORD '(' linefeed_or_empty ')'   {$$=ExprNode::createExprFromSuper(ExprType.superWithoutParams, std::vector<ExprNode*>* empty);}
    | expr '.' linefeed_or_empty IDENTIFIER {$$=createExprFromMethod(ExprType.callOfMethodWithoutParams, std::vector<ExprNode*>* empty, $4, $1)}
    | expr '.' linefeed_or_empty IDENTIFIER '(' linefeed_or_empty expr_list linefeed_or_empty ')'   {$$=createExprFromMethod(ExprType.callOfMethod, $7, $4, $1)}
    | SELF_KEYWORD '.' linefeed_or_empty IDENTIFIER {$$=ExprNode::createExprFromSelf(ExprType.selfWithoutParams, std::vector<ExprNode*>* empty, $4)}
    | SELF_KEYWORD '.' linefeed_or_empty IDENTIFIER '(' linefeed_or_empty expr_list linefeed_or_empty ')'   {$$=ExprNode::createExprFromSelf(ExprType.self, $7, $4)}
    | SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_QUESTION   {$$=ExprNode::createExprFromSelf(ExprType.selfMarkQuestionWithoutParams, std::vector<ExprNode*>* empty, $4)}
    | SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_QUESTION '(' linefeed_or_empty expr_list linefeed_or_empty ')' {$$=ExprNode::createExprFromSelf(ExprType.selfMarkQuestion, $7, $4)}
    | SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EXCLAMATION    {$$=ExprNode::createExprFromSelf(ExprType.selfMarkExclamationWithoutParams, std::vector<ExprNode*>* empty, $4)}
    | SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EXCLAMATION '(' linefeed_or_empty expr_list linefeed_or_empty ')'  {$$=ExprNode::createExprFromSelf(ExprType.selfMarkExclamation, $7, $4)}
    | SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EQUAL  {$$=ExprNode::createExprFromSelf(ExprType.selfEqualWithoutParams, std::vector<ExprNode*>* empty, $4)}
    | SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EQUAL '(' linefeed_or_empty expr_list linefeed_or_empty ')'    {$$=ExprNode::createExprFromSelf(ExprType.selfEqual, $7, $4)}
    | expr '.' linefeed_or_empty METHOD_MARK_QUESTION   {$$=createExprFromMethod(ExprType.callOfMethodMarkQuestionWithoutParams, std::vector<ExprNode*>* empty, $4, $1)}
    | expr '.' linefeed_or_empty METHOD_MARK_QUESTION '(' linefeed_or_empty expr_list linefeed_or_empty ')' {$$=createExprFromMethod(ExprType.callOfMethodMarkQuestion, $7, $4, $1)}
    | expr '.' linefeed_or_empty METHOD_MARK_EXCLAMATION    {$$=createExprFromMethod(ExprType.callOfMethodMarkExclamationWithoutParams, std::vector<ExprNode*>* empty, $4, $1)}
    | expr '.' linefeed_or_empty METHOD_MARK_EXCLAMATION '(' linefeed_or_empty expr_list linefeed_or_empty ')'  {$$=createExprFromMethod(ExprType.callOfMethodMarkExclamation, $7, $4, $1)}
    | expr '.' linefeed_or_empty METHOD_MARK_EQUAL  {$$=createExprFromMethod(ExprType.callOfMethodEqualWithoutParams, std::vector<ExprNode*>* empty, $4, $1)}
    | expr '.' linefeed_or_empty METHOD_MARK_EQUAL '(' linefeed_or_empty expr_list linefeed_or_empty ')'    {$$=createExprFromMethod(ExprType.callOfMethodEqual, $7, $4, $1)}
    | expr AND_KEYWORD linefeed_or_empty expr   {$$=ExprNode::createExprFromBinOp(ExprType.and, $1, $4);}
    | expr OR_KEYWORD linefeed_or_empty expr    {$$=ExprNode::createExprFromBinOp(ExprType.or, $1, $4);}
    | NOT_KEYWORD '(' linefeed_or_empty expr linefeed_or_empty ')'  {$$=ExprNode::createExprFromUnary(ExprType.not, $4);}
    | expr ARITHMETIC_POW_OP linefeed_or_empty expr {$$=ExprNode::createExprFromBinOp(ExprType.pow, $1, $4);}
    | expr EQL_OP linefeed_or_empty expr    {$$=ExprNode::createExprFromBinOp(ExprType.equal, $1, $4);}
    | expr NOT_EQL_OP linefeed_or_empty expr    {$$=ExprNode::createExprFromBinOp(ExprType.notEqual, $1, $4);}
    | expr GREATER_OP linefeed_or_empty expr    {$$=ExprNode::createExprFromBinOp(ExprType.greater, $1, $4);}
    | expr LESS_OP linefeed_or_empty expr   {$$=ExprNode::createExprFromBinOp(ExprType.less, $1, $4);}
    | expr GREATER_OR_EQL_OP linefeed_or_empty expr {$$=ExprNode::createExprFromBinOp(ExprType.greaterOrEqual, $1, $4);}
    | expr LESS_OR_EQL_OP linefeed_or_empty expr    {$$=ExprNode::createExprFromBinOp(ExprType.lessOrEqual, $1, $4);}
    | expr COMB_COMPARISON_OP linefeed_or_empty expr    {$$=ExprNode::createExprFromBinOp(ExprType.combComparison, $1, $4);}
    | expr CASE_EQL_OP linefeed_or_empty expr   {$$=ExprNode::createExprFromBinOp(ExprType.caseEqual, $1, $4);}
	| expr ADD_ASSIGN_OP linefeed_or_empty expr {$$=ExprNode::createExprFromBinOp(ExprType.addAssign, $1, $4);}
	| expr SUB_ASSIGN_OP linefeed_or_empty expr {$$=ExprNode::createExprFromBinOp(ExprType.subAssign, $1, $4);}
	| expr MUL_ASSIGN_OP linefeed_or_empty expr {$$=ExprNode::createExprFromBinOp(ExprType.mulAssign, $1, $4);}
	| expr DIV_ASSIGN_OP linefeed_or_empty expr {$$=ExprNode::createExprFromBinOp(ExprType.divAssign, $1, $4);}
	| expr MOD_ASSIGN_OP linefeed_or_empty expr {$$=ExprNode::createExprFromBinOp(ExprType.modAssign, $1, $4);}
	| expr POW_ASSIGN_OP linefeed_or_empty expr {$$=ExprNode::createExprFromBinOp(ExprType.powAssign, $1, $4);}
    | expr BIN_AND_OP linefeed_or_empty expr    {$$=ExprNode::createExprFromBinOp(ExprType.binAnd, $1, $4);}
	| expr BIN_OR_OP linefeed_or_empty expr     {$$=ExprNode::createExprFromBinOp(ExprType.binOr, $1, $4);}
	| expr BIN_XOR_OP linefeed_or_empty expr    {$$=ExprNode::createExprFromBinOp(ExprType.binXor, $1, $4);}
	| expr BIN_ONES_COMPLEMENT_OP linefeed_or_empty expr {$$=ExprNode::createExprFromBinOp(ExprType.binOnesComplement, $1, $4);}
	| expr BIN_LEFT_SHIFT_OP linefeed_or_empty expr {$$=ExprNode::createExprFromBinOp(ExprType.binLeftShift, $1, $4);}
	| expr BIN_RIGHT_SHIFT_OP linefeed_or_empty expr    {$$=ExprNode::createExprFromBinOp(ExprType.binRightShift, $1, $4);}
	| expr LOGICAL_AND_OP linefeed_or_empty expr    {$$=ExprNode::createExprFromBinOp(ExprType.logicalAnd, $1, $4);}
	| expr LOGICAL_OR_OP linefeed_or_empty expr {$$=ExprNode::createExprFromBinOp(ExprType.logicalOr, $1, $4);}
	| LOGICAL_NOT_OP linefeed_or_empty expr {$$=ExprNode::createExprFromUnary(ExprType.logicalNot, $3);}
    | expr INCLUSIVE_RANGE_OP linefeed_or_empty expr    {$$=ExprNode::createExprFromBinOp(ExprType.inclusiveRange, $1, $4);}
	| expr EXCLUSIVE_RANGE_OP linefeed_or_empty expr    {$$=ExprNode::createExprFromBinOp(ExprType.ExclusiveRange, $1, $4);}
    | '(' linefeed_or_empty expr linefeed_or_empty ')'  {$$=ExprNode::createExprFromUnary(ExprType.brackets, $3);}
    | '[' linefeed_or_empty expr_list linefeed_or_empty ']' {$$=ExprNode::createExprFromArray(ExprType.array, $3);}
    | '[' linefeed_or_empty ']' {$$=ExprNode::createExprFromArray(ExprType.emptyArray, std::vector<ExprNode*>* empty);}
    | DEFINED_KEYWORD linefeed_or_empty expr    {$$=ExprNode::createExprFromUnary(ExprType.defined, $3);}
	| DOUBLE_COLON_SYMBOL linefeed_or_empty expr    {$$=ExprNode::createExprFromUnary(ExprType.doubleColon, $3);}
	| expr DOUBLE_COLON_SYMBOL linefeed_or_empty expr {$$=ExprNode::createExprFromBinOp(ExprType.doubleColonWithLeftOperand, $1, $4);}
    | expr QUESTION_SYMBOL linefeed_or_empty expr linefeed_or_empty COLON_SYMBOL linefeed_or_empty expr {$$=ExprNode::createExprFromTernary($1, $4, $8);}
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

expr_list: expr {$$=createExprList($1);}
    | expr_list COMMA_SYMBOL expr {$$=addExprToList($1, $3);}
    ;

stmt_list: stmt {$$=createStmtList($1);}
    | stmt_list stmt {$$=addStmtToList($1, $2);}
    ;
    
stmt: expr delimiter {$$=createStmtNodeExpr($1);}
    | if_stmt delimiter  {$$=createStmtNodeIf($1);}
    | while_stmt delimiter {$$=createStmtNodeWhile($1);}
    | for_stmt delimiter {$$=createStmtNodeFor($1);}
    | case_stmt delimiter {$$=createStmtNodeCase($1);}
    | unless_stmt delimiter {$$=createStmtNodeUnless($1);}
    | return_stmt delimiter {$$=createStmtNodeReturn($1);}
    | alias_stmt delimiter {$$=createStmtNodeAlias($1);}
    ;

param_list_not_empty: IDENTIFIER linefeed_or_empty  {$$=createParamList($1);}
    | param_list_not_empty COMMA_SYMBOL linefeed_or_empty IDENTIFIER linefeed_or_empty  {$$=addParametrToList($1, $4);}
    ;

param_list: /* empty */ {$$=null;}
    | param_list_not_empty  {$$=$1;}
    ;

method_stmt: DEF_KEYWORD linefeed_or_empty IDENTIFIER '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD  {$$=MethodStmtNode::createMethodStmt(MethodType.simple, $3, $6, $9);}
    | DEF_KEYWORD linefeed_or_empty METHOD_MARK_QUESTION '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD   {$$=MethodStmtNode::createMethodStmt(MethodType.markQuestion, $3, $6, $9);}
    | DEF_KEYWORD linefeed_or_empty IDENTIFIER delimiter stmt_list END_KEYWORD  {$$=MethodStmtNode::createMethodStmtWithoutParams(MethodType.simple, $3, $5);}
    | DEF_KEYWORD linefeed_or_empty METHOD_MARK_QUESTION delimiter stmt_list END_KEYWORD    {$$=MethodStmtNode::createMethodStmtWithoutParams(MethodType.markQuestion, $3, $5);}
    | DEF_KEYWORD linefeed_or_empty METHOD_MARK_EXCLAMATION '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD    {$$=MethodStmtNode::createMethodStmt(MethodType.markExclamation, $3, $6, $9);}
    | DEF_KEYWORD linefeed_or_empty METHOD_MARK_EXCLAMATION delimiter stmt_list END_KEYWORD {$$=MethodStmtNode::createMethodStmtWithoutParams(MethodType.markExclamation, $3, $5);}
    | DEF_KEYWORD linefeed_or_empty METHOD_MARK_EQUAL '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD  {$$=MethodStmtNode::createMethodStmt(MethodType.markEqual, $3, $6, $9);}
    | DEF_KEYWORD linefeed_or_empty METHOD_MARK_EQUAL delimiter stmt_list END_KEYWORD   {$$=MethodStmtNode::createMethodStmtWithoutParams(MethodType.markEqual, $3, $5);}
    ;

class_stmt: CLASS_KEYWORD linefeed_or_empty CONSTANT_NAME delimiter class_body END_KEYWORD  {$$=ClassStmtNode::createClassStmt($3, $5);}
    | CLASS_KEYWORD linefeed_or_empty CONSTANT_NAME '<' CONSTANT_NAME delimiter class_body END_KEYWORD {$$=ClassStmtNode::createClassStmtWithParent($3, $5, $7);}
    ;

class_body_stmt: method_stmt delimiter  {$$=ClassBodyStmtNode::createClassBodyStmtMethod($1);}
    | CLASS_VAR_NAME delimiter  {$$=ClassBodyStmtNode::createClassBodyStmtClassVarName($1, null);}
    | CLASS_VAR_NAME '=' expr delimiter {$$=ClassBodyStmtNode::createClassBodyStmtClassVarName($1, $3);}
    | OBJECT_VAR_NAME delimiter {$$=ClassBodyStmtNode::createClassBodyStmtobjectVarName($1, null);}
    | OBJECT_VAR_NAME '=' expr delimiter    {$$=ClassBodyStmtNode::createClassBodyStmtobjectVarName($1, $3);}
    ;

class_body_not_empty: class_body_stmt   {$$=createClassBody($1);}
    | class_body_not_empty class_body_stmt  {$$=addStmtToClassBody($1, $2);}
    ;

class_body: /* empty */ {$$=null;}
    | class_body_not_empty  {$$=$1;}
    ;

delimeter_or_empty: /* empty */
    | delimiter
    ;

if_stmt: IF_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD  {$$=IfStmtNode::createIfStmt($3, $5);}
    | IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list END_KEYWORD   {$$=IfStmtNode::createIfStmt($3, $6);}
    | IF_KEYWORD linefeed_or_empty expr delimiter stmt_list ELSE_KEYWORD stmt_list END_KEYWORD  {$$=IfStmtNode::createIfStmtWithElse($3, $5, $7);}
    | IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list ELSE_KEYWORD stmt_list END_KEYWORD    {$$=IfStmtNode::createIfStmtWithElse($3, $6, $8);}
    | IF_KEYWORD linefeed_or_empty expr delimiter stmt_list elsif_list END_KEYWORD  {$$=IfStmtNode::createIfStmtWithElsif($3, $5, $6);}
    | IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list elsif_list END_KEYWORD    {$$=IfStmtNode::createIfStmtWithElsif($3, $6, $7);}
    | IF_KEYWORD linefeed_or_empty expr delimiter stmt_list elsif_list ELSE_KEYWORD stmt_list END_KEYWORD   {$$=IfStmtNode::createIfStmtWithElseAndElsif($3, $5, $6, $8);}
    | IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list elsif_list ELSE_KEYWORD stmt_list END_KEYWORD {$$=IfStmtNode::createIfStmtWithElseAndElsif($3, $6, $7, $9);}
    | expr IF_KEYWORD linefeed_or_empty expr    {$$=IfStmtNode::createSingleLineIfStmt($1, $4);}
    ;

unless_stmt: UNLESS_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list END_KEYWORD    {$$=UnlessStmtNode::createUnlessStmt($3, $6);}
    | UNLESS_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD {$$=UnlessStmtNode::createUnlessStmt($3, $5);}
    | UNLESS_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list ELSE_KEYWORD stmt_list END_KEYWORD    {$$=UnlessStmtNode::createUnlessStmtwithElse($3, $6, $8);}
    | UNLESS_KEYWORD linefeed_or_empty expr delimiter stmt_list ELSE_KEYWORD stmt_list END_KEYWORD  {$$=UnlessStmtNode::createUnlessStmtwithElse($3, $5, $7);}
    | expr UNLESS_KEYWORD linefeed_or_empty expr    {$$=UnlessStmtNode::createSingleLineUnlessStmt($1, $4);}
    ;

elsif_list: elsif_stmt  {$$=createElsifList($1);}
    | elsif_list elsif_stmt {$$=addElsifToList($1, $2);}
    ;

elsif_stmt: ELSIF_KEYWORD linefeed_or_empty expr delimiter stmt_list    {$$=ElsifNode::createElsifStmt($3, $5);}
    | ELSIF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list    {$$=ElsifNode::createElsifStmt($3, $6);}
    ;

while_stmt: WHILE_KEYWORD linefeed_or_empty expr DO_KEYWORD delimeter_or_empty stmt_list END_KEYWORD    {$$=WhileStmtNode::createWhileStmtNode($3, $6);}
    | WHILE_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD  {$$=WhileStmtNode::createWhileStmtNode($3, $5);}
    ;

for_stmt: FOR_KEYWORD linefeed_or_empty expr IN_KEYWORD linefeed_or_empty expr DO_KEYWORD delimeter_or_empty stmt_list END_KEYWORD  {$$=ForStmtNode::createForStmtNode($3, $6, $9);}
    | FOR_KEYWORD linefeed_or_empty expr IN_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD  {$$=ForStmtNode::createForStmtNode($3, $6, $8);}
    ;

return_stmt: RETURN_KEYWORD expr {$$=ReturnStmtNode::createReturnStmt($2);}
    | RETURN_KEYWORD {$$=ReturnStmtNode::createSingleReturnStmt();}
    ;

case_stmt: CASE_KEYWORD linefeed_or_empty expr delimeter_or_empty when_list END_KEYWORD {$$=CaseStmtNode::createCaseStmt($3, $5);}
    | CASE_KEYWORD linefeed_or_empty expr delimeter_or_empty when_list ELSE_KEYWORD delimeter_or_empty stmt_list END_KEYWORD    {$$=CaseStmtNode::createCaseStmtWithElse($3, $5, $8);}
    ;

when_list: when_stmt    {$$=createWhenList($1);}
    | when_list when_stmt   {$$=addWhenToList($1, $2);}
    ;

when_stmt:WHEN_KEYWORD linefeed_or_empty expr_list delimiter stmt_list  {$$=WhenStmtNode::createWhenStmt($3, $5);}
    | WHEN_KEYWORD linefeed_or_empty expr_list delimeter_or_empty THEN_KEYWORD stmt_list    {$$=WhenStmtNode::createWhenStmt($3, $6);}
    ;

alias_stmt: ALIAS_KEYWORD IDENTIFIER IDENTIFIER {$$=AliasStmtNode::createAliasStmt($2, $3);}
    ;
%%