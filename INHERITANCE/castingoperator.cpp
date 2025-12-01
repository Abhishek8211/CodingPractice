/*

Basic to Class TYpe Conversion
1) Using Constructor 
2) Using operator overloading

*/

// // convert Rupee to Dollar using operator overloading
// #include <iostream>
// using namespace std;

// class Rupee{
//     float rupee;
// public:
//     Rupee(float r): rupee(r) {}

//     operator float(){
//         float dollar = 0.011* rupee;
//         return dollar;
//     }
// };

// int main(){
//     Rupee r(1000);
//     float dollar = r;
//     cout <<" Rupees to dollar conversion: $" << dollar << endl;
//     return 0;
// }

// There will be two classes Dollar and Rupee. Both classes will have one float attribiut and convert dollars into rupees and show the converted rupees value to the user using show method.
#include <iostream>
using namespace std;

class Dollar{
    float dollar;
public:
    Dollar(float d = 0): dollar(d) {}
    float getDollar(){
        return dollar;
    }
};

class Rupee{
    float rupee;
public:
    Rupee(float r): rupee(r) {}
    float getRupee(){
        return rupee;
    }
    // Conversion operator from Dollar to Rupee
    Rupee(Dollar d){
        rupee = d.getDollar() * 82.0;
    }

};

int main(){
    Dollar d(10);
    Rupee r = d;
    cout << "Dollar: $" << d.getDollar() << endl;
    cout << "Converted Rupee: Rs." << r.getRupee() << endl;
    return 0;
}