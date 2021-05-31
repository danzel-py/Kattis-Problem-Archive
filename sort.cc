#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;


bool vsrt(const pair<int,pair<int,int> > &p1, const pair<int,pair<int,int> > &p2){
    if(p1.second.first == p2.second.first){
        return p1.second.second<p2.second.second;
    }
    return p1.second.first>p2.second.first;
}

int main(){
    int n,mx;
    cin>>n>>mx;
    int arr[n+1];
    map <int,int> fcount;
    map<int,int> appearance;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        fcount[arr[i]]++;
        if(appearance[arr[i]] == 0){
            appearance[arr[i]] = i;
        }
    }
    vector<pair<int, pair<int,int> > > v;
    for(auto const [key,value]:fcount){
        v.push_back(make_pair(key,make_pair(value,appearance[key])));
    }
    sort(v.begin(),v.end(),vsrt);
    for(auto c:v){
        for (int i = 0; i < c.second.first; i++)
        {
            cout<<c.first<<' ';
        }
    }

    
    return 0;
}
