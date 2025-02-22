// It is same as array but with a single a biggest difference is that we don't need to mentioned it's size.
#include<iostream>
#include<vector>    // compulsory when we have to use vector
using namespace std;
int main(){
    // Syntax:- vector<int> v;
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<" ";
}