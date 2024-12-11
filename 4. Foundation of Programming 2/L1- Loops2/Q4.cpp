// WAP to print reverse of a given number.
#include<iostream>
using namespace std;
int main(){
    int num, lastDigits=0, reverse = 0;
    cout<<"Enter the number : ";
    cin>>num;
    while(num>0){
        reverse*=10;
        lastDigits = num%10;
        reverse += lastDigits;
        num/=10;
    }
    cout<<"Reverse of given number will be : "<<reverse;
}