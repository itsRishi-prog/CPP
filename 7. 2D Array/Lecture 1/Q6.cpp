// write a program to print sum of all the elements of a 2D matrix.

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the no. of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum = sum + arr[i][j];
        }
    }
    cout<<sum;
}