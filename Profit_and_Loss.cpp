#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter CP : ";
    cin>>cp;
    int sp;
    cout<<"Enter SP : ";
    cin>>sp;
    if(cp>sp){
        cout<<"Loss";
    }
    else if(sp>cp){
        cout<<"Profit";
    }
    else{
        cout<<"No Profit No Loss";
    }
    return 0;

}