#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

long double calc(long double n,long double p,long double s,long double v,long double c){
    long double compute = n*pow(log2(n),M_SQRT2*c)/p/1000000000;
    long double flight = s*(1+1/c)/v;
    return compute+flight;
}


int main(){
    long double n,p,s,v;
    cin>>n>>p>>s>>v;


    long double ctop = 1e8;
    long double cbot = -1e8;
    int a = 0;
    long double c;
    while (a++< 1e5)
    {
        c = (ctop + cbot)/2;
        if(calc(n,p,s,v,c) > calc(n,p,s,v,c+1e-6)){
            cbot = c;
        }else{
            ctop = c;
        }
    }


    cout<<fixed<<setprecision(6)<<calc(n,p,s,v,c)<<' '<<c;
    return 0;
}