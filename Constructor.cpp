// CONSTRUCTOR IN C++ - special member function with the same name as the class and no return type
// #include <iostream>
// using namespace std;

// class Student{
// string name;

// public:
//     Student(){
//         name = "Abhishek";
//         cout<<"Constructor Called"<<endl;
//     }
    
//     void show(){
//         cout<<"Name : "<< name<<endl;
//     }
// };
// int main() {
//     Student s;
//     s.show();
//     return 0;
// }


// // CALLING CONSTRUCTOR OUTSIDE THE CLASS
// #include<iostream>
// using namespace std;

// class Student{
// string name;
// public:
//     Student();
//     void show(){
//         cout<<"Name : "<< name<<endl;
//     }
// };

// Student::Student(){
//     name = "Abhishek";
//     cout<<"Constructor Called"<<endl;
// }


// int main() {
//     Student s;
//     s.show();
//     return 0;
// }


// // DEFAULT CONSTRUCTOR - are those constructor which are called without any arguments



// // // PARAMETERIZED CONSTRUCTOR - are those constructor which are called with some arguments
// #include<iostream>
// using namespace std;

// class Student{
//     string name;
//     int age;
// public:

//     Student(string s, int a);
    
//     // Student(string s, int a){
//     //     name = s;
//     //     age = a;
//     //     cout<<"Constructor Called"<<endl;
//     // }
    
//     void show(){
//         cout<<"Name : "<< name<<endl;
//         cout<<"Age : "<< age<<endl;
//     }

// };


// Student::Student(string s, int a){
//     name = s;
//     age = a;
//     cout<<"Constructor Called"<<endl;
// }


// int main() {
//     Student s("Abhishek", 21);
//     s.show();
//     return 0;
// }


// //CONSTRUCTOR WITH DEFAULT ARGUMENTS
// #include<iostream>
// using namespace std;

// class Student{
//     string name;
//     int age;
// public:
//     Student(string s = "Abhishek", int a = 21);
    
//     void show(){
//         cout<<"Name : "<< name<<endl;
//         cout<<"Age : "<< age<<endl;
//     }

// };

// Student::Student(string s, int a){
//     name = s;
//     age = a;
//     cout<<"Constructor Called"<<endl;
// }

// int main() {
//     Student s1;
//     s1.show();

//     Student s2("Rahul");
//     s2.show();

//     Student s3("Karan", 25);
//     s3.show();

//     return 0;
// }


// COPY CONSTRUCTOR - is a special member function that initializes an object using another object of the same class
// there are two types of copy constructor - implicit Constructor and explicit Copy Constructor


// // IMPICIT COPY CONSTRUCTOR
// #include<iostream>
// using namespace std;

// class Student{
//     int age;
//     string name;
// public: 
//     Student(int a, string n){
//         age = a;
//         name = n;
//     }

//     void display(){
//         cout<<"Name : "<<name<<", Age : "<<age<<endl;
//     }
// };

// int main(){
//     Student s1(21, "Abhishek");
//     s1.display();
//     Student s2 = s1; // Implicit copy constructor called
//     s2.display();
//     s2 = Student(25, "Rahul");
//     s2.display();
//     s1.display();

//     return 0;
// }


// // EXPLICIT COPY CONSTRUCTOR
// #include<bits/stdc++.h>
// using namespace std;

// class Student{
//     int age;
//     string name;
// public:
//     Student(int a, string n){
//         age = a;
//         name = n;
//     }
//     // Explicit Copy Constructor
//     Student(const Student &s){
//         age = s.age;
//         name = s.name;
//     }

//     void display(){
//         cout<<"Name : "<<name<<", Age : "<<age<<endl;
//     }
// };

// int main(){
//     Student s1(21, "Abhishek");
//     s1.display();
//     Student s2 = s1; // Explicit copy constructor called
//     s2.display();
//     s2 = Student(25, "Rahul");
//     s2.display();
//     s1.display();

//     return 0;
// }


// //initializer list in constructor
// #include <iostream>
// using namespace std;

// class Car{
//     string brand;
//     string model;
//     int year;
// public:
//     Car(string b, string m, int y) : brand(b), model(m), year(y) {
//         cout << "Constructor Called" << endl;
//     }

//     void displayInfo() {
//         cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
//     }
// };

// int main() {
//     Car car1("Toyota", "Camry", 2020);
//     car1.displayInfo();

//     Car car2("Honda", "Civic", 2019);
//     car2.displayInfo();

//     return 0;
// }


// DESTRUCTOR
#include<iostream>
using namespace std;   

class Demo{
public:
    Demo(){
        cout<<"Constructor Called"<<endl;
    }
    ~Demo(){
        cout<<"Destructor Called"<<endl;
    }
};

int main(){
    // Destructor called here as d1 goes out of scope
    Demo d1;
    return 0;
}