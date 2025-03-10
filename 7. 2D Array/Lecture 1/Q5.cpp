// write a C++ program to find the smallest element of a given 2D array of integers.

#include<iostream>
#include<climits>
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

    int min = INT_MAX;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(min>arr[i][j]) min = arr[i][j];
        }
    }
    cout<<min;
}