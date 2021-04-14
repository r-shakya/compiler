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
    | declarations VOID ID { if( lookup( temproot1 , $3  ) ){ printf("Variable named %s exists already\n ",$3); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( $3 ,$2 ,""  )  ); func_a = 1; } temproot1 = change_scope( temproot1 ); } '(' funcdecl ')'  { func_a = 0; }  '{' statements '}'    {  temproot1 = temproot1->parent_scope;    printf("%s function executed with send-type %s \n\n",$3,$2); }
    | declarations typestr ID {   if( lookup( temproot1 , $3  ) ){ printf("Variable named %s exists already\n ",$3); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( $3 ,$2 ,""  )  ); func_a = 1; }    temproot1 = change_scope( temproot1 ); } '(' funcdecl ')' { func_a = 0; }  '{' statements '}' {  temproot1 = temproot1->parent_scope;   printf("%s function executed with send-type %s \n\n",$3,$2);  } 
    | ;

decl: typestr ID               {strcpy($$,$1);  if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); } else{    insert( temproot1 , symbol_copy( $2 ,"" ,$1  )  );    } }
    | typestr ID '=' NUM       {strcpy($$,$1);  if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); } else{  insert( temproot1 , symbol_copy( $2 ,"" ,$1  )  );  } }
    | typestr ID '[' NUM ']'   {strcpy($$,$1);  if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); }   else{ id_size[id_num] = $4; insert_array( temproot1 , symbol_copy( $2 ,"" ,$1  ) , $4 );  } }
    | typestr ID '[' NUM ']' '=' '{' arraylist '}'   {strcpy($$,$1);   if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); }   else{ id_size[id_num] = $4;  insert_array( temproot1 , symbol_copy( $2 ,"" ,$1  ) , $4 );  } }
    | decl ',' ID              {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert( temproot1 , symbol_copy( $3 ,"" ,$$  )  ); } }
    | decl ',' ID '=' NUM      {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert( temproot1 , symbol_copy( $3 ,"" ,$$  )  ); } }
    | decl ',' ID '[' NUM ']'  {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ id_size[id_num] = $5;  insert_array( temproot1 , symbol_copy( $3 ,"" ,$$  ) , $5 );   } }
    | decl ',' ID '[' NUM ']' '=' '{' arraylist '}'  {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( $3 ,"" ,$$  ) , $5 );   } }
    ;
    
    
    
funcdecl: typestr ID               {strcpy($$,$1);  if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); } else{ addid($1); insert( temproot1 , symbol_copy( $2 ,"" ,$1  )  );  if(func_a == 1){ insert_func_param( func_node , $1 ); }   } }
    | typestr ID '[' ']'   {strcpy($$,$1); printf("array type %s  = %s\n",$1,$2); if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( $2 ,"" ,$1  ) , 1 ); if(func_a == 1){ strcat($1, "array");  insert_func_param( func_node , $1 ); }  } }
    | funcdecl ',' ID              { printf("var type %s = %s\n",$$,$3); if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert( temproot1 , symbol_copy( $3 ,"" ,$$  )  ); if(func_a == 1){ insert_func_param( func_node , $$ ); } } }
    | funcdecl ',' ID '[' ']'  { printf("array type %s = %s\n",$$,$3); if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( $3 ,"" ,$$  ) , 1 ); if(func_a == 1){ strcat($$, "array"); insert_func_param( func_node , $$ ); }  } }
    ;    
    

