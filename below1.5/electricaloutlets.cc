#include <iostream>
using namespace std;

int main(){
    int n,m,x;
    cin>>n;
    for(int j = 0; j<n; j++){
        int sum = 0;
        cin>>m;
        for(int i = 0; i<m; i++){
            cin>>x;
            sum+=x;
        }
        sum = sum + 1 - m;
        cout<<sum<<'\n';
    }
    return 0;
}