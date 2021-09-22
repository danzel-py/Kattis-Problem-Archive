#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,mx;
    cin>>n>>mx;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(n == 1){
        cout<<"1";
        return 0;
    }

    sort(arr.begin(),arr.end());
    int c = n;
    for (int i = n-1; i > 0; i--)
    {
        // cout<<arr[i]<<" ";
        if(arr[i] + arr[i-1] > mx){
            c--;
        }
        else{
            break;
        }
    }
    cout<<c;
    
    
    return 0;
}