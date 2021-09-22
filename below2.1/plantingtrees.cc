#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n, greater<int>() );
    for (int i = 0; i < n; i++)
    {
        if(arr[i]+i+1>=max){
            max = arr[i]+i+1;
        }
    }
    cout<<max+1;
    
    
    return 0;
}