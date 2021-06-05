#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//bro how do i check if points are in a triangle

int main(){
    double x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int tc;
    cin>>tc;
    double x,y;
    double res = abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
    cout<<fixed<<setprecision(1)<<res;
    for (int i = 0; i < tc; i++)
    {
        cin>>x>>y;
        
    }
    
    return 0;
}