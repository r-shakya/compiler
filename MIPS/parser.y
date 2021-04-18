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

%token NUM ID START END INTEGER CHAR FLOAT IF ELSE WHILE FOR VOID CALL SEND typestr MAIN CSTRING OUTPUT INPUT LE GE EE

%type <number> NUM
%type <string> ID CSTRING
%type <string> VOID expr0 expr expr1 expr2 expr3 expr4 exprl0 exprl exprl1 exprl2 exprl3 exprl4
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
    | declarations VOID ID { if( lookup( temproot1 , $3  ) ){ printf("Variable named %s exists already\n ",$3); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( $3 ,$2 ,""  )  ); func_a = 1; } temproot1 = change_scope( temproot1 );  ficgdata[f_num].s = id_num; /*printf("f_num %d id_num %d\n",f_num,id_num);*/ ficg[f_num].start = instrn_num;  sprintf(rs1,"%s:",$3);   addicg("","","f",rs1);  } '(' funcdecl ')'  { func_a = 0;    ficgdata[f_num].param_end = id_num; printf("f_num %d id_num %d\n",f_num,id_num); }  '{' statements '}'    {  temproot1 = temproot1->parent_scope;    ficgdata[f_num].e = id_num;    ficg[f_num].end = instrn_num - 1;  f_num++;   }
    | declarations typestr ID {   if( lookup( temproot1 , $3  ) ){ printf("Variable named %s exists already\n ",$3); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( $3 ,$2 ,""  )  ); func_a = 1;  }    temproot1 = change_scope( temproot1 ); ficgdata[f_num].s = id_num; ficg[f_num].start = instrn_num;  sprintf(rs1,"%s:",$3);   addicg("","","f",rs1);    } '(' funcdecl ')' { func_a = 0; ficgdata[f_num].param_end = id_num; }  '{' statements '}' {  temproot1 = temproot1->parent_scope; ficgdata[f_num].e = id_num;   ficg[f_num].end = instrn_num - 1;  f_num++;} 
    | ;

decl: typestr ID               {strcpy($$,$1);  if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); } else{    insert( temproot1 , symbol_copy( $2 ,"" ,$1  )  );    } }
    | typestr ID '=' NUM       {strcpy($$,$1);  if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); } else{  insert( temproot1 , symbol_copy( $2 ,"" ,$1  )  );  } }
    | typestr ID '[' NUM ']'   {strcpy($$,$1);  if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); }   else{ id_size[id_num] = $4; insert_array( temproot1 , symbol_copy( $2 ,"" ,$1  ) , $4 );       } }
    | typestr ID '[' NUM ']' '=' '{' arraylist '}'   {strcpy($$,$1);   if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); }   else{ id_size[id_num] = $4;  insert_array( temproot1 , symbol_copy( $2 ,"" ,$1  ) , $4 );  } }
    | decl ',' ID              {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert( temproot1 , symbol_copy( $3 ,"" ,$$  )  ); } }
    | decl ',' ID '=' NUM      {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert( temproot1 , symbol_copy( $3 ,"" ,$$  )  ); } }
    | decl ',' ID '[' NUM ']'  {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ id_size[id_num] = $5;  insert_array( temproot1 , symbol_copy( $3 ,"" ,$$  ) , $5 );   } }
    | decl ',' ID '[' NUM ']' '=' '{' arraylist '}'  {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( $3 ,"" ,$$  ) , $5 );   } }
    ;
    
    
    
