// 2D Vector
// syntax :- vector<vector<int>>v;
//           vector<vector<int>>v(m);   --> m=size of vector
//           vector<vector<int>>v(m, vector<int> (n));
//           vector<vector<int>>v(m, vector<int> (n,k));

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector< vector<int> >v;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    
    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    vector<int> v3;
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(3);
    v3.push_back(1);
    v3.push_back(2);

    
}