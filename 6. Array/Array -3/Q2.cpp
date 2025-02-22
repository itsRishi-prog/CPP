// move all negative numbers to beginneing and positive to end with constant extra space.
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>& v){
    int n = v.size();
    int neg = 0;
    int post = n-1;

    while(neg<post){
        if(v[neg]<0) neg++;
        else if(v[post]>0) post--;
        if(neg>post) break;
        else{
            swap(v[neg], v[post]);
            neg++;
            post--;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(-1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(-1);
    v.push_back(-1);
    v.push_back(0);
    v.push_back(-1);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}