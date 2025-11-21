// write a program to find the occurence of a * in a file and display the same.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream fout("Search.txt");
    if(!fout){
        cout<<"File not created";
        return 0;
    }
    fout<<"This is a sample  * file.\n";
    fout<<"It contains multiple * lines.\n";
    fout<<"We will be search for the asterisk * character.\n";

    fout.close();

    ifstream fin("Search.txt");
    if(!fin){
        cout<<"File not created";
        return 0;
    }

    char ch;
    int count = 0;
    while(fin.get(ch)){
        if(ch == '*'){
            count++;
        }
    }
    fin.close();

    cout<<"Number of occurrences of * is: "<<count<<endl;
    return 0;
}


