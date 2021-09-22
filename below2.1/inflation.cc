#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    double arr[n];
    double minz = 1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int j = 0; j < n; j++)
    {
        minz = min(minz,arr[j]/(j+1));
        if(arr[j]/(j+1)>1){
            cout<<"impossible";
            return 0;
        }
    }
    cout<<minz;
    
    
    return 0;
}