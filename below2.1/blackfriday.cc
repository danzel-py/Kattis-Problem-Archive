#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int max = -1;
    int arr2[n];
    map<int,int> mapc;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mapc[arr[i]]++;
        arr2[i] = arr[i];
    }
    sort(arr2, arr2+n, greater<int>());
    
    for (int i = 0; i < n; i++)
    {
        if(mapc[arr2[i]]==1){
            max = arr2[i];
            break;
        }
    }
    if(max == -1){
        cout<<"none";
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == max){
            cout<<i+1;
            break;
        }
    }
    
    
    
    return 0;
}