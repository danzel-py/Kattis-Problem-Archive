#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int cases;
    cin>>cases;
    double n,l,d,g;
    double circ,sid,base;
    for (int i = 0; i < cases; i++)
    {
        cin>>n>>l>>d>>g;
        if(n!=4){base = n*l*l/2*tan(M_PI/180*(n-2)*180/n/2)/2;}
        else base = l*l;
        sid = n*l*d*g;
        circ = M_PI*d*d*g*g;
        cout<<fixed<<setprecision(6)<<sid+circ+base<<'\n';
    }
    
    return 0;
}