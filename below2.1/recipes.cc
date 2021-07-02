#include <map>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    map <string, double> getMass;
    map <string, double> getPerc;
    int tc;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        string maindish;
        int r;
        double p,d;
        string ing;
        double mass,perc;
        cin>>r>>p>>d;
        string inglist[r];
        for (int j = 0; j < r; j++)
        {
            cin>>ing>>mass>>perc;
            getMass[ing] = mass;
            getPerc[ing] = perc;
            if(perc == 100.0){
                maindish = ing;
            }
            inglist[j] = ing;
        }
        getMass[maindish] *= d/p;
        cout<<"Recipe # "<<i+1<<'\n';
        double m;
        for (int k = 0; k < r; k++)
        {
            m = getMass[maindish] * getPerc[inglist[k]] / 100;
            cout<<fixed<<setprecision(1)<<inglist[k]<<' '<<m<<'\n';
        }
        cout<<"----------------------------------------\n";
        
    }
    
    return 0;
}