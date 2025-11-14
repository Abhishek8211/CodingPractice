#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream op;
    op.open("Demo.txt");

    if(!op){
        cout<<"Error in creating file"<<endl;
        return 0;
    }

    // write
    op <<"This is a demo file."<<endl;
    op <<"We are learning file handling in C++."<<endl;

    op.close();
    cout<<"File created and data written successfully."<<endl;
}