#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
struct Scope_node {
    struct Scope_node* parent_scope;
    struct data_node** symbol_table;         //hash table   name-> id (sizeof(a)/sizeof(a[0]);)
    int symb_tbl_size;
    int total_data;
};

struct data_node {
    char ID_Name[20];                  // Name string
    char  data_type[15];     	        // Data_Type       0 -> int , 1 -> char , 2 -> bool , 3 ->float
    char ID_Value[10];			// Value in String
    char ID_Var[10];                  // array or integer
    char **list;
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
    struct data_node *temp_d = tempsymbol_table[i];
    	while(temp_d != NULL){
        	char *name = temp_d->ID_Name;
        	long int name_len = strlen(name);
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
        		temp->next = temp_d;
        		temp_d = temp_d->next;
        		temp->next->next = NULL;
        	}
        	else{
        		root->symbol_table[sum_] = temp_d;
        		temp_d = temp_d->next;
        		root->symbol_table[sum_]->next = NULL;
        	} 
        }
    }
    root->symb_tbl_size = new_table_size;
}


void display(struct Scope_node* root){
	printf("\n------------------------------------------SYMBOL-TABLE-------------------------------------------------------\n");
	printf("-------------------------------------------------------------------------------------------------------------\n");
	printf("-IDENTIFIER-NAME--------------DATA-TYPE------------------IDENTIFIER-VALUE------------------------------------\n");
	printf("-------------------------------------------------------------------------------------------------------------\n");
	for(int i=0;i<root->symb_tbl_size;i++){
    	if(root->symbol_table[i] == NULL){
    		//printf("NULL \n");
    		continue;
    	}
    	struct data_node *temp = root->symbol_table[i];
	while(temp != NULL){
		int line1;
		printf("  %s",temp->ID_Name );
		int i = 0;
		while(temp->ID_Name[i] != '\0'){
	    		i++;
	    	}
	    	line1 = 28 - i;
		while(line1 > 0){
	    		printf(" ");
	    		line1--;
	    	}
    		printf("%s" ,temp->data_type); 
	    	i = 0;
		while(temp->data_type[i] != '\0'){
	    		i++;
	    	}
	    	line1 = 30 - i;
	    	while(line1 > 0){
	    		printf(" ");
	    		line1--;
	    	}
	    	printf("%s\n",  temp->ID_Value);
    	
    		temp = temp->next;
    	}    
    	//printf("\n");
    	}
    	printf("-------------------------------------------------------------------------------------------------------------\n");
}

void insert(struct Scope_node* root , struct data_node* temp1){
	//printf("starting \n");
	//display(root);
	if(root->total_data == root->symb_tbl_size){
		symb_table_doubling(root);
	}
        char *name = temp1->ID_Name;
        long int name_len = strlen(name);
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
        	temp->next = temp1;
        }
	else{
		root->symbol_table[sum_] = temp1;
        } 
    	root->total_data++;
}

struct data_node* symbol_copy(char *idname , char *idvalue , char *idtype){
    struct data_node* symbol = (struct data_node*) malloc(sizeof(struct data_node));
    strcpy( symbol->data_type , idtype );
    strcpy( symbol->ID_Name , idname );
    strcpy( symbol->ID_Var, "" );
    //for(int i=0;i<)
    strcpy( symbol->ID_Value, idvalue );
    //symbol->data_type = idtype;
    //symbol->ID_Name = idname;  //(char *)malloc(sizeof(char)*5);
    //symbol->ID_Value = idvalue;  
    symbol->next = NULL;
    return symbol;
}

void insert_array(struct Scope_node* root , struct data_node* temp1 , int num ){
	if(root->total_data == root->symb_tbl_size){
		symb_table_doubling(root);
	}
        char *name = temp1->ID_Name;
        //strcat(temp1->data_type, "array");
        strcat(temp1->ID_Var , "array");
        sprintf(temp1->ID_Value, "%d", num);
        
        //temp1->ID_Value
        long int name_len = strlen(name);
        int sum_ = 0; int mul = 1;
        for(int j=0;j<name_len;j++){
        	sum_ = sum_ +  ((int)name[j]*mul) % root->symb_tbl_size;
        	mul *= 2; 
        }
        sum_ = sum_ % root->symb_tbl_size;
        struct data_node *temp_ar = root->symbol_table[sum_];
        if(root->symbol_table[sum_]  != NULL){
       	struct data_node *temp = root->symbol_table[sum_];
        	while(temp->next != NULL){
        		temp = temp->next;
        	}
        	temp->next = temp1;
        	temp_ar = temp1;
        	
        }
	else{
		root->symbol_table[sum_] = temp1;
		temp_ar = temp1;
        } 
        /*num--;
        for(int count = 0;count < num;count++){ 
		temp_ar->next = symbol_copy( temp1->ID_Name ,"" ,temp1->data_type  );
		temp_ar = temp_ar->next;
     	}*/
        root->total_data++;
}

struct data_node* insert_function(struct Scope_node* root , struct data_node* temp1 ){
	if(root->total_data == root->symb_tbl_size){ 
		symb_table_doubling(root);
	}
        char *name = temp1->ID_Name;
        strcat(temp1->data_type, "function");
        int size_ = 4;
        temp1->list = (char**) malloc(size_ * sizeof(temp1->ID_Name ));
        //sprintf(temp1->ID_Value, "%d", num);

