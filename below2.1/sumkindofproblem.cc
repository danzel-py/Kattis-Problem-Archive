#include <iostream>
using namespace std;

int main(){
    int n,k,x,sum;
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        cin>>k>>x;
        cout<<k<<' ';
        for (int j = 1; j < x+1; j++)
        {
            sum+=j;
        }
        cout<<sum<<' '<<2*sum-x<<' '<<2*sum<<'\n';
    }
    
    return 0;
}