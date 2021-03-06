%{
#include "functions.h"
#include "symboltable.c"
#include <stdbool.h>
  //initialize_sym();
  
int yylex();
int yyerror(char *);
int yydebug=1;
%}

%union {
	 int  number;
	 char string[15];
}

%token NUM ID START END INTEGER CHAR FLOAT IF ELSE WHILE FOR VOID CALL SEND typestr MAIN

%type <number> NUM
%type <string> ID
%type <string> VOID
%type <number> expr assignexpr logicalexpr
%type <string> decl arraylist typestr IFEL

%right '='
%left '+' '-'
%left '*' '/'
%left '(' ')'

%start program
%%

program: declarations VOID MAIN {   } '(' ')' '{' statements '}' {printf("main function executed\n\n");}
       ;
            
declarations: decl ';'      {  }
    | declarations decl ';' {  }
    | declarations VOID ID {  } '(' decl ')' '{' statements '}'    {     printf("%s function executed with send-type %s \n\n",$3,$2); }
    | declarations typestr ID {  } '(' decl ')' '{' statements '}' {     printf("%s function executed with send-type %s \n\n",$3,$2); } 
    | { printf("no global declarartions\n\n"); }
    ;

decl: typestr ID               {strcpy($$,$1); printf("var type %s = %s\n\n",$1,$2); }
    | typestr ID '=' NUM       {strcpy($$,$1); printf("var type %s : %s = %d\n\n",$1,$2,$4);    }
    | typestr ID '[' NUM ']'   {strcpy($$,$1); printf("array type %s  elements %d = %s\n\n",$1,$4,$2);  }
    | typestr ID '[' NUM ']' '=' '{' arraylist '}'   {strcpy($$,$1); printf("array type %s  elements %d = %s\n\n",$1,$4,$2); printf("%s[%d] = {.....}\n\n",$2,$4);  }
    | decl ',' ID              { printf("var type %s = %s\n\n",$$,$3);  }
    | decl ',' ID '=' NUM      { printf("var type %s : %s = %d\n\n",$$,$3,$5);  }
    | decl ',' ID '[' NUM ']'  { printf("array type %s elements %d = %s\n\n",$$,$5,$3); }
    | decl ',' ID '[' NUM ']' '=' '{' arraylist '}'  { printf("array type %s elements %d = %s\n\n",$$,$5,$3); printf("%s[%d] = {.....}\n\n",$3,$5);  }
    ;

statements: assignexpr ';'                                                                {}
    | statements assignexpr ';'                                                           {}
    | statements decl ';'                                                                 {}
    | statements returnstmt ';'                                                           {}
    | statements IF '(' logicalexpr ')' {  } '{' statements '}' {  } IFEL                                {  printf("only if statement executed \n\n"); }
   // | statements IF '(' logicalexpr ')' '{' statements '}' ELSE '{' statements '}'        { printf("if-else statement executed \n\n"); }
    | statements WHILE '(' logicalexpr ')' {  }  '{' statements '}'                             {    printf("while statement executed \n\n"); }
    | statements FOR {  } '(' assignexpr ';' logicalexpr ';' assignexpr ')' '{' statements '}' {  printf("for statement executed \n\n"); }
    | ;
    

IFEL: ELSE {} '{' statements '}'        {  printf("else statement executed \n\n"); }
    | {}
    ;


returnstmt: SEND expr                                                       { printf("return from function %d\n\n",$2); }
          ;

assignexpr: ID '=' expr                                                     { printf("%s = %d\n\n",$1,$3);  }
          | ID '=' CALL '(' '"' ID '"' ',' paramlist ')'                    { printf("%s = send of %s\n\n",$1,$6); }
          | ID '[' NUM ']' '=' expr                                         { printf("%s[%d] = %d\n\n",$1,$3,$6); }
          | ID '[' NUM ']' '=' CALL '(' '"' ID '"' ',' paramlist ')'        { printf("%s[%d] = send of %s\n\n",$1,$3,$9); }
          ;
          
arraylist: NUM                { printf("number %d added in array\n\n",$1); }
         | arraylist ',' NUM  { printf("number %d added in array\n\n",$3); }
         ;
         
paramlist: NUM                { printf("number %d added as parameter\n\n",$1); }
         | paramlist ',' NUM  { printf("number %d added as parameter\n\n",$3); }
         ;

expr: NUM                     { $$ = $1; }
    | ID                      { $$ = 0;  printf("id in arithmetic expr = %s\n\n",$1); }
    | expr '+' expr           { $$ = $1 + $3; printf("%d + %d\n\n",$1,$3); }
    | expr '-' expr           { $$ = $1 - $3; printf("%d - %d\n\n",$1,$3); }
    | expr '*' expr           { $$ = $1 * $3; printf("%d * %d\n\n",$1,$3); }
    | expr '/' expr           { $$ = $1 / $3; printf("%d / %d\n\n",$1,$3); }
    | '(' expr ')'            { $$ =  $2; printf("( %d )\n\n",$2); }
    ;

logicalexpr: NUM                      { $$ = $1; }
    | ID                              { $$ = 1; printf("id in logical expression = %s\n\n",$1); }
    | logicalexpr '<' logicalexpr     { if($1<$3){$$=1;}else{$$=0;} printf("%d < %d\n\n",$1,$3); }
    | logicalexpr '>' logicalexpr     { if($1>$3){$$=1;}else{$$=0;} printf("%d > %d\n\n",$1,$3); }
    | '(' logicalexpr ')'             { $$ =  $2; printf("( %d )\n\n",$2); }
    ;




%%

//#include "symboltable.c"
//extern struct Scope_node* root ;
//extern struct Scope_node* temproot;
int main(int argc,char *argv[]){
  initialize_sym();
  yyparse();
  return 0;
}

int yyerror(char *s){
  printf("\n\nSyntax Error: in line no %d >>>>> %s \n",lineno,yytext);
  yydebug=0;
  return 0;
}
