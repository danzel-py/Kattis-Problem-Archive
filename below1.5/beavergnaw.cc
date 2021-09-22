#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double dGede, d,v;
    while(true){
        cin >> dGede >> v;
        if(dGede == 0 && v == 0){
            break;
        }

        d = pow(pow(dGede,3)-6*v/M_PI,1.0/3);

        cout<<fixed<<setprecision(6)<<d<<endl;
        
        







    }
    return 0;
}