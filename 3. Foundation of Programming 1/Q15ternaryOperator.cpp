// syntax :- expression1 ? expression2 : expression3
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    (x%2==0) ? cout<<"even" : cout<<"odd";
}