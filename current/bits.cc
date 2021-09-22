#include <bitset>
#include <iostream>
using namespace std;

int solv(long long x){
    int a;
    a = __builtin_popcount(x);
    return a;
}

int main(){
    int tc;
    cin>>tc;
    long long x;
    while (tc--)
    {
        int maxx = 0;
        cin>>x;
        while (x != 0)
        {
            maxx = max(maxx, solv(x));
            x/=10;
        }
        cout<<maxx<<'\n';
        
    }
    
    return 0;
}