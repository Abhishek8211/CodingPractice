#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("Sample.txt");

    if(!fin){
        cout<<"Error in opening file"<<endl;
        return 0;
    }

    while(getline(fin, line)){
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}