#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 64

struct DataItem {
   char key[30];
   char data[100]; 
};

struct DataItem* hashArray[SIZE]; 
struct DataItem* item;

int hashCode(char a[]) {
   int sum=0;
   int i=0;
   while(a[i]!='\0'){
      sum+=(int) a[i];
      i++;
   }
   return sum%SIZE;
}

struct DataItem *search(char key[]) {
   int hashIndex = hashCode(key);
   while(hashArray[hashIndex] != NULL) {
      if(strcmp(hashArray[hashIndex]->key,key)==0)
         return hashArray[hashIndex]; 
      ++hashIndex;
      hashIndex %= SIZE;
   }        
   return NULL;        
}

void insert(char key[],char token[]) {

   if(strcmp(token,"string_constant")==0 || strcmp(token,"char_constant")==0){
      strncpy(key,key+1,strlen(key));
      key[strlen(key)-1]='\0';
   }


   int hashIndex = hashCode(key);

   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != "") {
      if(strcmp(hashArray[hashIndex]->key,key)==0){
         return;
      }
      ++hashIndex;
      hashIndex %= SIZE;
   }

   struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
   strncpy(item->data, token, 100);
   item->data[100 - 1] = '\0';
   strncpy(item->key, key, 30);
   item->key[30 - 1] = '\0';

   hashArray[hashIndex] = item;
}

void  delete(struct DataItem* item){
   int hashIndex = hashCode(item->key);
   while(hashArray[hashIndex] != NULL) {	
      if(strcmp(hashArray[hashIndex]->key,item->key)==0) {
         strcpy(hashArray[hashIndex]->data,"");
         strcpy(hashArray[hashIndex]->key,"");
      }
      ++hashIndex;
      hashIndex %= SIZE;
   }           
}

void display(){
   printf("\nSYMBOL TABLE:\n\t\t\tTOKEN NAME\t\t\tLEXEME\n\n");
   for(int i = 0; i<SIZE; i++) {
      if(hashArray[i] != NULL)
         printf("\t\t\t%s\t\t\t%s\n",hashArray[i]->data,hashArray[i]->key);
   }
}