statements: assignexpr ';'                                                                {}
    | statements assignexpr ';'                                                           {}
    | statements decl ';'                                                                 {}
    | statements returnstmt ';'                                                           {}
    | statements IF '(' logicalexpr ')' { temproot1 = change_scope( temproot1 ); lsn[loop_count] = lnum; loop_count++;        sprintf(rs1, "l%d", lnum);  sprintf(ag1, "t%d", tnum-1);   addicg(ag1,"$zero","beq",rs1);            printf("if not t%d goto l%d\n",tnum-1,lnum); lnum = lnum + 2 ; } '{' statements '}' { temproot1 = temproot1->parent_scope; } IFEL                                {   loop_count--; /*lnum++;*/ }
   // | statements IF '(' logicalexpr ')' '{' statements '}' ELSE '{' statements '}'        { printf("if-else statement executed \n\n"); }
    | statements { lsn[loop_count] = lnum; loop_count++;   sprintf(rs1,"l%d:",lnum );   addicg("","",":",rs1);     printf("l%d:\n",lnum); lnum++; } WHILE '(' logicalexpr ')' {     sprintf(rs1, "l%d", lnum);  sprintf(ag1, "t%d", tnum-1);   addicg(ag1,"$zero","beq",rs1);         printf("if not t%d goto l%d\n",tnum-1,lnum); temproot1 = change_scope( temproot1 ); lnum++; }  '{' statements '}'                             {  temproot1 = temproot1->parent_scope;        sprintf(rs1,"l%d",lsn[ loop_count - 1] );   addicg("","","j",rs1);      printf("goto l%d\n",lsn[loop_count-1]  );     sprintf(rs1,"l%d:",lsn[loop_count - 1] + 1  );   addicg("","",":",rs1);          printf("l%d:\n", lsn[loop_count - 1] + 1 ); loop_count--;  }
    | statements FOR {  temproot1 = change_scope( temproot1 ); } '(' assignexpr ';' { lsn[loop_count] = lnum; loop_count++; lnum_temp = lnum;     sprintf(rs1,"l%d:",lnum );   addicg("","",":",rs1);      printf("l%d:\n",lnum);  } logicalexpr ';' {        sprintf(rs1, "l%d", lnum + 3);  sprintf(ag1, "t%d", tnum-1);   addicg(ag1,"$zero","beq",rs1);          printf("if not t%d goto l%d\n",tnum-1,lnum+3 ); printf("goto l%d\n",lnum+2);       sprintf(rs1,"l%d:",lnum + 1 );   addicg("","",":",rs1);                printf("l%d:\n",lnum + 1);  } assignexpr {       sprintf(rs1,"l%d",lnum);   addicg("","","j",rs1);           printf("goto l%d\n",lnum);      sprintf(rs1,"l%d:",lnum + 2 );   addicg("","",":",rs1);       printf("l%d:\n",lnum+2); lnum = lnum + 4; } ')' '{' statements '}' { lnum_temp = lsn[loop_count - 1];       sprintf(rs1,"l%d",lnum_temp + 1);   addicg("","","j",rs1);            printf("goto l%d\n",lnum_temp + 1);  temproot1 = temproot1->parent_scope;     sprintf(rs1,"l%d:",lnum_temp + 3);   addicg("","",":",rs1);       printf("l%d:\n",lnum_temp + 3); loop_count--; }
    | ;
    

IFEL: ELSE {temproot1 = change_scope( temproot1 ); sprintf(rs1,"l%d",lsn[ loop_count - 1] + 1);   addicg("","","j",rs1);    printf("goto l%d\n",lsn[ loop_count - 1] + 1);   sprintf(rs1,"l%d:",lsn[ loop_count - 1]);   addicg("","",":",rs1);           printf("l%d:\n",lsn[ loop_count - 1] );  lnum++; } '{' statements '}'        { temproot1 = temproot1->parent_scope;       sprintf(rs1,"l%d:",lsn[ loop_count - 1] + 1);   addicg("","",":",rs1);           printf("l%d:\n", lsn[loop_count - 1] + 1 );   }
      | {  sprintf(rs1,"l%d:",lsn[ loop_count - 1]);   addicg("","",":",rs1);       printf("l%d:\n", lsn[loop_count - 1] );  }
    ;


returnstmt: SEND ID                                                       {  if( !lookup_for_id( temproot1 , $2 ) ){ printf("%s is not defined" , $2);  exit(0); } if( strcmp( func_node->ID_Value , leftassign ) != 0 ){ printf( "parameter %s in the function does not match with return type\n",$2 ); exit(0);  } printf("return from function %s\n",$2); }
          ;

assignexpr: ID '=' { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } if( leftassignvar[0] != '\0' ){ printf("%s  use of data type is incorrect and is%s\n",$1,leftassignvar); exit(0); }  prev_num = current_num; } expr                 {   sprintf(rs1, "id%d", prev_num);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","",rs1);   printf("id%d = t%d \n",prev_num,tnum - 1);  }
          | ID '=' CALL '(' '"' ID { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } if( leftassignvar[0] != '\0' ){ printf("%s  use of data type is incorrect and is%s\n",$1,leftassignvar); exit(0); }  if(!lookup_func_id( temproot1 , $6 ) ){ printf("%s is not defined" , $6);  exit(0); }  var_i = 0;  } '"' ','  paramlist ')'     { printf("id%d = send of %s  \n", current_num ,$6); }
          | ID '[' expr ']' '=' {  if( !lookup_array_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } /* printf("t%d = t%d\n",tnum,tnum-1); tnum++; */     sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);     printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;        sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);        printf("t%d = &id%d\n",tnum, current_num ); tnum++;        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);                 printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); ar_tnum = tnum; tnum++;   } expr                      {     sprintf(rs1, "t%d", ar_tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"*","",rs1);                    printf("*t%d = t%d\n",ar_tnum , tnum-1); tnum++;    }
          | ID '[' expr ']' '=' CALL '(' '"' ID { if( !lookup_array_id( temproot1 , $1  ) ){ printf("%s is not defined" , $1);  exit(0); }   if(!lookup_func_id( temproot1 , $9 ) ){ printf("%s is not defined" , $9);  exit(0); }  var_i = 0;  /* printf("t%d = t%d\n",tnum,tnum-1); tnum++; */     sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);       printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;       sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);     printf("t%d = &id%d\n",tnum, current_num  ); tnum++;             sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);   printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); ar_tnum = tnum; tnum++;   } '"' ',' paramlist ')'        {   printf("t%d = call %s\n",tnum,$9); tnum++;     sprintf(rs1, "t%d", ar_tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"*","",rs1);   printf("*t%d = t%d\n",ar_tnum , tnum-1); tnum++;   }
          ;
          
