#include <iostream>
using namespace std;

int main(){
    int n,k,s,sum;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin>>k>>s;
        sum = 0;
        for(int j = 1; j<s+2; j++){
            sum+=j;
        }
        cout<<k<<' '<<sum-1<<'\n';
    }
}