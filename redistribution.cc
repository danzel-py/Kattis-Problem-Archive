#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

bool fsort(pair<int,int> &p1, pair<int,int> &p2){
    return p1.first>p2.first;
}

int main(){
    int n;
    cin>>n;
    pair<int,int> arr[n];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].first;
        arr[i].second = i;
        total += arr[i].first;
    }
    sort(arr,arr+n,fsort);
    if(arr[0].first*2 > total){
        cout<<"impossible";
    }else{
        for (int j = 0; j < n; j++)
        {
            cout<<arr[j].second+1<<' ';
        }
        
    }

    
    return 0;
}