#include <stdio.h>
#include <stdlib.h>

// Define the structure for the node
struct node {
    int data;
    struct node* next;
};

// Function to create a new node
struct node* create_node(int entry_data) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = entry_data;
    new_node->next = NULL;
    return new_node;
}

// Function to insert a node at the end of the linked list
void insert_at_position(struct node** head_ref, int entry_data, int position) {
    struct node* new_node = create_node(entry_data);

    // If inserting at the head (position 1)
    if (position == 1) {
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }

    struct node* temp = *head_ref;
    int count = 1;

    // Traverse the list to find the correct position or reach the end
    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    // If temp is NULL, position is greater than the number of nodes (insert at end)
    if (temp == NULL) {
        temp = *head_ref;
        // Traverse to the end of the list
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;  // Insert the new node at the end
    } else {
        // Insert the new node at the desired position
        new_node->next = temp->next;
        temp->next = new_node;
    }
}


// Function to delete a node by its value
void delete_node(struct node** head_ref, int key) {
    struct node* temp = *head_ref;
    struct node* prev = NULL;

    // If the head node itself holds the key
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;  // Change head
        free(temp);  // Free the old head
        return;
    }

    // Search for the key to be deleted, keep track of the previous node
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key was not found in the list
    if (temp == NULL) return;

    // Unlink the node from the linked list
    prev->next = temp->next;
    free(temp);  // Free memory
}

// Function to print the linked list
void print_list(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;

    insert_at_position(&head, 1, 1);
    insert_at_position(&head, 2, 2);
    insert_at_position(&head, 3, 3);
    insert_at_position(&head, 4, 4);
    insert_at_position(&head, 55, 3);
    print_list(head);
    return 0;
}
