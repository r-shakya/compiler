#include <stdio.h>
#include <stdlib.h>
struct Scope_node {
    struct Scope_node* parent_scope;
    struct data_node** symbol_table;         //hash table   name-> id (sizeof(a)/sizeof(a[0]);)
    int symb_tbl_size;
    int total_data;
};

struct data_node {
    char *ID_Name;                   // Name string
    char  *data_type;     // Data_Type       0 -> int , 1 -> char , 2 -> bool , 3 ->float
    char *ID_Value;			// Value in String
    struct data_node *next;
};

struct Scope_node* newScope_node()
{
    struct Scope_node* Scope_node
        = (struct Scope_node*)malloc(sizeof(struct Scope_node));
 	
    Scope_node->parent_scope = NULL;
    Scope_node->symbol_table = (struct data_node**)malloc(4*sizeof(struct data_node));
    Scope_node->symb_tbl_size = 4;
    Scope_node->total_data = 0;
    for(int i=0;i<4;i++){
        Scope_node->symbol_table[i] = NULL;
    }
    return (Scope_node);
}

struct Scope_node* root = newScope_node();
struct Scope_node* temproot = root;

void symb_table_doubling(struct Scope_node* root){
    struct data_node* tempsymbol_table[root->symb_tbl_size];

    int new_table_size = 2*root->symb_tbl_size;
    for(int i=0;i<root->symb_tbl_size;i++){
    	tempsymbol_table[i] = root->symbol_table[i];
    }
    
    root->symbol_table = (struct data_node**)realloc(root->symbol_table , new_table_size*sizeof(struct data_node));
    
    for(int i=0;i<new_table_size;i++){
    	root->symbol_table[i] = NULL;
    }
    for(int i=0;i<root->symb_tbl_size;i++){
    	if(tempsymbol_table[i] != NULL){
    		
        	char *name = tempsymbol_table[i]->ID_Name;
        	int name_len = sizeof(name)/sizeof(char);
        	int sum_ = 0; int mul = 1;
        	for(int j=0;j<name_len;j++){
        		sum_ = sum_ +  ((int)name[j]*mul)%new_table_size;
        		mul *= 2; 
        	}
        	sum_ = sum_ % new_table_size;
        	if(root->symbol_table[sum_]  != NULL){
        		struct data_node *temp = root->symbol_table[sum_];
        		while(temp->next != NULL){
        			temp = temp->next;
        		}
        		temp->next = tempsymbol_table[i];
        	}
        	else{
        		root->symbol_table[sum_] = tempsymbol_table[i];
        	} 
        }
    }
    root->symb_tbl_size = new_table_size;
}




void insert(struct Scope_node* root,struct data_node* temp){
	if(root->total_data == root->symb_tbl_size){
		symb_table_doubling(root);
	}
        char *name = temp->ID_Name;
        int name_len = sizeof(name)/sizeof(char);
        int sum_ = 0; int mul = 1;
        for(int j=0;j<name_len;j++){
        	sum_ = sum_ +  ((int)name[j]*mul) % root->symb_tbl_size;
        	mul *= 2; 
        }
        sum_ = sum_ % root->symb_tbl_size;
        if(root->symbol_table[sum_]  != NULL){
       	struct data_node *temp = root->symbol_table[sum_];
        	while(temp->next != NULL){
        		temp = temp->next;
        	}
        	temp->next = temp;
        }
	else{
		root->symbol_table[sum_] = temp;
        } 
    	root->total_data++;
}

struct data_node* symbol_copy(char *idname , char *idvalue , char *idtype){
    struct data_node* symbol = (struct data_node*) malloc(sizeof(struct data_node));
    symbol->data_type = idtype;
    symbol->ID_Name = idname;  //(char *)malloc(sizeof(char)*5);
    symbol->ID_Value = idvalue;  
    return symbol;
}


void display(struct Scope_node* root){
	for(int i=0;i<root->symb_tbl_size;i++){
    	if(root->symbol_table[i] == NULL){
    		//printf("NULL \n");
    		continue;
    	}
    	struct data_node *temp = root->symbol_table[i];
	while(temp != NULL){
    		printf("id name : %s    ,  data_type : %s   ,  id_value   :  %s                         ",temp->ID_Name  , temp->data_type ,  temp->ID_Value); 
    		temp = temp->next;
    	}    
    	printf("\n");
    	}
}




