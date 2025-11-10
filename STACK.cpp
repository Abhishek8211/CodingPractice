/*
operations of Stack DS
1) isEmpty() -> Underflow condition 
2) isFull() -> Overflow condition
3) push() -> insert element at top
4) pop() -> delete element from top (check isEmpty condition) top--
5) peek() / top() -> return top element (check isEmpty condition)
6) size() -> return size of stack
*/

// #include<iostream>
// using namespace std;

// class Stack{
//     int arr[5];
//     int top;
// public:
//     Stack(){
//         top = -1; // initialize top to -1 indicating stack is empty
//     }

//     bool isEmpty(){
//         return top == -1;  // n - 1 indicates stack is empty
//     }

//     bool isFull(){
//         return top == 4; // since size is 5, top index will be 4 when full
//     }

//     void push(int val){ // insert element at top
//         if(isFull()){ // check for overflow
//             cout << "Stack Overflow! Cannot push " << val << endl;
//         } else { // insert element
//             top++;
//             arr[top] = val;
//             cout << val << " pushed to stack." << endl;
//         }
//     }

//     void pop(){ // remove element from top
//         if(isEmpty()){ // check for underflow
//             cout << "Stack Underflow! Cannot pop from empty stack." << endl;
//         } else { // remove element
//             cout << arr[top] << " popped from stack." << endl;
//             top--;
//         }
//     }

//     void peek(){ // return top element
//         if(isEmpty()){ // check if stack is empty
//             cout << "Stack is empty. No top element." << endl;
//         } else { // return top element
//             cout << "Top element is: " << arr[top] << endl;
//         }
//     }

//     int size(){ // return size of stack
//         return top + 1;
//     }

//     void display(){ // display stack elements
//         if(isEmpty()){
//             cout << "Stack is empty." << endl;
//         } else {
//             cout << "Stack elements: ";
//             for(int i = top; i >= 0; i--){
//                 cout << arr[i] << " ";
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
//     s.push(60); // should show overflow
//     s.display();

//     s.pop();
//     s.peek(); // should return 20
//     cout << "Stack size: " << s.size() << endl;

//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop(); // should show underflow

//     s.display();

//     return 0;
// }



// // USER DRIVEN PROGRAM FOR STACK IMPLEMENTATION
// #include<iostream>
// using namespace std;

// class Stack{
// private:
//     int* arr;  // pointer to dynamically allocated array
//     int top;
//     int capacity;
// public:
//     Stack(){
//         top = -1;
//         cout << "Enter size of stack: ";
//         cin >> capacity;
//         arr = new int[capacity];  // dynamically allocate array
//         cout << "Stack of size " << capacity << " created successfully!" << endl;
//     }
    
//     // Destructor to free dynamically allocated memory
//     ~Stack(){
//         delete[] arr;
//     }
    
//     bool isEmpty(){
//         return top == -1;
//     }

//     bool isFull(){
//         return top == capacity - 1;
//     }

//     void push(int val){
//         if(isFull()){
//             cout << "Stack Overflow! Cannot push " << val << endl;
//         } else {
//             top++;
//             arr[top] = val;
//             cout << val << " pushed to stack." << endl;
//         }
//     }

//     void pop(){
//         if(isEmpty()){
//             cout << "Stack Underflow! Cannot pop from empty stack." << endl;
//         } else {
//             cout << arr[top] << " popped from stack." << endl;
//             top--;
//         }
//     }

//     void peek(){
//         if(isEmpty()){
//             cout << "Stack is empty. No top element." << endl;
//         } else {
//             cout << "Top element is: " << arr[top] << endl;
//         }
//     }

//     int size(){
//         return top + 1;
//     }

//     void display(){
//         if(isEmpty()){
//             cout << "Stack is empty." << endl;
//         } else {
//             cout << "Stack elements (top to bottom): ";
//             for(int i = top; i >= 0; i--){
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//     }

// };

// int main(){
//     Stack s;
//     int choice, value;

//     while(true){
//         cout << "\n=== Stack Operations Menu ===" << endl;
//         cout << "1. Push" << endl;
//         cout << "2. Pop" << endl;
//         cout << "3. Display" << endl;
//         cout << "4. Peek (Top Element)" << endl;
//         cout << "5. Size" << endl;
//         cout << "6. Check if Empty" << endl;
//         cout << "7. Check if Full" << endl;
//         cout << "8. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch(choice){
//             case 1: 
//                 cout << "Enter value to push: ";
//                 cin >> value;
//                 s.push(value);
//                 break;
//             case 2:
//                 s.pop();
//                 break;
//             case 3:
//                 s.display();
//                 break;
//             case 4:
//                 s.peek();
//                 break;
//             case 5:
//                 cout << "Current stack size: " << s.size() << endl;
//                 break;
//             case 6:
//                 if(s.isEmpty()){
//                     cout << "Stack is empty." << endl;
//                 } else {
//                     cout << "Stack is not empty." << endl;
//                 }
//                 break;
//             case 7:
//                 if(s.isFull()){
//                     cout << "Stack is full." << endl;
//                 } else {
//                     cout << "Stack is not full." << endl;
//                 }
//                 break;
//             case 8:
//                 cout << "Exiting program. Goodbye!" << endl;
//                 return 0;
//             default:
//                 cout << "Invalid Input! Please enter a number between 1-8." << endl;
//         }   
//     }
//     return 0;
// }