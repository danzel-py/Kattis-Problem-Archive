#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    double x,y;
    double a1,a2;
    double v1,v2;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        double a = 12;
        double b = -4*(x+y);
        double c = x*y;
        a1 = (-b+pow(b*b-4*a*c,1.0/2))/(2*a);
        a2 = (-b-pow(b*b-4*a*c,1.0/2))/(2*a);
        v1 = a1*(x-2*a1)*(y-2*a1);
        v2 = a2*(x-2*a2)*(y-2*a2);
        cout<<fixed<<setprecision(7)<<max(v1,v2)<<'\n';
        
    }
    
    return 0;
}