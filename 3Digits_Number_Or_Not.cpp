#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"Three Digits Number";
    }
    else{
        cout<<"Not Three Digits Number";
    }
    return 0;
}