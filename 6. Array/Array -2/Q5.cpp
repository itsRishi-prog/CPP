// write a program to reverse the array without using any extra array.
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

    int i=0, j=v.size()-1;
    // while (i<=j)
    // {
    //     int temp = v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }

    // BY USING FOR LOOP
    // for(int i=0, j=v.size()-1;i<=j;j--){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    // }

    // by using a buitin function.
    reverse(v.begin(), v.end());
    display(v);
}