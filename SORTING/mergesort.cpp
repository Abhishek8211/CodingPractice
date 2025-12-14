// MERGER SORT IN C++

#include <iostream>
using namespace std;

int iteration = 1;   // To count merge steps

// Function to merge two sorted parts of the array
void merge(int arr[], int left, int mid, int right) {

    // Size of left and right subarrays
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Temporary arrays
    int L[n1], R[n2];

    // Copy data to left subarray
    for(int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    // Copy data to right subarray
    for(int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;   // Index for main array

    // Merge the two subarrays back into arr[]
    while(i < n1 && j < n2) {
        if(L[i] <= R[j])       // Compare elements
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    // Copy remaining elements of L[] if any
    while(i < n1)
        arr[k++] = L[i++];

    // Copy remaining elements of R[] if any
    while(j < n2)
        arr[k++] = R[j++];

    // Print array after each merge
    cout << "Iteration " << iteration++ << ": ";
    for(int x = 0; x < 5; x++)
        cout << arr[x] << " ";
    cout << endl;
}

// Recursive merge sort function
void mergeSort(int arr[], int left, int right) {
    if(left < right) {

        // Find the middle index
        int mid = left + (right - left) / 2;

        // Sort left half
        mergeSort(arr, left, mid);

        // Sort right half
        mergeSort(arr, mid + 1, right);

        // Merge both halves
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[5] = {4, 5, 7, 1, 6};

    // Call merge sort
    mergeSort(arr, 0, 4);

    // Print final sorted array
    cout << "Final Sorted Array: ";
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}
