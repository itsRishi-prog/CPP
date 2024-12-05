// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. also determine how much profit he made or loss he incurred.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Cost Price : ";
    float cp;
    cin>>cp;
    cout<<"Enter selling Price : ";
    float sp;
    cin>>sp;
    if(sp>cp){
        cout<<"IN PROFIT OF : "<<sp-cp;
    }if(cp>sp){
        cout<<"IN LOSS OF : "<<cp-sp;
    }if(cp==sp){
        cout<<" NO PROFIT NO LOSS!!! ";
    }
}