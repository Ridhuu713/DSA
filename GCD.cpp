#include<iostream>
using namespace std;

int main(){
    int a,b,GCD;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }

    GCD=a;

    cout<<"GCD is: "<<GCD;

    return 0;
}