#include <vector>
#include <map>
#include <iostream>
#include <cmath>
using namespace std;

// ? How? no idea


map<int,int> mosqount;
int c;
vector<double> lx(33);
vector<double> ly(33);
vector<vector<int>> adjl(33);
vector<bool> vis(33,false);
// ^ zero indexed adjl

void dfs(int node){
    if(vis[node]){
        return;
    }
    vis[node] = true;
    mosqount[c]++;
    for(auto &b:adjl[node]){
        dfs(b);
    }
    return;
}

int main(){
    int tc;
    cin>>tc;
    for (int ppp = 0; ppp < tc; ppp++)
    {
        c = 0;
        int mq;
        double bdiameter;
        cin>>mq>>bdiameter;
        bdiameter/=2;
        bdiameter*=2;
        // ^ did this
        for (int i = 0; i < mq; i++)
        {
            cin>>lx[i]>>ly[i];
            for (int j = 0; j < i; j++)
            {
                if((lx[i]-lx[j])*(lx[i]-lx[j]) + (ly[i] - ly[j])*(ly[i]-ly[j]) < bdiameter + 1e-10){
                    adjl[i].push_back(j);
                    adjl[j].push_back(i);
                }
            }
        }
        for (int i = 0; i < mq; i++)
        {
            if(!vis[i]){
                dfs(i);
                c++;
            }
        }
        

        for(auto [key,val]:mosqount){
            cout<<key<<' '<<val<<'\n';
        }
        cout<<"ADDJL\n";
        for (int i = 0; i < adjl.size(); i++)
        {
            cout<<i<<": ";
            for (int j = 0; j < adjl[i].size(); j++)
            {
                cout<<j<<' ';
            }
            cout<<'\n';
            
        }
        

        mosqount.clear();
        lx.clear();
        ly.clear();
        adjl.clear();
        vis.clear();
    }
    
    return 0;
}