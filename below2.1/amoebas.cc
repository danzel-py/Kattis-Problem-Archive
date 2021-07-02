#include <vector>
#include <iostream>
using namespace std;

vector<vector<int> > visited;
vector<vector<char> > v;
int ints1[8] = {1,0,-1,1,-1,1,0,-1};
int ints2[8] = {1,1,1,0,0,-1,-1,-1};


void dfs(int i, int j, int x, int y, int islandnum){
    if(visited[i][j] != 0){
        return;
    }
    visited[i][j] = islandnum;

    for (int bruh = 0; bruh < 8; bruh++)
    {
        if(v[i+ints1[bruh]][j+ints2[bruh]] == '#'){
            dfs(i+ints1[bruh],j+ints2[bruh],x,y,islandnum);
        }
    }
    return;
    

    
}


int main(){
    int x,y;
    char foo;
    cin>>x>>y;
    vector<char> doodoo;
    vector<int> poopoo;
    int islandnum = 1;

    //with border;
    x+=2;
    y+=2;
    for (int j = 0; j < y; j++)
    {
        doodoo.push_back('.');
        poopoo.push_back(-1);
    }
    v.push_back(doodoo);
    visited.push_back(poopoo);
    doodoo.clear();
    poopoo.clear();
    for (int i = 1; i < x-1; i++)
    {
        doodoo.push_back('.');
        poopoo.push_back(-1);
        for (int j = 1; j < y-1; j++)
        {
            cin>>foo;
            doodoo.push_back(foo);
            poopoo.push_back(0);
        }
        doodoo.push_back('.');
        poopoo.push_back(-1);
        v.push_back(doodoo);
        visited.push_back(poopoo);
        doodoo.clear();
        poopoo.clear();
    }
    for (int j = 0; j < y; j++)
    {
        doodoo.push_back('.');
        poopoo.push_back(-1);
    }
    v.push_back(doodoo);
    visited.push_back(poopoo);

    // ! matrix initialized

    for (int i = 1; i < x-1; i++)
    {
        for (int j = 1; j < y-1; j++)
        {
            if(visited[i][j] == 0 && v[i][j] == '#'){
                dfs(i,j,x,y,islandnum);
                islandnum++;
            }
        }
        
    }
    cout<<islandnum-1<<'\n';
    


    
    return 0;
}