#include<bits/stdc++.h>
#include<fstream>
using namespace std;


int main(){
    cout<<"Enter 5 names: "<<endl;
    ofstream outFile("names.txt");
    for(int i=0;i<5;i++){
        string name;
        cin>>name;
        outFile<<name<<endl;
    }

    outFile.close();

    ifstream fin("names.txt");
    string name;
    while(getline(fin, name)){
        cout<<name<<endl;
    }
    fin.close();

}