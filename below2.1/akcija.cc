#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int sum=0;
    for (int j = 0; j < n; j++)
    {
        if(j%3==2){continue;}
        sum+=arr[j];
    }
    cout<<sum;
    
    
    return 0;
}