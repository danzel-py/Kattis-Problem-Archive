#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double r;
    double m,c;
    while(true){

    cin>>r>>m>>c;
    if(r==0&&m==0&&c==0){
        break;
    }
    cout<<fixed<<setprecision(5)<<M_PI*r*r<<' '<<4*r*r*c/m<<'\n';
    }

    return 0;
}