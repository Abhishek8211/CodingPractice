/*

Evaluation of postfix expressions in C++

steps to evaluate a postfix expression using stack:
1 -> Create an empty stack.
2 -> Scan the postfix expression from left to right.
3 -> If the scanned character is an number, push it onto the stack.
4 -> If the scanned character is an operator, pop two elements from the stack.
a -> Apply the operator to the two popped elements in the correct order.
b -> Push the result back onto the stack.

*/


// EVALUATE THE POSTFIX EXPRESSION
// 82*54*+93/-
#include <iostream>
#include <cctype>
using namespace std;

// -------------------------
// User-Defined Stack
// -------------------------
class Stack {
    int arr[100];     // stack array
    int top;         // index of top element

public:
    Stack() {
        top = -1;    // empty stack
    }

    void push(int x) {
        top++;
        arr[top] = x;
    }

    int pop() {
        int value = arr[top];
        top--;
        return value;
    }

    int peek() {
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

// -------------------------
// Evaluate Postfix Function
// -------------------------
int evaluatePostfix(string exp) {
    Stack st;

    for (char ch : exp) {

        if (isdigit(ch)) {
            st.push(ch - '0');    // convert char → int  //0 ascii value = 48
        }
        else {
            int val2 = st.pop();
            int val1 = st.pop();

            switch (ch) {
                case '+': 
                    st.push(val1 + val2); 
                    break;
                case '-': 
                    st.push(val1 - val2); 
                    break;
                case '*': 
                    st.push(val1 * val2); 
                    break;
                case '/': 
                    st.push(val1 / val2); 
                    break;
            }
        }
    }
    return st.peek();
}



// -------------------------
// Main Function
// -------------------------
int main() {
    string postfix;
    cout << "Enter Postfix Expression: ";
    cin >> postfix;

    int result = evaluatePostfix(postfix);
    cout << "Result = " << result;

    return 0;
}