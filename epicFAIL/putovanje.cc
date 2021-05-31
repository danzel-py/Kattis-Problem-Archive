#include <iostream>
#include <cmath>
using namespace std;
//WA

int main(){
    int n,c;
    cin>>n>>c;
    int arr[n+1];
    int sum = 0;
    int x;
    arr[0] = 0;
    for (int i = 1; i < n+1; i++)
    {
        cin>>x;
        sum+=x;
        arr[i] = sum;
    }
    int mx = 0;
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            if(i==j) continue;
            if(abs(arr[j] - arr[i]) <= c){
                mx = max(mx, abs(j-i));
            }
        }
    }
    cout<<mx;
    
    

    
    return 0;
}