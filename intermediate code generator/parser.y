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
%type <string> VOID expr
%type <number>  assignexpr logicalexpr
%type <string> decl funcdecl arraylist typestr IFEL

%right '='
%left '+' '-'
%left '*' '/'
%left '(' ')'

%start program
%%

program: declarations VOID MAIN { /*temproot1 = lift_scope( temproot1 ); */ temproot1 = change_scope( temproot1 );  } '(' ')' '{' statements '}' {}
       ;
            
declarations: declarations decl ';' {  }
    | declarations VOID ID { if( lookup( temproot1 , $3  ) ){ printf("Variable named %s exists already\n ",$3); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( $3 ,$2 ,""  )  ); func_a = 1; } temproot1 = change_scope( temproot1 ); } '(' funcdecl ')'  { func_a = 0; }  '{' statements '}'    { display( temproot1 ); temproot1 = temproot1->parent_scope;    printf("%s function executed with send-type %s \n\n",$3,$2); }
    | declarations typestr ID {   if( lookup( temproot1 , $3  ) ){ printf("Variable named %s exists already\n ",$3); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( $3 ,$2 ,""  )  ); func_a = 1; }    temproot1 = change_scope( temproot1 ); } '(' funcdecl ')' { func_a = 0; }  '{' statements '}' { display( temproot1 ); temproot1 = temproot1->parent_scope;   printf("%s function executed with send-type %s \n\n",$3,$2);  } 
    | ;

decl: typestr ID               {strcpy($$,$1);  if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); } else{  insert( temproot1 , symbol_copy( $2 ,"" ,$1  )  );    } }
    | typestr ID '=' NUM       {strcpy($$,$1);  if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); } else{  insert( temproot1 , symbol_copy( $2 ,"" ,$1  )  );  } }
    | typestr ID '[' NUM ']'   {strcpy($$,$1);  if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( $2 ,"" ,$1  ) , $4 );  } }
    | typestr ID '[' NUM ']' '=' '{' arraylist '}'   {strcpy($$,$1);   if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( $2 ,"" ,$1  ) , $4 );  } }
    | decl ',' ID              {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert( temproot1 , symbol_copy( $3 ,"" ,$$  )  ); } }
    | decl ',' ID '=' NUM      {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert( temproot1 , symbol_copy( $3 ,"" ,$$  )  ); } }
    | decl ',' ID '[' NUM ']'  {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( $3 ,"" ,$$  ) , $5 );   } }
    | decl ',' ID '[' NUM ']' '=' '{' arraylist '}'  {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( $3 ,"" ,$$  ) , $5 );   } }
    ;
    
    
    
funcdecl: typestr ID               {strcpy($$,$1);  if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); } else{  insert( temproot1 , symbol_copy( $2 ,"" ,$1  )  );  if(func_a == 1){ insert_func_param( func_node , $1 ); }   } }
    | typestr ID '[' ']'   {strcpy($$,$1); printf("array type %s  = %s\n",$1,$2); if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( $2 ,"" ,$1  ) , 1 ); if(func_a == 1){ strcat($1, "array");  insert_func_param( func_node , $1 ); }  } }
    | funcdecl ',' ID              { printf("var type %s = %s\n",$$,$3); if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert( temproot1 , symbol_copy( $3 ,"" ,$$  )  ); if(func_a == 1){ insert_func_param( func_node , $$ ); } } }
    | funcdecl ',' ID '[' ']'  { printf("array type %s = %s\n",$$,$3); if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( $3 ,"" ,$$  ) , 1 ); if(func_a == 1){ strcat($$, "array"); insert_func_param( func_node , $$ ); }  } }
    ;    
    

statements: assignexpr ';'                                                                {}
    | statements assignexpr ';'                                                           {}
    | statements decl ';'                                                                 {}
    | statements returnstmt ';'                                                           {}
    | statements IF '(' logicalexpr ')' { temproot1 = change_scope( temproot1 ); printf("if not t%d goto l%d\n",tnum-1,lnum); } '{' statements '}' { temproot1 = temproot1->parent_scope; } IFEL                                { display( temproot1 );  printf(" \n");  printf("l%d:\n",lnum); lnum++; }
   // | statements IF '(' logicalexpr ')' '{' statements '}' ELSE '{' statements '}'        { printf("if-else statement executed \n\n"); }
    | statements { printf("l%d:\n",lnum); lnum++; } WHILE '(' logicalexpr ')' { printf("if not t%d goto l%d\n",tnum-1,lnum); temproot1 = change_scope( temproot1 ); }  '{' statements '}'                             { display( temproot1 ); temproot1 = temproot1->parent_scope; printf("goto l%d\n",lnum-1);  printf("l%d:\n",lnum); lnum++; }
    | statements FOR {  temproot1 = change_scope( temproot1 ); } '(' assignexpr ';' { printf("l%d:\n",lnum); lnum++; } logicalexpr ';' { printf("if not t%d goto l%d\n",tnum-1,lnum+2); printf("goto l%d\n",lnum+1); printf("l%d:\n",lnum); lnum++;  } assignexpr { printf("goto l%d\n",lnum-2); printf("l%d:\n",lnum); lnum++; } ')' '{' statements '}' { printf("goto l%d\n",lnum-2); display( temproot1 ); temproot1 = temproot1->parent_scope;  printf("l%d:\n",lnum); lnum++; }
    | ;
    

IFEL: ELSE {temproot1 = change_scope( temproot1 );  printf("goto l%d\n",lnum+1); printf("l%d:\n",lnum);  lnum++; } '{' statements '}'        { temproot1 = temproot1->parent_scope;  }
    | {  }
    ;


