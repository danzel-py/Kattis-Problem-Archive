#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int tc;
    int dif;
    cin>>tc;
    int len;
    bool ggperm, perm;
    for (int i = 0; i < tc; i++)
    {
        cin>>len;
        ggperm = true;
        perm = true;
        int arr[len];
        cin>>arr[0];
        cin>>arr[1];
        dif = arr[1] - arr[0];
        for (int j = 2; j < len; j++)
        {
            cin>>arr[j];
            if(arr[j] - arr[j-1] != dif){
                ggperm = false;
            }
        }
        sort(arr, arr+len);
        dif = arr[1] - arr[0];
        for (int j = 1; j < len; j++)
        {
            if(arr[j] - arr[j-1] != dif){
                perm = false;
                break;
            }
        }
        ggperm? cout<<"arithmetic\n": perm? cout<<"permuted arithmetic\n":cout<<"non-arithmetic\n";
        

        
    }
    
    return 0;
}