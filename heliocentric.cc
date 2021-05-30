#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int tc =1;
    while (cin>>a)
    {
        cin>>b;
        c = 0;
        while (a!=0 || b!=0)
        {
            a++;
            b++;
            c++;
            if(a == 365) a = 0;
            if(b == 687) b =0;
        }
        cout<<"Case "<<tc<<": "<<c<<'\n';
        tc++;
    }
    
    return 0;
}