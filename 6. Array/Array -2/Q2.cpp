// Find the last occurrence of x in the array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);
    int x = 6;
    int idx = -1;
    //  from this loop we check entire element one by one from left to right (start to end)
    // for(int i=0;i<v.size();i++){     
    //     if(v[i]==x) idx = i;
    // }

    //      Or
    //  from this loop we check element from right to left and just breat the loop after got it...
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    cout<<idx;
}