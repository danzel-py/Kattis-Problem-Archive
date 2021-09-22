#include <iostream>
using namespace std;

int main(){
    double gal,leak,mile;
    cin>>gal>>leak>>mile;
    gal/=2;

    double speed;
    double mpg;
    int maxx = 0;
    for (int i = 0; i < 6; i++)
    {
        cin>>speed>>mpg;
        
        if(gal - (leak*mile/speed + mile/mpg)> 10e-6){
            maxx = max(maxx, int(speed));
        }

    }
    if(maxx == 0){
        cout<<"NO";
    }
    else{
        cout<<"YES "<<maxx;
    }
    
    return 0;
}