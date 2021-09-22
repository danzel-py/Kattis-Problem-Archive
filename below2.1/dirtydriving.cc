#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,dece;
    cin>>n>>dece;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int mmx = 0;
    for (int i = 0; i < n; i++)
    {
        mmx = max(mmx, dece*(i+1) - arr[i]);
    }
    cout<<mmx+arr[0];
    
    
    return 0;
}