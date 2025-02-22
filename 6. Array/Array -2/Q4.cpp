// write a program to copy the contents of one array into another in the reverse order.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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

    vector<int> v2(v.size());
    for(int i=0;i<v2.size(); i++){
        // i+j = size - 1
        v2[i] = v[v.size() - 1 - i];
    }
    display(v2);
}