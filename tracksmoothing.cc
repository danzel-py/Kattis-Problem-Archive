#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    double r, mx, my, x, y, fx, fy;
    int points;
    for (int i = 0; i < testcases; i++)
    {
        cin >> r >> points;
        cin >> fx >> fy;
        mx = fx;
        my = fy;
        double cc = 0;
        for (int k = 0; k < points - 1; k++)
        {
            cin >> x >> y;
            cc += pow(pow(x-mx,2)+pow(y-my,2),1.0/2);
            mx = x;
            my = y;
        }
        cc += pow(pow(fx-mx,2)+pow(fy-my,2),1.0/2);
        double circ = M_PI*r*2;
        if(cc-circ>0){
            cout<<fixed<<setprecision(6)<<(cc-circ)/cc<<'\n';
        }else{
            cout<<"Not possible\n";
        }
    }

    return 0;
}