        long int name_len = strlen(name);
        int sum_ = 0; int mul = 1;
        for(int j=0;j<name_len;j++){
        	sum_ = sum_ +  ((int)name[j]*mul) % root->symb_tbl_size;
        	mul *= 2; 
        }
        sum_ = sum_ % root->symb_tbl_size;
        struct data_node *temp_ar = root->symbol_table[sum_];
        if(root->symbol_table[sum_]  != NULL){
       	struct data_node *temp = root->symbol_table[sum_];
        	while(temp->next != NULL){
        		temp = temp->next;
        	}
        	temp->next = temp1;
        	temp_ar = temp1;
        	
        }
	else{
		root->symbol_table[sum_] = temp1;
		temp_ar = temp1;
        } 
        
        root->total_data++;
        return temp1;
}

void insert_func_param( struct data_node* temp , char* paramtype ){
        	int i = 0;
        	
        	while(i < 4 && temp->list[i] != NULL){
        		i++;
        	}
        	if(i == 4){
        		printf("NOT MORE THAN 4 PARAMETERS CAN BE DEFINED IN FUNCTION");
        		exit(0);
        	}
        	char ar[20] ;
        	strcpy(ar , paramtype);
        	temp->list[i] = ar;
        	printf("%s type parameter added to the function \n ",temp->list[i]);
        	//strcpy(temp->list[i] , paramtype);
        
}

struct Scope_node* root1 ;
struct Scope_node* temproot1;
struct data_node *func_node;
int func_a = 0;
char leftassign[20];
char leftassignvar[20];
//struct Scope_node* funcroot1 ;
//struct Scope_node* functemproot1;
 // struct Scope_node* root = newScope_node();
// struct Scope_node* temproot = root;

void initialize_sym(){
	root1 = newScope_node();
	temproot1 = root1;
	func_node = (struct data_node*) malloc(sizeof(struct data_node));
	//funcroot1 = newScope_node();
	//functemproot1 = funcroot1;
}

struct Scope_node* change_scope(struct Scope_node* root ){
	display( root );
	struct Scope_node* root_child = newScope_node();
	root_child->parent_scope = root;
	return root_child;
}

struct Scope_node* lift_scope(struct Scope_node* root ){
	display( root );
	struct Scope_node* root_child = newScope_node();
	root_child->parent_scope = root->parent_scope ;
	return root_child;
}


bool lookup( struct Scope_node* root , char *name ){
        long int name_len = strlen(name);
        int sum_ = 0; int mul = 1;
        //char name_ar
        for(int j=0;j<name_len;j++){
        	
        	sum_ = sum_ +  ((int)name[j]*mul) % root->symb_tbl_size;
        	mul *= 2; 
        }
        sum_ = sum_ % root->symb_tbl_size;
        if(root->symbol_table[sum_]  != NULL){
       	struct data_node *temp = root->symbol_table[sum_];
        	while(temp != NULL){ 
        		
        		//printf("\n \n string id  :: %ld  \n \n",name_len );
        		long int size_id = strlen( temp->ID_Name );
        		if( name_len == size_id ){
				int i = 0;
				bool isequal = true;
				while(i < name_len  && isequal){
					if( temp->ID_Name[i] != name[i] ){
						isequal = false;
					}
					printf("\n \n %c  %c \n \n", temp->ID_Name[i]  , name[i] );
					i++;
				}
				
				printf("\n \n string id  %s  \n \n",name);
				if( isequal ){
					//char ar[20] ;
					//strcpy(ar , temp->data_type);
					//temp->list[i] = ar;
					strcpy(leftassign , temp->data_type);
					//strcpy(ar , temp->ID_Var);
					strcpy(leftassignvar ,temp->ID_Var);
					
					return true;
				}
        		}
        		temp = temp->next;
        	}
        	return false;
        }
	else{
		return false;
        }

}

bool lookup_for_id( struct Scope_node* root , char *name){
	while(root){
	printf("1st scope \n");
		if(lookup(root , name)){
			return true;
		}
		root = root->parent_scope;
	}
	return false;
}




bool lookup_func( struct Scope_node* root , char *name ){
        long int name_len = strlen(name);
        int sum_ = 0; int mul = 1;
        //char name_ar
        for(int j=0;j<name_len;j++){
        	
        	sum_ = sum_ +  ((int)name[j]*mul) % root->symb_tbl_size;
        	mul *= 2; 
        }
        sum_ = sum_ % root->symb_tbl_size;
        if(root->symbol_table[sum_]  != NULL){
       	struct data_node *temp = root->symbol_table[sum_];
        	while(temp != NULL){ 
        		
        		//printf("\n \n string id  :: %ld  \n \n",name_len );
        		long int size_id = strlen( temp->ID_Name );
        		if( name_len == size_id ){
				int i = 0;
				bool isequal = true;
				while(i < name_len  && isequal){
					if( temp->ID_Name[i] != name[i] ){
						isequal = false;
					}
					printf("\n \n %c  %c \n \n", temp->ID_Name[i]  , name[i] );
					i++;
				}
				
				printf("\n \n string id  %s  \n \n",name);
				if( isequal ){
					if( strcmp(leftassign , temp->data_type) != 0 ){
						printf("\n %s variable type does not match with left assignment\n",temp->ID_Name);
						printf("\nleftassign data type -%s, right assignment data type -%s\n", leftassign , temp->data_type);
						exit(0);
					}
					return true;
				}
        		}
        		temp = temp->next;
        	}
        	return false;
        }
	else{
		return false;
        }

}

bool lookup_func_id( struct Scope_node* root , char *name){
	while(root){
	printf("1st scope \n");
		if(lookup_func(root , name)){
			return true;
		}
		root = root->parent_scope;
	}
	return false;
}



