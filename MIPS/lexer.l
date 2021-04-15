%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
int lineno = 1;
void printMSG(char *token_type);
void lexer_error(char *message);
%}
type "integer"|"float"|"char"
letter_ [A-Za-z_]
digit [0-9]
%%
{type}                 {strcpy(yylval.string, yytext); return typestr; }
"void"                 { strcpy(yylval.string, yytext); return VOID; }
"main"                 { return MAIN; }
"if"                   { return IF; }
"else"                 { return ELSE; }
"while"                { return WHILE; }
"for"                  { return FOR; }
"call"                 { return CALL; }
"send"                 { return SEND; }
"output"               { return OUTPUT; }
"input"                { return INPUT; }

{letter_}({letter_}|{digit})*    	        {strcpy(yylval.string, yytext); return ID; }
{digit}+ 		                        {yylval.number= atoi(yytext); return NUM;}

["](.)*["]    	        {strcpy(yylval.string, yytext); return CSTRING; }

"+"      		{ return '+'; }
"-"      		{ return '-'; }
"*"	 	        { return '*'; }
"/"                     { return '/'; }

"("                     { return '('; }
")"                     { return ')'; }
"{"                     { return '{'; }
"}"                     { return '}'; }
"["                     { return '['; }
"]"                     { return ']'; }

"<"                     { return '<'; }
">"                     { return '>'; }
"="                     { return '='; }

";"		        { return ';'; }
","		        { return ','; }
["]		        { return '"'; }
[']		        { return ','; }


"\n"			{ lineno++; }
[ \t\r\f]+	        {}
"$"		        { return 0; }
.  		        { lexer_error("unknown character"); }
%%

void printMSG(char *token_type){
	printf("token: %s      token_type: %s     lineno: %d\n", yytext, token_type, lineno);
}

void lexer_error(char *message){
	printf("Error: %s    in line no    %d    token = %s\n", message, lineno, yytext);
	exit(1);
}

int yywrap(){
    return -1;
}
