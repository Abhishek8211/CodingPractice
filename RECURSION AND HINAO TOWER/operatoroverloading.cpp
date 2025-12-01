// // UNARY OVERLOADING

// #include<bits/stdc++.h>
// using namespace std;

// class Number{
// private:
//     int value;
// public:
//     Number(int v = 0): value(v) {}

//     // Overloading unary minus operator
//     Number operator-(){
//         return Number(-value);
//     }
//     void display(){
//         cout << "Value: " << value << endl;
//     }
// };

// int main(){
//     Number num(10);
//     cout << "Original ";
//     num.display();

//     Number negNum = -num;
//     cout << "After applying unary minus ";
//     negNum.display();
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// class Number {
// private:
//     int value;
// public:
//     Number(int v = 0) : value(v) {}

//     // Overloading unary minus operator as a friend function
//     Number operator-() {
//         value = value + 5;
//         return Number(-value);
//     }

//     void display() {
//         cout << "Value: " << value << endl;
//     }
// };

// int main(){
//     Number n1(10);

//     Number n2 = -n1; // Using overloaded unary minus operator
//     n2.display();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Counter{
// public:
//     int count;
//     Counter(int c = 0): count(c) {}

//     //Postfix
//     Counter operator--(int){ // For prefix use operator--
//         Counter temp = *this;
//         count--;
//         return temp;
//     }

//     void display(){
//         cout << "Count: " << count << endl;
//     }
// };

// int main(){
//     Counter c1(5);
//     cout << "Original ";
//     c1.display();

//     Counter c2 = c1--;
//     cout << "After postfix decrement operator:" << endl;
//     cout << "c1: ";
//     c1.display();
//     cout << "c2: ";
//     c2.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Prefix{
// public:
//     int count;
//     Prefix(int c = 0): count(c) {}

//     Prefix operator++(){ // For postfix use operator++(int)
//         count++;
//         return *this;
//     }
//     void display(){
//         cout << "Count: " << count << endl;
//     }
// };

// int main(){
//     Prefix p(5);
//     cout << "Original ";
//     p.display();
//     Prefix p2 = ++p;
//     cout << "After prefix increment operator:" << endl;
//     p2.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Flag{
// bool status;
// public:
//     Flag(bool s = false): status(s) {}

//     bool operator!(){
//         return !status;
//     }
// };

// int main(){
//     Flag f1(true);
//     if(!f1){
//         cout << "Flag is OFF" << endl;
//     } else {
//         cout << "Flag is ON" << endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Distance{
//     int meters;
// public:
//     Distance(int m): meters(m) {}
//     void display(){
//         cout << "Distance: " << meters << " meters" << endl;
//     }
// };

// int main(){
//     int val = 10;
//     Distance d = val;
//     d.display();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Distance{
//     float meters;
// public:
//     void operator=(float m){
//         meters = m;
//     }

//     void display(){
//         cout << "Distance: " << meters << " meters" << endl;
//     }
// };

// int main(){
//     Distance d;
//     d = 15.5f;
//     d.display();
// }


// #include <iostream>
// using namespace std;

// class Time{
//     int hours, minutes;
// public:
//     Time(int);
//     void display();
// }; 

// Time::Time(int totalMinutes){
//     hours = totalMinutes / 60;
//     minutes = totalMinutes % 60;
// }

// void Time::display(){
//     cout << "Hours: " << hours << ", Minutes: " << minutes << endl;
// }

// int main(){
//     int duration = 130;
//     Time t = duration;
//     t.display();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Distance{
//     int km, m;
// public:
//     Distance(int a, int b): km(a), m(b) {}

//     operator float(){
//         return km * 1000 + m;
//     }

// };

// int main(){
//     Distance d(3, 250);
//     float meters = d; // Implicit conversion
//     cout << "Distance in meters: " << meters << " m" << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Temperature{
//     float far;
// public:
//     Temperature(float f): far(f) {}

//     operator float(){
//         return (far - 32) * 5.0 / 9.0;
//     }
// };

// int main(){
//     Temperature t(98.6);
//     float celsius = t;
//     cout <<"Temperature in Celsius : " << celsius;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Temperature{
//     float cel;
// public:
//     Temperature(float);
//     void display();
// };

// Temperature::Temperature(float f){
//     cel = (f - 32) * 5/9.0;
// }

// void Temperature::display(){
//     float celsius = cel;
//     cout << "Temperature in Celsius: " << celsius << endl;
// }

// int main(){
//     float far = 98.6;
//     Temperature t(far);
//     t.display();
//     return 0;
// }
