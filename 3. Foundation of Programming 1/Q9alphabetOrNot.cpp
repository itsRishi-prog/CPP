// WAP to check whether a character is an alphabet or not
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter to check whether a character is an alphabet or not : ";
    char x;
    cin>>x;
    // CHARACTER:- a,b,c... A,B,C... !, @, #, $... 1, 2, 3...
    // ASCII values of a,b,c... are -> 97,98, 99... & A,B,C... -> 65, 66, 67...
    if((x>=65 && x<=90) || (x>=97 && x<=122)){
        cout<<x<<" is a character.";
    }else{
        cout<<x<<" is not a character.";
    };
}