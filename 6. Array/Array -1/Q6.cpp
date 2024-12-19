// find the element "x" in the array. Take array and as input.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x=0;
    cout<<"Enter the value of x : ";
    cin>>x;
    bool flag = false; // false -> by default. which means "NOT present"
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"element is present!!! ";
    else cout<<"element is not present";
}