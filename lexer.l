%option noyywrap
%option never-interactive

%{
	#include <stdio.h>
    #include <stdlib.h>
    #include <string>
    #include "parser.tab.hpp"
    extern int yyparse(void);

    char* removeUnderscores(const char* input);
%}

DIGIT [0-9]
HEX_DIGIT [0-9A-Fa-f]
BIN_DIGIT [01]
OCT_DIGIT [0-7]
EXPONENT [eE][+-]?[1-9]{DIGIT}*(_{DIGIT}+)*
UNDERSCORE  _
IDENTIFIER [a-z_][a-zA-Z0-9_]*

NUM_WITH_UNDERSCORE {DIGIT}+({UNDERSCORE}{DIGIT}+)+
NUM_WITH_UNDERSCORE_DECIMAL {DIGIT}*\.{DIGIT}+{UNDERSCORE}{DIGIT}*

%x DOUBLE_QUOTE_STRING
%x SINGLE_QUOTE_STRING
%x ML_COMMENT

%%

%{
    int num;
    int doubleQuote;
    std::string temp1;
    std::string str;
    int nestingCount = 0;
%}

_+[0-9_]+\.?[0-9_]*  { printf("Error: Underscore at the start of a number: %s\n", yytext); }
[0-9_]+\.?[0-9_]*_+  { printf("Error: Underscore at the end of a number: %s\n", yytext); }
[0-9_]+_\._?[0-9_]+ { printf("Error: Underscore right before point: %s\n", yytext); }
{DIGIT}+(_{DIGIT}+)*\._[0-9_]+ { printf("Error: Underscore right after point: %s\n", yytext); }


alias		{
                printf("Found alias keyword: %s\n", yytext);    
                return ALIAS_KEYWORD;
            }
and			{
                printf("Found and keyword: %s\n", yytext);
                return AND_KEYWORD; 
            }
begin		{ printf("Found begin keyword: %s\n", yytext); }
break		{ printf("Found break keyword: %s\n", yytext); }
case		{
                printf("Found case keyword: %s\n", yytext);    
                return CASE_KEYWORD;
            }
class		{
                printf("Found class keyword: %s\n", yytext);
                return CLASS_KEYWORD;
            }
def			{
                printf("Found def keyword: %s\n", yytext);
                return DEF_KEYWORD;
            }
"defined?"	{ printf("Found  defined? keyword: %s\n", yytext); }
do			{
                printf("Found do keyword: %s\n", yytext);
                return DO_KEYWORD;
            }
if			{
                printf("Found if keyword: %s\n", yytext);
                return IF_KEYWORD;
            }
else		{
                printf("Found else keyword: %s\n", yytext);
                return ELSE_KEYWORD;
            }
elsif		{
                printf("Found elsif keyword: %s\n", yytext);
                return ELSIF_KEYWORD;
            }
end			{
                printf("Found end keyword: %s\n", yytext);
                return END_KEYWORD;
            }
ensure		{ printf("Found keyword: %s\n", yytext); }
false		{
                printf("Found false keyword: %s\n", yytext);
                return FALSE_KEYWORD;
            }
for			{
                printf("Found for keyword: %s\n", yytext);
                return FOR_KEYWORD;
            }
in			{
                printf("Found in keyword: %s\n", yytext);
                return IN_KEYWORD;
            }
module		{ printf("Found keyword: %s\n", yytext); }
next		{ printf("Found keyword: %s\n", yytext); }
nil			{
                printf("Found nil keyword: %s\n", yytext);
                return NIL_KEYWORD;
            }
not			{
                printf("Found not keyword: %s\n", yytext);
                return NOT_KEYWORD;
            }
or			{ 
                printf("Found or keyword: %s\n", yytext);
                return OR_KEYWORD;
            }
redo		{ printf("Found keyword: %s\n", yytext); }
rescue		{ printf("Found keyword: %s\n", yytext); }
retry		{ printf("Found keyword: %s\n", yytext); }
return		{
                printf("Found return keyword: %s\n", yytext);
                return RETURN_KEYWORD;
            }
self		{
                printf("Found self keyword: %s\n", yytext);
                return SELF_KEYWORD;
            }
super		{
                printf("Found super keyword: %s\n", yytext);
                return SUPER_KEYWORD;
            }
superclass  {
                printf("Found superclass keyword: %s\n", yytext);
                return SUPERCLASS_KEYWORD;
            }
then		{
                printf("Found then keyword: %s\n", yytext);
                return THEN_KEYWORD;
            }
true		{
                printf("Found true keyword: %s\n", yytext);
                return TRUE_KEYWORD;
            }
undef		{ printf("Found keyword: %s\n", yytext); }
unless		{
                printf("Found unless keyword: %s\n", yytext);
                return UNLESS_KEYWORD;
            }
