// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int>& v){
    int n = v.size();
    int noZ = 0;
    int noO = 0;
    int noT = 0;
    for(int i=0; i<n; i++){
        if(v[i]==0) noZ++;
        else if(v[i]==1) noO++;
        else noT++;
    }

    for(int i=0; i<n; i++){
        if(i<noZ) v[i] = 0;
        else if(i<noZ+noO) v[i] = 1;  // Fix: Use noZ + noO
        else v[i] = 2;
    }
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort012(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}