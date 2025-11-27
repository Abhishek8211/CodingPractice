// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n == 0){
//         return;
//     }
//     cout<<n<<endl;
//     print(n - 1);
// }

// int main(){
//     int number = 5;
//     print(number);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int fact(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     }
//     return n * fact(n - 1);
// }

// int main(){
//     int number = 5;
//     cout << "Factorial of " << number << " is " << fact(number) << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int sum(int n){
//     if(n == 0){
//         return 0;
//     }
//     return n + sum(n - 1);
// }

// int main(){
//     int n = 5;
//     int res = sum(n);
//     cout << "Sum of first " << n << " natural numbers is " << res << endl;
//     return 0;
// }

// finding fibonacci number using recursion
#include <iostream>
using namespace std;

int fibo(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

void printfibo(int n){
    for(int i = 0; i < n; i++){
        cout << fibo(i) << " ";
    }
    cout << endl;
}

int main(){
    int n = 6;
    printfibo(n);
    return 0;
}