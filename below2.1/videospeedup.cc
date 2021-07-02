#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    double p,k;
    cin>>n>>p>>k;
    double x;
    double mem = 0;
    double total = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        cin>>x;
        total += (x-mem)*(100.0 + i*p)/100.0;
        mem = x;
    }
    total += (k-mem)*(100.0 + i*p)/100.0;
   
    cout<<fixed<<setprecision(6)<<total;
    return 0;
}