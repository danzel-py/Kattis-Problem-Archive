#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long arr[n];
    long long x;
    long long arr2[n];
    long long sum = 0;
    long long bigsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        sum+=x;
        bigsum += x*x;
        arr[i] = bigsum;
        arr2[i] = sum;
    }
    long long maxx = 0;
    long long mem = 0;
    for (int i = 0; i < n; i++)
    {
        maxx = max(maxx, arr[i]*(arr2[n-1] - arr2[i]));
    }
    cout<<maxx;
    
    
    
    return 0;
}