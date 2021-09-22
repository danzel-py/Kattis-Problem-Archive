#include <cmath>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long step = 0;
    char cjar;
    for (int i = 0; i < n; i++)
    {
        cin>>cjar;
        if(cjar == 'O'){
            step+= powl((long long)2,(long long)(n-1-i));
        }
    }
    
    cout<<step;
    return 0;
}