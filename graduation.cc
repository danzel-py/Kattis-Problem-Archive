#include <map>
#include <set>
#include <iostream>
using namespace std;

int main(){
    int n,m,k;
    map<char,int> color;
    set<int> bro;
    cin>>n>>m>>k;
    char arr[n][m];
    for (int i = 0; i < k; i++)
    {
        color[char(int('A') + i)] = i+1;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int j = 0; j < m; j++)
    {
        int low = 2291;
        for (int i = 0; i < n; i++)
        {
            low = min(low, color[arr[i][j]]);
        }

        for (int i = 0; i < n; i++)
        {
            color[arr[i][j]] = low;
        }
        
    }

    for(auto [key,val]:color){
        bro.insert(val);
    }
    
    cout<<bro.size();
    return 0;
}