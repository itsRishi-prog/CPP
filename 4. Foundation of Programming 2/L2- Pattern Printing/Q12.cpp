// Print the following pattern;
// 1
// 0 1
// 1 0 1
// 0 1 0 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     int a=5;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0) a=1;
//         else a=0;
//         for(int j=1;j<=i;j++){
//             cout<<a;
//             if(a==1) a=0;
//             else a=1;
//         }
//         cout<<endl;
//     }
// }

// ============ M-2 ============
#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)){
                cout<<1;
            }else cout<<0;
        }
        cout<<endl;
    }
}