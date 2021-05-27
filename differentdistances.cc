#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c,d,p;
    while(true){
        cin>>a;
        if(a==0){
            break;
        }
        cin>>b>>c>>d>>p;
        double res = pow(
            pow(abs(a-c),p)+
            pow(abs(b-d),p)
            ,1/p
            );
            cout<<fixed<<setprecision(6)<<res<<'\n';
    }
    return 0;
}