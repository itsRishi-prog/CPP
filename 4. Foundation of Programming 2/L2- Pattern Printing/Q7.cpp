// 1
// 13
// 135
// 1357
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// new used :- j<=2*i-1;j+=2;