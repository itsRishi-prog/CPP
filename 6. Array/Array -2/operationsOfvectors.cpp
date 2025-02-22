#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    // formate to prite vectors
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();   // use to delete last one element
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";






        
    }
    cout<<"size is : "<<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity();
}