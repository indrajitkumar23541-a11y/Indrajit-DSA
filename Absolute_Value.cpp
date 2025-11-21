#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    if(n>=0){
        cout<<"Absolute Value = "<<n;
    }
    else{
        cout<<"Not Absolute Value = "<<-n;
    }
    return 0;

}