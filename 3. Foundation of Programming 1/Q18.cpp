// Write a program to input month number and print total number of days in months using switch case.
#include<iostream>
using namespace std;
int main(){
    cout<<"jis month ka number of days jaana hai uska number batao : ";
    int n;
    cin>>n;

    // -------Method 1-------
    // switch(n){
    //     case 1 :
    //     cout<<"31";
    //     break;
    //     case 2 :
    //     cout<<"28";
    //     break;
    //     case 3 :
    //     cout<<"31";
    //     break;
    //     case 4 :
    //     cout<<"30";
    //     break;
    //     case 5 :
    //     cout<<"31";
    //     break;
    //     case 6 :
    //     cout<<"30";
    //     break;
    //     case 7 :
    //     cout<<"31";
    //     break;
    //     case 8 :
    //     cout<<"30";
    //     break;
    //     case 9 :
    //     cout<<"31";
    //     break;
    //     case 10 :
    //     cout<<"31";
    //     break;
    //     case 11 :
    //     cout<<"31";
    //     break;
    //     case 12 :
    //     cout<<"31";
    //     break;
    //     default :
    //     cout<<"Invalid number!!!";
    //     break;
    // }
    
    // 1, 3, 5, 7, 8, 10, 12 --> 31 Days
    // 4, 6, 9, 11 --> 30 Days
    // 2 --> 28 Days
    switch ((n<=7 && n%2!=0) || (n<=8 && n%2==0)){
        case 1 :
        cout<<"31";
    }
    switch(n==4 || n==6 || n==9 || n==11){
        case 1 :
        cout<<"30";
    }
    switch(n){
        case 2 :
        cout<<"28";
    }
}