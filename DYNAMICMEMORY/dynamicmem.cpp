// #include<bits/stdc++.h>
// using namespace std;

// class Base{
// public:
//     Base(){
//         cout << "Base class constructor called" << endl;
//     }

//     virtual ~Base(){
//         cout << "Base class destructor called" << endl;
//     }
// };

// class Derived: public Base{
// public:
//     Derived(){
//         cout << "Derived class constructor called" << endl;
//     }
//     ~Derived(){
//         cout << "Derived class destructor called" << endl;
//     }
// };

// int main(){
//     Base *bptr = new Derived();
//     delete bptr;

//     // Derived *dptr = new Derived();
//     // delete dptr;

//     return 0;
// }



#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int age;
    Student(string n, int a): name(n), age(a) {}
    
    Student(){
        cout << "Default constructor called for class Student." << endl;
    }

    ~Student(){
        cout << "Destructor called for class Student." << endl;
    }

    void display(){
        cout << "Name: " << name << " Age: " << age << endl;
    }
};

int main(){
    Student *s1 = new Student("Abhishek", 20);
    s1->display();
    delete s1;

    Student *s2 = new Student();
    s2->display();
    delete s2;

    return 0;
}