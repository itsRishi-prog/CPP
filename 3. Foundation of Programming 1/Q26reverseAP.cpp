// Display this AP - 100, 97, 94,... upto all terms which are positive.
#include<iostream>
using namespace std;
int main(){
    int a=100;
    // 100, 97, 94,..., 7, 4, 1.

    // for(int i=1; i<=34; i++){
    //     cout<<a<<endl;
    //     a=a-3;
    // }

    // NOTE:- "intilisation" is not nessesary always. here we are not using "i" so we can remove it.

    for(;a>0;){
        cout<<a<<endl;
        a=a-3;
    }

    // -----or
    for(int i=100; i>0; i=i-3){
        cout<<i<<endl;
    }
}