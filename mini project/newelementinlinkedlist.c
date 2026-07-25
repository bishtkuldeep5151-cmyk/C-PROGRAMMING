#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(struct Node** head_ref, int new_data) {
    // Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Put in the data
    new_node->data = new_data;

    // Make next of new node as head
    new_node->next = (*head_ref);

    // Move the head to point to the new nodem
    (*head_ref) = new_node;
}

//Helper function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);

    printf("Created Linked List: ");
    printList(head);

    return 0;
}