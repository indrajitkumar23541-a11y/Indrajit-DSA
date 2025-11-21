#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<"Enter 3rd Number : ";
    cin>>c;
    if(a<b && a<c){
        cout<<"Least of Numbers = "<<a;
    }
    else if(a>b && b<c){
        cout<<"Least of Numbers = "<<b;
    }
    else{
        cout<<"Least of Numbers = "<<c;
    }
    return 0;
}