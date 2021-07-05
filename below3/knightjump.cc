#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<vector<char>> v;
vector<vector<bool>> visited;

int arr1[] = {2,2,1,1,-1,-1,-2,-2};
int arr2[] = {1,-1,2,-2,2,-2,1,-1};

int bfs(int n){
    queue<int> qx;
    queue<int> qy;
    qx.push(0);
    qy.push(0);
    visited[0][0] = true;
    int nodenext = 0, nodenow = 1, lay = 0;

    while(!qx.empty()){
        int xnow = qx.front();
        int ynow = qy.front();
        qx.pop();
        qy.pop();
        if(v[xnow][ynow] == 'K'){
            return lay;
        }

        for (int i = 0; i < 8; i++)
        {
            int xx = xnow+arr1[i];
            int yy = ynow+arr2[i];

            if(xx < 0 || yy < 0 || xx >= n || yy >= n){
                continue;
            }
            if(visited[xx][yy] || v[xx][yy] == '#'){
                continue;
            }
            visited[xx][yy] = true;
            qx.push(xx);
            qy.push(yy);
            nodenext++;
        }
        nodenow--;
        if(nodenow == 0){
            nodenow = nodenext;
            nodenext = 0;
            lay ++;
        }

        





    }
    return -1;

}

int main(){
    int n;
    cin>>n;
    char cjar;
    vector<char> foo;
    vector<bool> bo;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            bo.push_back(false);
            cin>>cjar;
            foo.push_back(cjar);
        }
        v.push_back(foo);
        visited.push_back(bo);
        bo.clear();
        foo.clear();
    }

    cout<<bfs(n);
    

    return 0;
}