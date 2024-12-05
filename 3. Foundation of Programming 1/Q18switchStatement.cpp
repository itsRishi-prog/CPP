// syntax
        // switch (integer expression)
        // {
        // case constant 1:
        //     do this;
        // case constant 2:
        //     do this;
        // case constant 3:
        //     do this;
        // default:
        //     do this;
        // }

// Write a program to input week number(1-7) and print day of week name using switch case.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Din ka number batao : ";
    cin>>x;
    switch (x){
    case 1 :
        cout<<"Monday";
    break;
    case 2 :
        cout<<"Tuesday";
    break;
    case 3 :
        cout<<"Wednesday";
    break;
    case 4 :
        cout<<"Thresday";
    break;
    case 5 :
        cout<<"Friday";
    break;
    case 6 :
        cout<<"Saterday";
    break;
    case 7 :
        cout<<"Sunday";
    break;
    default :
        cout<<"Invalid Number";
    }
}