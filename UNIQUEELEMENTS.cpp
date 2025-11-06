#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[5] = {1,5,3,1,3};
    int dup[7] = {1,5,3,1,5,5,3};
    int a = sizeof(arr)/sizeof(arr[0]);
    int b = sizeof(dup)/sizeof(dup[0]);


    int c = a + b;
    int mer[c];
    copy(arr, arr + a, mer);
    copy(dup, dup + b, mer + a);

    sort(mer, mer + c);
    map<int, int> freq;
    for(auto it: mer){
        freq[it]++;
    }
    
    int max=0;
    for(auto it: freq){
        if(it.second>max) max=it.second;
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    for(auto it: freq){
        if(it.second==max) cout<<it.first<<" ";
    }

    


    
    return 0;

}