#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
    double angleinp;
    double angle = 0;
        double x = 0, y = 0;
        int moves;
        cin>>moves;
        for (int j = 0; j < moves; j++)
        {
            double dist;
            cin>>angleinp>>dist;
            angle= angle+angleinp;
            x -= sin(angle*M_PI/180)*dist;
            y += cos(angle* M_PI/180)*dist;
        }
        cout<<fixed<<setprecision(4)<<x<<' '<<y<<'\n';
        
    }
    
    return 0;
}