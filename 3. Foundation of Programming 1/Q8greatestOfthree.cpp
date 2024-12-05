// Take 3 positive integers input and print the greater of them.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the 1st number : ";
    int x;
    cin>>x;
    cout<<"Enter the 2nd number : ";
    int y;
    cin>>y;
    cout<<"Enter the 3rd number : ";
    int z;
    cin>>z;
    if(x>y && x>z){
        cout<<x<<" is max...";
    }
    if(y>x && y>z){
        cout<<y<<" is max...";
    }
    if(z>x && z>y){
        cout<<z<<" is max...";
    };
}