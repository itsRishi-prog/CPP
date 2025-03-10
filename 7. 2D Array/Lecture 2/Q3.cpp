//  Write a program to print the matix in wave form...
//  1 2 3       3 2 1
//  4 5 6   =>  4 5 6
//  7 8 9       9 8 7

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of matrix : ";
    cin>>m;
    int n;
    cout<<"Enter cols of matrix : ";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    cout<<"Wave form of give matrix is : "<<endl;
    // wave print
    for(int i=0; i<m; i++){
        if(i%2!=0){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}