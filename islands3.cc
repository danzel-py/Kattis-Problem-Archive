#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> isl;
vector<vector<bool>> visited;

int arr1[] = {1,0,0,-1};
int arr2[] = {0,1,-1,0};

void dfs(int i,int j,int x,int y){
    visited[i][j] = true;

    for (int k = 0; k < 4; k++)
    {
        int ii = i + arr1[k];
        int jj = j + arr2[k];
        if(ii <0||jj<0||ii>=x||jj>=y){
            continue;
        }
        if(visited[ii][jj] || isl[ii][jj] == 'W'){
            continue;
        }
        dfs(ii,jj,x,y);
    }
    
}


int main(){
    int x,y;
    cin>>x>>y;
    char bruh;
    vector<char> foo;
    vector<bool> boo;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin>>bruh;
            foo.push_back(bruh);
            boo.push_back(false);
        }
        isl.push_back(foo);
        visited.push_back(boo);
        foo.clear();
        boo.clear();
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if(isl[i][j] != 'C'){
                continue;
            }
            int c = 0;
            for (int k = 0; k < 4; k++)
            {
                int ii = i+arr1[k];
                int jj = j+arr2[k];
                if(ii <0||ii>=x || jj<0 ||jj>=x){
                    continue;
                }
                if(isl[ii][jj] == 'L'){
                    c++;
                    break;
                }
            }
            if (c>0){
                isl[i][j] = 'L';
            }
            
        }
        
    }
    
    int cpn = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if(visited[i][j] == false && isl[i][j] == 'L'){
                dfs(i,j,x,y);
                cpn++;
            }
        }
        
    }
    cout<<cpn;
    
    
    return 0;
}