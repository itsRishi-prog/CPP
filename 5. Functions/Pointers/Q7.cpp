// Write a function to find out the first and last digit of a number without returning anything.
#include<iostream>
using namespace std;
void find(int n, int* fDigit, int* lDigit){
    *lDigit = n%10;
    while(n>9){
        n/=10;
    }
    *fDigit = n;
    return;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int firstDigitl, lastDigit;
    int* ptr1 = &firstDigitl;
    int* ptr2 = &lastDigit;
    find(n, ptr1, ptr2);
    cout<<firstDigitl<<" "<<lastDigit;
}