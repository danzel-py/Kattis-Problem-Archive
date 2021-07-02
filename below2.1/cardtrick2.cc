#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    int c;
    for (int i = 0; i < tc; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        fill_n(arr, n, 0);
        int pos = 0;
        for (int k = 1; k < n+1; k++)
        {
            c = -1;
            while(true){
                if(arr[pos] == 0){
                    c++;
                }
                if(c==k){
                    arr[pos] = k;
                    break;
                }
                pos++;
                if(pos==n){
                    pos = 0;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        
        
        
    }
    
    return 0;
}