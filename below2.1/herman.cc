#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double n;
    cin>>n;
    cout<<fixed<<setprecision(6)<<n*n*M_PI<<' '<<n*n*2;
    return 0;
}