// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node* next;
// };
// struct Node* head = NULL;

// void printList(){
//     struct Node* temp = head;
//     while(temp != NULL){
//         printf("%d ", temp -> data);
//         temp = temp -> next;
//     }
//     printf("\n");
// }

// void insertAtHead(int value){
//     struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//     newnode -> data = value;
//     newnode -> next = head;
//     head = newnode;
// }

// int main(){
//     //struct Node* head = NULL;
//     //struct Node* tail = NULL;

//     // Inserting at head
//     insertAtHead(10);
//     printList(head);

//     insertAtHead(20);
//     printList(head);

//     insertAtHead(30);
//     printList(head);
    
//     return 0;
// }


// //Insertion in linked list
// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* head = NULL;

// void insertAtBeginning(int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->next = head;
//     head = newNode;
// }

// void insertAtEnd(int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->next = NULL;

//     if (head == NULL) {
//         head = newNode;
//         return;
//     }

//     struct Node* temp = head;
//     while (temp->next != NULL) temp = temp->next;
//     temp->next = newNode;
// }

// void insertAtPosition(int value, int position){
//     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->next = NULL;
    
//     if(position == 1){
//         newNode->next = head;
//         head = newNode;
//         return;
//     }
    
//     struct Node* temp = head;
//     for(int i=1; i<position-1 && temp!=NULL; i++){
//         temp = temp->next;
//     }
//     if(temp==NULL){
//         printf("Invalid Position\n");
//         free(newNode);
//         return;
//     }
//     newNode->next = temp->next;
//     temp->next = newNode;
    
// }


// void display() {
//     struct Node* temp = head;
//     printf("Linked List: ");
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     insertAtEnd(10);
//     insertAtEnd(20);
//     insertAtBeginning(5);
//     display();
//     insertAtPosition(30,3);
//     display();
//     return 0;
// }




// //DELETION LINKED LIST

// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node* next;
// };

// struct Node* createNode(int value){
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode -> data = value;
//     newNode -> next = NULL;
//     return newNode;
// }
// void insertAtEnd(struct Node** head, int value){
//     struct Node* newNode = createNode(value);
//     if(*head == NULL){
//         *head = newNode;
//         return;
//     }
//     struct Node* temp = *head;
//     while(temp -> next != NULL){
//         temp = temp -> next;
//     }
//     temp -> next = newNode;
// }

// void display(struct Node* head){
//     struct Node* temp = head;
//     while(temp != NULL){
//         printf("%d -> ", temp -> data);
//         temp = temp -> next;
//     }
//     printf("NULL\n");
// }

// void deleteAtEnd(struct Node** head){
//     if(*head == NULL){
//         printf("List is empty, nothing to delete\n");
//         return;
//     }
//     struct Node* temp = *head;
//     struct Node* prev = NULL;

//     if(temp->next == NULL){
//         free(temp);
//         *head = NULL;
//         return;
//     }

//     while(temp -> next != NULL){
//         prev = temp;
//         temp = temp -> next;
//     }
//     printf("Deleted element %d from end\n", temp->data);

//     prev -> next = NULL;
//     free(temp);
// }

// void deleteAtBeginning(struct Node** head){
//     if(*head == NULL){
//         printf("List is empty, nothing to delete\n");
//         return;
//     }
//     struct Node* temp = *head;
//     *head = (*head) -> next;
//     printf("Deleted element %d from beginning\n", temp->data);
//     free(temp);
// }


// void deleteAtPosition(struct Node** head, int position) {
//     if (*head == NULL) {
//         printf("List is empty, nothing to delete\n");
//         return;
//     }

//     struct Node* temp = *head;

//     if (position == 1) {
//         *head = temp->next;
//         printf("Deleted element %d from position %d\n", temp->data, position);
//         free(temp);
//         return;
//     }

//     struct Node* prev = NULL;
//     for (int i = 1; temp != NULL && i < position; i++) {
//         prev = temp;
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         printf("Invalid Position\n");
//         return;
//     }

//     prev->next = temp->next;
//     printf("Deleted element %d from position %d\n", temp->data, position);
//     free(temp);
// }

// int main(){
//     struct Node* head = NULL;
//     insertAtEnd(&head, 10);
//     insertAtEnd(&head, 20);
//     insertAtEnd(&head, 30);
//     display(head);

//     deleteAtEnd(&head);
//     display(head);


//     deleteAtBeginning(&head);
//     display(head);

//     insertAtEnd(&head, 40);
//     insertAtEnd(&head, 50);
//     display(head);
    
//     deleteAtPosition(&head, 1);
//     display(head);

//     return 0;
// }



// // SEARCHING and COUNTING IN LINKED LIST 
// #include<stdio.h>
// #include<stdlib.h>
// struct Node{
//     int data;
//     struct Node* next;
// };

// struct Node* head = NULL;

// void insertAtEnd(int value){
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode -> data = value;
//     newNode -> next = NULL;

//     if(head == NULL){
//         head = newNode;
//         return;
//     }

//     struct Node* temp = head;
//     while(temp -> next  != NULL){
//         temp = temp -> next;
//     }
//     temp -> next = newNode;
// }



// void display(){
//     struct Node* temp = head;
//     while(temp != NULL){
//         printf("%d -> ", temp -> data);
//         temp = temp -> next;
//     }
//     printf("NULL\n");
// }

// void search(int key){
//     struct Node* temp = head;
//     int position = 1;
//     while(temp != NULL){
//         if(temp -> data == key){
//             printf("Element %d found at position %d\n", key, position);
//             return;
//         }
//         temp = temp -> next;
//         position++;
//     }
//     printf("Element %d not found\n", key);
// }

// void searchandcount(int key){
//     struct Node* temp = head;
//     int count = 0;
//     int position = 1;
//     while(temp != NULL){
//         if(temp -> data == key){
//             count++;
//             printf("Element %d found at position %d\n", key, position);
//         }
//         temp = temp -> next;
//         position++;
//     }
//     if(count == 0){
//         printf("Element %d not found\n", key);
//     }
// }

// int main(){
//     insertAtEnd(10);
//     insertAtEnd(20);
//     insertAtEnd(30);
//     insertAtEnd(40);
//     insertAtEnd(50);
//     insertAtEnd(20);

//     display();
//     search(30);
//     search(100);
//     searchandcount(20);
//     searchandcount(60);
//     return 0;
// }



// 

#include<stdlib.h>
#include<stdio.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;


