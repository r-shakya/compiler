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

%token NUM ID START END INTEGER CHAR FLOAT IF ELSE WHILE FOR SEND

%type <number> NUM
%type <string> ID
%type <string> SEND
%type <number> expr assignexpr logicalexpr
%type <string> decl arraylist

%right '='
%left '+' '-'
%left '*' '/'
%left '(' ')'

%start program
%%

program: declarations START ':' statements END ';';
            
declarations: decl ';'    {}
    | declarations decl ';' {}
    | declarations SEND ID '(' decl ')' '{' statements '}' { printf("%s function executed with send-type %s \n\n",$3,$2); }
    ;

decl: INTEGER ID               {strcpy($$,"integer"); printf("var type integer = %s\n",$2); }
    | INTEGER ID '[' NUM ']'   {strcpy($$,"integer"); printf("array type integer elements %d = %s\n",$4,$2); }
    | CHAR ID                  {strcpy($$,"char"); printf("var type char = %s\n",$2); }
    | CHAR ID '[' NUM ']'      {strcpy($$,"char"); printf("array type char elements %d = %s\n",$4,$2); }
    | FLOAT ID                 {strcpy($$,"float"); printf("var type float = %s\n",$2); }
    | FLOAT ID '[' NUM ']'     {strcpy($$,"float"); printf("array type float elements %d = %s\n",$4,$2); }
    | decl ',' ID              { printf("var type %s = %s\n",$$,$3); }
    | decl ',' ID '[' NUM ']'  { printf("array type %s elements %d = %s\n",$$,$5,$3); }
    ;

statements: assignexpr ';'                                                                {}
    | statements assignexpr ';'                                                           {}
    | statements IF '(' logicalexpr ')' '{' statements '}'                                { printf("only if statement executed \n"); }
    | statements IF '(' logicalexpr ')' '{' statements '}' ELSE '{' statements '}'        { printf("if-else statement executed \n\n"); }
    | statements WHILE '(' logicalexpr ')' '{' statements '}'                             { printf("while statement executed \n\n"); }
    | statements FOR '(' assignexpr ';' logicalexpr ';' assignexpr ')' '{' statements '}' { printf("for statement executed \n\n"); }
    ;

assignexpr: ID '=' expr                                { printf("%s = %d\n",$1,$3); }
          | ID '[' NUM ']' '=' expr                    { printf("%s[%d] = %d\n",$1,$3,$6); }
          | ID '[' NUM ']' '=' '{' arraylist '}'       { printf("%s[%d] = {.....}\n",$1,$3); }
          ;
          
arraylist: NUM                { printf("number %d added in array\n",$1); }
         | arraylist ',' NUM  { printf("number %d added in array\n",$3); }
         ;

expr: NUM                     { $$ = $1; }
    | ID                      { $$ = 0; printf("id in arithmetic expr = %s\n",$1); }
    | expr '+' expr           { $$ = $1 + $3; printf("%d + %d\n",$1,$3); }
    | expr '-' expr           { $$ = $1 - $3; printf("%d - %d\n",$1,$3); }
    | expr '*' expr           { $$ = $1 * $3; printf("%d * %d\n",$1,$3); }
    | expr '/' expr           { $$ = $1 / $3; printf("%d / %d\n",$1,$3); }
    | '(' expr ')'            { $$ =  $2; printf("( %d )\n",$2); }
    ;

logicalexpr: NUM                      { $$ = $1; }
    | ID                              { $$ = 1; printf("id in logical expression = %s\n",$1); }
    | logicalexpr '<' logicalexpr     { if($1<$3){$$=1;}else{$$=0;} printf("%d < %d\n",$1,$3); }
    | logicalexpr '>' logicalexpr     { if($1>$3){$$=1;}else{$$=0;} printf("%d > %d\n",$1,$3); }
    | '(' logicalexpr ')'             { $$ =  $2; printf("( %d )\n",$2); }
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
