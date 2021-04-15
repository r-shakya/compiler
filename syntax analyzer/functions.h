#include<stdio.h>
#include<string.h>

extern int lineno;
extern char *yytext;

int checkDay(int d){
  return (d>=1 && d<=31);
}

int checkYear(int y){
  return (y>=1900 && y<=2050);
}

int checkLeapYear(int y){
  if(y%400==0){
    return 1;
  }
  else if(y%100==0){
    return 0;
  }
  else if(y%4==0){
    return 1;
  }
  else{
    return 0;
  }
}

int daysInMonth(char month[],int y){

char *months[12]={"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};

if(checkLeapYear(y) && strcmp(month,"feb")==0){
    return 29;
}

for(int i=0;i<12;i++){
   if(strcmp(months[i],month)==0){
        return days[i];
   }
}
return -1;
}

int checkDate(int d,char m[],int y){
  if(!checkDay(d)){
     printf("Day should be between 1 - 31\n");
     return 0;
  }

  if(!checkYear(y)){
     printf("Year should be between 1900 - 2050\n");
     return 0;
  }

  int days=daysInMonth(m,y);

  if(days==-1){
    printf("Invalid Month Name\n");
    return 0;
  }
  
  if(d<=days){
    //printf("Accepted\n");
    return 1;
  }
  return 0;
}
