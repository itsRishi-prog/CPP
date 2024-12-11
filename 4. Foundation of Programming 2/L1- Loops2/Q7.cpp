// print the nth fibonacci number.
#include<iostream>
using namespace std;
int main(){
    int n,a=1,b=1,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    for (int i=0;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }   
    cout<<b<<" ";
}