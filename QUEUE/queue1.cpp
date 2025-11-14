/*
QUEUE -> FIFO (First In First Out) data structure implementation in C++ 
Front -> Delete from the front
Rear  -> Insert from the rear

IN queue read = -1 and front = 0 initially Insertion -> Enqueue Operation Deletion -> Dequeue Operation

1) isEmpty() -> Check if queue is empty -> rear == -1
2) isFull()  -> Check if queue is full  -> rear == size - 1
3) enqueue(val) -> Insert element at rear check isFull condition and then rear++ and arr[rear] = val
4) dequeue() -> Delete element from front check isEmpty condition and then print arr[front] and then shift all elements to left using for loop like arr[i] = arr[i+1] and rear--
5) peek() / front() -> return front element (check isEmpty condition) display arr[front]
6) display() -> display all elements from front to rear


*/

#include<iostream>
using namespace std;

class Queue {
    int front, rear, size;
    int *arr;
public:
    Queue(int s){
        front = 0;
        rear = -1;
        size = s;
        arr = new int[s];
    }

    bool isFull(){
        return rear ==  size - 1;
    }

    bool isEmpty(){
        return rear == -1;
    }

    void enqueue(int val){
        if(isFull()){
            cout << "Queue Overflow" << endl;
            return;
        }
        rear++;
        arr[rear] = val;
        cout << val << " enqueued to queue" << endl;
    }

    void dequeue(){
        if(isEmpty()){
            cout << "Queue Underflow" << endl;
            return;
        }
        cout << arr[front] << " dequeued from queue" << endl;
        // Shift all elements to the left via traversing
        for(int i = front; i < rear; i++){
            arr[i] = arr[i+1];
        }
        rear--;
    }


    void peek(){ // SHOW THE ELEMENT WHICH I WANT TO DELETE i.e FRONT ELEMENT   
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Front element is: " << arr[front] << endl;
    }


    void display(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }
        for(int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    int n, val;
    cout << "Enter size of queue: ";
    cin >> n;
    Queue q(n);
    for(int i = 0; i < n; i++){
        cout << "Enter value to enqueue: ";
        cin >> val;
        q.enqueue(val);
    }
    cout << "Current Queue: ";
    q.display();

    cout << "Deleting all elements:" << endl;
    for(int i = 0; i < n; i++){
        q.dequeue();
    }
    cout << "Current Queue after deletions: ";
    q.display();
    return 0;
}