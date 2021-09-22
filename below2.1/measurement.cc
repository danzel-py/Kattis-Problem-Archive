#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n;
    string foo, from, to;
    cin>>n>>from>>foo>>to;
    int tin = -1,fin = -1;
    string units[] = {"th","in","ft","yd","ch","fur","mi","lea"};
    string lunit[] = {"thou", "inch","foot", "yard", "chain", "furlong", "mile", "league"};
    for (int i = 0; i < 8; i++)
    {
        if(from == units[i]){
            fin = i;
        }
        if(from == lunit[i]){
            fin = i;
        }
        if (to == units[i])
        {
            tin = i;
        }
        if (to == lunit[i])
        {
            tin = i;
        }
    }

    double mults[] = {1000,12,3,22,10,8,3};
    while (fin != tin)
    {
        if(fin > tin){
            fin--;
            n*=mults[fin];
        }else{
            n/=mults[fin];
            fin++;
        }
    }

    cout<<fixed<<setprecision(10)<<n;
    


    
    return 0;
}