funcdecl: typestr ID               {strcpy($$,$1); /*printf("idnum before%d",id_num);*/ if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); } else{ addid($1); insert( temproot1 , symbol_copy( $2 ,"" ,$1  )  );  if(func_a == 1){ insert_func_param( func_node , $1 ); }   }  /*printf("idnum after%d",id_num);*/ }
    | typestr ID '[' ']'   {strcpy($$,$1);  if( lookup( temproot1 , $2  ) ){ printf("Variable named %s exists already\n ",$2); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( $2 ,"" ,$1  ) , 1 ); if(func_a == 1){ strcat($1, "array");  insert_func_param( func_node , $1 );/*printf("%s added",$1);*/ }  } }
    | funcdecl ',' ID              {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert( temproot1 , symbol_copy( $3 ,"" ,$$  )  ); if(func_a == 1){ insert_func_param( func_node , $$ ); } } }
    | funcdecl ',' ID '[' ']'  {  if( lookup( temproot1 , $3 ) ){ printf( "variable named %s exists already", $3 ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( $3 ,"" ,$$  ) , 1 ); if(func_a == 1){ strcat($$, "array"); insert_func_param( func_node , $$ ); /*printf("%s added",$$);*/}  } }
    | {}
    ;    
    

statements: assignexpr ';'                                                                {}
    | statements assignexpr ';'                                                           {}
    | statements decl ';'                                                                 {}
    | statements outputstmt ';'                                                           {}
    | statements inputstmt ';'                                                            {}
    | statements returnstmt ';'                                                           {}
    | statements IF '(' logicalexpr ')' { temproot1 = change_scope( temproot1 ); lsn[loop_count] = lnum; loop_count++;        sprintf(rs1, "l%d", lnum);  sprintf(ag1, "t%d", tnum-1);   addicg(ag1,"$zero","beq",rs1);             lnum = lnum + 2 ; } '{' statements '}' { temproot1 = temproot1->parent_scope; } IFEL                                {   loop_count--; /*lnum++;*/ }
   // | statements IF '(' logicalexpr ')' '{' statements '}' ELSE '{' statements '}'        { printf("if-else statement executed \n\n"); }
    | statements { lsn[loop_count] = lnum; loop_count++;   sprintf(rs1,"l%d:",lnum );   addicg("","",":",rs1);      lnum++; } WHILE '(' logicalexpr ')' {     sprintf(rs1, "l%d", lnum);  sprintf(ag1, "t%d", tnum-1);   addicg(ag1,"$zero","beq",rs1);          temproot1 = change_scope( temproot1 ); lnum++; }  '{' statements '}'                             {  temproot1 = temproot1->parent_scope;        sprintf(rs1,"l%d",lsn[ loop_count - 1] );   addicg("","","j",rs1);           sprintf(rs1,"l%d:",lsn[loop_count - 1] + 1  );   addicg("","",":",rs1);           loop_count--;  }
    | statements FOR {  temproot1 = change_scope( temproot1 ); } '(' assignexpr ';' { lsn[loop_count] = lnum; loop_count++; lnum_temp = lnum;     sprintf(rs1,"l%d:",lnum );   addicg("","",":",rs1);        } logicalexpr ';' {        sprintf(rs1, "l%d", lnum + 3);  sprintf(ag1, "t%d", tnum-1);   addicg(ag1,"$zero","beq",rs1);                sprintf(rs1,"l%d",lnum + 2 );   addicg("","","j",rs1);               sprintf(rs1,"l%d:",lnum + 1 );   addicg("","",":",rs1);  } assignexpr {       sprintf(rs1,"l%d",lnum);   addicg("","","j",rs1);      sprintf(rs1,"l%d:",lnum + 2 );   addicg("","",":",rs1);        lnum = lnum + 4; } ')' '{' statements '}' { lnum_temp = lsn[loop_count - 1];       sprintf(rs1,"l%d",lnum_temp + 1);   addicg("","","j",rs1);              temproot1 = temproot1->parent_scope;     sprintf(rs1,"l%d:",lnum_temp + 3);   addicg("","",":",rs1);        loop_count--; }
    | ;
    

IFEL: ELSE {temproot1 = change_scope( temproot1 ); sprintf(rs1,"l%d",lsn[ loop_count - 1] + 1);   addicg("","","j",rs1);   sprintf(rs1,"l%d:",lsn[ loop_count - 1]);   addicg("","",":",rs1);             lnum++; } '{' statements '}'        { temproot1 = temproot1->parent_scope;       sprintf(rs1,"l%d:",lsn[ loop_count - 1] + 1);   addicg("","",":",rs1);           }
      | {  sprintf(rs1,"l%d:",lsn[ loop_count - 1]);   addicg("","",":",rs1);         }
    ;


