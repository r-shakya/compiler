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
    int  ID_num;
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



void addid(char *data_type){
	if(data_type[0] == 'i'){
		idntfrs[id_num] = 0;
	}
	else if( data_type[0] == 'f' ){
		idntfrs[id_num] = 1;	
	}
	else{
		idntfrs[id_num] = 2;	
	}
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
    
    if(idtype != ""){
   // printf( "  idname =    %s   , idvalue  =   %s     ,idtype   =  %s  \n ",idname , idvalue , idtype );
    	symbol->ID_num = id_num;
    	addid(idtype);
    	
    	id_num++;
    }
     
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
        idntfrs[id_num - 1] = 3;
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
        	temp->list[i] = malloc(sizeof(char) * strlen(ar)); 
        	//temp->list[i] = ar;
        	strncpy(temp->list[i], ar, strlen(ar));
        	printf("size of charr type %ld \n",strlen(ar));
        	
        	printf("%s type parameter added to the function,number=%d, \n ",temp->list[i]  , i);
        	//strcpy(temp->list[i] , paramtype);
        
}

  int var_i = 0;
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
	//display( root );
	struct Scope_node* root_child = newScope_node();
	root_child->parent_scope = root;
	return root_child;
}

struct Scope_node* lift_scope(struct Scope_node* root ){
	//display( root );
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
					//printf("\n \n %c  %c \n \n", temp->ID_Name[i]  , name[i] );
					i++;
				}
				
				//printf("\n \n string id  %s  \n \n",name);
				if( isequal ){
					//char ar[20] ;
					//strcpy(ar , temp->data_type);
					//temp->list[i] = ar;
					strcpy(leftassign , temp->data_type);
					//strcpy(ar , temp->ID_Var);
					strcpy(leftassignvar ,temp->ID_Var);
					current_num = temp->ID_num;
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
	//printf("1st scope \n");
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
					//printf("\n \n %c  %c \n \n", temp->ID_Name[i]  , name[i] );
					i++;
				}
				
				//printf("\n \n string id  %s  \n \n",name);
				if( isequal ){
					if(strcmp( temp->data_type , "function") == 0 ){
						if( strcmp(leftassign , temp->ID_Value) != 0 ){
							printf("\n %s variable type does not match with left assignment\n",temp->ID_Name);
							printf("\nleftassign data type -%s, right assignment data type -%s\n", leftassign , temp->ID_Value);
							exit(0);
						}
						func_node = temp;
					}
					else{
						if( strcmp(leftassign , temp->data_type) != 0 ){
							printf("\n %s variable type does not match with left assignment\n",temp->ID_Name);
							printf("\nleftassign data type -%s, right assignment data type -%s\n", leftassign , temp->data_type);
							exit(0);
						}
					}
					current_num = temp->ID_num;
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
	//printf("1st scope \n");
		if(lookup_func(root , name)){
			return true;
		}
		root = root->parent_scope;
	}
	return false;
}






