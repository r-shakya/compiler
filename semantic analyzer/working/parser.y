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
%type <string> decl funcdecl arraylist typestr IFEL

%right '='
%left '+' '-'
%left '*' '/'
%left '(' ')'

%start program
%%

program: declarations VOID MAIN { /*temproot1 = lift_scope( temproot1 ); */ temproot1 = change_scope( temproot1 );  } '(' ')' '{' statements '}' {printf("main function executed");}
       ;
            
declarations: decl ';'      {  }
    | declarations decl ';' {  }
    | declarations VOID ID { if( lookup( temproot1 , $3  ) ){ printf("Variable named %s exists already\n ",$3); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( $3 ,$2 ,""  )  ); func_a = 1; } temproot1 = change_scope( temproot1 ); } '(' funcdecl ')'  { func_a = 0; }  '{' statements '}'    { display( temproot1 ); temproot1 = temproot1->parent_scope;    printf("%s function executed with send-type %s \n\n",$3,$2); }
    | declarations typestr ID {   if( lookup( temproot1 , $3  ) ){ printf("Variable named %s exists already\n ",$3); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( $3 ,$2 ,""  )  ); func_a = 1; }    temproot1 = change_scope( temproot1 ); } '(' funcdecl ')' { func_a = 0; }  '{' statements '}' { display( temproot1 ); temproot1 = temproot1->parent_scope;   printf("%s function executed with send-type %s \n\n",$3,$2);  } 
    ;

decl: typestr ID               {strcpy($$,$1); printf("var type %s = %s\n",$1,$2); if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); } else{  insert( temproot1 , symbol_copy( $2 ,"" ,$1  )  );    } }
    | typestr ID '=' NUM       {strcpy($$,$1); printf("var type %s : %s = %d\n",$1,$2,$4); if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); } else{  insert( temproot1 , symbol_copy( $2 ,"" ,$1  )  );  } }
    | typestr ID '[' NUM ']'   {strcpy($$,$1); printf("array type %s  elements %d = %s\n",$1,$4,$2); if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( $2 ,"" ,$1  ) , $4 );  } }
    | typestr ID '[' NUM ']' '=' '{' arraylist '}'   {strcpy($$,$1); printf("array type %s  elements %d = %s\n",$1,$4,$2); printf("%s[%d] = {.....}\n",$2,$4); if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( $2 ,"" ,$1  ) , $4 );  } }
    | decl ',' ID              { printf("var type %s = %s\n",$$,$3); if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert( temproot1 , symbol_copy( $3 ,"" ,$$  )  ); } }
    | decl ',' ID '=' NUM      { printf("var type %s : %s = %d\n",$$,$3,$5); if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert( temproot1 , symbol_copy( $3 ,"" ,$$  )  ); } }
    | decl ',' ID '[' NUM ']'  { printf("array type %s elements %d = %s\n",$$,$5,$3); if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( $3 ,"" ,$$  ) , $5 );   } }
    | decl ',' ID '[' NUM ']' '=' '{' arraylist '}'  { printf("array type %s elements %d = %s\n",$$,$5,$3); printf("%s[%d] = {.....}\n",$3,$5); if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( $3 ,"" ,$$  ) , $5 );   } }
    ;
    
    
    
funcdecl: typestr ID               {strcpy($$,$1); printf("var type %s = %s\n",$1,$2); if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); } else{  insert( temproot1 , symbol_copy( $2 ,"" ,$1  )  );  if(func_a == 1){ insert_func_param( func_node , $1 ); }   } }
    | typestr ID '[' ']'   {strcpy($$,$1); printf("array type %s  = %s\n",$1,$2); if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( $2 ,"" ,$1  ) , 1 ); if(func_a == 1){ strcat($1, "array");  insert_func_param( func_node , $1 ); }  } }
    | funcdecl ',' ID              { printf("var type %s = %s\n",$$,$3); if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert( temproot1 , symbol_copy( $3 ,"" ,$$  )  ); if(func_a == 1){ insert_func_param( func_node , $$ ); } } }
    | funcdecl ',' ID '[' ']'  { printf("array type %s = %s\n",$$,$3); if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( $3 ,"" ,$$  ) , 1 ); if(func_a == 1){ strcat($$, "array"); insert_func_param( func_node , $$ ); }  } }
    ;    
    

