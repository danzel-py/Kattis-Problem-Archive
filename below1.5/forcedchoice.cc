#include <iostream>
using namespace std;

int main(){
    int n,p,s,inp,x;
    cin>>n>>p>>s;
    bool danger;
    string res;
    for (int i = 0; i < s; i++)
    {
        cin>>x;
        danger = false;
        for (int i = 0; i < x; i++)
        {
            cin>>inp;
            if(inp==p){
                danger = true;
            }
        }
        res = danger? "KEEP":"REMOVE";
        cout<<res<<'\n';
        
    }
    
    
    return 0;
}