bool lookup_array( struct Scope_node* root , char *name  ){
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
					//printf("\n \n %c  %c \n \n", temp->ID_Name[i]  , name[i] );
					i++;
				}
				
				//printf("\n \n string id  %s  \n \n",name);
				if( isequal ){
					strcpy(leftassign , temp->data_type);
					strcpy(leftassignvar ,temp->ID_Var);
					if( strcmp(leftassignvar , "array" ) != 0 ){ printf("%s  use of data type is incorrect %s \n",name,leftassignvar); exit(0); }
					/*if( siz_ >= atoi(temp->ID_Value ) ){
						printf("\n  accessing %s out of range ", name);
						exit(0);					
					}
					*/
					current_num = temp->ID_num;
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

bool lookup_array_id( struct Scope_node* root , char *name ){
	while(root){
	//printf("1st scope \n");
		if(lookup_array(root , name  )){
			return true;
		}
		root = root->parent_scope;
	}
	return false;
}




bool lookup_right_array( struct Scope_node* root , char *name  ){
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
					//printf("\n \n %c  %c \n \n", temp->ID_Name[i]  , name[i] );
					i++;
				}
				
				//printf("\n \n string id  %s  \n \n",name);
				if( isequal ){
					strcpy(leftassignvar ,temp->ID_Var);
					if( strcmp(leftassignvar , "array" ) != 0 ){ printf("%s  use of data type is incorrect %s \n",name,leftassignvar); exit(0); }
					
						if( strcmp(leftassign , temp->data_type) != 0 ){
							printf("\n %s variable type does not match with left assignment\n",temp->ID_Name);
							printf("\nleftassign data type -%s, right assignment data type -%s\n", leftassign , temp->data_type);
							exit(0);
						}
					current_num = temp->ID_num;
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

bool lookup_right_array_id( struct Scope_node* root , char *name ){
	while(root){
	//printf("1st scope \n");
		if(lookup_right_array(root , name  )){
			return true;
		}
		root = root->parent_scope;
	}
	return false;
}



void addicg(char a1[] , char a2[] , char o[] , char rs[] ){
	strcpy(icg_instrn[instrn_num].arg1 , a1 ) ;
	strcpy(icg_instrn[instrn_num].arg2 , a2 ) ;
	strcpy(icg_instrn[instrn_num].op , o )  ;
	strcpy(icg_instrn[instrn_num].res , rs )  ;
	strcpy(ag1 , "");
	strcpy(ag2 , "");
	strcpy(rs1 , "");
	instrn_num++;
}

void convert(char id[] , int num){  
    strcpy(gl_str , "");
    char d[15];
    sprintf(d, "%d", num);
    strcat(id,d);
    strcpy(gl_str , id);
 }
    
    
int st_i(char str1[]){
    char str2[15] ;
    strncpy(str2,  str1 + 1,strlen(str1) - 1);
    str2[strlen(str1) - 1] = '\0';
    int x;
    sscanf(str2, "%d", &x);
    return x;
}  
        
        
void add_data(){
	int j = 0;
	for(int i=0;i<id_num;i++){
		int num = idntfrs[i];
		if( num == 0){
			printf("id%d:\n\t",i);
			printf(".word 0;\n");
		}
		else if( num == 3){
			printf("id%d:\n\t",i);
			printf(".space %d;\n" , 4*id_size[i]);
		}
		else if( num == 4){
			printf("id%d:\n\t",i);
			printf(".asciiz %s\n" , strdata[j]);
			j++;
		}
	}
	
	
}
    
void icg_to_mips(){
	//displ_mips();
	int reg = 0;
	int tv[250];
	printf("\n\n\n\n.data\n");
	add_data();
	printf(".text\n.globl main\nmain:\n");
	for(int i=0;i<instrn_num;i++){
		char r1[15] ;
		char r2[15] ;
		char o[15] ;
		char r[15] ;
		strcpy(r1 , icg_instrn[i].arg1 );
		strcpy(r2 , icg_instrn[i].arg2 );
		strcpy(o , icg_instrn[i].op );
		strcpy(r , icg_instrn[i].res );
		if( reg == 10 ){
				reg = 0;
		}
		
		
		if(strcmp(o,"") == 0 ){
			if( r[0] == 't' ){
				if(r1[0] == 'i'){
					printf("lw $t%d, %s\n",reg,r1);
				}
				else{
					printf("li $t%d, %s\n",reg,r1);
				}
				int tnum = st_i(r);
				tv[tnum] = reg;
				reg++;
			}
			else if( r[0] == 'i' ){
				int tnum = st_i(r1);
				printf("sw $t%d , %s\n" , tv[tnum] , r );
			}
		}
		else if( strcmp(o,"beq") == 0  ){
			int num_a1 = st_i(r1);
			printf( "beq $t%d , $zero , %s \n",tv[num_a1] , r );
		}
		else if(o[0] == '+'){
			int num_a1 = st_i(r1);
			int num_a2 = st_i(r2);
			printf("add $t%d , $t%d , $t%d\n" , reg , tv[num_a1] , tv[num_a2] );
			int tnum = st_i(r);
			tv[tnum] = reg;
			reg++;
		}
		else if(o[0] == '-'){
			int num_a1 = st_i(r1);
			int num_a2 = st_i(r2);
			printf("sub $t%d , $t%d , $t%d\n" , reg , tv[num_a1] , tv[num_a2] );
			int tnum = st_i(r);
			tv[tnum] = reg;
			reg++;
		}
		else if(o[0] == '*'){
		
			if(r1[0] == '4'){
				int num_a2 = st_i(r2);
				printf("sll $t%d , $t%d , 2\n" , reg ,  tv[num_a2] );
				int tnum = st_i(r);
				tv[tnum] = reg;
				reg++;
			
			}
			else{
				int num_a1 = st_i(r1);
				int num_a2 = st_i(r2);
				printf("mul $t%d , $t%d , $t%d\n" , reg , tv[num_a1] , tv[num_a2] );
				int tnum = st_i(r);
				tv[tnum] = reg;
				reg++;
			}
		}
		else if(o[0] == '/'){
			int num_a1 = st_i(r1);
			int num_a2 = st_i(r2);
			printf("div $t%d , $t%d , $t%d\n" , reg , tv[num_a1] , tv[num_a2] );
			int tnum = st_i(r);
			tv[tnum] = reg;
			reg++;
		}
		else if(strcmp(o,"<=") == 0 ){
			int num_a1 = st_i(r1);
			int num_a2 = st_i(r2);
			printf("sle $t%d , $t%d , $t%d\n" , reg , tv[num_a1] , tv[num_a2] );
			int tnum = st_i(r);
			tv[tnum] = reg;
			reg++;
		}
		else if(strcmp(o,">=") == 0 ){
			int num_a1 = st_i(r1);
			int num_a2 = st_i(r2);
			printf("sge $t%d , $t%d , $t%d\n" , reg , tv[num_a1] , tv[num_a2] );
			int tnum = st_i(r);
			tv[tnum] = reg;
			reg++;
		}
		else if(strcmp(o,"==") == 0 ){
			int num_a1 = st_i(r1);
			int num_a2 = st_i(r2);
			printf("seq $t%d , $t%d , $t%d\n" , reg , tv[num_a1] , tv[num_a2] );
			int tnum = st_i(r);
			tv[tnum] = reg;
			reg++;
		}
		else if(o[0] == '<'){
			int num_a1 = st_i(r1);
			int num_a2 = st_i(r2);
			printf("slt $t%d , $t%d , $t%d\n" , reg , tv[num_a1] , tv[num_a2] );
			int tnum = st_i(r);
			tv[tnum] = reg;
			reg++;
		}
		else if(o[0] == '>'){
			int num_a1 = st_i(r1);
			int num_a2 = st_i(r2);
			printf("sgt $t%d , $t%d , $t%d\n" , reg , tv[num_a1] , tv[num_a2] );
			int tnum = st_i(r);
			tv[tnum] = reg;
			reg++;
		}
		
		else if(o[0] == '&'){
			printf("la $t%d , %s\n" , reg , r1 );
			int tnum = st_i(r);
			tv[tnum] = reg;
			reg++;
		}
		else if(o[0] == 'a'){
			int num_a1 = st_i(r1);
			int num_a2 = st_i(r);
			printf("sw $t%d , 0($t%d)\n" , tv[num_a1] , tv[num_a2] );
		}
		else if(o[0] == 'b'){
			int num_a1 = st_i(r1);
			printf("lw $t%d , 0($t%d)\n" , reg , tv[num_a1] );
			int tnum = st_i(r);
			tv[tnum] = reg;
			reg++;
		}
		else if(o[0] == ':'){
			printf("%s\n" , r);
		}
		else if(o[0] == 'j'){
			printf("j %s\n" , r);
		}
		else if(o[0] == 'o'){
			if(r[0] == 's'){
				printf("li $v0 , 4\n");
				printf("la $a0 , %s\n",r1);
				printf("syscall\n");
			}
			else if(r[0] == 'i'){
				printf("li $v0 , 1\n");
				int num_a1 = st_i(r1);
				printf("move $a0 , $t%d\n",tv[num_a1]  );
				printf("syscall\n");
			}
		}
		else if(o[0] == 'i'){
			if(r[0] == 'i'){
				printf("li $v0 , 5\n");
				printf("syscall\n");
				printf("sw $v0 , %s\n",r1  );
			}
			else if(r[0] == 'a'){
				printf("li $v0 , 5\n");
				printf("syscall\n");
				int num_a1 = st_i(r1);
				printf("sw $v0 , 0($t%d)\n",tv[num_a1] );
			}
		}
		
		
				
	}
	
	/*for(int j = 0;j < 200;j++){
	printf("%d\n" , tv[j] );
	}*/
	printf("jr $ra");
}  
    
    
void displ_mips(){
	for(int i=0;i<instrn_num;i++){
		printf("%s   %s   %s   %s\n",icg_instrn[i].arg1 ,icg_instrn[i].arg2 ,icg_instrn[i].op ,icg_instrn[i].res  );
	}
}
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
