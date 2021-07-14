#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double r,h,s;
    while (true)
    {
        cin>>r>>h>>s;
        if(r == 0){
            break;
        }
        double q = sqrt(pow(h,2.0) - pow(r,2.0));
        double deg = asin(r/h) * 180.0 / M_PI;
        double circ = 2.0*M_PI*r*(180+deg+deg)/360.0;
        double res = (s+100.0)/100.0*(2*q+circ);
        cout<<fixed<<setprecision(2)<<res<<'\n';
    }
    

    return 0;
}