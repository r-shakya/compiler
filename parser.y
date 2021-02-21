%{
#include "functions.h"
int yylex();
int yyerror(char *);
int yydebug=1;
%}

%union {
	 int  number;
	 char string[15];
}

%token num str

%type <number> D 
%type <string> M 
%type <number> Y 
%type <string> date
%type <number> num
%type <string> str


%%

dates: dates date ';' | date ';' {};

date: D '-' M '-' Y { if(checkDate($1,$3,$5)){printf("%d-%s-%d\n", $1, $3, $5);yydebug=1;}else{printf("Not Valid\n");}}

D: num				{ $$ = $1; }; 	

M: str				{strcpy($$, $1);};

Y: num				{$$ = $1;};


%%

int main(int argc,char *argv[]){
  yyparse();
  return 0;
}

int yyerror(char *s){
  printf("\n\nError: %s\n", s);
  yydebug=0;
  return 0;
}
