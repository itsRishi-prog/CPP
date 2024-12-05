// Take input marks of a student and print the grade according to marks;
// 1.) 91-100 Excellent
// 2.) 81-90 Very Good
// 3.) 71- 80 Good...
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the marks : ";
    cin>>num;
    if(num>=91){
        cout<<"Excellent";
    }else if(num>=81){
        cout<<"Very Good";
    }else if(num>=71){
        cout<<"Good";
    }else if(num>=61){
        cout<<"Can do better";
    }else if(num>=51){
        cout<<"Average";
    }else if(num>=41){
        cout<<"Below Average";
    }else{
        cout<<"Fail";
    }
}