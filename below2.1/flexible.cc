#include <iostream>
#include <set>
using namespace std;

int main(){
    int tail, n;
    cin>>tail>>n;
    int arr[n+2];
    set<int> setz;
    arr[0] = 0;
    arr[n+1] = tail;
    for (int i = 1; i < n+1; i++)
    {
        cin>>arr[i];
    }
    for (int j = 0; j < n+1; j++)
    {
        for (int k = j+1; k < n+2; k++)
        {
            setz.insert(arr[k]-arr[j]);
        }
    }
    // print all elements in set c++11
    for (auto const i: setz){
        cout<<i<<' ';
    }
    return 0;
}