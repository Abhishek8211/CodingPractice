// // 50) WAP to print reverse of a given number.
// #include<stdio.h>
// int main(){
//     int i, reverse = 0;
//     printf("Enter your digit: ");
//     scanf("%d", &i);
//     while(i!=0){
//         reverse = reverse * 10 + (i % 10);
//         i = i / 10;    
//     }
//     printf("Reverse of the number is: %d\n", reverse);
//     return 0;
// }


// 50) WAP to print the sum of given number and its reverse.
// #include<stdio.h>
// int main(){
//     int a, b , sum = 0, rev = 0, remainder;
//     printf("Enter the number: ");
//     scanf("%d", &a);
    
//     while(a!=0){
//         remainder = a%10;
//         sum += remainder;
//         a /= 10;
//     }
//     printf("The sum of all digits of number %d is: %d", a, sum);
//     while (a!=0)
//     {
//         rev = rev * 10 + (a%10);
//         a /= 10;
//     }
//     printf("\nThe reverse of number %d is: %d", a,rev);
//     return 0;
// }

// // 52) Print the factorials of first n numbers.
// #include<stdio.h>
// int main(){
//     int n, fact = 1;
//     printf("Enter the n term: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         fact = fact * i;
//         printf("\nThe factorial of number %d is : %d", i, fact);
//     }
//     return 0;
// }


// // 53) Print the nth FIBONACCI SERIES.
// #include<stdio.h>
// int main(){
//     int n,a = 1, b = 1, sum = 1;
//     printf("Enter the n term: ");
//     scanf("%d", &n);
//     printf("%d %d ", a,b);
//     for(int i = 3; i <= n; i++){
//         sum = a + b;
//         a = b;
//         b = sum;
//         printf("%d ", sum);
//     }
//     printf("\nThe %d fibonacci term is: %d",n,sum);
//     return 0;
// } // or by recursion you can use return fib(n-1) + fib(n-2)


// // 56) Write a program to print out all Armstrong number between 1 and 500. If sum of cubes of each digit of the
// // number is equal to the number itself, then the number is called the Armstrong number. For Example,
// // 153 = (1*1*1) + (5*5*5) + (3*3*3)
// #include<stdio.h>
// int main(){
//     int a,result = 0,remainder;
//     for(int i = 1; i <= 500; i++){
//         a = i;
//         result = 0;
//         while(a != 0){
//             remainder = a % 10;
//             result += remainder * remainder * remainder;
//             a /= 10;
//         }
//         if(result == i){
//             printf("%d is an Armstrong number.\n", i);
//         }
//     }
//     return 0; 
// }


// //FIND THE GREATEST PRIME FACTOR
// #include<stdio.h> 
// int main(){ 
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i = n/2; i > 1; i--){
//         int prime = 1;
//         if(n % i == 0){
//             //printf("%d ", i);
//             for(int j = 2; j < i; j++){
//                 if(i % j == 0){
//                     prime = 0;
//                 }
//             }
//             if(prime){
//                 printf("%d", i);
//                 break;
//             }
//         }
//     }
// }



// #include<stdio.h>
// int count_3s(int n){
//     int c = 0;
//     while (n > 0)
//     {
//         if(n % 10 == 3){
//             c++;
//         }
//         n = n / 10;
//     }
//     return c;
// }

// int count_in_range(int j){
//     int c = 0;
//     for(int i = 2; i <= j; i++){
//         c+=count_3s(i);
//     }
//     return c;
// }
// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     printf("%d", count_in_range(n));
//     return 0;
// }


// // FIND THE MAXIMUM VALUE and minimum OUT OF ALL THE ELEMENTS IN THE ARRAY
// // arr[8] = {99,2,11,13,3,4,8,7}
// #include<stdio.h>
// int main(){ 
//     int arr[9] = {9,2,11,13,3,0,58,8,58};
//     int max = arr[0]; // first index wala number put kr do
//     int min = arr[0];
//     for(int i = 0; i < 8; i++){
//         if( max < arr[i]){
//             max = arr[i];
//         }
//         if( min > arr[i]){
//             min = arr[i];
//         }
//     }
//     printf("The greatest number is : %d", max);
//     printf("\nThe smallest number is : %d", min);
// }


// //SEARCHING OF THE ARRAY MULTIPLE TIMES
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &a);
//     int loc = -1;
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter element no. %d - ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Your input array is : ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\nEnter the number you want to search for: ");
//     int b;
//     scanf("%d", &b);
//     int c = 0;
//     for(int i = 0; i < a; i++){
//         if(arr[i] == b){
//             loc = i;
//             c++;
//         }
//         while(c!=0){
//             // if(loc != -1){
//             //     printf("\nYour element %d is present at : %d.", b,loc);
//             // }
//             printf("Your element %d is present at : %d.\n", b,loc);
//             c--;
//         }   
//     }
//     if(loc == -1){
//         printf("\nYour element %d is not present in the given array.", b);
//     }
// }


