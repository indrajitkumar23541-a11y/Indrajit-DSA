#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter angles a : ";
    cin>>a;
    cout<<"Enter angles b : ";
    cin>>b;
    cout<<"Enter angles c : ";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"Valid Tringles";
    }
    else{
        cout<<"Invalid Tringles";
    }
    return 0;
}