#include <iostream>
using namespace std;

int main(){
    int tc;
    long long p,r,f;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        cin>>p>>r>>f;
        long long sum = 0;
        while(p<=f){
            p*=r;
            sum+=1;
        }
        cout<<sum<<'\n';
    }
    
    return 0;
}