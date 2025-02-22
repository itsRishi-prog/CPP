// Rotate the given array 'a' by k steps, where k is non-negative.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i, int j, vector<int>&v){
    while (i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    v.push_back(2);
    v.push_back(9);

    display(v);
    int k = 2;
    // rotate
    int n = v.size();
    reversePart(0, n-k-1, v);
    reversePart(n-k, n-1, v);
    reversePart(0,n-1,v);
    display(v);
}