// Take positive integer input and tell if it is even or odd.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number : ";
    int x;
    cin>>x;
    // if(condition){
    //     do somthing;
    // }

    if(x%2==0){
        cout<<"even";
    }if(x%2!=0){
        cout<<"odd";
    }


// -------------OR---------------


    // if(x%2==0){
    //     cout<<"This is a even number.";
    // } else{
    //     cout<<"This is a odd number.";
    // }

    // cout<<(x%2==0);
}