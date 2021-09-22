#include <iostream>
using namespace std;

int main(){
    int n,x,mem,inp,king;
    cin>>n;
    bool found;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        found = false;
        for (int j = 0; j < x; j++)
        {
            cin>>inp;
            if(j==0){
                mem = inp;
                continue;
            }
            if(found){
                continue;
            }
            if(inp-mem!=1){
                king = j+1;
                found = true;
            }
            mem = inp;
        }
        cout<<king<<'\n';
        
        
    }
    
    return 0;
}