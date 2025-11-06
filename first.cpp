// #include <iostream>

// int main(){
//     std::cout<< "Hello World !" << std::endl;
//     return 0;
// }

// // first program in c
// #include <iostream>
// using namespace std;

// int main(){
//     cout << "Hello Abhishek. " ;
//     cout << "Good Morning." ;
//     cout << 3;
//     cout << 3 + 3;

//     return 0;
// }


// // printing next line in c
// #include <iostream>
// using namespace std;

// int main(){
//     cout << "Hello Abhishek. \n" ;
//     cout << "Good Morning." << "\n\n"; // breaking double line
//     cout << 3 << "\n";
//     cout << 3 + 3 << endl;
//     cout << "Thank You";
//     return 0;
// }



// variable in c
/*
Variables are containers for storing data values.

In C++, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int num = 15;
//     cout << num << endl;

//     int mynum = 5;
//     double myfloat = 5.99;
//     char mychar = 'A';
//     string mystring = "Hello World";
//     bool mybool = true;

//     cout << myfloat << '\n';
//     cout << mychar << '\n';
//     cout << mystring << '\n';
//     cout << mybool << '\n';
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int age = 15;
//     cout << "I am " << age << " years old.";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 8, b = 5;
//     int sum  = a + b;
//     cout << "Sum of a and b is : " << sum ;
// }


// // CONSTANTS
// // const int minutesPerHour = 60; THIS VALUE CANT BE CHANGED SO THATS WHY WE USE const variable

// #include<iostream>
// using namespace std;
// int main(){
//     const int minutesPerHour = 60;
//     cout << "Minutes per hour is : " << minutesPerHour << endl;
//     minutesPerHour = 30; // THIS WILL GIVE YOU AN ERROR BECAUSE WE cant change it;
//     return 0;
// }


// // NORMAL PROGRAM 
// #include<iostream>
// using namespace std;
// int main(){
//     // Student data
//     int studentID = 15;
//     int studentAge = 23;
//     float studentFee = 75.25;
//     char studentGrade = 'B';

//     // Print variables
//     cout << "Student ID: " << studentID << "\n";
//     cout << "Student Age: " << studentAge << "\n";
//     cout << "Student Fee: " << studentFee << "\n";
//     cout << "Student Grade: " << studentGrade << "\n";
//     return 0;
// }

// // calculate the area of rectangle 
// #include<iostream>
// using namespace std;
// int main(){
//     int length = 10;
//     int width = 5;
//     int area = length * width;
//     cout << "Length : "<< length << endl;
//     cout << "Width : "<< width << endl;
//     cout << "Area of rectangle is : " << area << endl;
//     return 0;
// }


// //taking user input
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout << "Enter a number : ";
//     cin >> x;
//     cout << "Your number is: "<< x;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     bool yes = true;
//     bool no = false;
//     cout << "yes : "<< yes << endl;
//     cout << "no : "<< no << endl;
// }


// //STRING PART
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string greeting  = "Hello Abhishek.";
//     cout << greeting;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int b = 1;
//     cout << (a > b) ;
// }


// // taking input and printing it
// #include<iostream>
// #include<cstdio>
// using namespace std;

// int main(){
//     char str[100];
//     cout << "Enter an string : ";
//     gets(str);
//     //cout<< "Your string is: "<< str ;
//     cout << "Your Given String is: ";
//     puts(str);
//     return 0;
// }

// // CONSTANT const KEYWORD IS USED for not changing the values later example is given below.
// #include<iostream>
// using namespace std;
// int main(){
//     const double pi = 3.14;
//     float radius;
//     cout << "Enter the radius of circle : ";
//     cin >> radius;
//     double area = pi * radius * radius;
//     cout << "Area of circle with radius "<< radius << " is : "<< area;
//     return 0;
// }


// // IF STATEMENT
// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     cout<< "Enter a number : ";
//     cin >> a;
//     if( a > 0){
//         cout << "The number is positive : " << a << ".";
//     }
//     else if( a == 0){
//         cout << "The number is zero.";
//     }
//     else{
//         cout << "The number is negative : " << a << ".";
//     }
//     return 0;
// }


// // check whether a given character is upper case or lower case
// #include<iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
    
//     if(int(ch) >= 97 && int(ch) <= 122){
//         cout << "Your given character : '"<< ch << "' is a lower case character.";
//     }
//     else if(int(ch) >= 65 &&int(ch) <= 90){
//         cout << "Your given character : '"<< ch << "' is a upper case character.";
//     }
//     else {
//         cout << "Your given character is not a character.";
//     }
    
// }


// LOOPING
// for loop

// #include<iostream>
// using namespace std;

// int main(){
//     for( int i = 1 ; i <= 5; i++){
//         cout<< i << endl;
//     }
//     return 0;
// }

// // C++ program to find the sum of first n natural numbers
// // positive integers such as 1,2,3,...n are known as natural numbers
// // formulae is n*(n+1) / 2

// #include<iostream>
// using namespace std;

// int main(){
//     int num, sum = 0;
//     cout<< "Enter a positive integer: ";
//     cin >> num;
//     for(int i = 0; i <= num; i++){
//         sum += i;
//     }
//     cout << "Sum = " << sum << endl;
//     return 0;
// }

// // Fibonacci Series
// #include<iostream>
// using namespace std;

// int main(){
//     int n, num1 = 0, num2 = 1, nextTerm = 0;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     for(int i = 1 ; i <= n; i++){
//         if(i == 1){
//             cout << "0 ";
//             // continue;
//         }
//         if(i == 2){
//             cout << "1 ";
//             // continue; // error aarha continue hatane pe
            
//         }
//         if(i >= 3){
//             nextTerm = num1 + num2;
//             num1 = num2;
//             num2 = nextTerm;

//             cout << nextTerm << " ";
//         }
//     }
//     return 0;
// }

// // find the GCD of the number 
// #include<iostream>
// using namespace std;

// int main(){
//     int num1, num2, gcd = 0;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     // swapping the number if num2 is greater than num1
//     if( num2 > num1){
//         int temp = num1;
//         num1 = num2;
//         num2 = temp;
//     }

//     for(int i = 1; i < num1; i++){
//         if(num1 % i == 0 && num2 % i == 0){
//             gcd = i;
//         }
//     }

//     cout << "The GCD of numbers " << num1 << " & " << num2 << " is : " << gcd << "." << endl;

//     //LCM OF BOTH NUMBERS
//     int lcm = (num1 * num2) / gcd;
//     cout << "The LCM of numbers " << num1 << " & " << num2 << " is : " << lcm << "." << endl;
//     return 0;
// }



//  // check whether the given number is prime or not;
//  #include<iostream>
//  using namespace std;

//  int main(){
//     int num;
//     bool isPrime = true;

//     while(true){
//         cout << "Enter a number: ";
//         cin >> num;
//         if(num < 1 || num == 0){
//             cout << "Number cannot be 0 or negative.";
//             break;
//         }
//         for(int i = 2; i <= num - 1; i++){
//             if(num % i == 0){
//                 isPrime = false;
//             }
//         }
//         if(isPrime){
//             cout << "The number " << num << " is a prime number."<< endl;
//         }
//         else{
//             cout << "The number " << num << " is not a prime number."<< endl;
//         }
//     }
//     return 0;
// }




// // find the factors of given numbers
// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Factors of number: " << num << " is : ";
//     for(int i = 1; i <= num ; i++){
//         if(num % i == 0){
//             cout << i <<", " ; // how to remove the comma from the output end.
//         }
//     }
//     return 0;
// }


// //Find the factorial of a number;
// #include<iostream>
// using namespace std;

// int main(){
//     int num, fact = 1, i = 1;
//     cout << "Enter a number: ";
//     cin >> num;
//     while(i <= num){
//         fact = fact * i;
//         i++;
//     }
//     cout << "The factorial of number " << num << " is : "<< fact << ".";
//     return 0;
// }


// // program to find the sum of positive numbers
// // if the user enters a negative numbers, break ends the loop
// // the negative number entered is not added to sum
// #include<iostream>
// using namespace std;

// int main(){
//     int num , sum = 0;
//     while (true)
//     {
//         cout << "Enter a number: ";
//         cin >> num;
//         if(num < 0){
//             break;
//         }
//         sum = sum + num;
//     }
//     cout << "The sum of positive numbers is: "<< sum;
    
//     return 0;
// }


// // SWITCH CASES
// // Create a calculator using switch case.
// #include<iostream>
// using namespace std;

// int main(){
//     char character;
//     int num1, num2;
//     cout << "Enter two numbers : ";
//     cin >> num1 >> num2;
//     cout << "Enter any character (+, *, -, /): " << endl;
//     cin >> character;
//     switch(character){
//         case '+': cout << num1 << " + " << num2 << " = " << num1 + num2;
//         break;
        
//         case '-': cout << num1 << " - " << num2 << " = " << num1 - num2;
//         break;

//         case '*': cout << num1 << " * " << num2 << " = " << num1 * num2;
//         break;

//         case '/': if(num2 != 0){
//             cout << num1 << " / " << num2 << " = " << num1 / num2;
//         }
//         else{
//             cout << "Error! Division by zero is not allowed.";
//         }
//         break;

//         default : cout << "Invalid operator";
//         break;
//     }
//     return 0;
// }



// // Functions 
// #include<iostream>
// using namespace std;

// int add(int a, int b){
//     return a + b;
// }

// int sub(int a, int b){
//     cout << a << " - " << b << " = " << a-b << endl;
// }

// int mul(int a, int b){
//     return a * b;
// }

// int main(){
//     int num1 = 5, num2 = 5;

//     cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
//     sub(num1, num2);
//     cout << num1 << " * " << num2 << " = " << mul(num1, num2) << endl;
//     return 0;
// }


// // PATTERNS 

// // pattern 1
// // 1
// // 2 3
// // 3 4 5
// // 4 5 6 7
// // 5 6 7 8 9
// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     //cin >> n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 0; j < i; j++){
//             cout << j + i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// // // pattern 2
// // A A A A 
// // B B B B
// // C C C C
// // D D D D
// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4; 
//     for(int i = 0; i < n; i++){
//         for(int j = 1; j <= n; j++){
//             char ch = 'A' + i;
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// // pattern 3
// // A B C D 
// // A B C D
// // A B C D
// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i = 1; i < n; i++){
//         for(int j = 0; j < n; j++){
//             char ch = 'A' + j;
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// // pattern 4
// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     int start = 1;
//     for(int i = 1; i < n; i++){
//         for(int j = 0; j < n; j++){
//             char ch = 'A' + start;
//             cout << ch << " ";
            
//         }
//         start++;
//         cout << endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int days;
//     cout << "Enter number of days: ";
//     cin >> days;
//     int years = days / 365;
//     int week = (days - (365 * years)) / 7;
//     int day = (days - (365 * years)) % 7;
//     cout << "Years : " << years << " Week : "<< week << " Days: " << day;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// void mystery(int &ptra, int &ptrb) {
    
//     int temp = ptrb; // swapping of two numbers using pointers
//     ptrb = ptra;
//     ptra = temp;

// }

// int main() {

//     int a = 2016, b = 0, c = 4, d = 42;
//     mystery(a, b);
//     // if (a < c)
//     //     mystery(&c, &a);
//     // cout << a << endl;
//     // mystery(&a, &d);
//     // cout << a;
//     cout << "Value of a : " << a << " and b : "<< b << endl;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {5, 2, 8, 1, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     //int* ptr = arr; // pointer to the array

//     // Bubble sort using pointers
//     for(int i = 0; i < n - 1; i++) {
//         for(int j = 0; j < n - i - 1; j++) {
//             if(*(arr + j) > *(arr + j + 1)) {
//                 // Swap using pointers
//                 int temp = *(arr + j);
//                 *(arr + j) = *(arr + j + 1);
//                 *(arr + j + 1) = temp;
//             }
//         }
//     }

//     // Print the sorted array
//     cout << "Sorted array using pointers: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
    
//   // initialize an array without specifying size
//   double numbers[] = {7, 5, 6, 12, 35, 27};

//   double sum = 0;
//   double count = 0;
//   double average;

//   cout << "The numbers are: ";

//   //  print array elements
//   // use of range-based for loop
//   for (double n : numbers) {
//     cout << n << "  ";

//     //  calculate the sum
//     sum += n;

//     // count the no. of array elements
//     count++;
//   }

//   // print the sum
//   cout << "\nTheir Sum = " << sum << endl;

//   // find the average
//   average = sum / count;
//   cout << "Their Average = " << average << endl;

//   return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//   int arr[5] = {1,2,3,4,5};
//   int sarr[5]={};
//   for(int i = 5; i > 0; i--){
//     sarr[5-i] = arr[i-1] ;
//   }

//   for(int i = 0 ; i < 5 ; i++){
//     cout << sarr[i] << " ";
//   }
//   return 0;
// }


// // CHECK THE STRING IS PALINDROME OR NOT
// #include<iostream>
// #include<cctype>
// using namespace std;

// int main(){
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);
//     for(int i = 0; i < str.length(); i++){
//         str[i] = tolower(str[i]);
//     }
//     cout << "Your given string is: " << str << "\n";
//     int len = str.length();
//     bool flag = true;
//     cout<< "Length of the string is: " << len << "\n";
//     for(int i = 0; i < len / 2; i++){
//         //cout << str[i] << " ";
//         // cout<< str[i] <<;
//         // cout << str[len- 1 - i] <<;
//         if(str[i] != str[len - 1 - i]){
//             flag = false;
//             break;
//         }
        
//     }
//     if(flag == true){
//         cout << "Palindrome";
//     }
//     else{
//         cout << "Not a palindrome";
//     }
//     return 0;
// }



// //STRUCTURE

// #include<iostream>
// using namespace std;

// struct Employee {  // STRUCTURE DECLARATION
//     char empname[50];
//     int empno;
//     float empsal;
// };

// void display(Employee e1);

// int main(){
//     Employee e1; // STRUCTURE VARIABLE

//     cout << "Enter the name of the employee: ";
//     cin.get(e1.empname , 50);
//     cout<< "Enter the number of the employee: ";
//     cin >> e1.empno;
//     cout << "Enter the salary of the employee: ";
//     cin >> e1.empsal;

//     display(e1); // PASSING STRUCTURE TO THE FUNCTION

//     // cout << "\nEmployee Details : "<< endl;
//     // cout << "Employee Name: " << e1.empname << endl;
//     // cout << "Employee Number: " << e1.empno << endl;
//     // cout << "Employee Salary: " << e1.empsal;

//     return 0;
// }

// void display(Employee e1){ //STRUCTURE FUNCTION
//     cout << "\nEmployee Details : "<< endl;
//     cout << "Employee Name: " << e1.empname << endl;
//     cout << "Employee Number: " << e1.empno << endl;
//     cout << "Employee Salary: " << e1.empsal;
// }



// // ENUMERATION

// #include <iostream>
// using namespace std;

// enum week{
//     sunday,
//     monday,
//     tuesday,
//     wednesday,
//     thursday,
//     friday,
//     saturday,
// };

// int main(){
//     week today;
//     today = monday;

//     cout << "Day : " << today;

//     return 0;
// }  



// // QUESTION ON STRUCTURE

// /*

// Write a C++ program which accepts 5 student records .The records of each student will include student id, name and total marks, grade and percentage.
// Display the details of all the students at the end.

// Step 1: Store the student details in a structure. We can use a character array

// to store the names i.e the character array will be a member of the structure

// Step 2: Create an array for 5 structure variables to access the information for 5 Students

// Step 3: Accept the information from the user to store the details of the students

// Step 4: Use a display function which will display the details. The display function should accept structure reference variable as parameter

 

// Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

// Starter Code:

// #include<iostream>
// using namespace std;
// struct student{
// };
// int main()
// {
// return 0;
// }

// */

