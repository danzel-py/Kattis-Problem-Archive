#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

int main(){
    double h,v;
    cin>>h>>v;
    cout<<fixed<<setprecision(0)<<ceil(h/sin(v*M_PI/180));

    return 0;
}