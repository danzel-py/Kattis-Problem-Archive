#include <queue>
#include <iostream>
#include <vector>
#include <utility>
#include <set>
using namespace std;

// 0.14 s
// djikstra PQ best, SET not so good
// tags: easy djikstra pq djikstra

int main()
{
    int cit, b;
    cin >> cit >> b;
    vector<vector<pair<int, bool>>> ajdl(cit);
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
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push(make_pair(0,0));
    
    while (!q.empty())
    {
        int now = q.top().second;
        q.pop();
        for (auto e : ajdl[now])
        {
            if(shpt[now] + e.second < shpt[e.first]){
                shpt[e.first] = shpt[now] + e.second;
                q.push(make_pair(shpt[e.first], e.first));
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