returnstmt: SEND ID                                                       {  if( !lookup_for_id( temproot1 , $2 ) ){ printf("%s is not defined" , $2);  exit(0); } if( strcmp( func_node->ID_Value , leftassign ) != 0 ){ printf( "parameter %s in the function does not match with return type\n",$2 ); exit(0);  } printf("return from function %s\n",$2); }
          ;

assignexpr: ID '=' { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } if( leftassignvar[0] != '\0' ){ printf("%s  use of data type is incorrect and is%s\n",$1,leftassignvar); exit(0); }  } expr                                                    { /* printf("IDENTIFIER %s =  \n",$1); */  printf("%s = t%d \n",$1,tnum - 1);  }
          | ID '=' CALL '(' '"' ID { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } if( leftassignvar[0] != '\0' ){ printf("%s  use of data type is incorrect and is%s\n",$1,leftassignvar); exit(0); }  if(!lookup_func_id( temproot1 , $6 ) ){ printf("%s is not defined" , $6);  exit(0); }  var_i = 0;  } '"' ','  paramlist ')'     { printf("%s = send of %s  \n",$1,$6); }
          | ID '[' NUM ']' '=' {  if( !lookup_array_id( temproot1 , $1 ,$3 ) ){ printf("%s is not defined" , $1);  exit(0); }  printf("t%d = %d\n",tnum,$3); tnum++; printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;  printf("t%d = &%s\n",tnum,$1); tnum++; printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); ar_tnum = tnum; tnum++;   } expr                                         { printf("*t%d = t%d\n",ar_tnum , tnum-1); tnum++;    }
          | ID '[' NUM ']' '=' CALL '(' '"' ID { if( !lookup_array_id( temproot1 , $1 ,$3 ) ){ printf("%s is not defined" , $1);  exit(0); }   if(!lookup_func_id( temproot1 , $9 ) ){ printf("%s is not defined" , $9);  exit(0); }  var_i = 0; printf("t%d = %d\n",tnum,$3); tnum++; printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;  printf("t%d = &%s\n",tnum,$1); tnum++; printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); ar_tnum = tnum; tnum++;   } '"' ',' paramlist ')'        {   printf("t%d = call %s\n",tnum,$9); tnum++;  printf("*t%d = t%d\n",ar_tnum , tnum-1); tnum++;   }
          ;
          
arraylist: NUM                { printf("number %d added in array\n",$1); }
         | arraylist ',' NUM  { printf("number %d added in array\n",$3); }
         ;
         
paramlist: ID                { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }  if(var_i >= 4 || func_node->list[var_i] == NULL ){ printf("extra parameters found in function call \n"); exit(0); } if( strcmp( func_node->list[var_i] , leftassign ) != 0 ){ printf( "parameter %s in the function call has different data type wrt function declaration funcnode,%d,   leftassign/%s/   ",$1,var_i , leftassign );  exit(0); }  printf("number %s added as parameter\n",$1); }
         | paramlist ',' ID  { if( !lookup_for_id( temproot1 , $3 ) ){ printf("%s is not defined" , $3);  exit(0); }   if(var_i >= 4 || func_node->list[var_i] == NULL ){ printf("extra parameters found in function call \n");  exit(0); } if( strcmp( func_node->list[var_i] , leftassign ) != 0 ){ printf( "parameter %s in the function call has different data type wrt function declaration",$3 ); exit(0); }   var_i++;  printf("number %s added as parameter\n",$3); }
         ;

expr: NUM                     { printf("t%d = %d\n",tnum,$1); tnum++; }
    | ID                      { printf("t%d = %s\n",tnum,$1); tnum++; strcpy($$,$1);  if( !lookup_func_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }  }
    | expr '+' expr           { printf("t%d = t%d + t%d\n",tnum,tnum-2,tnum-1); tnum++; }
    | expr '-' expr           { printf("t%d = t%d - t%d\n",tnum,tnum-2,tnum-1); tnum++; }
    | expr '*' expr           { printf("t%d = t%d * t%d\n",tnum,tnum-2,tnum-1); tnum++; }
    | expr '/' expr           { printf("t%d = t%d / t%d\n",tnum,tnum-2,tnum-1); tnum++; }
    | '(' expr ')'            {  }
    /*| ID '[' NUM ']'          { printf("t%d = %d\n",tnum,$3); tnum++; printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;  printf("t%d = &%s\n",tnum,$1); tnum++; printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); tnum++;  printf("t%d = *t%d\n", tnum,tnum-1); tnum++;  }*/
    | ID '[' expr ']'           { /*printf("t%d = t%d\n",tnum,tnum-1); tnum++;*/ printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;  printf("t%d = &%s\n",tnum,$1); tnum++; printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); tnum++;  printf("t%d = *t%d\n", tnum,tnum-1); tnum++;  }
    ;

logicalexpr: NUM                      { printf("t%d = %d\n",tnum,$1); $$=tnum; tnum++; }
    | ID                              { printf("t%d = %s\n",tnum,$1); $$=tnum; tnum++; if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }  }
    | ID '[' expr ']'                  { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;  printf("t%d = &%s\n",tnum,$1); tnum++; printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); tnum++;  printf("t%d = *t%d\n", tnum,tnum-1); $$=tnum; tnum++;  }
    | logicalexpr '<' logicalexpr     { printf("t%d = t%d < t%d\n",tnum,$1,$3); tnum++; /*printf("t%d = t%d < t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
    | logicalexpr '>' logicalexpr     { printf("t%d = t%d > t%d\n",tnum,$1,$3); tnum++; /*printf("t%d = t%d > t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
    | '(' logicalexpr ')'             {  }
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
  printf("\n\nSyntax Error: in line no %d >>>>> %s \n",lineno,yytext);
  yydebug=0;
  return 0;
}
