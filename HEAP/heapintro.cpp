// A heap is a complete binary tree that satisfies the heap property.

// Complete Binary Tree: A binary tree in which all levels are completely filled except possibly the last level, which is filled from left to right.

// Max Heap -> Parent node is greater than or equal to its children. Highest value is at the root.
// Min Heap -> Parent node is less than or equal to its children. Lowest value is at the root.
// Left child of Node i = ( 2 * i ) + 1
// Right child of Node i = ( 2 * i ) + 2
// Parent of Node i = ( i - 1 ) / 2


// //Insertion in Heap:
// #include <iostream>
// using namespace std;

// class MaxHeap{
// public:
//     int arr[100];
//     int size;
//     MaxHeap(){
//         size = 0;
//     }

//     void insert(int val){
//         arr[size] = val;
//         int index = size;
//         size++;
        
//         while(index > 0){
//             int parent = (index - 1) / 2;
//             if(arr[parent] < arr[index]){ // For min heap use '>'
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             } else {
//                 return;
//             }
//         }
//     }

//     void printHeap(){
//         for(int i = 0; i < size; i++){
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// class MinHeap{
// public:
//     int arr[100];
//     int size;
//     MinHeap(){
//         size = 0;
//     }

//     void insert(int val){
//         arr[size] = val;
//         int index = size;
//         size++;
        
//         while(index > 0){
//             int parent = (index - 1) / 2;
//             if(arr[parent] > arr[index]){
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             } else {
//                 return;
//             }
//         }
//     }

//     void printHeap(){
//         for(int i = 0; i < size; i++){
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main(){
//     MaxHeap maxHeap;
//     MinHeap minHeap;

//     maxHeap.insert(10);
//     maxHeap.insert(15);
//     maxHeap.insert(30);
//     maxHeap.insert(7);
//     maxHeap.insert(28);
//     maxHeap.insert(8);

//     minHeap.insert(10);
//     minHeap.insert(20);
//     minHeap.insert(5);
//     minHeap.insert(30);

//     cout << "Max Heap: ";
//     maxHeap.printHeap();

//     cout << "Min Heap: ";
//     minHeap.printHeap();

//     return 0;
// }

// Deletion in Heap:

#include <iostream>
using namespace std;

class MaxHeap{
public:
    int arr[100];
    int size;
    MaxHeap(){
        size = 0;
    }

    void insert(int val){
        arr[size] = val;
        int index = size;
        size++;
        
        while(index > 0){
            int parent = (index - 1) / 2;
            if(arr[parent] < arr[index]){ // For min heap use '>'
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void heapify(int i){
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        
        if(left < size && arr[left] > arr[largest]){
            largest = left;
        }
        if(right < size && arr[right] > arr[largest]){
            largest = right;
        }
        if(largest != i){
            swap(arr[i], arr[largest]);
            heapify(largest);
        }

    }

    void deleteRoot(){
        if(size == 0){
            cout << "Heap is empty!" << endl;
            return;
        }

        // 1. Replace root with last element
        // 2. Reduce size by 1
        // 3. Heapify down from root to restore heap property
        arr[0] = arr[size - 1];
        size--;
        int index = 0;

        heapify(index);
    }

    void getMax(){
        if(size == 0){
            cout << "Heap is empty!" << endl;
            return;
        }
        cout << "Max element is: " << arr[0] << endl;
    }

    void display(){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

class MinHeap{
public:
    int arr[100];
    int size;
    MinHeap(){
        size = 0;
    }

    void insert(int val){
        arr[size] = val;
        int index = size;
        size++;
        
        while(index > 0){
            int parent = (index - 1) / 2;
            if(arr[parent] > arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void heapify(int i){
        int smallest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        
        if(left < size && arr[left] < arr[smallest]){
            smallest = left;
        }
        if(right < size && arr[right] < arr[smallest]){
            smallest = right;
        }
        if(smallest != i){
            swap(arr[i], arr[smallest]);
            heapify(smallest);
        }

    }

    void deleteRoot(){
        if(size == 0){
            cout << "Heap is empty!" << endl;
            return;
        }

        arr[0] = arr[size - 1];
        size--;
        int index = 0;

        heapify(index);
    }

    void display(){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    MaxHeap maxHeap;

    maxHeap.insert(20);
    maxHeap.insert(10);
    maxHeap.insert(15);
    maxHeap.insert(7);
    maxHeap.insert(8);

    cout <<"Max element in Max Heap: ";
    maxHeap.getMax();

    cout << "Max Heap before deletion: ";
    maxHeap.display();

    maxHeap.deleteRoot();
    cout << "Max Heap after deleting root: ";
    maxHeap.display();

    MinHeap minHeap;
    minHeap.insert(20);
    minHeap.insert(10);
    minHeap.insert(15);
    minHeap.insert(7);
    minHeap.insert(8);

    cout << "Min Heap before deletion: ";
    minHeap.display();

    minHeap.deleteRoot();
    cout << "Min Heap after deleting root: ";
    minHeap.display();
    return 0;
}