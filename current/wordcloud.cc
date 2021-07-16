#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int wmax,n;
    while (1)
    {
        cin>>wmax>>n;
        if(!wmax && !n)break;
        int ln[n];
        int oc[n];
        string aw;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>aw;
            ln[i] = aw.length();
            cin>>oc[i];
            mx = max(mx,oc[i]);
        }
        int wnow = 0;
        int htot = 0;
        int hmax = 0;
        for (int i = 0; i < n; i++)
        {
            int p = double(8 + ceil(40.0*(double)(oc[i]-4)/double(mx-4)));
            int w = ceil(double(9*ln[i]*p)/16.0);
            if(wnow + w <= wmax){
                wnow+=w;
                hmax = max(hmax,p);
            }else{
                wnow = w;
                htot+=hmax;
                cout<<htot<<'\n';
                hmax = p;
            }
        }
        cout<<htot<<'\n';
    }
    return 0;
}