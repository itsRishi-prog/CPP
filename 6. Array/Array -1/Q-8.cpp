// Find the second largest element in the given Array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    
    int Largest=arr[0];
    int sLargest=arr[0];
    for(int i=0;i<=n-1;i++){
        if(Largest<arr[i]) Largest=arr[i]; 
    }
    cout<<"Largest element is : "<<Largest<<endl;

    for(int i=0;i<=n-1;i++){
        if(arr[i]!=Largest && sLargest<arr[i]) sLargest=arr[i];
    }
    cout<<"Second largest number is : "<<sLargest;
}