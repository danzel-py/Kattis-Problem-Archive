#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int d = 1;
    int clen = 0;
    while (d < 400)
    {
        int dirt = 0;
        for (int i = 0; i < n; i++)
        {
            if(d > arr[i]){
                dirt+= d-arr[i];
            }
        }
        if(dirt>19){
            // time travel to yesterday, clean code
            for (int i = 0; i < n; i++)
            {
                if(d > arr[i]){
                    arr[i] = 9999;
                }
            }
            clen++;
        }
        d++;
        
    }
    cout<<clen;
    
    return 0;
}