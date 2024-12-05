// Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter any number to check it is divisible by 5 and 3 : ";
    int x;
    cin>>x;
    if(x%5==0 || x%3==0){
        if (x%15!=0){
            cout<<x<<" is divisible by 5 or 3 but not divisible by 15.";
        }else{
        cout<<x<<" is NOT matching condition";
        } 
    }
}