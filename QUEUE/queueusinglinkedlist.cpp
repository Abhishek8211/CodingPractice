#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class Queue{
private:
    Node* front;
    Node* rear;
public:
    Queue(){
        front = nullptr;
        rear = nullptr;
    }

    bool isEmpty(){
        return front == nullptr;
    }

    void enqueue(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;


        if(isEmpty()){
            front = rear = newNode;
        }else{
            rear -> next = newNode;
            rear = newNode;
        }

        cout<< value << " enqueued to queue" << endl;
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty, cannot dequeue"<<endl;
            return;
        }

        Node* temp = front; // delete front node
        front = front -> next;

        if(front == nullptr){ // If queue becomes empty
            rear = nullptr;
        }

        cout<< temp->data << " dequeued from queue" << endl;
        delete temp;
    }

    void display(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }

        Node* temp = front;
        cout<<"Queue elements: ";
        while(temp != nullptr){
            cout<< temp->data << " ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue(); // Attempt to dequeue from empty queue

    return 0;
}