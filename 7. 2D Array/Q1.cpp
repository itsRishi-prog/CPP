// while initializing a 2D array it is necessary to mention the second(column) dimension, whereas the first dimension(row) is optional.

#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {{1,2,3}, {2,3,4}, {3,4,5}};    //arrays ka array
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}