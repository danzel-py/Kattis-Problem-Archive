#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;



// ^ price(𝑘)=𝑝⋅(sin(𝑎⋅𝑘+𝑏)+cos(𝑐⋅𝑘+𝑑)+2)

int main(){
    double p,a,b,c,d;
    int n;
    cin>>p>>a>>b>>c>>d>>n;
    double localmax = -1e6,localmin = 1e6;
    double maxdec =0;
    for (int i = 0; i < n; i++)
    {
        double k = double(i+1);
        double res = p*     (   sin(a*k+b)    +    cos(c*k+d)     +   2 );
        if(res > localmax){
            // new localmax
            maxdec  = max(maxdec, localmax - localmin);
            localmax = res;
            localmin = res;
        }
        localmin = min(localmin, res);
    }
    maxdec  = max(maxdec, localmax - localmin);
    cout<<fixed<<setprecision(6)<<maxdec;

    return 0;
}