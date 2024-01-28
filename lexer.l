%option noyywrap
%option never-interactive

%{
	#include <stdio.h>
    #include <stdlib.h>
    #include <string>
    #include "parser.tab.h"
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


alias		{ return ALIAS_KEYWORD; }
and			{ return AND_KEYWORD; }
begin		{ printf("Found keyword: %s\n", yytext); }
break		{ printf("Found keyword: %s\n", yytext); }
case		{ return CASE_KEYWORD; }
class		{ return CLASS_KEYWORD; }
def			{ return DEF_KEYWORD; }
"defined?"	{ printf("Found keyword: %s\n", yytext); }
do			{ return DO_KEYWORD; }
if			{ return IF_KEYWORD; }
else		{ return ELSE_KEYWORD; }
elsif		{ return ELSIF_KEYWORD; }
end			{ return END_KEYWORD; }
ensure		{ printf("Found keyword: %s\n", yytext); }
false		{ return FALSE_KEYWORD; }
for			{ return FOR_KEYWORD; }
in			{ return IN_KEYWORD; }
module		{ printf("Found keyword: %s\n", yytext); }
next		{ printf("Found keyword: %s\n", yytext); }
nil			{ return NIL_KEYWORD; }
not			{ return NOT_KEYWORD; }
or			{ return OR_KEYWORD; }
redo		{ printf("Found keyword: %s\n", yytext); }
rescue		{ printf("Found keyword: %s\n", yytext); }
retry		{ printf("Found keyword: %s\n", yytext); }
return		{ return RETURN_KEYWORD; }
self		{ return SELF_KEYWORD; }
super		{ return SUPER_KEYWORD; }
superclass  { return SUPERCLASS_KEYWORD; }
then		{ return THEN_KEYWORD; }
true		{ return TRUE_KEYWORD; }
undef		{ printf("Found keyword: %s\n", yytext); }
unless		{ return UNLESS_KEYWORD; }
until		{ printf("Found keyword: %s\n", yytext); }
when		{ return WHEN_KEYWORD; }
while		{ return WHILE_KEYWORD;  }
yield		{ printf("Found keyword: %s\n", yytext); }

"+"         { printf("Found arithmetic operation: %s\n", yytext); }   
"-"         { printf("Found arithmetic operation: %s\n", yytext); }
"*"         { printf("Found arithmetic operation: %s\n", yytext); }
"/"         { printf("Found arithmetic operation: %s\n", yytext); }
"%"         { printf("Found arithmetic operation: %s\n", yytext); }
"**"        { return ARITHMETIC_POW_OP; }

"=="        { return EQL_OP; }
"!="        { return NOT_EQL_OP; }
">"         { return GREATER_OP; }
"<"         { return LESS_OP; }
">="        { return GREATER_OR_EQL_OP; }
"<="        { return LESS_OR_EQL_OP; }
"<=>"       { return COMB_COMPARISON_OP; }
"==="       { return CASE_EQL_OP; }
"eql?"      { printf("Found arithmetic operation: %s\n", yytext); }
"equal?"    { printf("Found arithmetic operation: %s\n", yytext); }

"="         { printf("Found arithmetic operation: %s\n", yytext); }
"+="        { return ADD_ASSIGN_OP; }
"-="        { return SUB_ASSIGN_OP; }
"*="        { return MUL_ASSIGN_OP; }
"/="        { return DIV_ASSIGN_OP; }
"%="        { return MOD_ASSIGN_OP; }
"**="       { return POW_ASSIGN_OP; }

"&"         { return BIN_AND_OP; }
"|"         { return BIN_OR_OP; }
"^"         { return BIN_XOR_OP}
"~"         { return BIN_ONES_COMPLEMENT_OP; }
"<<"        { return BIN_LEFT_SHIFT_OP; }
">>"        { return BIN_RIGHT_SHIFT_OP; }

"&&"        { return LOGICAL_AND_OP; }
"||"        { return LOGICAL_OR_OP; }
"!"         { return LOGICAL_NOT_OP; }

".."        { return EXCLUSIVE_RANGE_OP; }
"..."       { return INCLUSIVE_RANGE_OP; }

"("         { printf("Found bracket: %s\n", yytext); }
")"         { printf("Found bracket: %s\n", yytext); }
"{"         { printf("Found bracket: %s\n", yytext); }
"}"         {
                if(nestingCount == 0) {
                    printf("Found bracket: %s\n", yytext);
                } else {
                    nestingCount--;
                    BEGIN(DOUBLE_QUOTE_STRING);
                    str = "";
                    printf("Found interpolation: ) + \n");
                }
            }
"["         { printf("Found bracket: %s\n", yytext); }
"]"         { printf("Found bracket: %s\n", yytext); }

"?"         { return QUESTION_SYMBOL; }

"."         { printf("Found special symbol: %s\n", yytext); }
","         { return COMMA_SYMBOL; }
":"         { return COLON_SYMBOL; }
"::"        { return DOUBLE_COLON_SYMBOL; }
";"         { return SEMICOLON_SYMBOL; }
"\n"        { printf("Found line feed: %s\n", yytext); }

\"          {
                str = ""; 
                BEGIN(DOUBLE_QUOTE_STRING);
            }
                
