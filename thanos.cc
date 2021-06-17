#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// ! DONT TRUST DOUBLE/FLOAT/ETC
int main(){
    int tc;
    cin>>tc;
    double p,r,f;
    long long a,b,c;
    for (int i = 0; i < tc; i++)
    {
        cin>>p>>r>>f;
        int bruh = int(max(floor(log(f/p)/log(r))+1,0.0));
        a = (long long)p;
        b = (long long)r;
        c = (long long)f;

        long long sum = 0;
        while(a<=c){
            a*=b;
            sum+=1;
        }

        if(bruh!=sum){
            cout<<bruh<<' '<<sum<<'\n'<<a<<'\n'<<b<<'\n'<<c<<'\n';

            cout<<p<<' '<<r<<' '<<(long long)f<<'\n';

            cout<<(log(f/p)/log(r))<<'\n';
            double hasil = (log(f/p)/log(r));
            cout<<floor(hasil)<<'\n';
            cout<<(long long)(hasil * 1000000000000)<<'\n';
            cout<<hasil;
        }
    }
    
    return 0;
}