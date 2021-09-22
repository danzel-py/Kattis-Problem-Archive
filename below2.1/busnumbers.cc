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
    sort(arr,arr+n);
    int star;
    int en;
    bool inl = false;
    for (int i = 0; i < n-2; i++)
    {
        if(inl){
            if(arr[i+2] - arr[i+1] == 1){
                en = arr[i+2];
                if(i == n-3){
                    cout<<star<<'-'<<en;
                }
            }
            else{
                cout<<star<<'-'<<en<<' ';
                if(i == n-3){
                    cout<<arr[i+2];
                }
                else if (i == n -4)
                {
                    cout<<arr[i+2]<<' '<<arr[i+3];
                }
                
                i++;
                inl = false;
            }
            continue;
        }
        if(arr[i+1]- arr[i] == 1 && arr[i+2] - arr[i+1] == 1){
            star = arr[i];
            en = arr[i+2];
            inl =true;
            if(i == n-3){
                cout<<star<<'-'<<en;
            }
            continue;
        }
        cout<<arr[i]<<' ';
        if(i == n-3){
            cout<<arr[i+1]<<' '<<arr[i+2];
        }
    }
    
    return 0;
}