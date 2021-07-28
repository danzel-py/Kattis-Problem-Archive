#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <queue>
#include <cstring>
using namespace std;
// So proud of this one :p, weighted undirected graph
map<int,vector <pair <int,int> > > adjl;
map<pair<int,int>, pair<int,int> > georgemap;
vector<int> vis;

void bfs(int start, int finish){
    queue<int> q;
    q.push(start);
    vis[start] = 0;

    while(!q.empty()){
        int now = q.front();
        q.pop();
        for(auto el:adjl[now]){
            int newVal = vis[now] + el.second;
            if(georgemap[{now,el.first}].first <= vis[now] && vis[now] < georgemap[{now,el.first}].second){
                newVal = georgemap[{now,el.first}].second+ el.second;
            }
            
            if(newVal < vis[el.first]){
                vis[el.first] = newVal;
                q.push(el.first);
            }
        }

    }

}


int main(){
    int n,m,a,b,k,g;
    cin>>n>>m>>a>>b>>k>>g;
    int arr[g];
    vis.resize(n+1,100000000);
    for (int i = 0; i < g; i++)
    {
        cin>>arr[i];
    }
    int x,y,l;
    for (int i = 0; i < m; i++)
    {
        cin>>x>>y>>l;
        adjl[x].push_back({y,l});
        adjl[y].push_back({x,l});
    }
    int gminute = -k;
    for (int i = 1; i < g; i++)
    {
        int from = arr[i-1];
        int to = arr[i];
        int dist;
        for(auto el:adjl[from]){
            if(el.first == to){
                dist = el.second;
                break;
            }
        }
        georgemap[{from,to}] = {gminute, gminute+dist};
        georgemap[{to,from}] = {gminute, gminute+dist};
        gminute+=dist;

        
    }
    
    
    bfs(a,b);

    // for (int i = 1; i < n+1; i++)
    // {
    //     cout<<vis[i]<<' ';
    // }
    // cout<<'\n';
    
    // for(auto [key,value]:georgemap){
    //     cout<<key.first<<' '<<key.second<<' '<<value.first<<' '<<value.second<<"\n";
    // }
    cout<<vis[b];

    return 0;
}