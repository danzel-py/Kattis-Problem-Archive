#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int g,h;
    if(a==c){
        g=e;
    }
    else if(a==e){
        g = c;
    }
    else if(c==e){
        g = a;
    }
    if(b==d){
        h=f;
    }
    else if(b==f){
        h=d;
    }
    else if(f==d){
        h=b;
    }
    cout<<g<<' '<<h;
    return 0;
}