//2D ARRAY

// // for input and output
// #include<stdio.h>
// int main(){
//     printf("Enter the number of rows and columns: ");
//     int r,c;
//     scanf("%d %d", &r, &c);
//     int arr[r][c];
//     for(int i = 0; i< r; i++){
//         for(int j = 0; j < c; j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for(int i = 0; i< r; i++){
//         for(int j = 0; j < c; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }



// // find the number of pairs in the array whose sum 
// // is equal to the given value x.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &a);
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter element no. %d - ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Your given array is: ");

//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }
    
//     int b;
//     printf("\nEnter the value of x: ");
//     scanf("%d", &b);

//     int sum = 0;
//     int count = 0;
//     for(int i = 0; i < a; i++){
//         for(int j = i+1; j < a ; j++){
//             sum = arr[i] + arr[j];
//             if(sum == b){
//                 count++;
//                 printf("(%d,%d) ", arr[i], arr[j]);
//             }
//         }
//     }
//     printf("\nTotal no. of pairs = %d", count);

// }



// //find the second largest array of the array
// #include<stdio.h>
// //#include<limits.h>
// int main(){
//     int a;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &a);
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter element no. %d - ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Your given array is: ");

//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }

//     int max = arr[0];
//     int sec_max = arr[0];

//     for (int i = 0; i < a; i++){
//         if(max < arr[i]){
//             max = arr[i];
//         }
//     }
//     //max = 5
//     for (int i = 0; i < a; i++){
//         if(arr[i] != max && sec_max < arr[i]){
//             sec_max = arr[i];
//         }
//     }
    
//     printf("\nSecond maximum value is : %d", sec_max);
// }


//BUBBLE SORTING IN ARRAY start comparing left element to the right element
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the size of the array: ");
//     scanf("%d", &a);
//     int arr[a];

//     for(int i = 0; i < a; i++){
//         printf("Enter the %d element - ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Your given array is: ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }

//     int n = a;
//     int temp;

//     for(int i = 0; i < n - 1; i++){
//         for(int j = 0; j < n - i - 1; j++){
//             if(arr[j] > arr[j+1]){
//                 temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//             }
//         } 
//     }

//     printf("\nYour array after sorting is: ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }




// #include<stdio.h>
// struct Pythagorean
// {
//     int a;
//     int b;
//     int c;
//     int r;
// };
// int main(){
//     struct Pythagorean p;
//     int a,b,c;
//     int *pa = &a;
//     scanf("%d %d %d", pa, &b, &c);
//     p.r = (a*a) + (b*b);
//     if(p.r == c*c){
//         printf("Pythagorean triple.");
//         if(a == 3 && b == 4 && c == 5 || a == 4 && b == 3 && c == 5 || a == 5 && b == 3 && c == 4){
//             printf("\nSpecial triple.");
//         }
//         else{
//             printf("\nNot a special triple");
//         }
//     }
//     else{
//         printf("\nNot a pythagorean triple.");
//     }
//     return 0;
// }


