// #include<iostream>
// using namespace std;

// void quicksort(int arr[], int start, int end){

//     if(start >= end){
//         return;
//     }
//     int pivot = arr[end];
//     int i = start - 1;

//     for(int j = start; j <= end - 1; j++){
//         if(arr[j] <= pivot){
//             i++;
//             swap(arr[j], arr[i]);
//         }
//     }

//     swap(arr[i + 1], arr[end]);

//     int pivotIndex = i + 1;

//     quicksort(arr, start, pivotIndex - 1);
//     quicksort(arr, pivotIndex + 1, end);
// }

// int main(){
//     int arr[] = {34, 7, 23, 32, 5, 62};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     quicksort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }