// Take positive integer input and tell if it is a three digit number or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"This is a Three digit number.";
    }else{
        cout<<"NOT Three digit number.";
    }
}