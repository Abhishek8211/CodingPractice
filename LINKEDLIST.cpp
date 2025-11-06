// // BASICS OF LINKED LIST IN C++

// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data = data;
//         this -> next = nullptr;
//     }
// };

// void print(Node* &head){
//     Node* temp = head;
//     while(temp != nullptr){
//         cout << temp -> data <<" ";
//         temp = temp -> next;
//     }
// }

// int main(){
//     Node* Node1 = new Node(5);
//     Node* Node2 = new Node(10);
//     Node* Node3 = new Node(15);
//     Node* Node4 = new Node(20);

//     Node1 -> next = Node2;
//     Node2 -> next = Node3;
//     Node3 -> next = Node4;
//     print(Node1);
//     cout << endl;
//     cout << Node1 -> data << endl;
//     cout << Node1 -> next -> data << endl;


//     return 0;
// }



// // INSERTION IN LINKED LIST IMPLEMENTATION
// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data = data;
//         this -> next = nullptr;
//     }
// };


// // INSERT AT TAIL
// void insertattail(Node* &tail, int data){
//     Node* temp = new Node(data);
//     tail -> next = temp;
//     tail = temp;
// }

// // INSERT AT HEAD
// void insertathead(Node* &head, int data){
//     // new node create
//     Node* temp = new Node(data);
//     temp -> next = head;
//     head = temp;
// }

// // INSERT IN BETWEEN - MIDDLE INSERTION
// void insertinbetween(Node* &head, Node* &tail, int data, int position){
//     //insert at first element
//     if(position == 1){
//         insertathead(head, data);
//         return; 
//     }
    
//     Node* temp = head;
//     int cnt = 1;
//     while(cnt < position - 1){
//         temp = temp -> next;
//         cnt++;
//     }


//     // CREATE A NODE FOR DATA
//     Node* nodetoinsert = new Node(data);
//     nodetoinsert -> next = temp -> next;
//     temp -> next = nodetoinsert;

//      // If position is greater than the length of the list, insert at the end
//     if(temp == tail){
//         tail = nodetoinsert;
//     }
// }

// void print(Node* &head){
//     Node* temp = head;
//     while(temp != nullptr){
//         cout << temp -> data <<" ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// int main(){
//     Node* node1 = new Node(10);
//     Node* head = node1;
//     Node* tail = node1;

//     // cout << "Inserting at head" << endl;
//     // print(head);

//     // //INSERT AT HEAD
//     // insertathead(head, 20);
//     // print(head);

//     // //INSERT 3rd element AT HEAD
//     // insertathead(head, 30);
//     // print(head);

//     // cout << "Inserting at tail" << endl;
//     //INSERT AT TAIL
//     insertattail(tail, 15);
//     print(head);

//     //INSERT 2nd element AT TAIL
//     insertattail(tail, 25);
//     print(head);

//     // insert in between
//     insertinbetween(head, tail, 20, 3);
//     print(head);

//     // insert in between at position 1
//     insertinbetween(head, tail, 5, 1);
//     print(head);

//     // insert in between at position greater than length
//     insertinbetween(head, tail, 4, 10);
//     print(head);

//     cout << "Head: " << head -> data << endl;
//     cout << "Tail: " << tail -> data << endl;

//     return 0;
// }



// HOW TO CONVERT LINKED LIST TO VECTOR
// #include <iostream>
// #include <vector>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data = data;
//         this -> next = nullptr;
//     }
// };

// vector <int> Linkedlisttovector(Node* head){
//     vector<int> result;
//     Node* temp = head;
//     while(temp != nullptr){
//         result.push_back(temp -> data);
//         temp = temp -> next;
//     }
//     return result;
// }

// int main(){
//     Node* node1 = new Node(10);
//     Node* node2 = new Node(20);
//     Node* node3 = new Node(30);
//     Node* node4 = new Node(40);

//     node1 -> next = node2;
//     node2 -> next = node3;
//     node3 -> next = node4;

//     vector<int> vec = Linkedlisttovector(node1);

//     cout << "Linked List converted to Vector: ";
//     for(int val : vec){
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }


// // TAKE INPUT IN LINKED LIST AND STORE IT IN VECTOR
// #include <iostream>
// #include <vector>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int data) {
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// int main() {
//     Node* head = nullptr;
//     Node* tail = nullptr;

//     cout << "Enter 5 numbers: ";
//     for (int i = 0; i < 5; i++) {
//         int x;
//         cin >> x;
//         Node* newNode = new Node(x);
//         if (head == nullptr) {
//             head = newNode;
//             tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     // Convert linked list to vector and print
//     vector<int> v;
//     Node* temp = head;
//     while (temp != nullptr) {
//         v.push_back(temp->data);
//         temp = temp->next;
//     }

//     cout << "Vector elements: ";
//     for (int val : v) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }



// //  DELETION OF ELEMENTS IN THE LINKED LIST
#include<bits/stdc++.h>
using namespace std;

class pattern{
public:
    int n;
    int arr[20];
    void input(){
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
    }
    void display(){
        if(n == 0 || n > 20){
            cout << "Invalid Input" << endl;
            return;
        }
        for(int i = 0; i < n; i++){
            int val = arr[i];
            for (int j = 0; j < val; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main(){
    pattern p;
    cin >> p.n;
    p.input();
    p.display();
}