// Take positive integer input and tell if it is divisible by 5 or not.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number : ";
    int x;
    cin>>x;
    if(x%5==0){
        cout<<"Divisible by 5.";
    }else{
        cout<<"not divisible by 5";
    }
}