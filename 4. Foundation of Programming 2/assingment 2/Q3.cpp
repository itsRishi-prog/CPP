//  Print the following pattern
//  Input: n = 4
//  Output:
//  A
//  A B
//  A B C
//  A B C D

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of lines : ";
    cin>>n;
    for(int i=1;i<=n;i++){
    char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         char ch = 'A'; // Starting character for each row
//         for (int j = 1; j <= i; j++) {
//             cout << ch << " "; // Print the current character
//             ch++; // Move to the next character in the alphabet
//         }
//         cout << endl; // Move to the next line after printing a row
//     }
// }