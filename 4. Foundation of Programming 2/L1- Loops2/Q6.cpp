// print the factorial of a given number.
#include<iostream>
using namespace std;
int main(){
    int n,fac=1;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    cout<<fac;
}