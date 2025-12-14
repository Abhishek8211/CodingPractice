// #include<iostream>
// using namespace std;

// class Parent{
// protected:
//     int x;
//     void show(){
//         cout << "This is Parent class." << endl;
//     }
// };

// class Child : public Parent{
// public:
//     void display(){
//         cout << "This is Child class inheriting Parent class." << endl;
//     }

//     void callShow(){
//         show(); // Accessing protected member of Parent class
//     }

//     void setX(int val){
//         x = val; // Accessing protected attribute of Parent class
//         cout << "Value of x set to: " << x << endl;
//     }
// };

// int main(){
//     Child c;
//     c.display();
//     c.callShow();
//     c.setX(10);

//     return 0;
// }



/*
Base class → Vehicle (brand, speed)

Derived class → Car (seats)

Derived class → Truck (avgSpeed)

Displaying all details of Car and Truck
*/

// #include <iostream>
// using namespace std;

// class Vehicle{
// protected:
//     string brand;
//     int speed;
// public:
//     Vehicle(string b, int s): brand(b), speed(s) {}

//     void displayBase(){
//         cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
//     }
// };

// class Car : public Vehicle{
//     int seats;
// public:
//     Car(string b, int s, int seatCount) : Vehicle(b, s) {
//         seats = seatCount;
//     }

//     void display() {
//         cout << "\n--- Car Details ---" << endl;
//         displayBase();
//         cout << "Seats: " << seats << endl;
//     }
// };

// class Truck : public Vehicle{
//     int avgSpeed;
// public:
//     Truck(string b, int s, int avgS) : Vehicle(b, s) {
//         avgSpeed = avgS;
//     }

//     void display() {
//         cout << "\n--- Truck Details ---" << endl;
//         displayBase();
//         cout << "Average Speed: " << avgSpeed << " km/h" << endl;
//     }
// };

// int main(){
//     Car c("BMW", 180, 5);
//     Truck t("TATA", 120, 90);

//     c.display();
//     t.display();
//     return 0;
// }


// // Single Level Inheritance Example
// #include <iostream>
// using namespace std;

// class Human{
// public:
//     string name;
//     int age;
// };

// class Student : public Human{
// public:
//     int RegistrationID;

//     void display(){
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Student ID: " << RegistrationID << endl;
//     }
// };

// int main(){
//     Student s;
//     s.name = "Abhishek";
//     s.age = 20;
//     s.RegistrationID = 12414062;

//     s.display();
//     return 0;
// }


// // Multi-Level Inheritance Example
// #include <iostream>
// using namespace std;

// class LivingThings{
// public:
//     void Live(){
//         cout << "Living things can live." << endl;
//     }
// };

// class Animals : public LivingThings{
// public:
//     void Eat(){
//         cout << "Animals can eat." << endl;
//     }
// };

// class Dog : public Animals{
// public:
//     void Bark(){
//         cout << "Dog can bark." << endl;
//     }

//     void display(){
//         Live(); // From LivingThings
//         Eat();  // From Animals
//         Bark(); // From Dog
//     }
// };

// int main(){
//     Dog d;
//     d.display();
//     return 0;
// }


// // Multiple Inheritance Example
// #include <iostream>
// using namespace std;

// class Father{
// public:
//     void drive(){
//         cout << "Father loves driving." << endl;
//     }
// };

// class Mother{
// public:
//     void cook(){
//         cout << "Mother loves cooking." << endl;
//     }
// };

// class Child : public Father, public Mother{
// public:
//     void play(){
//         cout << "Child loves playing." << endl;
//     }
//     driveFromFather(){
//         drive(); // From Father
//     }
//     cookFromMother(){
//         cook(); // From Mother
//     }
// };

// int main(){
//     Child c;
//     c.play();
//     c.driveFromFather();
//     c.cookFromMother();
//     return 0;
// }


// // Hierarchical Inheritance 
// //Meaning: one parent -> multiple childrens

// #include <iostream>
// using namespace std;

// // Meaning: one parent → multiple children (same parent class, several subclasses).
// // Real life: Vehicle → Car and Vehicle → Truck (Car and Truck both are Vehicles).

// class Vehicle {
// public:
//     string brand;
//     int speed;
// };

// class Car : public Vehicle {
// public:
//     int seats;
//     void show() {
//         cout << "Car - " << brand << ", " << speed << " km/h, seats: " << seats << '\n';
//     }
// };

// class Truck : public Vehicle {
// public:
//     int capacity;
//     void show() {
//         cout << "Truck - " << brand << ", " << speed << " km/h, capacity: " << capacity << " tons\n";
//     }
// };

// int main() {
//     Car c;
//     c.brand = "Honda"; c.speed = 160; c.seats = 5;
//     Truck t;
//     t.brand = "Tata"; t.speed = 110; t.capacity = 12;
//     c.show();
//     t.show();
//     return 0;
// }

// 3 CLASSES WITH MULTILEVEL INHERITANCE

// #include<iostream>
// using namespace std;

// class A{
// public:
//     A(){
//         cout << "Constructor of Class A" << endl;
//     }

//     ~A(){
//         cout << "Destructor of Class A" << endl;
//     }
// };

// class B : public A{
// public:
//     B(){
//         cout << "Constructor of Class B" << endl;
//     }

//     ~B(){
//         cout << "Destructor of Class B" << endl;
//     }
// };

// class C : public B{
// public:
//     C(){
//         cout << "Constructor of Class C" << endl;
//     }

//     ~C(){
//         cout << "Destructor of Class C" << endl;
//     }
// };

// int main(){
//     C obj;
//     return 0;
// }


// MAKE THREE CLASSES IN THE STRUCTURE OF MULTILEVEL INHERITANCE AND MAKE PARAMETERIZED CONSTRUCTORS FOR EACH CLASS
#include<iostream>
using namespace std;

class A{
public:
    A(int a){
        cout << "Constructor of Class A with value: " << a << endl;
    }
};

class B : public A{
public:
    B(int a, int b) : A(a){
        cout << "Constructor of Class B with value: " << b << endl;
    }
};

class C : public B{
public:
    C(int a, int b, int c) : B(a, b){
        cout << "Constructor of Class C with value: " << c << endl;
    }
};

int main(){
    C objc(10,9,8);
   
    return 0;
}