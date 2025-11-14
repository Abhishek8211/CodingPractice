// C++ program to demonstrate file handling - creating and writing to a file

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("Sample.txt"); 

    if(!fout){
        cout<<"Error in creating file"<<endl;
        return 0;
    } 

    fout <<"Hello, myself Abhishek Kumar"<<endl;
    fout <<"I am studying in Computer Science"<<endl;
    fout <<"I love programming"<<endl;

    fout.close();
    cout<<"File created and data written successfully."<<endl;
}