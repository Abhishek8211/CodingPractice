// QUICKSORT ALGORITHM IN C++

#include <iostream>
using namespace std;

int iteration = 1;   // To count partition steps

// Partition function
int partition(int arr[], int low, int high) {

    int pivot = arr[high];   // Choose last element as pivot
    int i = low - 1;         // Index of smaller element

    // Move elements smaller than pivot to left side
    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);   // Swap smaller element
        }
    }

    // Place pivot in correct position
    swap(arr[i + 1], arr[high]);

    // Print array after each partition
    cout << "Iteration " << iteration++ << ": ";
    for(int x = 0; x < 5; x++)
        cout << arr[x] << " ";
    cout << endl;

    return i + 1;   // Return pivot index
}

// Recursive quick sort function
void quickSort(int arr[], int low, int high) {
    if(low < high) {

        // Partition the array
        int pi = partition(arr, low, high);

        // Sort left side of pivot
        quickSort(arr, low, pi - 1);

        // Sort right side of pivot
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[5] = {4, 5, 7, 1, 6};

    // Call quick sort
    quickSort(arr, 0, 4);

    // Print final sorted array
    cout << "Final Sorted Array: ";
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}
