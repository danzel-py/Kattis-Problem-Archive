#include <iostream>
#include <utility>
#include <map>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;
    map < int , pair < int, int > > cton;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>x;
            cton[x] = make_pair(i,j);
        } 
    }
    double sum = 0;
    for (int k = 2; k <= 9; k++)
    {
        sum+= pow(pow((cton[k].first - cton[k-1].first),2) + pow((cton[k].second - cton[k-1].second),2),1.0/2);
    }
    cout<<fixed<<setprecision(7)<<sum;
    
    
    return 0;
}