// #include<iostream>
// using namespace std;

// struct Student
// {
//     char name[50];
//     int id, marks;
//     float percentage;
//     char grade;
// };

// void display(Student stu){
//     cout << "Id: " << stu.id << " || " ;
//     cout << "Name: " << stu.name << " || " ;
//     cout << "Total Marks out of 500: " << stu.marks << " || " ;
//     cout << "Percentage: " << stu.percentage << "%" << " || " ;
//     cout << "Grade: " << stu.grade << endl;
// }

// int main(){
//     int size = 5;
//     Student stu[size];
//     cout << "Enter details for " << size << " students: ";
//     for(int i = 0; i < size; i++){
//         cout << "\nStudent " << i+1 << " : \n";

//         cout<< "ID : ";
//         cin >> stu[i].id;
//         cin.ignore();

//         cout << "Name : " ;
//         cin.getline(stu[i].name, 50);

//         cout<< "Total Marks (out of 500): ";
//         cin >> stu[i].marks;

//         stu[i].percentage = (stu[i].marks / 500.00) * 100;

//         if(stu[i].percentage >= 90){
//             stu[i].grade = 'A';
//         }
//         else if(stu[i].percentage >= 75){
//             stu[i].grade = 'B';
//         }
//         else if(stu[i].percentage >= 50){
//             stu[i].grade = 'C';
//         }
//         else{
//             stu[i].grade = 'D';
//         }

