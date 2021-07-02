#include <iostream>
using namespace std;

int main(){
    int n,m,r;
    while(true){
        cin>>n>>m;
        if (n==0 && m==0)
        {
            break;
        }
        cout<<n/m<<' '<<n%m<<" / "<<m<<'\n';
        
    }
    return 0;
}