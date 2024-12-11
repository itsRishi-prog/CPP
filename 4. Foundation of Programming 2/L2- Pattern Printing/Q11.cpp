// print the following pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// " VERY EASY " :- by using extra variable
#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout<<"enter number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a++<<" ";
        }
        cout<<endl;
    }
}