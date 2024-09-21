#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* create_node(int entry_data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node -> data = entry_data;
    new_node -> next = NULL;
    return new_node;
}


int main(){
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = create_node(1);
    second = create_node(2);
    third = create_node(3);

    head ->next = second;
    second -> next = third;


    struct node* temp = head;

    while(temp!=NULL){
        printf(" %d ->", temp ->data);
        temp = temp -> next;
    }
}