arraylist: NUM                { printf("number %d added in array\n",$1); }
         | arraylist ',' NUM  { printf("number %d added in array\n",$3); }
         ;
         
paramlist: ID                { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }  if(var_i >= 4 || func_node->list[var_i] == NULL ){ printf("extra parameters found in function call \n"); exit(0); } if( strcmp( func_node->list[var_i] , leftassign ) != 0 ){ printf( "parameter %s in the function call has different data type wrt function declaration funcnode,%d,   leftassign/%s/   ",$1,var_i , leftassign );  exit(0); }  printf("number %s added as parameter\n",$1); }
         | paramlist ',' ID  { if( !lookup_for_id( temproot1 , $3 ) ){ printf("%s is not defined" , $3);  exit(0); }   if(var_i >= 4 || func_node->list[var_i] == NULL ){ printf("extra parameters found in function call \n");  exit(0); } if( strcmp( func_node->list[var_i] , leftassign ) != 0 ){ printf( "parameter %s in the function call has different data type wrt function declaration",$3 ); exit(0); }   var_i++;  printf("number %s added as parameter\n",$3); }
         ;

expr: NUM                     {   sprintf(rs1, "t%d", tnum);    sprintf(ag1, "%d", $1); addicg(ag1,"","",rs1);    printf("t%d = %d\n",tnum,$1); tnum++; }
    | ID                      { strcpy($$,$1);  if( !lookup_func_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }   sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","",rs1);      printf("t%d = id%d\n",tnum, current_num ); tnum++;   }
    | '(' expr ')'            {  }
    | expr {expression[e_num] = tnum - 1; e_num++; } '/' expr           { e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"/",rs1);     printf("t%d = t%d / t%d\n",tnum,expression[e_num],tnum-1); tnum++; }
    | expr {expression[e_num] = tnum - 1; e_num++; } '*' expr           { e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"*",rs1);     printf("t%d = t%d * t%d\n",tnum,expression[e_num],tnum-1); tnum++; }
    | expr {expression[e_num] = tnum - 1; e_num++; } '-' expr           { e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"-",rs1);     printf("t%d = t%d - t%d\n",tnum,expression[e_num],tnum-1); tnum++; }
    | expr {expression[e_num] = tnum - 1; e_num++; } '+' expr           { e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"+",rs1);     printf("t%d = t%d + t%d\n",tnum,expression[e_num],tnum-1); tnum++; }
    
   
    /*| ID '[' NUM ']'          { printf("t%d = %d\n",tnum,$3); tnum++; printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;  printf("t%d = &%s\n",tnum,$1); tnum++; printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); tnum++;  printf("t%d = *t%d\n", tnum,tnum-1); tnum++;  }*/
    | ID '[' expr ']'           { /*printf("t%d = t%d\n",tnum,tnum-1); tnum++;*/ if( !lookup_right_array_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }                    sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);        printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;      sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);         printf("t%d = &id%d\n",tnum,current_num); tnum++;     sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);        printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); tnum++;     sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","",rs1);             printf("t%d = *t%d\n", tnum,tnum-1); tnum++;  }
    ;

logicalexpr: /*NUM                      { printf("t%d = %d\n",tnum,$1); $$=tnum; tnum++; }
    | ID                              { printf("t%d = %s\n",tnum,$1); $$=tnum; tnum++; if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }  } */
    expr    { $$=tnum-1; }
    | ID '[' expr ']'                  { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }  sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);      printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;     sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);      printf("t%d = &id%d\n",tnum, current_num); tnum++;        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);         printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); tnum++;      sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","",rs1);        printf("t%d = *t%d\n", tnum,tnum-1); $$=tnum; tnum++;  }
    | logicalexpr '<' logicalexpr     {        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", $1);   sprintf(ag2, "t%d", $3 ); addicg(ag1,ag2,"<",rs1);                                      printf("t%d = t%d < t%d\n",tnum,$1,$3); tnum++; /*printf("t%d = t%d < t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
    | logicalexpr '>' logicalexpr     {        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", $1);   sprintf(ag2, "t%d", $3 ); addicg(ag1,ag2,">",rs1);                                       printf("t%d = t%d > t%d\n",tnum,$1,$3); tnum++; /*printf("t%d = t%d > t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
    | '(' logicalexpr ')'             {  }
    ;


%%

//#include "symboltable.c"
//extern struct Scope_node* root ;
//extern struct Scope_node* temproot;
int main(int argc,char *argv[]){
  initialize_sym();
  yyparse();
  for(int i=0;i<instrn_num;i++){
  	printf("%s   %s   %s   %s\n",icg_instrn[i].arg1 ,icg_instrn[i].arg2 ,icg_instrn[i].op ,icg_instrn[i].res  );
  }

}

int yyerror(char *s){
  printf("\n\nError: %s \n",s);
  printf("\n\nSyntax Error: in line no %d >>>>> %s \n",lineno,yytext);
  yydebug=0;
  return 0;
}