until		{ printf("Found keyword: %s\n", yytext); }
when		{
                printf("Found when keyword: %s\n", yytext);
                return WHEN_KEYWORD;
            }
while		{
                printf("Found while keyword: %s\n", yytext);
                return WHILE_KEYWORD;
            }
yield		{ printf("Found keyword: %s\n", yytext); }

"+"         { 
                printf("Found arithmetic operation +: %s\n", yytext); 
                return '+';
            }   
"-"         { 
                printf("Found arithmetic operation -: %s\n", yytext);
                return '-';
            }
"*"         {
                printf("Found arithmetic operation *: %s\n", yytext); 
                return '*';
            }
"/"         { 
                printf("Found arithmetic operation: / %s\n", yytext);
                return '/';
            }
"%"         {
                printf("Found arithmetic operation percent: %s\n", yytext);
                return '%';
            }
"**"        { return ARITHMETIC_POW_OP; }

"=="        {
                printf("Found arithmetic operation EQL_OP: %s\n", yytext);
                return EQL_OP;
            }
"!="        {
                printf("Found arithmetic operation NOT_EQL_OP: %s\n", yytext);
                return NOT_EQL_OP;
            }
">"         {
                printf("Found arithmetic operation Greater_op: %s\n", yytext);
                return GREATER_OP;
            }
"<"         {
                printf("Found arithmetic operation Less_op: %s\n", yytext);
                return LESS_OP;
            }
">="        {
                printf("Found arithmetic operation Greater_or_eql_op: %s\n", yytext);
                return GREATER_OR_EQL_OP;
            }
"<="        {
                printf("Found arithmetic operation Less_or_eql_op: %s\n", yytext);
                return LESS_OR_EQL_OP;
            }
"<=>"       {
               printf("Found  operation <=>: %s\n", yytext); 
                return COMB_COMPARISON_OP;
            }
"==="       {
                printf("Found arithmetic operation CASE_EQL_OP: %s\n", yytext);
                return CASE_EQL_OP;
            }
"eql?"      { printf("Found arithmetic operation: %s\n", yytext); }
"equal?"    { printf("Found arithmetic operation: %s\n", yytext); }

"="         { printf("Found arithmetic operation: %s\n", yytext); }
"+="        {
                printf("Found add assign op: %s\n", yytext);
                return ADD_ASSIGN_OP;
            }
"-="        { 
                printf("Found sub assign op: %s\n", yytext);
                return SUB_ASSIGN_OP;
            }
"*="        { 
                printf("Found mul assign op: %s\n", yytext);
                return MUL_ASSIGN_OP;
            }
"/="        { 
                printf("Found div assign op: %s\n", yytext);
                return DIV_ASSIGN_OP;
            }
"%="        { 
                printf("Found mod assign op: %s\n", yytext);
                return MOD_ASSIGN_OP;
            }
"**="       { 
                printf("Found pow assign op: %s\n", yytext);
                return POW_ASSIGN_OP;
            }

"&"         {
                printf("Found bin and op: %s\n", yytext);
                return BIN_AND_OP;
            }
"|"         {
                printf("Found bin or op: %s\n", yytext);
                return BIN_OR_OP;
            }
"^"         {
                printf("Found bin xor op: %s\n", yytext);
                return BIN_XOR_OP;
            }
"~"         {
                printf("Found bin ones complement op: %s\n", yytext);
                return BIN_ONES_COMPLEMENT_OP;
            }
"<<"        {
                printf("Found bin left shift op: %s\n", yytext);
                return BIN_LEFT_SHIFT_OP;
            }
">>"        {
                printf("Found bin right shift op: %s\n", yytext);
                return BIN_RIGHT_SHIFT_OP;
            }

"&&"        {
                printf("Found logical and op: %s\n", yytext);
                return LOGICAL_AND_OP;
            }
"||"        {
                printf("Found logical or op: %s\n", yytext);
                return LOGICAL_OR_OP; 
            }
"!"         {
                printf("Found logical not op: %s\n", yytext);
                return LOGICAL_NOT_OP;
            }

".."        {
                printf("Found range op: EXCLUSIVE_RANGE_OP %s\n", yytext);
                return EXCLUSIVE_RANGE_OP;
            }
"..."       {
                printf("Found range op: INCLUSIVE_RANGE_OP %s\n", yytext);
                return INCLUSIVE_RANGE_OP;
            }

"("         { 
                printf("Found bracket: %s\n", yytext);
                return '(';
            }
")"         { 
                printf("Found bracket: %s\n", yytext);
                return ')';
            }
"{"         { 
                printf("Found bracket: %s\n", yytext);
                return '{';
            }
"}"         {
                    return '}';
                    printf("Found bracket: %s\n", yytext);
            }
