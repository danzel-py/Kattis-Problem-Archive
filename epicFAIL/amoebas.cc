#include <iostream>
using namespace std;

int main(){
    int p,q;
    cin>>p>>q;
    string str[p];
    int arr[p][q];
    for (int i = 0; i < p; i++)
    {
        cin>>str[i];
        for (int l = 0; l < q; l++)
        {
            arr[p][q] = 0;
        }
    }

    for (int j = 0; j < p; j++)
    {
        for (int k = 0; k < q; k++)
        {
            if(arr[j][k] == '#'){
                
            }
        }
        
    }
    
    
    return 0;
}