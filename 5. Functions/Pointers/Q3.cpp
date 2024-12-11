// sum of two numbers using pointers
#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int*p = &a;
    int*q = &b;
    cout<<"Enter the first number : ";
    cin>>*p; // Or cin>>a;
    cout<<"Enter the second number : ";
    cin>>*q; // Or cin>>b;
    cout<<a+b; // Or *p + *q;
}