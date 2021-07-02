#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    double a,b;
    double suma,sumb;
    int tc;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        cin>>a>>b;
        suma+=a;
        sumb+=b;
    }

    double res = (sumb-suma)/double(tc);
    cout<<fixed<<setprecision(6)<<res;
    
    return 0;
}