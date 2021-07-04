#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    double cx,cy;
    int n;
    cin>>cx>>cy>>n;
    double x,y,r;
    double dist[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y>>r;
        dist[i] = sqrt(pow(x-cx,2) + pow(y-cy,2)) - r;
    }

    sort(dist, dist+n);
    cout<<(floor(dist[2])<0?0:floor(dist[2]));


    
    return 0;
}