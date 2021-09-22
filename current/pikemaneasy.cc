#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> v;

int main(){
    int n;
    long long t;
    int a,b,c;
    long long t0;
    cin>>n>>t>>a>>b>>c>>t0;
    v.resize(n);
    v[0] = t0;
    for (int i = 1; i < n; i++)
    {
        v[i] = ((a*v[i-1]+b)%c)+1;
    }
    sort(v.begin(),v.end());
    long long pen = 0;
    int took = 0;
    int ct = 0;
    for(auto e:v){
        // cout<<e<<' ';
        took += e;
        if(took > t){
            break;
        }
        pen+=took;
        ct++;
        if(pen>1000000007){
            pen%=1000000007;
        }
    }
    cout<<ct<<' '<<pen;
    return 0;
}