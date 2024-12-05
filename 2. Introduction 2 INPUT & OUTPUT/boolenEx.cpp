// WHAT IS THE RESUTL OF THE FOLLOWING CODE FRAGMENT?
#include<iostream>
using namespace std;
int main(){
    // bool p = false;
    // bool q = false;
    // bool r = true;
    // cout<<(p==q==r); // left to right check hoga!!
    int p = 1;
    int q = 2;
    int r = 2;
    cout<<(p==q==r); // In this case (p==q)==(r) -> (0)==2 -> 0.
    // And if it will check right to left it will gives 1.
}

// ASCII values of "A" -> 65, "a" -> 97 & "0" -> 48. {Must have to remember}.