returnstmt: SEND ID                                                       {  if( !lookup_for_id( temproot1 , $2 ) ){ printf("%s is not defined" , $2);  exit(0); } if( strcmp( func_node->ID_Value , leftassign ) != 0 ){ printf( "parameter %s in the function does not match with return type\n",$2 ); exit(0);  }         sprintf(rs1,"id%d",current_num);   addicg("","","return",rs1);             }
          ;

outputstmt: OUTPUT '(' CSTRING ')'                                           { strcpy(strdata[sdnum] , $3); sdnum++;    idntfrs[id_num] = 4; sprintf(ag1, "id%d",id_num );  addicg(ag1,"","o","s"); id_num++;  /* char *str2 = malloc(sizeof(char) * (strlen($3) - 2)) ;   strncpy(str2,  $3 + 1,strlen($3) - 2); */  		  }
  /*        | OUTPUT '(' ID ')'                                                {    if( !lookup_func_id( temproot1 , $3 ) ){ printf("%s is not defined" , $3);  exit(0); }       sprintf(ag1, "id%d", current_num); addicg(ag1,"","o","i");       printf("output   %s\n\n",$3); }
      */    | OUTPUT '(' expr ')'                                                {      sprintf(ag1, "t%d", tnum - 1); addicg(ag1,"","o","i");        }
          ;
          
inputstmt: INPUT '(' ID ')'                             {    if( !lookup_for_id( temproot1 , $3 ) ){ printf("%s is not defined" , $3);  exit(0); }       sprintf(ag1, "id%d", current_num); addicg(ag1,"","i","i");     }
	    | INPUT '(' ID '[' expr ']' ')'              {     if( !lookup_right_array_id( temproot1 , $3 ) ){ printf("%s is not defined" , $3);  exit(0); }                    sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);         tnum++;      sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);          tnum++;     sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);         tnum++;   /*   sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","b",rs1);            printf("t%d = *t%d\n", tnum,tnum-1); tnum++; */  sprintf(ag1, "t%d", tnum - 1); addicg(ag1,"","i","a");        }
          ;

