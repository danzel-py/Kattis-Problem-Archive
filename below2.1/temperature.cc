#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double x,y;
    cin>>x>>y;
    double res = x/(1-y);
    if(y == 1){
        x == 0 ? cout<<"ALL GOOD":cout<<"IMPOSSIBLE";
        return 0;
    }
    cout<<fixed<<setprecision(6)<<res;

    
    return 0;
}