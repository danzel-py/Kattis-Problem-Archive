#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> cjar;

bool adjcek(int a,int b, int n, int m){
    if(a !=0){
        if(cjar[a-1][b] == 'E'){
            return false;
        }
    }
    if(a != n-1){
        if(cjar[a+1][b] == 'E'){
            return false;
        }
    }
    if(b !=0){
        if(cjar[a][b-1] == 'E'){
            return false;
        }
    }
    if(b != m-1){
        if(cjar[a][b+1] == 'E'){
            return false;
        }
    }
    return true;
}

int main(){
    int n,m;
    cin>>n>>m;
    cjar.resize(n,vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>cjar[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(adjcek(i,j,n,m) && cjar[i][j] == '.'){
                cjar[i][j] = 'E';
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<cjar[i][j];
        }
        cout<<'\n';
        
    }
    

    
    return 0;
}