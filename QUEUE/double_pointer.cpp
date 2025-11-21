#include<iostream>
using namespace std;

class Test{
public:
    void ChangePointer(int **p, int *q){
        *p = q;
        **p = 100;
    }
};

int main(){
    Test t;

    int a = 10, b = 20;
    int *p = &a;

    cout<<"Initially p points to the memory holding value: "<<*p<<endl;

    t.ChangePointer(&p, &b);
    cout<<"After changing p points to the memory holding value: "<<*p<<endl;
    return 0;
}