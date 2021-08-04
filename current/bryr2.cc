#include <queue>
#include <iostream>
#include <vector>
#include <utility>
#include <set>
using namespace std;

// 0.22 s
// djikstra SET good, NEVER bfs Queue
// tags: easy djikstra

int main()
{
    int cit, b;
    cin >> cit >> b;
    vector<vector<pair<int, bool>>> ajdl(cit);
    vector<bool> vis(cit,false);
    vector<int> shpt(cit,900009);
    // ajdl.resize(cit);
    // vis.resize(cit, false);
    // shpt.resize(cit, 900009);
    int from, to;
    bool side;
    for (int i = 0; i < b; i++)
    {
        cin >> from >> to >> side;
        from--;
        to--;
        ajdl[from].push_back({to, side});
        ajdl[to].push_back({from, side});
    }

    // queue<int> q;
    shpt[0] = 0;
    // q.push(0);
    set<pair<int,int>> q;
    for (int i = 0; i < cit; i++)
    {
        q.emplace(shpt[i],i);
    }
    
    vis[0] = true;
    while (!q.empty())
    {
        auto now = *q.begin();
        q.erase(q.begin());
        for (auto e : ajdl[now.second])
        {
            if(shpt[now.second] + e.second < shpt[e.first]){
                q.erase(q.find({shpt[e.first],e.first}));
                shpt[e.first] = shpt[now.second] + e.second;
                q.emplace(shpt[e.first], e.first);
            }
            // if (vis[e.first])
            // {
            //     continue;
            // }
            // vis[e.first] = true;
        }
    }
    cout << shpt[cit - 1];
    return 0;
}