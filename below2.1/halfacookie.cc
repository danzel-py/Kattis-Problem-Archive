#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double r,x,y;
    double smol;
    double big;
    while (cin>>r)
    {
        cin>>x>>y;
        if(x*x + y*y > r*r){
            cout<<"miss\n";
            continue;
        }
        big = M_PI*r*r;
        smol = acos(sqrt(x*x + y*y)/r) * r * r - sqrt(r*r - x*x - y*y) * sqrt(x*x + y*y);
        cout<<fixed<<setprecision(4)<<big-smol<<' '<<smol<<'\n';
    }
    
    return 0;
}