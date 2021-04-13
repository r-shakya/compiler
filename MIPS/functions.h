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
