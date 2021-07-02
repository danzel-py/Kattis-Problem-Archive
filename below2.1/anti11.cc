#include <iostream>
#include <vector>
using namespace std;

// good memoization ? or greedy ?

int main(){
    int tc;
    cin>>tc;
    int n;
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    long long  bruh;
    for (int i = 2; i < 10000; i++)
    {
        bruh = v[i-2] + v[i-1];
        if(bruh > 1000000007){
            bruh-=1000000007;
        }
        v.push_back(int(bruh));
    }
    
    for (int i = 0; i < tc; i++)
    {
        cin>>n;
        cout<<v[n-1]<<'\n';
    }
    
    return 0;
}