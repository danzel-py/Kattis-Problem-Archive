#include <vector>
#include <iostream>
using namespace std;
// * Dungeon tapi DFS;
vector<vector<char> > v;
vector<vector<bool> > visited;
int gold = 0;
int arr1[4] = {1,0,0,-1};
int arr2[4] = {0,1,-1,0};

void dfs(int px, int py){
    if(visited[py][px] == true || v[py][px] == '#'){
        return;
    }
    visited[py][px] = true;
    if(v[py][px] == 'G'){
        gold++;
    }

    for (int k = 0; k < 4; k++)
    {
        if(v[py + arr1[k]][px + arr2[k]] == 'T'){
            return;
        }
    }

    for (int k = 0; k < 4; k++)
    {
        dfs(px + arr1[k], py + arr2[k]);
        
    }
    return;
    

}


int main(){
    vector<char> doo;
    vector<bool> poo;
    int x,y;
    char bruh;
    int px,py;
    cin>>x>>y;
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin>>bruh;
            if(bruh == 'P'){
                py = i;
                px = j;
            }
            poo.push_back(false);
            doo.push_back(bruh);
        }
        v.push_back(doo);
        visited.push_back(poo);
        doo.clear();
    }
    dfs(px,py);
    cout<<gold;

    return 0;
}