//     }

//     cout<< "\nStudent Details : "<<endl;
//     for(int i = 0; i < size; i++){
//         display(stu[i]);
//     }
//     return 0;
// }


// // vector

// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//    vector<int> vec = {1,2,3};
//    //cout << vec[0];

//    vector<char> vec1 = {'a', 'e', 'i', 'o', 'u'};
//     cout << "size of vector : " << vec1.size() << endl;

//     for(char val : vec1){
//         cout << val << " ";
//     }

//    return 0;
// }



// // CLASS
// #include<iostream>
// using namespace std;

// class Players{
// public: // NEVER FORGET TO WRITE PUBLIC IN CLASS OF CPP
//     string name;
//     int runs;
//     float avg;

//     Players(string name, int runs, float avg){
//         this->name = name; // if you dont want to use this-> then use other names like strin n, int r, float a 
//         this->avg = avg;
//         this -> runs = runs;
//     }

//     void print(){ // FUNCTION INSIDE A CLASS
//         cout << "Player name is : " << name << " runs scored : " <<  runs << " with an avg of : " << avg << endl;
//     }
    
//     int matches(){
//         return runs / avg;
//     }

// };

// void display(Players p){ // we can also create a function inside a class or outside a class.
//     cout << "Player name is : " << p.name << " runs scored : " <<  p.runs << " with an avg of : " << p.avg << endl;
// }


