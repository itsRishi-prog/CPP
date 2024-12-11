// print the following pattern
// * * * * * * *
// * * *   * * *
// * *       * *
// *           *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of lines : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<"* ";
    }
    cout<<endl;
    int a=n-1;
    int nsp=1;
    for(int j=1;j<=a;j++){
        for(int k=1;k<=a+1-j;k++){
            cout<<"* ";
        }
        for(int l=1;l<=nsp;l++){
            cout<<"  ";
        }
        nsp+=2;
        for(int k=1;k<=a+1-j;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}