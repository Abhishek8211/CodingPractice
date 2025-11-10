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



// // PARAMETERIZED CONSTRUCTOR - are those constructor which are called with some arguments
#include<iostream>
using namespace std;

class Student{
    string name;
    int age;
public:

    Student(string s, int a);
    
    // Student(string s, int a){
    //     name = s;
    //     age = a;
    //     cout<<"Constructor Called"<<endl;
    // }
    
    void show(){
        cout<<"Name : "<< name<<endl;
        cout<<"Age : "<< age<<endl;
    }

};


Student::Student(string s, int a){
    name = s;
    age = a;
    cout<<"Constructor Called"<<endl;
}


int main() {
    Student s("Abhishek", 21);
    s.show();
    return 0;
}