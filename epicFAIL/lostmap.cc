#include <queue>
#include <iostream>
#include <vector>
using namespace std;

// ... need guru

// tags: medium graph i think, but i'm too dumb for this

// note: brute djisktra => TLE

vector<vector<int>> adjm;

int bfsNoDirect(int from,int to, int n,int minn){
    vector<bool> vis(n);
    vector<int> shortest(n,100000000);
    int jitsu = adjm[from][to];
    if(jitsu == minn){
        return jitsu;
    }
    shortest[from] = 0;
    queue<int> q;
    q.push(from);
    vis[from] = true;
    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        for (int i = 0; i < n; i++)
        {
            if(adjm[now][i] >= jitsu){
                continue;
            }
            shortest[i] = min(shortest[i], adjm[now][i] + shortest[now]);
            if(shortest[i] > jitsu){
                continue;
            }
            if(shortest[i] == jitsu && i == to){
                return shortest[i];
            }
            if(vis[i] == true){
                continue;
            }
            vis[i] = true;
            q.push(i);
            // cout<<"PUS "<<i<<" | ";
        }
        
    }
    return shortest[to];
    
}


int main(){
    int n;
    cin>>n;
    adjm.resize(n,vector<int>(n));
    // adjmNoDirect.resize(n,vector<int>(n,100000000));
    int minn = 100000000;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>adjm[i][j];
            minn = min(minn,adjm[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(bfsNoDirect(i,j,n,minn) != adjm[i][j]){
                cout<<i+1<<' '<<j+1<<'\n';
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<adjmNoDirect[i][j]<<' ';
    //     }
    //     cout<<'\n';
        
    // }
    
    



    
    return 0;
}