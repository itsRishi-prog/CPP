// take user input and print square of *'s;
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    for (int i=1;i<=a;i++){
        for (int i=1;i<=a;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}