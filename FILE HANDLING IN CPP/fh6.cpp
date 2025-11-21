#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int id;
    string name;
    int marks;

    ofstream outFile("student.txt");

    for(int i = 0; i < 5; i++){
        cin>>id;
        outFile<<id<<endl;
        cin.ignore();
        getline(cin, name);
        outFile<<name<<endl;
        cin>>marks;
        outFile<<marks<<endl;
    }
    outFile.close();

    ifstream fin("student.txt");
    
    int readId;
    string readName;
    int readMarks;
    fin>>readId;
    fin.ignore();
    getline(fin, readName);
    fin>>readMarks;
    fin.close();
    cout<<"ID: "<<readId<<endl;
    cout<<"Name: "<<readName<<endl;
    cout<<"Marks: "<<readMarks<<endl;
    return 0;
}