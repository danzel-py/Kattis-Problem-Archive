#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int imx,imy,kex,key;
    cin>>imx>>imy>>kex>>key;
    int kernel[kex*key];
    int img[imx][imy];
    for (int i = 0; i < imx; i++)
    {
        for (int j = 0; j < imy; j++)
        {
            cin>>img[i][j];
        }
        
    }
    for (int i = 0; i < kex*key; i++)
    {
        cin>>kernel[i];
    }
    reverse(kernel,kernel+key*kex);

    for (int i = 0; i < imx-kex+1; i++)
    {
        for (int j = 0; j < imy-key+1; j++)
        {
            int sum = 0;
            int pos = 0;
            for (int k = 0; k < kex; k++)
            {
                for (int l = 0; l < key; l++)
                {
                    sum += img[i + k][j + l] * kernel[pos];
                    pos++;
                }
                
            }
            cout<<sum<<' ';
            
        }
        cout<<'\n';
        
    }
    
    
    
    return 0;
}