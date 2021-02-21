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

%token NUM ID START END INTEGER CHAR FLOAT

%type <number> NUM
%type <string> ID
%type <number> expr
%type <number> decl

%right '='
%left '+' '-'
%left '*' '/'
%left '(' ')'

%start program
%%

program: declarations START statements END;
            
declarations: decl ';'    {}
    | declarations decl ';' {}
    ;

decl: INTEGER ID               {  }
    | CHAR ID     {  }
    | FLOAT ID     {  }
    | decl ',' ID     {  }
    ;

statements: expr ';'    {printf("%d\n",$1);}
    | statements expr ';' {printf("%d\n",$2);}
    ;

expr: NUM               { $$ = $1; }
    | expr '+' expr     { $$ = $1 + $3; printf("%d + %d\n",$1,$3); }
    | expr '-' expr     { $$ = $1 - $3; printf("%d - %d\n",$1,$3); }
    | expr '*' expr     { $$ = $1 * $3; printf("%d * %d\n",$1,$3); }
    | expr '/' expr     { $$ = $1 / $3; printf("%d / %d\n",$1,$3); }
    | '(' expr ')'      { $$ =  $2; printf("( %d )\n",$2); }
    ;




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
