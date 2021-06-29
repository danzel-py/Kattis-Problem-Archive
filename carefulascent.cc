#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double x,y,l,u,f;
    int n;
    cin>>x>>y>>n;
    double sum;
    double sumlay;
    for (int i = 0; i < n; i++)
    {
        cin>>l>>u>>f;
        sumlay += (u-l);
        sum += (u-l) * f;
    }
    sum += y-sumlay;
    cout<<fixed<<setprecision(6)<<x/sum;
    
    return 0;
}