#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    double res = 1;
    for (int i = 2; i <= n; i++)
    {
        res*=double(n+i)/(double)i;
    }
    cout<<res;
    return 0;
}