#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x1,y1,x2,y2,x3,y3;
    double xmid,ymid;
    double xa,ya;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if( sqrt( pow(x1-x2,2.0) + pow(y1-y2,2.0) ) > sqrt( pow(x3-x2,2.0) + pow(y3-y2,2.0) ) ){
        xmid = (x1+x2)/2;
        ymid = (y1+y2)/2;
        xa = 2*xmid-x3;
        ya = 2*ymid-y3; 
    }
    else if( sqrt( pow(x1-x3,2.0) + pow(y1-y3,2.0) ) > sqrt( pow(x3-x2,2.0) + pow(y3-y2,2.0) ) ){
        xmid = (x1+x3)/2;
        ymid = (y1+y3)/2;
        xa = 2*xmid-x2;
        ya = 2*ymid-y2; 
    }
    else{
        xmid = (x2+x3)/2;
        ymid = (y2+y3)/2;
        xa = 2*xmid-x1;
        ya = 2*ymid-y1; 
    }
    cout<<xa<<' '<<ya;

}