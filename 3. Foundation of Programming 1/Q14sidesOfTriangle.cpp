// Take 3 numbers input and tell if they can be the sides of a triangle.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st side of the triangle: ";
    cin>>a;
    cout<<"Enter 2nd side of the triangle : ";
    cin>>b;
    cout<<"Enter 3rd side of the triangle : ";
    cin>>c;
    if((a+b>c) && (b+c>a) && (a+c>b)){
        cout<<a<<", "<<b<<", "<<c<<" can be sides of a triangle.";
    }else{
        cout<<"NOT possible";
    }
}