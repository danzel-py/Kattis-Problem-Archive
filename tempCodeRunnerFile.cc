#include <iostream>
using namespace std;

int main(){
    int n, cost;
    cin>>n>>cost;
    int arr[n];
    int sum = 0;
    int foo;
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>foo;
        sum+=foo;
        arr[i] = sum;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] <cost) continue;
        for (int j = 1; j < n; j++)
        {
            if(arr[j] < cost) continue;
            maxx = max(maxx, arr[j] - arr[i] - cost*(j-i));
        }
    }
    cout<<maxx;
    
    
    
    return 0;
}