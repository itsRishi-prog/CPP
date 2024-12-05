// #include<iostream>
// using namespace std;
// int main(){
//     // int, float, bool, chat -> typecasting
//     float x = 7.1;
//     // int y = x; We don't do this type.
//     int y;
//     y = (int)x;
//     cout<<y;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int no;
//     cout<<"Enter the number : ";
//     cin>>no;
//     char a = no-64;
//     a = (char)no;
//     cout<<a;
// }

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the letter : ";
    cin>>ch;
    int x = (int)ch;
    cout<<x-64;
}