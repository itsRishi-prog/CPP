// print the following pattern
// 1 2 3 4 5 6 7
// 1 2 3   5 6 7
// 1 2       6 7
// 1           7

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of lines : ";
    cin>>n;
    for(int a=1;a<=2*n-1;a++){
        cout<<a<<" ";
    }
    cout<<endl;
    int m=n-1;
    int nsp=1;
    for(int i=1;i<=n;i++){
    int b=1;
        for(int j=1;j<=m+1-i;j++){
            cout<<b<<" ";
            b++;
        }
        for(int k=1;k<=nsp;k++){
            cout<<"  ";
            b++;
        }
        nsp+=2;
        for(int j=1;j<=m+1-i;j++){
            cout<<b<<" ";
            b++;
        }
        cout<<endl;
    }
}