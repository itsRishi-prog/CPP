// find the doublet in the array whose sum is equal to the given value x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<=n-1; j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}