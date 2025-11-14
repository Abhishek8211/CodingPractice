/*
linked list is a linear type of data structure and a collection of data elements called nodes. Each node
contains a data part and a pointer to the next node in the sequence. The last node points to NULL, indicating the end of the list.


Operations on Singly Linked List: 1. Insertion: Adding a new node at the beginning, end, or a specific position in the list.
2. Deletion: Removing a node from the beginning, end, or a specific position in the list.
3. Traversal: Accessing and displaying the data in each node of the list.

*/


// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// // ✅ Create the first node (head)
// void createNode(Node** head, int val) {
//     if (*head != NULL) {
//         cout << "Head already exists! Use insert functions instead.\n";
//         return;
//     }
//     Node* new_node = new Node();
//     new_node->data = val;
//     new_node->next = NULL;
//     *head = new_node;
// }

// // ✅ Insert at the beginning
// void insertAtBeginning(Node** head, int val) {
//     Node* new_node = new Node();
//     new_node->data = val;
//     new_node->next = *head;
//     *head = new_node;
// }

// // ✅ Insert at the end
// void insertAtEnd(Node** head, int val) {
//     Node* new_node = new Node();
//     new_node->data = val;
//     new_node->next = NULL;

//     if (*head == NULL) {
//         *head = new_node;
//         return;
//     }

//     Node* temp = *head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = new_node;
// }

// // ✅ Insert at a specific position (1-based index)
// void insertAtPosition(Node** head, int val, int pos) {
//     Node* new_node = new Node();
//     new_node->data = val;
//     new_node->next = NULL;

//     // If inserting at the beginning
//     if (pos == 1) {
//         new_node->next = *head;
//         *head = new_node;
//         return;
//     }

//     Node* temp = *head;
//     for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }

//     // If position is invalid
//     if (temp == NULL) {
//         cout << "Position out of range!\n";
//         delete new_node; // avoid memory leak
//         return;
//     }

//     // Insert in between
//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// // ✅ Display the linked list
// void display(Node* head) {
//     Node* temp = head;
//     cout << "Linked List: ";
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // ✅ Main function
// int main() {
//     Node* head = NULL;

//     // Step 1: Create the first node
//     createNode(&head, 10);
//     display(head);

//     // Step 2: Insert at beginning
//     insertAtBeginning(&head, 5);
//     insertAtBeginning(&head, 1);
//     display(head);

//     // Step 3: Insert at end
//     insertAtEnd(&head, 20);
//     insertAtEnd(&head, 30);
//     display(head);

//     // Step 4: Insert at specific positions
//     insertAtPosition(&head, 15, 3);  // insert 15 at position 3
//     insertAtPosition(&head, 40, 8);  // insert 40 at position 8 (end)
//     insertAtPosition(&head, 99, 15); // invalid position
//     display(head);

//     return 0;
// }


// // DELETION LINEKED LIST
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// // ✅ Create the first node (head)
// void createNode(Node** head, int val) {
//     if (*head != NULL) {
//         cout << "Head already exists! Use insert functions instead.\n";
//         return;
//     }
//     Node* new_node = new Node();
//     new_node->data = val;
//     new_node->next = NULL;
//     *head = new_node;
// }

// // ✅ Insert at the beginning
// void insertAtBeginning(Node** head, int val) {
//     Node* new_node = new Node();
//     new_node->data = val;
//     new_node->next = *head;
//     *head = new_node;
// }

// // ✅ Insert at the end
// void insertAtEnd(Node** head, int val) {
//     Node* new_node = new Node();
//     new_node->data = val;
//     new_node->next = NULL;

//     if (*head == NULL) {
//         *head = new_node;
//         return;
//     }

//     Node* temp = *head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = new_node;
// }

// // ✅ Insert at a specific position (1-based index)
// void insertAtPosition(Node** head, int val, int pos) {
//     Node* new_node = new Node();
//     new_node->data = val;
//     new_node->next = NULL;

//     if (pos == 1) {
//         new_node->next = *head;
//         *head = new_node;
//         return;
//     }

//     Node* temp = *head;
//     for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         cout << "Position out of range!\n";
//         delete new_node;
//         return;
//     }

//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// // ✅ Delete from beginning
// void deleteFromBeginning(Node** head) {
//     if (*head == NULL) {
//         cout << "List is empty!\n";
//         return;
//     }
//     Node* temp = *head;
//     *head = (*head)->next;
//     delete temp;
// }

