#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    arr[0] = 1;
    int x;
    for (int i = 0; i < n-1; i++)
    {
        cin >> x;
        arr[x+1] = i+2;
    }
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<' ';
    }
    
    
    return 0;
}