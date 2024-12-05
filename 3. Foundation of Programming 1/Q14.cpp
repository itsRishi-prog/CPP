// Write a program to check whether a given character is a vowel or a consonant.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any letter to check whether a given character is a vowel or a consonant : ";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
            cout<<ch<<" is a vowel.";
        }else{
            cout<<ch<<" is a consonent";
        }
    }
    else{
        cout<<"The characert is not an Alphabet.";
    }
}