#include <iostream>
using namespace std;

int main(){
    int a=1,b=0;
    int n,mem;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        mem = a;
        a = b;
        b += mem;
    }
    cout<<a<<' '<<b;
    
    return 0;
}