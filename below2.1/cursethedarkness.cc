#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    double x0,y0;
    int cn;
    double x1,y1;
    bool found;
    for (int q = 0; q < tc; q++)
    {
        cin>>x0>>y0;
        cin>>cn;
        found = false;
        for (int i = 0; i < cn; i++)
        {
            cin>>x1>>y1;
            if(!found){
                if((sqrt(pow(x1-x0, 2.0)+pow(y1-y0, 2.0)))<8){
                    found=true;
                }
            }
        }
        if(found){
            cout<<"light a candle\n";
        }
        else{
            cout<<"curse the darkness\n";
        }
        
    }
    
    return 0;
}