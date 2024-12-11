#include<iostream>
using namespace std;
int main(){
    // int n;
    // int *ptr = &n;
    // cout<<ptr<<endl; //0x61ff08
    // ptr = ptr + 1;
    // cout<<ptr<<endl; //0x61ff0c


    // bool flag=true;
    // bool* ptr = &flag;
    // cout<<ptr<<endl; //0x61ff0b
    // ptr = ptr+1;
    // cout<<ptr<<endl; //0x61ff0c


    int n=4;
    int *ptr = &n;
    cout<<*ptr<<endl; //4
    ptr = ptr + 1;
    cout<<*ptr<<endl; //6422284
}