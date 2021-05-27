#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double s = (a+b+c+d)/2;
    double k = sqrt((s-a)*(s-b)*(s-c)*(s-d));
    cout<<fixed<<setprecision(7)<<k;
    return 0;
}