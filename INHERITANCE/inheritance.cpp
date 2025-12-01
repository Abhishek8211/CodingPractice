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


#include <iostream>
using namespace std;

class Parent{

};