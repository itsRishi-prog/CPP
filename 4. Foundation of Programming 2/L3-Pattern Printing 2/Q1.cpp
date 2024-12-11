// print the given pattern 
//       * * * *
//     * * * *
//   * * * *
// * * * *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=n;k++){
            cout<<"* ";
        }
        cout<<endl;
    }


    // ============== M-2 ==============

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int k=1;k<=2*n-1;k+=2){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
}