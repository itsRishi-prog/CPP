// Print "hello world" 'n' times. take 'n' as input from user
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Kitne baar 'hello world' print krvana hai? : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"Hello world"<<endl;
    }
}