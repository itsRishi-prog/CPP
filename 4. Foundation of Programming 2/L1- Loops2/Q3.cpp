// WAP to print sum of digits of a given numbers.
#include<iostream>
using namespace std;
int main(){
    int num, lastDigit, sum = 0;
    cout<<"Enter any number : ";
    cin>>num;
    while (num>0)
    {
        lastDigit = num%10;
        sum += lastDigit;
        num/=10;
    }
    cout<<"Sum of all digites will be : "<<sum;
}