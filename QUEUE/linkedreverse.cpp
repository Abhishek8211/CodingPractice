// #include<iostream>
// using namespace std;

// struct Node{
// int data;
// Node* next;
// };

// struct Node* head;

// Node* createNode(int val){
//     Node* newNode = new Node();
//     newNode -> data = val;
//     newNode -> next = NULL;
//     return newNode;
// }

// void insertAtEnd(int val){
//     Node* newNode = createNode(val);
//     if(head == NULL){
//         head = newNode;
//         return;
//     }
//     Node* temp = head;
//     while(temp -> next != NULL){
//         temp = temp -> next;
//     }
//     temp -> next = newNode;
// }

// void Reverse(){
//     Node* prev = head;
//     Node* current = head -> next;
//     Node* next = current -> next;
//     while(current != NULL){
//         current -> next = prev; // store next node
//         prev = current; // reverse the link
//         current = next; // move prev to current
//         next = current -> next; // move to next node
//     }
//     head = prev; // update head to the new first node
// }
// void display(){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }
// int main(){
//     head = NULL;
//     insertAtEnd(10);
//     insertAtEnd(20);
//     insertAtEnd(30);
//     insertAtEnd(40);

//     cout << "Original List: ";
//     display(); 
    
//     Reverse(); // Reverse the linked list
    
//     cout << "Reversed List: ";
//     display(); 
    
//     return 0;
// }

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head;

Node* createNode(int val){
    Node* newNode = new Node();
    newNode -> data = val;
    newNode -> next = NULL;
    return newNode;
}

void Middle(){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    cout << "Middle Element is " << slow -> data << endl;
}

int main(){
    head = NULL;
    head = createNode(10);
    head -> next = createNode(20);
    head -> next -> next = createNode(30);
    head -> next -> next -> next = createNode(40);
    head -> next -> next -> next -> next = createNode(50);

    Middle();

    return 0;
}