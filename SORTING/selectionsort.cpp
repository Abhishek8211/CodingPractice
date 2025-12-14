// SELECTION SORT IMPLEMENTATION IN C++
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i = 0; i < n - 1; i++){
        // Assume the minimum is the first element
        int minIndex = i;

        // Test against elements after i to find the smallest
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if(minIndex != i){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }

        // Print array after each iteration
        cout << "Iteration " << i + 1 << ": ";
        for(int k = 0; k < n; k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);

    cout << "Final Sorted Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}