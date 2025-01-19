// Find the second largest element in the given Array in one pass.
#include<iostream>
using namespace std;
int main(){
    int arr[6]={12 ,35, 1, 10, 29, 1};
    int max1=0,max2=0, INT_MIN=0;
    for(int i=0;i<6;i++){
        if(max1<arr[i]){
        max2=max1;
        max1=arr[i];
        }
        else if(max2<arr[i] && arr[i]!=max1){
        max2=arr[i];
        }
    }
    if(max2==INT_MIN){
        cout<<"No second element exists"<<endl;
    }
    else  cout<<max2<<endl;
    return 0;
}