// int main(){
//     Players p1("M.S  Dhoni", 45000, 52.4);
//     Players p2("Virat Kohli", 50000, 55.4);

//     p1.print(); // this is to call a function inside a class
//     cout << "Matches played by " << p1.name << " is : " << p1.matches() << endl;
//     display(p2); // calling a function outside of a class
//     cout << "Matches played by " << p2.name << " is : " << p2.matches() << endl;

//     return 0;
// }


// //ROTATING A 2D MATRIX 90 DEGREE
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();

//         //Transpose
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }

//         //Reverse each row
//         for (int i = 0; i < n; i++) {
//             reverse(matrix[i].begin(), matrix[i].end());
//         }
//     }
// };

// int main() {
//     vector<vector<int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

//     Solution sol;
//     sol.rotate(matrix);

//     // Print rotated matrix
//     for (auto &row : matrix) {
//         for (auto &val : row) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// // PLUS ONE
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size();
//         double power = pow(10, n-1);
//         int sum = 0;
//         for(int i = 0; i < n; i++){
//             sum += digits[i] * power;
//             power /= 10;
//         }
//         sum += 1;
//         vector<int> result;

//         while(sum > 0){
//             int digit = sum % 10;
//             result.push_back(digit);
//             sum /= 10;
//         }
//         reverse(result.begin(), result.end());
//         return result;
//     }

