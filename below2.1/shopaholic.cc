#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n, greater<int>());

    for (int i = 2; i < n; i+=3)
    {
        sum+=arr[i];
    }
    cout<<sum;
    
    
    return 0;
}