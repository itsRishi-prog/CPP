// Take two integers, a and b:a > b, and find the remainder when a is divided by b.
#include<iostream>
using namespace std;
int main(){
    int a = 14; // Dividend
    int b = 3;  // diviser
    int q = a/b;// quotiene
    int r;      // remainder
    // a = (b*q) + r
    r = a - (b*q);
    cout<<r;
}