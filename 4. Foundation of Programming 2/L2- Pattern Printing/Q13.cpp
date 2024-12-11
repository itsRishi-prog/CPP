// print the following pattern
//         *             # # # #        *
//       * *             # # #          * * 
//     * * *          => # #        +   * * * 
//   * * * *             #              * * * *
// * * * * *                            * * * * *
// to print the pattern of # we have to use 
// "for loop ke andar 2 aur for loop"
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numbers of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"# ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}