// you are given a matrix / 2D array of size (n*n). change this matrix into its transpose.

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. of rows/colums : ";
    cin>>m;
    int mat[m][m];
    cout<<"Enter your matrix which you have to transpose : "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}