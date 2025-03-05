// transpose of the matrix entered by the user and store it in a new matrix.
#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter the no. of rows : ";
    cin>>m;
    cout<<"Enter the no. of colums : ";
    cin>>n;
    int mat[m][n];
    cout<<"Enter your matrix which you have to transpose : "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }
    cout<<"\n";

    int t[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            t[i][j] = mat[j][i];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}