#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c;
    double d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    double s = (min(a/d, min(b/e, c/f)));
    cout<<fixed<<setprecision(5)<<a-d*s<<' '<<b-e*s<<' '<<c-f*s;
    
    return 0;
}