// 


// // find if a letter is upper case or not
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter any character: ");
//     scanf("%c", &ch);
//     if(ch >= 'A' && ch <= 'Z'){
//         printf("Upper Case Letter");
//     }
//     else if(ch >='a' && ch <= 'z'){
//         printf("Lower Case Letter");
//     }
//     else{
//         printf("Not a letter");
//     }
//     return 0;
// }


// //use recursion to find the sum of n natural numbers.
// #include<stdio.h>

// int sum(int n){
//     if(n == 0){
//         return 0;
//     }
//     else if(n == 1){
//         return 1;
//     }
//     return n + sum(n-1);
// }

// int main(){
//     printf("%d ", sum(3));
//     //sum(5);
//     return 0;
// }

// // use recursion to find the factorial of a number
// #include<stdio.h>
// int fact(int n){
//     if(n == 0){
//         return 1;
//     }
//     else if(n == 1){
//         return 1;
//     }
//     return n * fact(n-1);
// }

// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     printf("The factorial of %d is : %d", n, fact(n));
// }


// // use recursion to find the fibonacci series of n numbers
// #include <stdio.h>

// // Recursive function to return the nth Fibonacci number
// int fibonacci(int n) {
//     if (n == 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n;

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series up to %d terms:\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }

//     return 0;
// }
 

// // fibonacci series without recursion
// #include<stdio.h>
// int main(){
//     int n, a = 0, b = 1, c;
//     printf("Enter n terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series up to %d terms:\n", n);
//     for(int i = 0; i < n; i++){
//         if( i == 0){
//             c = 0;
//         }
//         else if(i == 1){
//             c = 1;
//         }
//         else{
//             c = a + b;
//         }
//         printf("%d ", c);
//         a = b;
//         b = c;
//     }
//     return 0;
// }


// // GCD AND LCM of two numbers
// #include <stdio.h>

// int main() {
//     int a, b, i, gcd, lcm;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     // Find GCD
//     for (i = 1; i <= a && i <= b; i++) {
//         if (a % i == 0 && b % i == 0) {
//             gcd = i;
//         }
//     }

//     // Find LCM
//     lcm = (a * b) / gcd;

//     printf("GCD = %d\n", gcd);
//     printf("LCM = %d\n", lcm);

//     return 0;
// }


// // pointers use
// #include<stdio.h>

// void work(int a, int b, int *sum, int *prod, int* avg){
//     *sum = a + b;
//     *prod = a * b;
//     *avg = (a + b) / 2;
// }
// int main(){
//     int a = 10, b = 20, sum, prod, avg;
//     work(a, b, &sum, &prod, &avg);

//     printf("Sum = %d\n", sum);
//     printf("Product = %d\n", prod);
//     printf("Average = %d\n", avg);
//     return 0;
// }

// check if a number is prime or not
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     int c = 0;
//     for(int i = 1; i <= a; i++){
//         if(a%i == 0){
//             c++;
//         }
//     }
//     if(c == 2){
//         printf("The %d number is prime", a);
//     }
//     else{
//         printf("Not prime");
//     }
// }


// #include <stdio.h>

// int main() {
//     int arr[100], n, isPalindrome = 1;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Check palindrome
//     for (int i = 0; i < n / 2; i++) {
//         if (arr[i] != arr[n - 1 - i]) {
//             isPalindrome = 0;
//             break;
//         }
//     }

//     if (isPalindrome)
//         printf("The array is a palindrome.\n");
//     else
//         printf("The array is NOT a palindrome.\n");

//     return 0;
// }


// // find the maximum from the array

// #include<stdio.h>
// int main(){
//     int arr[8] = {1, 2, 3, 4, 3, 2, 1, 0};
//     int max = arr[0];
//     for(int i = 0; i < 8; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     printf("The maximum of this array is : %d", max);
//     if(arr == NULL){
//         printf("Array is empty");
//     }
//     return 0;
// }