#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m, disp;
    int mtot = 0;
    int dstot = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m >> disp;
        mtot += m;
        dstot += disp;
    }
    if(mtot*60>=dstot){
        cout<<"measurement error";
    }else{
        cout<<fixed<<setprecision(8)<<double(dstot)/double(mtot*60);
    }
    
    return 0;
}