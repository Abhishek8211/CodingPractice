// #include<iostream>
// using namespace std;

//  static int count = 0;

// class Student{
// public:
//     string name;
//     int roll;
//     float marks;


//     Student(string n, int r, float m): name(n), roll(r), marks(m) {
//         count++;
//     }

//     Student(const Student &obj) {
//         name = obj.name;
//         roll = obj.roll;
//         marks = obj.marks;
//         count++;
//     }


//     static int getCount(){
//         return count;
//     }

//     inline void display();
// };


// inline void Student::display(){
//     cout << "Name: " << name << " Roll: " << roll << " Marks: " << marks << endl;
// }


// int main(){
//     Student s1("Abhishek", 12414062, 80.5);
//     s1.display();
    
//     int res = s1.getCount();
//     cout << "Number of Student objects created: " << res << endl;

//     Student s2 = s1; // Copy constructor called
//     int res2 = s2.getCount();
//     cout << "Number of Student objects created: " << res2 << endl;
//     return 0;
// }


// // CREATE A CLASS EMPLOYEE WITH ID AND SALARY AND ALSO WRITE A FUNCTION setData() that uses this pointer and also create a dynamic array of 3 employees using pointers and displya the data
// #include <iostream>
// using namespace std;

// class Employee{
// private:
//     int id;
//     float salary;
// public:
//     void setData(int id, float salary){
//         this->id = id;
//         this->salary = salary;
//     }
    
//     void display(){
//         cout << "Employee ID: " << id << " Salary: " << salary << endl;
//     }
// };

// int main(){
//     int n = 3;
//     Employee *arr = new Employee[n];

//     for(int i = 0; i < n; i++){
//         int id;
//         float salary;
//         cout << "Enter ID and Salary for Employee " << i+1 << ": ";
//         cin >> id >> salary;
//         arr[i].setData(id, salary);
//     }

//     cout << "Employee Details:\n";
//     for(int i = 0; i < n; i++){
//         arr[i].display();
//     }
//     return 0;
// }


// // Create the following structure
// //      Person 
// //      /   \
// // Student  Employee
// //    \          /
// //    Working Student

// // Person has name, Student has roll no, Employee has salary, Working Student has work hours
// // Use virtual inheritance to avoid ambiguity
// // Input and display all the data --> Utilize only WorkingStudent class

// #include <iostream>
// using namespace std;

// class Person {
// public:
//     string name;
// };

// class Student : virtual public Person {
// public:
//     int roll;
// };

// class Employee : virtual public Person {
// public:
//     float salary;
// };

// class WorkingStudent : public Student, public Employee {
// public:
//     int workHours;

//     void input() {
//         cout << "Enter Name: ";
//         getline(cin, name);

//         cout << "Enter Roll Number: ";
//         cin >> roll;

//         cout << "Enter Salary: ";
//         cin >> salary;

//         cout << "Enter Work Hours: ";
//         cin >> workHours;
//         cin.ignore(); // To consume the newline character left in the buffer
//     }

//     void display() {
//         cout << "\n--- Working Student Details ---\n";
//         cout << "Name: " << name << endl;
//         cout << "Roll Number: " << roll << endl;
//         cout << "Salary: " << salary << endl;
//         cout << "Work Hours: " << workHours << endl;
//     }
// };

// int main() {
//     WorkingStudent ws;

//     ws.input();
//     ws.display();

//     return 0;
// }


// // PROBLEM 4
// // Overload + Merge two strings with a sapce (custom join)
// // s2 = "I"
// // s2 = "love"
// // s3 = "coding"
// // res = "I love coding"
// #include <iostream>
// #include<fstream>
// using namespace std;

// class Custom{
// public:
//     string str;
//     Custom operator+(const Custom &obj){
//         Custom res;
//         res.str = this->str + " " + obj.str;
//         return res;
//     }
// };

// int main(){
//     string s1, s2, s3;
//     s1 = "I";
//     s2 = "love";
//     s3 = "coding";
//     Custom c1, c2, c3, res;
//     c1.str = s1;
//     c2.str = s2;
//     c3.str = s3;
//     res = c1 + c2 + c3;
//     cout << res.str << endl;
//     return 0;
// }


// // operator to reverse a number using a class
// #include <iostream>
// using namespace std;

// class Reverse{
// public:
//     int num;
//     Reverse(int n): num(n) {}

//     int operator-(){
//         int rev = 0;
//         int temp = num;
//         while(temp != 0){
//             rev = rev * 10 + temp % 10;
//             temp /= 10;
//         }
//         return rev;
//     }
// };

// int main(){
//     Reverse r(12345);
//     int reversedNum = -r;
//     cout << "Reversed Number: " << reversedNum << endl;
//     return 0;
// }


// Overload () to treat a class object like a function 
// Create a class -> Create two attributes of the class
// And then create class object and use () and perform some task for those attributes of the class.
