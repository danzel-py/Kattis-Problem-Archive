#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int themax = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] > themax){
            v.push_back(arr[i]);
        }
        themax = max(arr[i],themax);
    }

    cout<<v.size()<<'\n';
    for(auto c:v){
        cout<<c<<' ';
    }
    
    return 0;
}