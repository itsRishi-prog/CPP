// // pass by referance
// #include<iostream>
// using namespace std;
// void swap(int *x, int* y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     return;
// }
// int main(){
//     int a, b;
//     cout<<"Enter the first number : ";
//     cin>>a;
//     cout<<"Enter the second number : ";
//     cin>>b;
//     swap(&a,&b);
//     cout<<a<<" "<<b;
// }

// ============= M-2(using Alias) ==============

#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main(){
    int a,b;
    cout<<"enter value of a : ";
    cin>>a;
    cout<<"enter value of b : ";
    cin>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}