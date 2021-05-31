#include <iostream>
#include <vector>
using namespace std;

// WA, zzz
int main(){
    int d;
    cin>>d;
    int arr[d];
    for (int i = 0; i < d; i++)
    {
        cin>>arr[i];
    }
    int pos = 0;
    int dirt = 0;
    int dirtsum = 0;
    int c = 0;
    for (int i = 1; i < 366; i++)
    {
        dirtsum += dirt;
        if(arr[pos] == i){
            dirt++;
            pos++;
        }
        if(dirtsum > 19){
            dirt = 0;
            dirtsum = 0;
            c++;
        }

    }
    cout<<c;
    
    
    
    
    
    
    
    
    
    return 0;
}