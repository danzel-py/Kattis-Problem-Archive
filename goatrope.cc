#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double gx,gy,x1,y1,x2,y2;
    cin>>gx>>gy>>x1>>y1>>x2>>y2;
    double res;

    if(gx<x1){
        if(gy>y2){
            res = pow(
                pow(x1-gx,2)+pow(gy-y2,2),
                (1.0/2)
            );

        }
        else if (gy<y1)
        {
            res = pow(
                pow(x1-gx,2)+pow(y1-gy,2),
                (1.0/2)
            );
        }else{
            res = x1-gx;
        }
    }else if (gx>x2)
    {
        if(gy>y2){
            res = pow(
                pow(gx-x2,2)+pow(gy-y2,2),
                (1.0/2)
            );

        }
        else if (gy<y1)
        {
            res = pow(
                pow(gx-x2,2)+pow(y1-gy,2),
                (1.0/2)
            );
        }else{
            res = gx-x2;
        }
    }else{
        if(gy>y2){
            res = gy-y2;
        }
        else if(gy<y1){
            res = y1-gy;
        }
        else{
            res = 0;
        }
    }
    cout<<fixed<<setprecision(4)<<res;
    

    return 0;
}