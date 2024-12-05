// Take positive integer input and tell if it is divisible by 5 and 3.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<n<<" is divisible by 3 and 5.";
        }else{
            cout<<n<<" is divisible by 5 but not 3.";
        }
    }else{
        cout<<"Not matching condition.";
    };
}