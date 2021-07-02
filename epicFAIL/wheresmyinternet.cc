#include <map>
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

// WA for some reason

vector<vector<int>> adjl;
map<int, bool> mapz;
map<int,bool> vis;

void dfs(int x){
    vis[x] = true;

    for(auto &b:adjl[x]){
        mapz[b] = true;
        if(!vis[b]){
            dfs(b);
        }
    }
}

int main()
{
    int n, t;
    cin >> n >> t;
    int a, b;
    adjl.reserve(200001);
    mapz[1] = true;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        adjl[b].push_back(a);
        adjl[a].push_back(b);
    }
    dfs(1);
    bool ctd = false;
    for(int i = 1; i <= n; i++){
        if(!mapz[i]){
            cout<<i<<'\n';
            ctd = true;
        }
    }
    if(!ctd){
        cout<<"Connected";
    }

    return 0;
}