#include <iostream>
using namespace std;

int main(){
    int arr[9];
    for (int i = 0; i < 9; i++)
    {
        cin>>arr[i];
    }
    for (int j = 0; j < 9; j++)
    {
        for (int k = 0; k < 9; k++)
        {
            if(j==k) continue;
            int sum = 0;
            for (int l = 0; l < 9; l++)
            {
                if(l==j || l==k) continue;
                sum+=arr[l];
            }
            if(sum == 100){
                for (int m = 0; m < 9; m++)
                {
                    if(m==j || m==k) continue;
                    cout<<arr[m]<<'\n';
                }
                return 0;
                
            }
        }
        
    }
    
    
    return 0;
}