//     // int res(vector<int>& digits){
//     //     int n = digits.size();
//     //     double power = pow(10, n-1);
//     //     int sum = 0;
//     //     for(int i = 0; i < n; i++){
//     //         sum += digits[i] * power;
//     //         power /= 10;
//     //     }
//     //     return sum + 1;
//     //     vector<int> result;

//     //     while(sum > 0){
//     //         int digit = sum % 10;
//     //         result.push_back(digit);
//     //         sum /= 10;
//     //     }
//     //     reverse(result.begin(), result.end());
//     //     return result;
//     // }

// };

// int main() {
//     vector<int> digits = {1, 2, 3}; 

//     Solution sol;
//     vector<int> result = sol.plusOne(digits);
//     //int result = sol.res(digits);
    
//     //cout << "Result: " << result << endl;
//     cout << "Result: ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int fib(int n) {
//     if(n == 0 || n == 1) return n;
//     return fib(n-1) + fib(n-2);
//     // int a = 0, b = 1, c;
//     // for(int i = 2; i <= n; i++){
//     //     c = a + b;
//     //     a = b;
//     //     b = c;
//     // }
//     // return b;
// }

// int main(){
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         cout << fib(i) << " ";
//     }
//     return 0;
// }

// //check whether the number is prime or not
// #include<bits/stdc++.h>
// using namespace std;

