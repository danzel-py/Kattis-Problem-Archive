#include <iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        int n,m;
        cin>>n>>m;
        for (int j = 0; j < m; j++)
        {
            int a,b;
            cin>>a>>b;
        }
        if(m>n-2){
            cout<<n-1<<'\n';
        }
        
    }
    
    return 0;
}