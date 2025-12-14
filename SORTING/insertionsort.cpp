// INSERTION SORTING ALGORITHM
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        // Print array after each iteration
        cout << "Iteration " << i << ": ";
        for(int k = 0; k < n; k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);

    cout << "Final Sorted Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}