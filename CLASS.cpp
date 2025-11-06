#include<bits/stdc++.h>
using namespace std;

class Arr{
    int id;
    string name;
public:
    void getData();
    void showData();
};

void Arr::getData(){
    cout<<"Enter ID and Name: ";
    cin >> id >> name;
}
void Arr::showData(){
    cout<<endl;
    cout<<"Employee ID : "<<id<<" , Name: "<<name <<endl;
}

int main(){
    Arr emp[3];
    for(int i=0; i<3; i++){
        emp[i].getData();
    }
    for(int i=0; i<3; i++){
        emp[i].showData();
    }
    return 0;
}