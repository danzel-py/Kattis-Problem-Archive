#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sm=0;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if(a<0){sm++;}
    }
    cout<<sm;
    
    return 0;
}