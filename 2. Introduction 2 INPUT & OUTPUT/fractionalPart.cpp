// Take float input and print the fractional part of the real number.
#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"";
    cin>>x;
    int y = (int)x;
    if(x<0) y = y-1;
    cout<<x-y;
}