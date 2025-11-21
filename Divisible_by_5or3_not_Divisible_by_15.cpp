#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    if(n%3==0 || n%5==0 && n%15!=0){
        cout<<"Divisible by 3 or 5 not Divisible 15";
    }
    else{
        cout<<" Not Divisible by 3 or 5 not Divisible 15";
    }
    return 0;
}