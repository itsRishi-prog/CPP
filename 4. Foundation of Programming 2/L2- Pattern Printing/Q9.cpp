// print the following pattern
//     * 
//     * 
// * * * * *
//     * 
//     *   
#include<iostream>
using namespace std;
int main(){
    int n, mid = n/2 + 1;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i==mid || j==mid) cout<<"* ";
            else cout<<"# ";
        }
        cout<<endl;
    }
}