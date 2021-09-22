#include <iostream>
using namespace std;

int main(){
    int n,p,k;
    cin>>n;
    string str;
    for (int o = 0; o < n; o++)
    {
        cin>>str;
        int a = str.length();
        for (k = 1; k < 101; k++)
        {
            if(k*k>=a){
                break;
            }
        }
        char arr[k][k];

        p = 0;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if(p>a-1){
                    arr[i][j]='*';
                    continue;
                }
                arr[i][j] = str[p];
                p++;
            }
            
        }

        for (int j = 0; j < k; j++)
        {
            for (int i = k-1; i > -1; i--)
            {
                if(arr[i][j]!='*')cout<<arr[i][j];
            }
            
        }
        cout<<'\n';
        
        
        
        
    }
    
    return 0;
}