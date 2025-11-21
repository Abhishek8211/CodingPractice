#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
public:
    Node* front;
    Node* rear;

    Queue(){
        front = nullptr;
        rear = nullptr;
    }

    bool isEmpty(){
        return front == nullptr;
    }

    void enqueue(int val){
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;

        if(isEmpty()){
            front = rear = newNode;
        }else{
            rear->next = newNode;
            rear = newNode;
        }
        cout << val << " enqueued to queue" << endl;
    }

    void dequeue(){
        if(isEmpty()){
            cout << "Queue Underflow" << endl;
            return;
        }

        Node* temp = front;
        cout << front->data << " dequeued from queue" << endl;
        front = front->next;

        if(front == nullptr)
            rear = nullptr;

        delete temp;
    }

    void peek(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Front element is: " << front->data << endl;
    }

    void display(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = front;
        cout << "Queue elements: ";

        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.peek();

    q.dequeue();
    q.display();

    return 0;
}
