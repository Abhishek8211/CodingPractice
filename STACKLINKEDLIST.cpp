// /*
// 1) when head == null and Top == NULL ( empty list) isEmpty() should return true.
// 2) isFull() -  we do not have to deal with the maximum unit because size is dynamically allocated in linked list.
// 3) push() - we create a new node and make it the new head (top) of the stack. (modify head pointer, insertion at head, newNode -> data = val; newNode -> next = head; head = newNode;)
// 4) pop() - we remove the head (top) node and update the head pointer to the next node. (check isEmpty condition, update head, delete old head, temp = top, top = top ->  next, delete  temp).
// 5) peek() / top() - return the data of head (top) node (check isEmpty condition).
// 6) size() - we can maintain a count variable that increments on push and decrements on pop to keep track of the number of elements in the stack.

// */

// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };

// class Stack{
// private: 
//     Node* top; // pointer to top node
//     int count; // to keep track of size
// public:
//     Stack(){
//         top = nullptr; // initialize top to null
//         count = 0; // initialize count to 0
//     }
 
//     bool isEmpty(){
//         return top == nullptr; // stack is empty if top is null
//     }

//     void push(int val){
//         Node* newNode = new Node; // create new node
//         newNode -> data = val;
//         newNode -> next = top; // new node points to current top
//         top = newNode; // update top to new node
//         count++; // increment size
//     }

//     void pop(){
//         if(isEmpty()){
//             cout << "Stack Underflow! Cannot pop from empty stack." << endl;
//         }
//         else{
//             Node* temp = top; // store current top
//             top = top -> next; // update top to next node
//             cout << temp -> data << " popped from stack." << endl;
//             delete temp; // delete old top
//             count--; // decrement size
//         }
//     }

//     void peek(){
//         if(isEmpty()){
//             cout << "Stack is empty. No top element." << endl;
//         }
//         else{
//             cout << "Top element is: " << top -> data << endl;
//         }
//     }

//     int size(){
//         return count;
//     }

//     void display(){
//         if(isEmpty()){
//             cout << "Stack is empty." << endl;
//             return;
//         }
//         else{
//             cout << "Stack elements (top to bottom): ";
//             Node* temp = top;
//             while(temp != nullptr){
//                 cout << temp -> data << " ";
//                 temp = temp -> next;
//             }
//             cout << endl;
//         }
//     }
// };

// int main(){
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.peek(); // should return 30
//     cout << "Stack size: " << s.size() << endl;
//     s.push(40);
//     s.push(50);
//     s.display();
//     s.pop();
//     s.peek(); // should return 40
//     cout << "Stack size: " << s.size() << endl;
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop(); // should show underflow

//     return 0;
// }

// USER DRIVEN LINKED LIST BASED STACK IMPLEMENTATION
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Stack class using linked list
class Stack {
private:
    Node* top;
    int count;

public:
    // Constructor
    Stack() {
        top = nullptr;
        count = 0;
        cout << "Stack created successfully (using Linked List)!" << endl;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Push element into stack
    void push(int val) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = top;
        top = newNode;
        count++;
        cout << val << " pushed to stack." << endl;
    }

    // Pop element from stack
    void pop(bool showMessage = true) {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop from empty stack." << endl;
        } else {
            Node* temp = top;
            top = top->next;
            if (showMessage)
                cout << temp->data << " popped from stack." << endl;
            delete temp;
            count--;
        }
    }

    // Peek at the top element
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty. No top element." << endl;
        } else {
            cout << "Top element is: " << top->data << endl;
        }
    }

    // Return size of stack
    int size() {
        return count;
    }

    // Display stack elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements (top to bottom): ";
            Node* temp = top;
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

// Main function: user-driven menu
int main() {
    Stack s;
    int choice, value;

    while (true) {
        cout << "\n=== Stack Operations Menu (Linked List) ===" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Peek (Top Element)" << endl;
        cout << "5. Size" << endl;
        cout << "6. Check if Empty" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                s.peek();
                break;
            case 5:
                cout << "Current stack size: " << s.size() << endl;
                break;
            case 6:
                if (s.isEmpty()) {
                    cout << "Stack is empty." << endl;
                } else {
                    cout << "Stack is not empty." << endl;
                }
                break;
            case 7:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid Input! Please enter a number between 1–7." << endl;
        }
    }

    return 0;
}
