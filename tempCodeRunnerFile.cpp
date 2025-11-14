// IMPICIT COPY CONSTRUCTOR
#include<iostream>
using namespace std;

class Student{
    int age;
    string name;
public: 
    Student(int a, string n){
        age = a;
        name = n;
    }

    void display(){
        cout<<"Name : "<<name<<", Age : "<<age<<endl;
    }
};

int main(){
    Student s1(21, "Abhishek");
    s1.display();
    Student s2 = s1; // Implicit copy constructor called
    s2.display();
    s2 = Student(25, "Rahul");
    s2.display();
    s1.display();

    return 0;
}
