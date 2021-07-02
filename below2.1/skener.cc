#include <iostream>
using namespace  std;

int main(){
    int n0,m0;
    int n1,m1;
    cin>>n0>>m0>>n1>>m1;
    char arr[n0][m0];
    char arr1[n0*n1][m0];
    for (int i = 0; i < n0; i++)
    {
        for (int k = 0; k < m0; k++)
        {
            cin>>arr[i][k];
        }
    }

    for (int i = 0; i < n0*n1; i++)
    {
        for (int j = 0; j < m0; j++)
        {
            arr1[i][j]=arr[i/n1][j];
        }
    }
    
    for (int i = 0; i < n0*n1; i++)
    {
        for (int j = 0; j < m0*m1; j++)
        {
            cout << arr1[i][j/m1];
            
        }
        cout<<'\n';
        
    }
    
    

    
    
    return 0;
}