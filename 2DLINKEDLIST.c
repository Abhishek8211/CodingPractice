#include <stdio.h>
#include <stdlib.h>

// Structure for doubly linked list node
struct Node {
    struct Node* prev;
    int data;
    struct Node* next;
};


// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}


// Insertion at Start
void insertAtStart(struct Node** head, int value) {
    struct Node* newNode = createNode(value);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}

// Insertion at End
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}


// Insertion at a Specific Position (1-based index)
void insertAtPosition(struct Node** head, int value, int position) {
    struct Node* newNode = createNode(value);

    // Case 1: Empty list or insert at start
    if (*head == NULL || position == 1) {
        insertAtStart(head, value);
        return;
    }

    struct Node* temp = *head;

    // Traverse to node before desired position
    int i = 1;
    while(i < position - 1 && temp->next != NULL) {
        temp = temp->next;
        i++;
    }

    // Case 2: Insert at end
    if (temp->next == NULL && i == position-1) {
        insertAtEnd(head, value);
        return;
    }

    if(temp->next == NULL){
        printf("Invalid Position\n");
        return;
    }

    // Case 3: Insert in between nodes
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}


// Deletion at Start
void deleteAtStart(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;

    if (*head != NULL)
        (*head)->prev = NULL;

    printf("Deleted element: %d\n", temp->data);
    free(temp);
}


// Deletion at End
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node* temp = *head;

    // Only one node
    if (temp->next == NULL) {
        printf("Deleted element: %d\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }

    // Move to last node
    while (temp->next != NULL)
        temp = temp->next;

    printf("Deleted element: %d\n", temp->data);
    temp->prev->next = NULL;
    free(temp);
}


// Deletion at Specific Position
void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node* temp = *head;

    // Case 1: Delete first node
    if (position == 1) {
        deleteAtStart(head);
        return;
    }

    int i = 1;
    while (i < position && temp != NULL) {
        temp = temp->next;
        i++;
    }

    // Invalid position
    if (temp == NULL) {
        printf("Invalid position. Cannot delete.\n");
        return;
    }

    // Case 2: Delete last node
    if (temp->next == NULL) {
        deleteAtEnd(head);
        return;
    }

    // Case 3: Delete in between
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    printf("Deleted element: %d\n", temp->data);
    free(temp);
}


// Function to display the list (forward traversal)
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("Doubly Linked List (Forward): NULL <-> ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


// Function to display the list (backward traversal)
void displayBackward(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    // Go to last node
    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    printf("Doubly Linked List (Backward): NULL <-> ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}


// Main function
int main() {
    struct Node* head = NULL;

    printf("=== DOUBLY LINKED LIST INSERTION EXAMPLE ===\n\n");

    // Insert elements at start
    printf("After inserting 10, 20, 30 at start:\n");
    insertAtStart(&head, 30);
    insertAtStart(&head, 20);
    insertAtStart(&head, 10);
    display(head);

    // Insert elements at end
    printf("\nAfter inserting 40, 50 at end:\n");
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);
    display(head);

    // Insert element at a specific position
    printf("\nAfter inserting 25 at position 3:\n");
    insertAtPosition(&head, 25, 3);
    display(head);
    
    printf("\nAfter inserting 10 at position 1:\n");
    insertAtPosition(&head, 10, 1);
    display(head);
    
    printf("\nAfter inserting 55 at position 8:\n");
    insertAtPosition(&head, 55, 8);
    display(head);
    
    printf("\nAfter inserting 16 at position 10:\n");
    insertAtPosition(&head, 16, 10);
    display(head);

    // Backward Traversal
    printf("\nBackward Traversal:\n");
    displayBackward(head);

    // Deletion operations
    printf("\nAfter deleting from start:\n");
    deleteAtStart(&head);
    display(head);

    printf("\nAfter deleting from end:\n");
    deleteAtEnd(&head);
    display(head);

    printf("\nAfter deleting element at position 3:\n");
    deleteAtPosition(&head, 3);
    display(head);

    return 0;
}