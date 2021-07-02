#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(6)<<(a-b)*(a-b)/a/a*100;
    return 0;
}