#include <queue>
#include <iostream>
#include <vector>
using namespace std;

// 3d dungeon

vector<vector<vector<char> > > v;
vector<vector<vector<bool> > > visited;
int arr1[] = {-1,0,0,1,0,0};
int arr2[] = {0,1,-1,0,0,0};
int arr3[] = {0,0,0,0,-1,1};

int bfs(int sx, int sy, int sz, int x, int y, int z){
    queue<int> qx;
    queue<int> qy;
    queue<int> qz;
    qx.push(sx);
    qy.push(sy);
    qz.push(sz);
    bool escaped = false;
    visited[sx][sy][sz] = true;

    int layer = 0,nodenow = 1,nodenext = 0;

    while (!qx.empty())
    {
        int xnow = qx.front();
        qx.pop();
        int ynow = qy.front();
        qy.pop();
        int znow = qz.front();
        qz.pop();

        if(v[xnow][ynow][znow] == 'S'){
            escaped = true;
            break;
        }
        for (int i = 0; i < 6; i++)
        {
            int xx = xnow+arr1[i];
            int yy = ynow+arr2[i];
            int zz = znow+arr3[i];

            if(xx < 0 || yy<0 || zz<0 || xx>=x || yy>=y ||zz>=z){
                continue;
            }
            if(v[xx][yy][zz] == '#' || visited[xx][yy][zz]){
                continue;
            }
            qx.push(xx);
            qy.push(yy);
            qz.push(zz);
            visited[xx][yy][zz] = true;
            nodenext++;
        }
        nodenow--;
        if(nodenow == 0){
            nodenow = nodenext;
            nodenext = 0;
            layer++;
        }
        
    }
    if(escaped){
        return layer;
    }else{
        return -1;
    }
    

}

int main(){
    int x,y,z;
    char cjar;
    vector<char> dummy;
    vector<bool> fummy;
    vector<vector<char> > dummy2;
    vector<vector<bool> > fummy2;
    int sx,sy,sz;

    while (true)
    {
        cin>>x>>y>>z;
        if(x == 0){
            break;
        }
        v.clear();
        visited.clear();
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                for (int k = 0; k < z; k++)
                {
                    cin>>cjar;
                    if(cjar == 'E'){
                        sx = i;
                        sy = j;
                        sz = k;
                    }
                    dummy.push_back(cjar);
                    fummy.push_back(false);
                }
                dummy2.push_back(dummy);
                fummy2.push_back(fummy);
                dummy.clear();
                fummy.clear();
            }
            v.push_back(dummy2);
            visited.push_back(fummy2);
            dummy2.clear();
            fummy2.clear();
        }

        int res = bfs(sx,sy,sz,x,y,z);
        if(res == -1){
            cout<<"Trapped!\n";
        }else{
            cout<<"Escaped in "<<res<<" minute(s).\n";
        }


        
    }
    
    return 0;
}