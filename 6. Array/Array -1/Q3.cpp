// memory allocation 
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
}

// output
// address of arr[0] = 0x7fffffffd090
// address of arr[1] = 0x7fffffffd094
// address of arr[2] = 0x7fffffffd098
// address of arr[3] = 0x7fffffffd09c
// address of arr[4] = 0x7fffffffd0a0