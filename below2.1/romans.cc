#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n;
    cin>>n;
    n = n*1000*5280/4854;
    
    cout<<fixed<<setprecision(0)<<n;
    return 0;
}