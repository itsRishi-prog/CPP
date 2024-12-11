// print the given pattern
//       *
//     * * *
//   * * * * *
// * * * * * * *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
        cout<<"* ";
        }
        cout<<endl;
    }

cout<<endl;
cout<<endl;
cout<<"   Method - 2";
cout<<endl;
cout<<endl;
cout<<endl;


    // ===================== M-2 =====================
    // nsp = line of space, nst = line of star.
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        nsp--;
        for(int k=1;k<=nst;k++){
            cout<<"* ";
        }
        nst+=2;
        cout<<endl;
    }
}