#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter 1St Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<"Enter 3rd Number : ";
    cin>>c;
    if(a>b && a>c){
        cout<<"Greatest Number = "<<a;
    }
    else if(a<b && c<b){
        cout<<"Gratest Number = "<<b;
    }
    else{
        cout<<"Greatest Number = "<<c;
    }
    return 0;
}