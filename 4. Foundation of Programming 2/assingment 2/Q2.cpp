//  Print the following pattern
//  Input: n = 4
//  Output:
//  1 2 3 4
//  1 2 3
//  1 2
//  1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of lines : ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}