assignexpr: ID '=' { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } if( leftassignvar[0] != '\0' ){ printf("%s  use of data type is incorrect and is%s\n",$1,leftassignvar); exit(0); }  prev_num = current_num; } expr                 {   sprintf(rs1, "id%d", prev_num);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","",rs1);     }
          | ID '=' CALL '('  ID { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } if( leftassignvar[0] != '\0' ){ printf("%s  use of data type is incorrect and is%s\n",$1,leftassignvar); exit(0); }  prev_curr_num = current_num;  if(!lookup_func_id( temproot1 , $5 ) ){ printf("%s is not defined" , $5);  exit(0); }  var_i = 0;  sprintf(ag1, "%d", func_no); addicg(ag1,"","storereg","");   }  ','  paramlist ')'     {           sprintf(ag1, "%d", func_no); addicg(ag1,"","loadparam","");        sprintf(ag1, "%s", $5); addicg(ag1,"","jal","");  sprintf(ag1, "id%d",prev_curr_num ); addicg(ag1,"","store","");    param_i = 0;       }
          | ID '[' expr ']' '=' {  if( !lookup_array_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); } /* printf("t%d = t%d\n",tnum,tnum-1); tnum++; */     sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);      tnum++;        sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);         tnum++;        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);                  ar_tnum = tnum; tnum++;   } expr                      {     sprintf(rs1, "t%d", ar_tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","a",rs1);                     tnum++;    }
          | ID '[' expr ']' '=' CALL '(' ID { if( !lookup_array_id( temproot1 , $1  ) ){ printf("%s is not defined" , $1);  exit(0); }   if(!lookup_func_id( temproot1 , $8 ) ){ printf("%s is not defined" , $8);  exit(0); }  var_i = 0;  /* printf("t%d = t%d\n",tnum,tnum-1); tnum++; */     sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);        tnum++;       sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);      tnum++;             sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);    ar_tnum = tnum; tnum++;             }  ',' paramlist ')'        {    tnum++;     sprintf(rs1, "t%d", ar_tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","a",rs1);    tnum++;   }
          ;
          
arraylist: NUM                { /*printf("number %d added in array\n",$1);*/ }
         | arraylist ',' NUM  { /*printf("number %d added in array\n",$3);*/ }
         ;
         
paramlist: ID                { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }  if(var_i >= 4 || func_node->list[var_i] == NULL ){ printf("extra parameters found in function call \n"); exit(0); }  char leftdata[30]; strcat(leftdata,leftassign); strcat(leftdata,leftassignvar);  if( strcmp( func_node->list[var_i] , leftdata ) != 0 ){ printf( "parameter %s in the function call has different data type wrt function declaration funcnode,%d,   leftdata/%s/   ",$1,var_i , leftdata );  exit(0); }  var_i++;        sprintf(ag1, "id%d", current_num); sprintf(rs1, "$s%d", param_i + 3); addicg(ag1,"","param",rs1); param_i++;     strcpy(leftdata,"");   }
         | paramlist ',' ID  { if( !lookup_for_id( temproot1 , $3 ) ){ printf("%s is not defined" , $3);  exit(0); }   if(var_i >= 4 || func_node->list[var_i] == NULL ){ printf("extra parameters found in function call \n");  exit(0); } char leftdata[30]; strcat(leftdata,leftassign); strcat(leftdata,leftassignvar);  if( strcmp( func_node->list[var_i] , leftdata ) != 0 ){ printf( "parameter %s in the function call has different data type wrt function declaration",$3 ); exit(0); }   var_i++;    sprintf(ag1, "id%d", current_num); sprintf(rs1, "$s%d", param_i + 3); addicg(ag1,"","param",rs1); param_i++;  strcpy(leftdata,"");  }
         ;


expr:  expr0			{  }
    | '-' { Isneg = 1; }expr0                {  }
    ;


expr0: expr {expression[e_num] = tnum - 1; e_num++; }   '+' expr1           { e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"+",rs1);      tnum++;  }
    | expr1                    { }
    ;

expr1: expr1 {expression[e_num] = tnum - 1; e_num++; } '-' expr2         { e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"-",rs1);      tnum++; }
    | expr2                    {  }
    ;
    
expr2: expr2 {expression[e_num] = tnum - 1; e_num++; } '*' expr3         {  e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"*",rs1);      tnum++;  }
    | expr3                    {  }
    ;
    
expr3: expr3 {expression[e_num] = tnum - 1; e_num++; } '/' expr4         { e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"/",rs1);      tnum++; }
    | expr4                    {  }
    ;

expr4: NUM                     { if(Isneg == 1){ $1 = -$1; Isneg = 0; }  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "%d", $1); addicg(ag1,"","",rs1); tnum++; }
    | ID                       {  strcpy($$,$1);  if( !lookup_func_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }   sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","",rs1);       tnum++; if(Isneg == 1){   sprintf(rs1, "t%d", tnum);    sprintf(ag1, "%d", 0); addicg(ag1,"","",rs1);     tnum++; 		sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); sprintf(ag2, "t%d", tnum - 2 ); addicg(ag1,ag2,"-",rs1);      tnum++; Isneg = 0; }  }
    |  ID '[' expr ']'           {  if( !lookup_right_array_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }                    sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);         tnum++;      sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);          tnum++;     sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);         tnum++;     sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","b",rs1);     tnum++;  if(Isneg == 1){   sprintf(rs1, "t%d", tnum);    sprintf(ag1, "%d", 0); addicg(ag1,"","",rs1);     tnum++; 		sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); sprintf(ag2, "t%d", tnum - 2 ); addicg(ag1,ag2,"-",rs1);      tnum++;  Isneg = 0;  }  }
    | '('{ if(Isneg == 1){ Isbneg = 1; Isneg = 0; } } expr ')'             {  if(Isbneg == 1){   sprintf(rs1, "t%d", tnum);    sprintf(ag1, "%d", 0); addicg(ag1,"","",rs1);     tnum++; 		sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); sprintf(ag2, "t%d", tnum - 2 ); addicg(ag1,ag2,"-",rs1);      tnum++;  Isbneg = 0; }  } 
    ;





