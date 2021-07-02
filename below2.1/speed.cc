#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// TLE

vector<double> dist;
vector<double> tick;

int checknow(double x, double rtime){
    double sum = 0;
    for (int i = 0; i < dist.size(); i++)
    {
        sum += dist[i]/(tick[i]+x);
        if(sum - 1e-6> rtime){
            return -1;
        }
    }
    if ((abs(rtime - sum)) < 1e-6)
    {
        return 0;
    }
    else if(rtime > sum){
        return 1;
    }
    else if (rtime < sum)
    {
        return -1;
    }
    return 0;
}

int main(){
    int n;
    double t;
    cin>>n>>t;
    double a,b;
    double minn = 10001;
    dist.reserve(1000);
    tick.reserve(1000);
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        dist.push_back(a);
        tick.push_back(b);
        minn = min(minn, b);
    }
    double lowerbound = minn*-1+1e-6;

    double upperbound = 1100000;
    double guess;
    int res;
    long long c = 0;

    
    while (c < 1e2)
    {
        c++;
        guess = (lowerbound + upperbound)/2;
        res = checknow(guess,t);
        if(res == 0){
            break;
        }
        else if (res == 1)
        {
            upperbound = guess;
        }
        else
        {
            lowerbound = guess;
        }
    }
    cout<<fixed<<setprecision(6)<<guess;
    
    
    return 0;
}