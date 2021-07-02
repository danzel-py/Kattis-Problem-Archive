#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a,b,s,m,n;
    while(true){

        cin>>a>>b>>s>>m>>n;
        if(a==0){
            break;
        }
        double dist = sqrt(a*m*a*m + b*n*b*n);
        double angle = atan(b*n/a/m) * 180/ M_PI;
        cout<<fixed<<setprecision(2)<<angle<<' '<<dist/s<<'\n';
    }
    return 0;
}