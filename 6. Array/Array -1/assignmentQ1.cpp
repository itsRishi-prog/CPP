// Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int product=1;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        product=arr[i]*product;
    }
    cout<<product;
}