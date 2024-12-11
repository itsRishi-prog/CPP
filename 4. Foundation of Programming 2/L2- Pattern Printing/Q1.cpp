// Print the given Pattern
//  *****
//  *****
//  *****
#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Number of Rows : ";
    cin>>r;
    cout<<"Number of Colums : ";
    cin>>c;
    for (int i=1;i<=r;i++){
        for (int i=1;i<=c; i++){
            cout<<"*";
        } 
    cout<<endl;
    }
}