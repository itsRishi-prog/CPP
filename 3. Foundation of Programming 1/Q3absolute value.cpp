// Given an integer. Print the absolute value of that integer.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    if(n>=0){
        cout<<n;
    }else{
        cout<<n*(-1);
    }
}
