#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x = 1;
    int c = 1;
    while (x<n)
    {
        x*=2;
        c++;
    }
    cout<<c;
    
    
    return 0;
}