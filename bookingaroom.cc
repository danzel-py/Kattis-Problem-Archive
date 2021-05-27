#include <iostream>
using namespace std;

int main(){
    int x,n;
    cin>>x>>n;
    bool found;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(n==x){
        cout<<"too late";
        return 0;
    }
    for (int i = 1; i < x+1; i++)
    {
        found = false;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]==i){
                found = true;
                break;
            }
        }
        if(found == false){
            cout<<i;
            break;
        }
        

    }
    
    
    
    return 0;
}