"["         {
                printf("Found bracket: %s\n", yytext);
                return '[';
            }
"]"         {
                printf("Found bracket: %s\n", yytext);
                return ']';
            }

"?"         {
                printf("Found question mark: %s\n", yytext);
                return QUESTION_SYMBOL;
            }

"."         {
                printf("Found dot: %s\n", yytext);
                return '.';
            }
","         {
                printf("Found comma: %s\n", yytext);
                return COMMA_SYMBOL;
            }
":"         {
                printf("Found colon: %s\n", yytext);
                return COLON_SYMBOL;
            }
"::"        {
                printf("Found double colon: %s\n", yytext);
                return DOUBLE_COLON_SYMBOL;
            }
";"         {
                printf("Found semicolon: %s\n", yytext);
                return SEMICOLON_SYMBOL;
            }
"\n"        { 
                printf("Found line feed: %s\n", yytext);
                return NEW_LINE_SYMBOL;
                // printf("Found line feed: %s\n", yytext);
            }

\"          {
                str = ""; 
                BEGIN(DOUBLE_QUOTE_STRING);
            }
                
\'          {
                str = ""; 
                BEGIN(SINGLE_QUOTE_STRING);    
            }




[A-Z][a-zA-Z0-9_]*  {
                        char ident[1000];
                        strcpy(ident, yytext);
                        yylval.Str = new std::string(ident);
                        printf("Found constant: %s\n", yytext);
                        return CONSTANT_NAME;
                    }

{IDENTIFIER}\?  {
                    char ident[1000];
                    strcpy(ident, yytext);
                    yylval.Str = new std::string(ident);
                    printf("Found method with question: %s\n", yytext);
                    return METHOD_MARK_QUESTION;
                }
{IDENTIFIER}\!  {
                    char ident[1000];
                    strcpy(ident, yytext);
                    yylval.Str = new std::string(ident);
                    printf("Found method with !: %s\n", yytext);
                    return METHOD_MARK_EXCLAMATION;
                }
{IDENTIFIER}\=  {
                    char ident[1000];
                    strcpy(ident, yytext);
                    yylval.Str = new std::string(ident);
                    printf("Found method with =: %s\n", yytext);
                    return METHOD_MARK_EQUAL;
                }
{IDENTIFIER}    {
                    char ident[1000];
                    strcpy(ident, yytext);
                    yylval.Str = new std::string(ident);
                    printf("Found identifier: %s\n", yytext);
                    return IDENTIFIER; 
                }
\@{IDENTIFIER}  {
                    char ident[1000];
                    strcpy(ident, yytext);
                    yylval.Str = new std::string(ident);
                    printf("Found var name: %s\n", yytext);
                    return OBJECT_VAR_NAME;
                }
\@\@{IDENTIFIER} {
                    char ident[1000];
                    strcpy(ident, yytext);
                    yylval.Str = new std::string(ident);
                    printf("Found class var name: %s\n", yytext);
                    return CLASS_VAR_NAME;
                    }

<DOUBLE_QUOTE_STRING>"#{"   {
                                str.append(yytext);
                            }

<SINGLE_QUOTE_STRING>[^\\\']+ { str.append(yytext); }
<DOUBLE_QUOTE_STRING>[^\\\"#]+ { str.append(yytext); }
<DOUBLE_QUOTE_STRING>[#]           { str.append(yytext); }
<DOUBLE_QUOTE_STRING>\\'            { str.append("\\'"); }
<DOUBLE_QUOTE_STRING>\\n             { str.append("\n"); }
<DOUBLE_QUOTE_STRING>\\a             { str.append("\a"); }
<DOUBLE_QUOTE_STRING>\\b             { str.append("\b"); }
<DOUBLE_QUOTE_STRING>\\t             { str.append("\t"); }
<DOUBLE_QUOTE_STRING>\\v             { str.append("\v"); }
<DOUBLE_QUOTE_STRING>\\f             { str.append("\f"); }
<DOUBLE_QUOTE_STRING>\\r             { str.append("\r"); }
<DOUBLE_QUOTE_STRING>\\e             { str.append("\e"); }
<DOUBLE_QUOTE_STRING>\\s             { str.append(" "); }
<SINGLE_QUOTE_STRING,DOUBLE_QUOTE_STRING>\\\\ { str.append("\\");}
<DOUBLE_QUOTE_STRING>\\\"        { str.append("\""); }
<DOUBLE_QUOTE_STRING>\\#             { str.append("#"); }


<SINGLE_QUOTE_STRING>\\\"        { str.append("\\\""); }
<SINGLE_QUOTE_STRING>\\\'        { str.append("'"); }

    

