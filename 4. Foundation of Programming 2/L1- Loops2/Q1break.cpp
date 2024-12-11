// WAP to check if a number is composite, prime or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    bool flag = true; 
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<n<<" is a prime.";
    else cout<<n<<" is composite.";
}