exprl:  exprl0			{  }
    | '-' { Isneg = 1; }exprl0                {  }
    ;


exprl0: exprl {expression[e_num] = tnum - 1; e_num++; }   '+' exprl1           { e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"+",rs1);      tnum++;  }
    | exprl1                    { }
    ;

exprl1: exprl1 {expression[e_num] = tnum - 1; e_num++; } '-' exprl2         { e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"-",rs1);      tnum++; }
    | exprl2                    {  }
    ;
    
exprl2: exprl2 {expression[e_num] = tnum - 1; e_num++; } '*' exprl3         {  e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"*",rs1);      tnum++;  }
    | exprl3                    {  }
    ;
    
exprl3: exprl3 {expression[e_num] = tnum - 1; e_num++; } '/' exprl4         { e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"/",rs1);      tnum++; }
    | exprl4                    {  }
    ;


exprl4: NUM                     {  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "%d", $1); addicg(ag1,"","",rs1); tnum++; }
    | ID                       {  strcpy($$,$1);  if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }   sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","",rs1);       tnum++;     }
    |  ID '[' expr ']'           {  if( !lookup_array_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }                    sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);         tnum++;      sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);          tnum++;     sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);         tnum++;     sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","b",rs1);     tnum++;         }
    ;







logicalexpr: /*NUM                      { sprintf(rs1, "t%d", tnum);    sprintf(ag1, "%d", $1); addicg(ag1,"","",rs1);  printf("t%d = %d\n",tnum,$1); $$=tnum; tnum++; }
    | ID                              {  $$=tnum;  if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","",rs1);      printf("t%d = id%d\n",tnum, current_num ); tnum++; } */
    exprl    { $$=tnum-1; } 
    | ID '[' expr ']'                  { if( !lookup_for_id( temproot1 , $1 ) ){ printf("%s is not defined" , $1);  exit(0); }  sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);       tnum++;     sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);       tnum++;        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1); tnum++;      sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","b",rs1);         $$=tnum; tnum++;  }
    | logicalexpr '<' logicalexpr     {        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", $1);   sprintf(ag2, "t%d", $3 ); addicg(ag1,ag2,"<",rs1);                                       tnum++; /*printf("t%d = t%d < t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
    | logicalexpr '>' logicalexpr     {        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", $1);   sprintf(ag2, "t%d", $3 ); addicg(ag1,ag2,">",rs1);                                        tnum++; /*printf("t%d = t%d > t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
    | logicalexpr GE logicalexpr     {        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", $1);   sprintf(ag2, "t%d", $3 ); addicg(ag1,ag2,">=",rs1);                                        tnum++; /*printf("t%d = t%d > t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
    | logicalexpr LE logicalexpr     {        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", $1);   sprintf(ag2, "t%d", $3 ); addicg(ag1,ag2,"<=",rs1);                                        tnum++; /*printf("t%d = t%d > t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
    | logicalexpr EE logicalexpr     {        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", $1);   sprintf(ag2, "t%d", $3 ); addicg(ag1,ag2,"==",rs1);                                        tnum++; /*printf("t%d = t%d > t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
    | '(' logicalexpr ')'             {  }
    ;


%%

//#include "symboltable.c"
//extern struct Scope_node* root ;
//extern struct Scope_node* temproot;
int main(int argc,char *argv[]){
  initialize_sym();
  yyparse();
  icg_to_mips();
  for(int i=0;i<f_num;i++){
  	icg_to_mips_for_func( ficg[i].start ,ficg[i].end , i);
  }
  

}

int yyerror(char *s){
  printf("\n\nError: %s \n",s);
  printf("\n\nSyntax Error: in line no %d >>>>> %s \n",lineno,yytext);
  yydebug=0;
  return 0;
}
