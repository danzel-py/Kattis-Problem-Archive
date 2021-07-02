#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// WHY WA?

int main(){
    int arr[6];
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < 6; i++)
    {
        cin>>arr[i];
    }
    int n1,n2;
    cin>>n1;
    cin>>n2;
    sort(arr,arr+6);
    do{
        if(arr[1] + arr[2] + arr[0] == n1){
            v1.push_back(arr[1]);
            v1.push_back(arr[0]);
            v1.push_back(arr[2]);
            v2.push_back(arr[3]);
            v2.push_back(arr[4]);
            v2.push_back(arr[5]);
            break;
        }


    }while( next_permutation(arr,arr+6));

    sort(v1.begin(),v1.end(),greater<int>());
    sort(v2.begin(),v2.end(),greater<int>());

    for(auto x:v1){
        cout<<x<<' ';
    }
    for(auto x:v2){
        cout<<x<<' ';
    }
    
    return 0;
}