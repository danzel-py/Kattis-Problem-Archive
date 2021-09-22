#include <iostream>
using namespace std;

int main(){
    int n,s,t,mem,sum;
    while(true){
        cin>>n;
        mem = 0;
        sum = 0;
        if(n == -1){
            break;
        }
        for (int i = 0; i < n; i++)
        {
            cin>>s>>t;
            sum+=s*(t-mem);
            mem = t;
        }
        cout<<sum<<" miles\n";
        
    }
    return 0;
}