#include <iostream>
using namespace std;

int main(){
    int ws,hs,hc,wc;
    cin>>wc>>hc>>ws>>hs;
    if(wc>ws+1 && hc>hs+1){
        cout<<1;
    }
    else cout<<0;
    return 0;
}