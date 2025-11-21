#include<iostream>
using namespace std;

int main(){
    int arr[4] = {38, 27, 43, 3};
    int n = 4;  
    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    // Mergesort algorithm
    int left = 0;
    int right = n - 1;
    int mid = (left + right) / 2;

    // First half
}