// bool prime(int n){
//     if(n <= 1) 
//     return false;
//     for(int i = 2; i <= n/2; i++){
//         if(n % i == 0) return false;
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin >> n;
//     if(prime(n)){
//         cout << "Prime";
//     }
//     else{
//         cout << "Not a prime";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int factor(int n){
//     for(int i = 1; i <= n; i++){
//         if(n % i == 0){
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

// int main(){
//     int n = 144;
//     factor(n);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 19;
//     int s = 3 ;
    
//     int ne = n;
//     int i = n;
//     while(true){
//         if(i%s == 0){
//             ne = i;
//             break;
//         }
//         i++;
        
//     }
//     cout << ne - n; 
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int sum = 0;
//     int n;
//     while(true){
//         cin >> n;
//         if(n % 2 != 0){
//             sum += n;
//         }else break;
//     }
//     cout << sum;
// }


// //ROTATING AN ARRAY BY K ELEMENTS   
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int n = 10;
//     int k = 3;
//     int newn[10] = {};
//     for(int i = 0; i < n; i++){
//         newn[(i + k) % n] = arr[i];
//     }
//     for(int i = 0; i < n; i++){
//         cout << newn[i] << " ";
//     }
//     return 0;
// }

// // 2ND METHOD FOR ROTATING AN ARRAY BY K ELEMENTS
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int n = 10;
//     int k = 3;
//     k = k % n;
//     reverse(arr, arr + n);
//     reverse(arr, arr + k);  
//     reverse(arr + k, arr + n);
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// bool prime(int n){
//     if(n <= 1) return false;
//     for(int i = 2; i <= n/2; i++){
//         if(n % i == 0) return false;
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin >> n;
//     if(prime(n)){
//         cout << "Prime";
//     }
//     else{
//         cout << "Not a prime";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// void prime(int a, int b){
//     for(int i = a; i < b; i++){
//         bool prime= true;
//         for(int j = 2; j < i/2; j++){
//             if(i % j == 0){
//                 prime = false;
//                 break;
//             }
//         }
//         if(prime){
//             cout << i << " ";
//         }
//     }
// }

// int main(){
//     int a = 21; int b = 40;
//     //prime(a,b);
//     int temp=0;
//     for(int i = a; i < b; i++){
//         for(int j = 2; j < i/2; j++){
//             if(i%j == 0){
//                 temp=1;
//                 break;
//             }
//         }
//     }
    

//     return 0;
// }



//CLASS
// #include<bits/stdc++.h>
// using namespace std;    

// class ComplexNumber{
// public:
//     float a;
//     float b;
//     ComplexNumber(float real, float imag){
//         a = real;
//         b = imag;
//     }
// };

// ComplexNumber addtwonum(ComplexNumber c1, ComplexNumber c2){
//     float real = c1.a + c2.a;
//     float imag = c1.b + c2.b;
//     ComplexNumber c3 = ComplexNumber(real, imag);
//     return c3;
// }

// ComplexNumber subtracttwonum(ComplexNumber c1, ComplexNumber c2){
//     float real = c1.a - c2.a;
//     float imag = c1.b - c2.b;
//     ComplexNumber c3 = ComplexNumber(real, imag);
//     return c3;
// }

// ComplexNumber multiplytwonum(ComplexNumber c1, ComplexNumber c2){
//     float real = c1.a * c2.a - c1.b * c2.b;
//     float imag = c1.a * c2.b + c1.b * c2.a;
//     ComplexNumber c3 = ComplexNumber(real, imag);
//     return c3;
// }

// void printc(ComplexNumber c){
//     cout << c.a << ((c.a > 0) ? " + " : " ") << c.b << "i" << endl;
// }


// int main(){
//     ComplexNumber c1 = ComplexNumber(7.1, 50);
//     ComplexNumber c2 = ComplexNumber(2.9, -38);
//     printc(c1);
//     printc(c2);

//     ComplexNumber c3 = addtwonum(c1, c2);
//     printc(c3);

//     ComplexNumber c4 = subtracttwonum(c1, c2);
//     printc(c4);

//     ComplexNumber c5 = multiplytwonum(c1, c2);
//     printc(c5);
//     return 0;
// }

// #include <bits/stdc++.h>
// #include <iomanip>
// using namespace std;

// class Details {
// public: 
//     string name;
//     double weight;
//     double duration;

//     Details() {}

//     Details(string name, double weight, double duration) {
//         this->name = name;
//         this->weight = weight;
//         this->duration = duration;
//     }

