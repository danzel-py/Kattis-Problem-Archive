#include <iostream>
using namespace std;

int main(){
    int n,h,v,ph,pv;
    cin>>n>>h>>v;
    ph = n-h;
    pv = n-v;
    int max = 0;
    if(h*v>max) max = h*v;
    if(h*pv>max) max = h*pv;
    if(ph*v>max) max = ph*v;
    if(ph*pv>max) max = ph*pv;
    cout<<max*4;
}