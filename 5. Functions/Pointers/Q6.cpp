// predict the output
#include<iostream>
using namespace std;
int main(){
    // Q-1
    int a = 15;
    int *ptr = &a;
    int b = ++(*ptr);
    cout<<a<<" "<<b;
}