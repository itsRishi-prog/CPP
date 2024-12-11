// print the following pattern by user input.
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // to print reverse triangle -> no. of stars = n + 1 - i
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n+1-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}