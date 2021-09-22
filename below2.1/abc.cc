#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n[3];
    string s;
    for (int i = 0; i < 3; i++)
    {
        cin>>n[i];
    }
    

    cin>>s;

    sort(n,n+3);
    for (int i = 0; i < 3; i++)
    {
        switch (int(s[i]))
        {
        case 65:
            cout<<n[0]<<' ';
            break;
        case 66:
            cout<<n[1]<<' ';
            break;
        case 67:
            cout<<n[2]<<' ';
            break;
        
        default:
            break;
        }
    }
    
    

    return 0;
}