\'          {
                str = ""; 
                BEGIN(SINGLE_QUOTE_STRING);    
            }




[A-Z][a-zA-Z0-9_]* {printf("Found constant: %s\n", yytext); }

{IDENTIFIER}\?  { printf("Found method with question: %s\n", yytext); }
{IDENTIFIER}\!  { printf("Found method with !: %s\n", yytext); }
{IDENTIFIER}\=  { printf("Found method with =: %s\n", yytext); }
{IDENTIFIER}    { printf("Found identifier: %s\n", yytext); }
\@{IDENTIFIER} {printf("Found var name: %s\n", yytext); }
\@\@{IDENTIFIER} {printf("Found class var name: %s\n", yytext); }

<DOUBLE_QUOTE_STRING>"#{"   { 
                                printf("Found string \"%s\"\n", str.c_str());
                                printf("Found interpolation: + ( \n");
                                nestingCount++;
                                BEGIN(INITIAL);
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
                                printf("String literal: \"%s\" \n", str.c_str());
                                BEGIN(INITIAL);
                        }
<DOUBLE_QUOTE_STRING>\\             { str.append(""); }

<SINGLE_QUOTE_STRING>\' { 
                            printf("String literal: \"%s\" \n", str.c_str());
                            BEGIN(INITIAL);
                        }


#.* { printf("Found single-line comment: %s\n", yytext + 1); }



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
    printf("Found integer: %d\n", number); 
    free(cleanedText); 
}
0[xX]{HEX_DIGIT}+(_{HEX_DIGIT}+)* { 
    char* cleanedText = removeUnderscores(yytext);
    int number = strtol(cleanedText, NULL, 16);
    printf("Found hexadecimal integer: %d\n", number); 
}

0[bB]{BIN_DIGIT}+(_{BIN_DIGIT}+)* {
    char* cleanedText = removeUnderscores(yytext + 2);
    int number = strtol( cleanedText, NULL, 2);
    printf("Found binary integer: %d\n", yytext);
}

{DIGIT}+(_{DIGIT}+)*\.({DIGIT}+(_{DIGIT}+)*)? { 
    char* cleanedText = removeUnderscores(yytext);
    double number = atof(cleanedText);
    printf("Found floating-point number: %f\n", number); 
}

{DIGIT}+(_{DIGIT}+)*\.{DIGIT}+(_{DIGIT}+)*{EXPONENT}  { 
    char* cleanedText = removeUnderscores(yytext);
    double number = atof(cleanedText);
    printf("Found floating-point number with exponent: %f\n", number); 
}

{DIGIT}+(_{DIGIT}+)*{EXPONENT}  {
    char* cleanedText = removeUnderscores(yytext);
    double number = atof(cleanedText);
    printf("Found number with exponent: %f\n", number); 
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

