%{
        #include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	int lineno = 1;
	void printMSG(char *token_type);
	void yyerror();
%}

digit        [0-9]
digits       [0-9]+
letter_      [A-Za-z_]
keyword      boolean|char|integer|float|if|elif|else|while|for|continue|break|void|send|void|main

%%
{keyword}      	                             { printMSG("keyword"); }
{letter_}({letter_}|{digit})*                        { printMSG("identifier"); }
['](.)[']                                            { printMSG("character_constant"); }
["]([^"\\\n]|\\.|\\\n)*["]                           { printMSG("string_constant"); }
"CMT"(.)*                                            { printf("single_line_comment at line no %d\n",lineno); }
["CMTS"](.)*["CMTE"]                                 { printf("multi_line_comment at line no %d\n",lineno); }
[+]?[0-9]+                                           { printMSG("positive_integer"); }
[-][0-9]+                                            { printMSG("negative_integer"); }
[+]?[0-9]*\.[0-9]+                                   { printMSG("positive_float"); }
[-][0-9]*\.[0-9]+                                    { printMSG("negative_float"); }



"+"					             { printMSG("ADDOP"); }
"-"					             { printMSG("SUBOP"); }
"*"						     { printMSG("MULOP"); }
"/"						     { printMSG("DIVOP"); }
"++"      				             { printMSG("INCR"); }
"--"				                     { printMSG("DECR"); }
"||"					             { printMSG("OROP"); }
"&&"					             { printMSG("ANDOP"); }
"!"						     { printMSG("NOTOP"); }
"=="     				             { printMSG("EOP"); }
"!="				                     { printMSG("NEOP"); }
"="				                     { printMSG("ASSIGNOP"); }
">"              		                     { printMSG("GT"); }
"<"             		                     { printMSG("LT"); }
">="             		                     { printMSG("GE"); }
"<="		                                     { printMSG("LE"); }



"("				                     { printMSG("LP"); }
")"				                     { printMSG("RP"); }
"["				                     { printMSG("LB"); }
"]"				                     { printMSG("RB"); }
"{"				                     { printMSG("LC"); }
"}"				                     { printMSG("RC"); }
":"				                     { printMSG("COLON"); }
";"				                     { printMSG("SEMICOLON"); }
"."				                     { printMSG("DOT"); }
","				                     { printMSG("COMMA"); }



"\n"			                             { lineno += 1; }
[ \t\r\f]+	                                     {}
.				                     { yyerror("Unrecognized character"); }


%%

void printMSG(char *token_type){
	printf("token: %s      token_type: %s     lineno: %d\n", yytext, token_type, lineno);
}

void yyerror(char *message){
	printf("Lexer Error: %s    in line no  =  %d    token >>>> %s\n", message, lineno, yytext);
	exit(1);
}

int main(int argc,char *argv[]){

if(argc!=2){
printf("Usage: <./mylexer> <source file> \n");
exit(0);
}

yyin=fopen(argv[1],"r");
yylex();

fclose(yyin);
return 0;

}
