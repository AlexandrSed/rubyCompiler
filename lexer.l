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


alias		{ printf("Found keyword: %s\n", yytext); }
and			{ printf("Found keyword: %s\n", yytext); }
begin		{ printf("Found keyword: %s\n", yytext); }
break		{ printf("Found keyword: %s\n", yytext); }
case		{ printf("Found keyword: %s\n", yytext); }
class		{ printf("Found keyword: %s\n", yytext); }
def			{ printf("Found keyword: %s\n", yytext); }
"defined?"	{ printf("Found keyword: %s\n", yytext); }
do			{ printf("Found keyword: %s\n", yytext); }
if			{ printf("Found keyword: %s\n", yytext); }
else		{ printf("Found keyword: %s\n", yytext); }
elsif		{ printf("Found keyword: %s\n", yytext); }
end			{ printf("Found keyword: %s\n", yytext); }
ensure		{ printf("Found keyword: %s\n", yytext); }
false		{ printf("Found keyword: %s\n", yytext); }
for			{ printf("Found keyword: %s\n", yytext); }
in			{ printf("Found keyword: %s\n", yytext); }
module		{ printf("Found keyword: %s\n", yytext); }
next		{ printf("Found keyword: %s\n", yytext); }
nil			{ printf("Found keyword: %s\n", yytext); }
not			{ printf("Found keyword: %s\n", yytext); }
or			{ printf("Found keyword: %s\n", yytext); }
redo		{ printf("Found keyword: %s\n", yytext); }
rescue		{ printf("Found keyword: %s\n", yytext); }
retry		{ printf("Found keyword: %s\n", yytext); }
return		{ printf("Found keyword: %s\n", yytext); }
self		{ printf("Found keyword: %s\n", yytext); }
super		{ printf("Found keyword: %s\n", yytext); }
superclass  { printf("Found keyword: %s\n", yytext); }
then		{ printf("Found keyword: %s\n", yytext); }
true		{ printf("Found keyword: %s\n", yytext); }
undef		{ printf("Found keyword: %s\n", yytext); }
unless		{ printf("Found keyword: %s\n", yytext); }
until		{ printf("Found keyword: %s\n", yytext); }
when		{ printf("Found keyword: %s\n", yytext); }
while		{ printf("Found keyword: %s\n", yytext); }
yield		{ printf("Found keyword: %s\n", yytext); }

"+"         { printf("Found arithmetic operation: %s\n", yytext); }   
"-"         { printf("Found arithmetic operation: %s\n", yytext); }
"*"         { printf("Found arithmetic operation: %s\n", yytext); }
"/"         { printf("Found arithmetic operation: %s\n", yytext); }
"%"         { printf("Found arithmetic operation: %s\n", yytext); }
"**"        { printf("Found arithmetic operation: %s\n", yytext); }

"=="        { printf("Found arithmetic operation: %s\n", yytext); }
"!="        { printf("Found arithmetic operation: %s\n", yytext); }
">"         { printf("Found arithmetic operation: %s\n", yytext); }
"<"         { printf("Found arithmetic operation: %s\n", yytext); }
">="        { printf("Found arithmetic operation: %s\n", yytext); }
"<="        { printf("Found arithmetic operation: %s\n", yytext); }
"<=>"       { printf("Found arithmetic operation: %s\n", yytext); }
"==="       { printf("Found arithmetic operation: %s\n", yytext); }
"eql?"      { printf("Found arithmetic operation: %s\n", yytext); }
"equal?"    { printf("Found arithmetic operation: %s\n", yytext); }

"="         { printf("Found arithmetic operation: %s\n", yytext); }
"+="        { printf("Found arithmetic operation: %s\n", yytext); }
"-="        { printf("Found arithmetic operation: %s\n", yytext); }
"*="        { printf("Found arithmetic operation: %s\n", yytext); }
"/="        { printf("Found arithmetic operation: %s\n", yytext); }
"%="        { printf("Found arithmetic operation: %s\n", yytext); }
"**="       { printf("Found arithmetic operation: %s\n", yytext); }

"&"         { printf("Found operation: %s\n", yytext); }
"|"         { printf("Found operation: %s\n", yytext); }
"^"         { printf("Found operation: %s\n", yytext); }
"~"         { printf("Found operation: %s\n", yytext); }
"<<"        { printf("Found comparison operation: %s\n", yytext); }
">>"        { printf("Found comparison operation: %s\n", yytext); }

"&&"        { printf("Found operation: %s\n", yytext); }
"||"        { printf("Found operation: %s\n", yytext); }
"!"         { printf("Found operation: %s\n", yytext); }

".."        { printf("Found operation: %s\n", yytext); }
"..."       { printf("Found operation: %s\n", yytext); }

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

"?"         { printf("Found question symbol: %s\n", yytext); }

"."         { printf("Found special symbol: %s\n", yytext); }
","         { printf("Found special symbol: %s\n", yytext); }
":"         { printf("Found special symbol: %s\n", yytext); }
"::"        { printf("Found special symbol: %s\n", yytext); }
";"         { printf("Found special symbol: %s\n", yytext); }
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

int main(int argc, char** argv) {
    if (argc != 2) {
        printf("You need to specify file name");
        return 1;
    }

    const char *filename = argv[1];
    
    FILE *file = fopen(filename, "r");
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

