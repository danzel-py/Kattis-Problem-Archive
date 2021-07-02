#include <iostream>
using namespace std;

int main(){
    int nu;
    cin>>nu;
    int t,p;
    cin>>t>>p;
    int mem, memp;
    int max = 0;
    for (int i = 0; i < nu-1; i++)
    {
        mem = t;
        memp = p;
        cin>>t>>p;
        if((p - memp)/(t-mem)>max){
            max = (p - memp)/(t-mem);
        }
        
    }
    cout<<max;
    
    
    return 0;
}