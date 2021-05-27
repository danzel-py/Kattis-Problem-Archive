#include <iostream>
using namespace std;

int main(){
    int h,m;
    cin>>h>>m;
    if(m>44){
        m-=45;
    }
    else{
        m+=15;
        if(h!=0){
            h-=1;
        }
        else{
            h = 23;
        }
    }
    cout<<h<<' '<<m;
    return 0;
}