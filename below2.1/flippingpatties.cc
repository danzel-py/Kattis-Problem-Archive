#include <map>
#include <cmath>
#include <iostream>
using namespace std;

int main(){
    map<int,int> dosomething;
    int tc;
    cin>>tc;
    int d,t;
    for (int i = 0; i < tc; i++)
    {
        cin>>d>>t;
        dosomething[t]++;
        dosomething[t-d]++;
        dosomething[t-d*2]++;
    }

    int maxneed = 0;
    for(auto const [key,value]:dosomething){
        maxneed = max(maxneed, value);
    }

    cout<<ceil(double(maxneed)/2.0);
    
    
    return 0;
}