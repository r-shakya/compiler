struct Node{
    char data[20];
    struct Node* next;
};

struct Node* keywords_list;
struct Node* separators_list;
struct Node* operators_list;

void insert_ll(char s[],char token[]){

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    strncpy(newNode->data,s,20);
    newNode->data[20-1]='\0';

    if(strcmp(token,"keywords")==0){
        if(keywords_list==NULL){
            keywords_list=newNode;
            return;
        }
        struct Node* temp=keywords_list;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        return;
    }
    else if(strcmp(token,"separators")==0){
        if(separators_list==NULL){
            separators_list=newNode;
            return;
        }
        struct Node* temp=separators_list;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        return;
    }
    else if(strcmp(token,"operators")==0){
        if(operators_list==NULL){
            operators_list=newNode;
            return;
        }
        struct Node* temp=operators_list;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        return;
    }
}

void display_ll(){
    struct Node* temp;
    
    printf("\nKEYWORDS:\n");
    temp=keywords_list;
    while(temp!=NULL){
        printf("\t%s",temp->data);
        temp=temp->next;
    }
    printf("\n");

    printf("\nSEPARATORS:\n");
    temp=separators_list;
    while(temp!=NULL){
        printf("\t%s",temp->data);
        temp=temp->next;
    }
    printf("\n");

    printf("\nOPERATORS:\n");
    temp=operators_list;
    while(temp!=NULL){
        printf("\t%s",temp->data);
        temp=temp->next;
    }
    printf("\n");
}