// // ✅ Delete from end
// void deleteFromEnd(Node** head) {
//     if (*head == NULL) {
//         cout << "List is empty!\n";
//         return;
//     }

//     if ((*head)->next == NULL) {
//         delete *head;
//         *head = NULL;
//         return;
//     }

//     Node* temp = *head;
//     while (temp->next->next != NULL) {
//         temp = temp->next;
//     }

//     delete temp->next;
//     temp->next = NULL;
// }

// // ✅ Delete from a specific position
// void deleteFromPosition(Node** head, int pos) {
//     if (*head == NULL) {
//         cout << "List is empty!\n";
//         return;
//     }

//     if (pos == 1) {
//         Node* temp = *head;
//         *head = (*head)->next;
//         delete temp;
//         return;
//     }

//     Node* temp = *head;
//     for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }

//     if (temp == NULL || temp->next == NULL) {
//         cout << "Position out of range!\n";
//         return;
//     }

//     Node* delNode = temp->next;
//     temp->next = delNode->next;
//     delete delNode;
// }

// // ✅ Display linked list
// void display(Node* head) {
//     Node* temp = head;
//     cout << "Linked List: ";
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // ✅ Main function
// int main() {
//     Node* head = NULL;

//     // Step 1: Create first node
//     createNode(&head, 10);
//     display(head);

//     // Step 2: Insertions
//     insertAtBeginning(&head, 5);
//     insertAtEnd(&head, 20);
//     insertAtPosition(&head, 15, 3);
//     insertAtPosition(&head, 25, 5);
//     display(head);

//     // Step 3: Deletions
//     deleteFromBeginning(&head);
//     cout << "After deleting from beginning:\n";
//     display(head);

//     deleteFromEnd(&head);
//     cout << "After deleting from end:\n";
//     display(head);

//     deleteFromPosition(&head, 2);
//     cout << "After deleting from position 2:\n";
//     display(head);

//     return 0;
// }



// // DOUBLY LINKED LIST

// #include<iostream>
// using namespace std;

// struct Node{
//     Node* prev;
//     int data;
//     Node* next;
// };

// Node* head = NULL;

// Node* createNode(int val){
//     Node* new_node = new Node();
//     new_node -> data = val;
//     new_node -> prev = NULL;
//     new_node -> next = NULL;
//     return new_node;
// }

// void insertAtStart(int val){
//     Node* new_node = new Node();
//     new_node = createNode(val);

//     if(head == NULL){
//         head = new_node;
//         return;
//     }

//     new_node -> next = head;
//     head -> prev = new_node;
//     head = new_node;
// }


// void insertAtEnd(int val){
//     Node* new_node = new Node();
//     new_node = createNode(val);

//     if(head == NULL){
//         head = new_node;
//         return;
//     }

//     Node* temp = head;
//     while(temp -> next != NULL){
//         temp = temp -> next;
//     }

//     temp -> next = new_node;
//     new_node -> prev = temp;
// }

// void insertAtPosition(int val, int pos){
//     Node* new_node = new Node();
//     new_node = createNode(val);

//     if(head == NULL){
//         head = new_node;
//         return;
//     }

//     if(pos == 1){
//         new_node -> next = head;
//         head -> prev = new_node;
//         head = new_node;
//         return;
//     }

//     Node* temp = head;
//     int i;
//     for(i = 1; i < pos - 1 && temp != NULL; i++){
//         temp = temp -> next;
//     }

    
//     if(temp -> next == NULL && i == pos-1){
//         temp -> next = new_node;
//         new_node -> prev = temp;
//         return;
//     }

//     if(temp == NULL){
//         cout<<"Position out of range"<<endl;
//         return;
//     }

//     new_node -> next = temp -> next;
//     new_node -> prev = temp;
//     temp -> next -> prev = new_node;
//     temp -> next = new_node;
// }

// void display(){
//     Node* temp = head;
//     cout<<"Doubly Linked List: ";
//     while(temp != NULL){
//         cout<<temp -> data<<" ";
//         temp = temp -> next;
//     }
//     cout << endl;

// }

// int main(){
//     insertAtStart(10);
//     insertAtStart(5);
//     insertAtEnd(20);
//     insertAtEnd(30);
//     display();

//     return 0;
// }