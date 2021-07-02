#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a;
    cin>>b;
    for (int i = m-n-1; i > -1; i--)
    {
        a = char((int(b[i+n])-int(a[n-1])+26)%26+int('a')) + a;
    }
    cout<<a;
    
    return 0;
}