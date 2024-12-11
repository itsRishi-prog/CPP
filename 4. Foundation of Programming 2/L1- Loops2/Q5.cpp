// print the sum of this series 1-2+3-4+5-6...upto 'n' terms.
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"nth term batao : ";
    cin>>n;
    // for(int i=0;i<=n;i++){
    //     if(i%2!=0) sum+=i;
    //     else sum-=i;
    // }

    //  M2  
    if(n%2==0) sum = -n/2;
    else sum = -n/2 + n;
    cout<<sum;
}