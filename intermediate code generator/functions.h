#include<stdio.h>
#include<string.h>

extern int lineno;
extern char *yytext;

int tnum = 0;
int lnum = 0;
int ar_tnum = 0;
int lnum_temp ;
int lsn[180];  // lsn is loop starting number
int loop_count = 0;

int expression[180];  // 
int e_num = 0;

int idntfrs[250] ; // for int = 0 , for float = 1 , for char = 2 , for array = 3; for array we need to make sure we save its size too;
int id_num = 0;
int id_size[250] ; // for size of array
