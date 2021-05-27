#include <iostream>
using namespace std;


// TLE
int main(){
    int n, cost;
    cin>>n>>cost;
    int arr[n];
    int sum;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]-cost<1) continue;
        for (int j = n-1; j > i; j--)
        {
            if(arr[j]-cost<1) continue;
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum+=arr[k]-cost;
            }
            if(sum>=max){
                max = sum;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]-cost>max){
            max = arr[i]-cost;
        }
    }
    
    cout<<max;
    
    
    return 0;
}