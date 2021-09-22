#include <iostream>
using namespace std;
// FAILED 4th TEST
// FIX => do what they exactly told you to
int main(){
    int a,b,c,d,e;
    int mem;
    cin>>a>>b>>c>>d>>e;
    while(a!=1 || b!=2 || c!=3 || d!=4){
        if(a>b){
            mem = a;
            a = b;
            b = mem;
            cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<'\n';
        }
        if (b>c)
        {
            mem = b;
            b = c;
            c = mem;
            cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<'\n';
        }
        if (c>d)
        {
            mem = c;
            c = d;
            d = mem;
            cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<'\n';
        }
        if (d>e)
        {
            mem = d;
            d = e;
            e = mem;
            cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<'\n';
        }
    };
    return 0;
}