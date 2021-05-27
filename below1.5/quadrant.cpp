#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >>a;
    cin >>b;
    if(a<0){
        if(b<0) cout<<3;
        else cout<<2;
    }
    else{
        if(b<0) cout<<4;
        else cout<<1;
    }
    return 0;
}