//     double cal() {
//         return (weight * duration) / 60;
//     }
// };

// int main() {
//     int n;
//     cin >> n;

//     vector<Details> arr;
//     double ans = 0;

//     for (int i = 0; i < n; i++) {
//         string name;
//         double weight, duration;
//         cin >> name >> weight >> duration;
//         arr.push_back(Details(name, weight, duration));
//         ans += arr[i].cal();
//     }

//     cout << fixed << setprecision(2);
//     cout << ans;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;        

// class Box{
// private:
//     int length;
//     int breadth;
//     int height;
// public:
//     Box(int l, int b, int h) {
//         length = l;
//         breadth = b;
//         height = h;
//     }

//     int volume() {
//         return length * breadth * height;
//     }

//     void print(){
//         cout << "Volume: " << volume() << endl;
//     }

//     friend int area(Box b);
// };

// int area(Box b) {
//     return 2 * (b.length * b.breadth + b.breadth * b.height + b.height * b.length);
// }

// int main(){
//     Box b1(3, 4, 5);
//     b1.print();
//     cout << "Area: " << area(b1) << endl;
//     return 0;
// }


// //LINKED LIST
// #include <iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;   
//     }
// };

// int count(Node* head){
//     Node* temp = head;
//     int cnt = 0;
//     while(temp != NULL){
//         cnt++;
//         temp = temp->next;
//     }
//     return cnt;
// }

// int main(){
//     Node* n1 = new Node(1);
//     Node* n2 = new Node(2);
//     Node* n3 = new Node(3);
//     Node* n4 = new Node(4);
//     Node* n5 = new Node(5);

//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = n5;

//     cout <<"Number of nodes: "<< count(n1) << endl;

//     cout << "Data at n3 -> " << n3->data << endl;

//     return 0;
// }



// // DELETE FIRST NODE IN LINKED LIST
// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }


// };

// void print(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->data <<" ";
//         temp = temp->next;
//     }
// }

// void deleteFirst(Node* head){
//     Node* temp = head;
//     head = head->next;
//     temp->next = NULL;
//     print(head);

// }

// int main(){
//     Node* n1 = new Node(1);
//     Node* n2 = new Node(2);
//     Node* n3 = new Node(3);
//     Node* n4 = new Node(4);
//     Node* n5 = new Node(5);


//     n1 -> next = n2;
//     n2 -> next = n3;
//     n3 -> next = n4;
//     n4 -> next = n5;

//     // cout << n1 -> data <<endl;
//     // cout << n1 -> next -> next -> data << endl; 
//     // cout << n5 -> next -> next << endl; // return 0

//     print(n1);
//     cout << endl;
//     deleteFirst(n1);
//     return 0;
// }

// #include<stdio.h>
// using namespace std;

// int main(){
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }

//     int pos, val;
//     printf("Enter the position to insert the element: ");
//     scanf("%d", &pos);
//     printf("Enter the value to insert: ");
//     scanf("%d", &val);
//     // for(int i = n-1; i >= pos-1; i--){
//     //     arr[i+1] = arr[i];
//     // }
//     // arr[pos-1] = val;
//     // n++;
//     printf("Array after insertion: ");
//     for(int i = 0; i < pos-1; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("%d ", val);
//     for(int i = pos-1; i < n; i++){
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int a[5] = {1,2,3,4,5};
//     int b[5] = {1,2,3,4,5};
//     int arr[10];
//     for(int i = 0; i < 5; i++){
//         arr[i] = a[i];
//     }
//     for(int i = 0; i < 5; i++){
//         arr[i+5] = b[i];
//     }
//     for(int i = 0; i < 10; i++){
//         printf("%d ", arr[i]);
//     }
// }

// POINTERS

// #include <iostream>
// using namespace std;

// int main() {
//     int a;
//     a = 10;
//     cout << "a = "<<a<<endl;
//     int *ptr = &a;
//     cout<<"Address of a: " << ptr<<endl;
//     cout<<"Address of ptr: " << &ptr<<endl;
//     cout<<"Value of a via ptr: "<< *ptr<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void show(int *p, int n){
    for(int i = 0; i < n; i++){
        cout << p[i] << " ";
    }
    cout<< endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    show(arr, 5);
    for(int i = 0; i < 5; i++){
        cout << *(arr + i) << " ";
    }
    
    return 0;
}
