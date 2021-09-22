#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x;
    cin>>x;
    double t,h;
    double mem = -1,tmem = -1;
    double sum = 0;
    for (int i = 0; i < x; i++)
    {
        cin>>t>>h;
        if(mem!=-1){
            sum+= (t-tmem)/2*(h+mem);
        }
        mem = h;
        tmem = t;
    }
    cout<<fixed<<setprecision(6)<<sum/1000;
    
    return 0;
}