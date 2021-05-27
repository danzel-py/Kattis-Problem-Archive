#include <iostream>
using namespace std;

int main(){
    int n,x,mem,c=0;
    cin>>n;
    cin>>mem;
    for (int i = 0; i < n-1; i++)
    {
        cin>>x;
        if(x>mem){
            c++;
        }
        mem = x;
    }
    cout<<c+1;
    
    return 0;
}