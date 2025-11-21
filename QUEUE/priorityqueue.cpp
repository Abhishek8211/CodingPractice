// #include<iostream>
// using namespace std;

// struct Task{
//     int priority;
//     int deadline;
//     string name;
// };

// Task arr[10000];
// Task temp[10000];

// // class Queue{
// // public:
// //     Node* front;
// //     Node* rear;

// //     Queue(){
// //         front = nullptr;
// //         rear = nullptr;
// //     }

// //     bool isEmpty(){
// //         return front == nullptr;
// //     }

// //     void enqueue(int val){
// //         Node* newNode = new Node();
// //         newNode -> data = val;
// //         newNode -> next = nullptr;
// //         if(isEmpty()){
// //             front = rear = newNode;
// //         }

// //     }
// // };

// bool isGreater(Task a, Task b){
//     if(a.priority != b.priority)
//         return a.priority > b.priority;
//     else
//         return a.deadline < b.deadline;
// }


// void mergeSort(Task arr[], int left, int right){
//     if(left >= right)
//         return;

//     int mid = left + (right - left) / 2;
//     mergeSort(arr, left, mid);
//     mergeSort(arr, mid + 1, right);

//     int i = left;
//     int j = mid + 1;
//     int k = left;

//     while(i <= mid && j <= right){
//         if(isGreater(arr[i], arr[j])){
//             temp[k++] = arr[i++];
//         }else{
//             temp[k++] = arr[j++];
//         }
//     }

//     while(i <= mid){
//         temp[k++] = arr[i++];
//     }

//     while(j <= right){
//         temp[k++] = arr[j++];
//     }

//     for(int p = left; p <= right; p++){
//         arr[p] = temp[p];
//     }
// }



// int main(){
//     // Queue q;
//     int n;
//     cout << "Enter number of tasks: ";
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cout << "Enter priority, deadline and name of task " << i+1 << ": ";
//         cin >> arr[i].priority >> arr[i].deadline >> arr[i].name;
//     }

//     mergeSort(arr, 0, n - 1);

//     cout << "Tasks in order of priority:" << endl;
//     for(int i = 0; i < n; i++){
//         cout << arr[i].name << " (Priority: " << arr[i].priority << ", Deadline: " << arr[i].deadline << ")" << endl;
//     }
//     return 0;
// }


// 2ND METHOD

#include <iostream>
#include <algorithm>
using namespace std;

struct Task {
    int priority;
    int deadline;
    string name;
};

Task arr[10000];

bool cmp(Task a, Task b) {
    if (a.priority != b.priority)
        return a.priority > b.priority;   // higher priority first
    return a.deadline < b.deadline;       // earlier deadline first
}

int main() {
    int n;
    cout << "Enter number of tasks: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter priority, deadline and name of task " << i + 1 << ": ";
        cin >> arr[i].priority >> arr[i].deadline >> arr[i].name;
    }

    // ⭐ Sort using comparator
    sort(arr, arr + n, cmp);

    cout << "\nTasks in order of priority:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i].name
             << " (Priority: " << arr[i].priority
             << ", Deadline: " << arr[i].deadline << ")\n";
    }

    return 0;
}
