// Combination and permutation
// step 1 :- find factorial of n;

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     int r;
//     cout<<"enter r : ";
//     cin>>r;
//     int nFact=1;    //n!
//     for(int i=2;i<=n;i++){
//         nFact*=i;
//     }
//     int rFact=1;    //r!
//     for(int i=2;i<=r;i++){
//         rFact*=i;
//     }
//     int nrFact=1;   //(n-r)!
//     for(int i=2;i<=n-r;i++){
//         nrFact*=i;
//     }
//     int ncr=nFact/(rFact*nrFact);
//     cout<<ncr;
// }

// ============= M-2 ==============

#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permutation(int n, int r){
    int npr=fact(n)/fact(n-r);
    return npr;
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int r;
    cout<<"enter r : ";
    cin>>r;
    int ncr=combination(n,r);
    int npr=permutation(n,r);
    cout<<"Combination of "<<n<<" & "<<r<<" will be : "<<ncr<<endl;
    cout<<"Permutation of "<<n<<" & "<<r<<" will be : "<<npr;
}