#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * create(int entry_data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node -> data = entry_data;
    new_node -> next = NULL;

    return new_node;
}

void insert(struct node** head, int entry_data, int position){
    struct node* new_node = create(entry_data);

    if(position == 1){
        new_node -> next = *head;
        *head = new_node;
        return;
    }

    struct node* temp = *head;
    int count = 1;

    while(temp != NULL && count < position-1){
        temp = temp -> next;
        count ++;
    }


    if(temp == NULL){
        temp = *head;
        while (temp-> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = new_node;
        
    }else{
        new_node -> next = temp ->next;
        temp -> next = new_node;
    }
}

void delete(struct  node** head, int elemnt){
    struct node* temp = *head;
    struct node* perv = NULL;

    if(temp != NULL && temp -> data == elemnt){
        *head = temp -> next;
        free(temp);
        return;
    }

    while(temp != NULL && temp -> data != elemnt){
        perv = temp;
        temp = temp -> next;
    }

    if(temp == NULL) return;

    perv -> next = temp -> next;
    free(temp);
}


void print_list(struct node* head){

    struct node * temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }

    printf("NULL");
    
}


int main(){
    struct node* head = NULL;


    insert(&head, 1, 1);
    insert(&head, 2, 2);
    insert(&head, 3, 3);

    print_list(head);

    delete(&head, 2);
    delete(&head, 1);

    printf("\n");
    print_list(head);


}