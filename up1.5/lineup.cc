#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    string inp[n];
    string inc[n];
    int incco = 0, decco = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>inp[i];
        inc[i] = inp[i];
    }
    sort(inc,inc+n);
    for (int j = 0; j < n; j++)
    {
        if(inp[j]==inc[j]){
            incco++;
        }
        if(inp[j]==inc[n-1-j]){
            decco++;
        }
    }
    if(incco==n){
        cout<<"INCREASING";
    }
    else if (decco==n)
    {
        cout<<"DECREASING";
    }
    else{
        cout<<"NEITHER";
    }
    
    

    
    
    
    return 0;
}