#include <iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        sum+=x;
    }
    cout<<sum-n+1;
    
    return 0;
}