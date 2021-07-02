#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double pt,psv,at,asv;
    cin>>pt>>psv>>at>>asv;
    at*=pt;
    asv*=psv;
    double aa = (at-asv)/(pt-psv);
    if(aa > 100 + 1e-6|| aa < -1e-6){
        cout<<"impossible";
        return 0;
    }
    cout<<fixed<<setprecision(6)<<aa;
    return 0;
}