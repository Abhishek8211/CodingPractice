// opening and creating a file.

#include<iostream>
#include<fstream>
using namespace std;

// ofstream: write operation
// ifstream: read operation

int main(){
    ofstream fout;
    fout.open("Sample.txt"); // create and write or open and write

    if(fout.is_open()) cout<<"File oppened successfully";
    else cout<<"File is not opening";

    fout.close();

    return 0;
}