statements: assignexpr ';'                                                                {}
    | statements assignexpr ';'                                                           {}
    | statements decl ';'                                                                 {}
    | statements returnstmt ';'                                                           {}
    | statements IF '(' logicalexpr ')' { temproot1 = change_scope( temproot1 ); } '{' statements '}' { temproot1 = temproot1->parent_scope; } IFEL                                { display( temproot1 );  printf("only if statement executed \n"); }
   // | statements IF '(' logicalexpr ')' '{' statements '}' ELSE '{' statements '}'        { printf("if-else statement executed \n\n"); }
    | statements WHILE '(' logicalexpr ')' { temproot1 = change_scope( temproot1 ); }  '{' statements '}'                             { display( temproot1 ); temproot1 = temproot1->parent_scope;  printf("while statement executed \n\n"); }
    | statements FOR { temproot1 = change_scope( temproot1 ); } '(' assignexpr ';' logicalexpr ';' assignexpr ')' '{' statements '}' { display( temproot1 ); temproot1 = temproot1->parent_scope;  printf("for statement executed \n\n"); }
    | ;
    

IFEL: ELSE {temproot1 = change_scope( temproot1 );} '{' statements '}'        { temproot1 = temproot1->parent_scope; printf("else statement executed \n\n"); }
    | {  }
    ;


returnstmt: SEND expr                                                       {   printf("return from function %d\n",$2); }
          ;

assignexpr: ID '=' { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } if( leftassignvar[0] != '\0' ){ printf("%s  use of data type is incorrect and is%shemant\n",$1,leftassignvar); exit(0); }  } expr                                                     { /*  printf("%s = %d\n",$1,$3); */ }
          | ID '=' { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } if(leftassignvar != ""){ printf("%s  use of data type is incorrect\n",$1); exit(0); } } CALL '(' '"' ID '"' ',' paramlist ')'     { /*printf("%s = send of %s\n",$1,$6);*/ }
          | ID '[' NUM ']' '=' { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } if(leftassignvar != "array"){ printf("%s  use of data type is incorrect\n",$1); exit(0); }  } expr                                         {/* printf("%s[%d] = %d\n",$1,$3,$6); */    printf("%s[%d] \n",$1,$3);    }
          | ID '[' NUM ']' '=' CALL '(' '"' ID '"' ',' paramlist ')'        { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } if(leftassignvar != "array"){ printf("%s  use of data type is incorrect\n",$1); exit(0); }  printf("%s[%d] = send of %s\n",$1,$3,$9); }
          ;
          
arraylist: NUM                { printf("number %d added in array\n",$1); }
         | arraylist ',' NUM  { printf("number %d added in array\n",$3); }
         ;
         
paramlist: NUM                { printf("number %d added as parameter\n",$1); }
         | paramlist ',' NUM  { printf("number %d added as parameter\n",$3); }
         ;

expr: NUM                     { $$ = $1; }
    | ID                      { $$ = 0; if( !lookup_func_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } printf("id in arithmetic expr = %s\n",$1); }
    | expr '+' expr           { $$ = $1 + $3; printf("%d + %d\n",$1,$3); }
    | expr '-' expr           { $$ = $1 - $3; printf("%d - %d\n",$1,$3); }
    | expr '*' expr           { $$ = $1 * $3; printf("%d * %d\n",$1,$3); }
    | expr '/' expr           { $$ = $1 / $3; printf("%d / %d\n",$1,$3); }
    | '(' expr ')'            { $$ =  $2; printf("( %d )\n",$2); }
    ;

logicalexpr: NUM                      { $$ = $1; }
    | ID                              { $$ = 1; if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } printf("id in logical expression = %s\n",$1); }
    | logicalexpr '<' logicalexpr     { if($1<$3){$$=1;}else{$$=0;} printf("%d < %d\n",$1,$3); }
    | logicalexpr '>' logicalexpr     { if($1>$3){$$=1;}else{$$=0;} printf("%d > %d\n",$1,$3); }
    | '(' logicalexpr ')'             { $$ =  $2; printf("( %d )\n",$2); }
    ;


%%

//#include "symboltable.c"
//extern struct Scope_node* root ;
//extern struct Scope_node* temproot;
int main(int argc,char *argv[]){
  initialize_sym();
  yyparse();
  display( temproot1 );
  return 0;
}

int yyerror(char *s){
  printf("\n\nError: %s \n",s);
  yydebug=0;
  return 0;
}