<DOUBLE_QUOTE_STRING>\\{OCT_DIGIT}{1,3}  { 
                                sscanf(yytext + 1, "%o", &num);
                                temp1 = (char) num;
                                str.append(temp1);
                            }

<DOUBLE_QUOTE_STRING>\\x{HEX_DIGIT}{1,2} { 
                                sscanf(yytext + 2, "%x", &num);
                                temp1 = (char) num;
                                str.append(temp1);
                            }

<DOUBLE_QUOTE_STRING>\" {
                                yylval.Str = new std::string(str.c_str());
                                printf("String literal: \"%s\" \n", str.c_str());
                                BEGIN(INITIAL);
                                return STRING;
                        }
<DOUBLE_QUOTE_STRING>\\             { str.append(""); }

<SINGLE_QUOTE_STRING>\' { 
                            yylval.Str = new std::string(str.c_str());
                            printf("String literal: \"%s\" \n", str.c_str());
                            BEGIN(INITIAL);
                            return STRING;
                        }


#.* {
    printf("Found single-line comment: %s\n", yytext + 1); 
    
    }



"=begin" {
    BEGIN(ML_COMMENT);
    printf("Found multiline comment:\n");
}


<ML_COMMENT>.*=end\s {
    BEGIN(INITIAL);
    printf("%s", yytext);
}



{DIGIT}+(_{DIGIT}+)* { 
    
    char* cleanedText = removeUnderscores(yytext);
    int number = atoi(cleanedText);

    yylval.Int = number;
    free(cleanedText); 
    printf("Found integer: %d\n", number); 
    return INTEGER_NUMBER;

}
0[xX]{HEX_DIGIT}+(_{HEX_DIGIT}+)* { 
    char* cleanedText = removeUnderscores(yytext);
    int number = strtol(cleanedText, NULL, 16);

    yylval.Int = number;
    printf("Found hexadecimal integer: %d\n", number); 
    return INTEGER_NUMBER;
}

0[bB]{BIN_DIGIT}+(_{BIN_DIGIT}+)* {
    char* cleanedText = removeUnderscores(yytext + 2);
    int number = strtol( cleanedText, NULL, 2);

    yylval.Int = number;
    printf("Found binary integer: %d\n", yytext);
    return INTEGER_NUMBER;
}

{DIGIT}+(_{DIGIT}+)*\.({DIGIT}+(_{DIGIT}+)*)? { 
    char* cleanedText = removeUnderscores(yytext);
    double number = atof(cleanedText);

    yylval.Float = number;
    printf("Found floating-point number: %f\n", number); 
    return FLOAT_NUMBER;
}

{DIGIT}+(_{DIGIT}+)*\.{DIGIT}+(_{DIGIT}+)*{EXPONENT}  { 
    char* cleanedText = removeUnderscores(yytext);
    double number = atof(cleanedText);

    yylval.Float = number;
    printf("Found floating-point number with exponent: %f\n", number); 
    return FLOAT_NUMBER;
}

{DIGIT}+(_{DIGIT}+)*{EXPONENT}  {
    char* cleanedText = removeUnderscores(yytext);
    double number = atof(cleanedText);

    yylval.Float = number;
    printf("Found number with exponent: %f\n", number); 
    return FLOAT_NUMBER;
}

{DIGIT}+(_+{DIGIT}+)*(\.{DIGIT}+(_+{DIGIT}+)*)?{EXPONENT}?  {
    printf("Error: Underscore is repeated several times in a row: %s\n", yytext); 
}

0[xX]{HEX_DIGIT}+(_+{HEX_DIGIT}+)*  {
    printf("Error: Underscore is repeated several times in a row: %s\n", yytext); 
}

0[bB]{BIN_DIGIT}+(_+{BIN_DIGIT}+)*  {
    printf("Error: Underscore is repeated several times in a row: %s\n", yytext); 
}


\.?{DIGIT}+(_{DIGIT}+)*(\.{DIGIT}+(_{DIGIT}+)*)?{EXPONENT}? {printf("Error: Dot at the start of a number: %s\n", yytext); }

{DIGIT}+(_{DIGIT}+)*(\.+{DIGIT}+(_{DIGIT}+)*)+{EXPONENT}? {printf("Error: Dot is repeated several times in a row: %s\n", yytext); }


%%

int l_main(FILE* file) {

    if (file == NULL) {
        printf("File opening error");
        return 1;
    }

    yyin = file;

    yyparse();

    fclose(file);

    return 0;
}

 char* removeUnderscores(const char* input) {
    char* result = (char*)malloc(strlen(input) + 1);
    int resultIndex = 0;
    
    for (int i = 0; input[i]; i++) {
        if (input[i] != '_') {
            result[resultIndex++] = input[i];
        }
    }
    
    result[resultIndex] = '\0';
    return result;
}

