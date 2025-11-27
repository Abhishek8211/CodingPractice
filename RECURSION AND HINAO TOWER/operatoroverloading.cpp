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



#include<iostream>
using namespace std;

class Distance{
    int meters;
public:
    Distance(int m): meters(m) {}
    void display(){
        cout << "Distance: " << meters << " meters" << endl;
    }
};

int main(){
    int val = 10;
    Distance d = val;
    d.display();
    return 0;
}