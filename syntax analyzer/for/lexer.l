%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
int lineno = 1;
void printMSG(char *token_type);
void lexer_error(char *message);
%}
letter_ [A-Za-z_]
digit [0-9]
%%
"start"	       { return START; }
"end"	               { return END; }
"integer"              { return INTEGER; }
"char"                 { return CHAR; }
"float"                { return FLOAT; }
"if"                   { return IF; }
"else"                 { return ELSE; }
"while"                { return WHILE; }
"for"                  { return FOR; }

{letter_}({letter_}|{digit})*    	        {strcpy(yylval.string, yytext); return ID; }
{digit}+ 		                        {yylval.number= atoi(yytext); return NUM;}

"+"      		{ return '+'; }
"-"      		{ return '-'; }
"*"	 	        { return '*'; }
"/"                     { return '/'; }
"("                     { return '('; }
")"                     { return ')'; }
"="                     { return '='; }
";"		        { return ';'; }
[ \t\n]                 { ; }
"$"		        { return 0; }
.  		        { return yytext[0]; }
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
