#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int temp;
    while(!(a<=b && b<=c && c<=d && d<=e)){
        if(a>b){
            temp = a;
            a = b;
            b = temp;
            cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<'\n';
        }if (b>c)
        {
            temp = b;
            b = c;
            c = temp;
            cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<'\n';
        }if (c>d)
        {
            temp = c;
            c = d;
            d = temp;
            cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<'\n';
        }if (d > e)
        {
            temp = d;
            d = e;
            e = temp;
            cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<'\n';
        }
        
        
        
    }
    
    return 0;
}