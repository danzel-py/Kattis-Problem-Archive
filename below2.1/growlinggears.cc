#include <iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        int gearcount;
        cin>>gearcount;
        double rmax;
        double t;
        double tmax = 0;
        double a,b,c;
        int winner = 0;
        for (int j = 0; j < gearcount; j++)
        {
            cin>>a>>b>>c;
            rmax = b/2/a;
            rmax = max(rmax, 0.0);
            t = -a*rmax*rmax + b*rmax + c;
            if(t > tmax){
                winner = j;
            }
            tmax = max(t,tmax);
        }
        cout<<winner+1<<'\n';
        
    }
    
    return 0;
}