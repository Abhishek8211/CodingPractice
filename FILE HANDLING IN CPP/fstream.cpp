#include<iostream>
#include<fstream>
using namespace std;


int main(){
    fstream file;
    file.open("Sample.txt", ios::in | ios::out | ios::app);

    if(!file){
        cout<<"Error in opening file"<<endl;
        return 0;  
    }

    file <<"Appending new line to the file"<<endl;

    string line;
    cout<<"Current contents of the file after appending: "<<endl;
    file.seekg(0); // Move the get pointer to the beginning
    while(getline(file, line)){
        cout<<line<<endl;
    }

    file.close();
    cout<<"Data appended successfully."<<endl;
}