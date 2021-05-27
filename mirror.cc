#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int n,m;
    for (int i = 0; i < x; i++)
    {
        cin>>n>>m;
        char arr[n][m];
        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < m; y++)
            {
                cin>>arr[x][y];
            }
        }
        cout<<"Test "<<i+1<<'\n';
        for (int x = n-1; x > -1; x--)
        {
            for (int y = m-1; y > -1; y--)
            {
                cout<<arr[x][y];
            }
            cout<<'\n';
            
        }
        
    }
    
    return 0;
}