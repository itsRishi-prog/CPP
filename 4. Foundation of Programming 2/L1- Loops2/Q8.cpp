// Two numbers entered from keyboard. WAP to find one number rise to the power of another.
#include<iostream>
using namespace std;
int main(){
    int a,b,power=1;
    cout<<"Enter base number : ";
    cin>>a;
    cout<<"Enter exponent number : ";
    cin>>b;
    for (int i = 1; i<=b; i++){
        power = power*a;
    }
    cout<<power;
}