#include <iostream>
using namespace std;

// ? Time Optimization possible
// 0.07s

int main(){
    int tc;
    cin>>tc;
    for (int lll = 0; lll < tc; lll++)
    {
        int l,n;
        cin>>l>>n;
        int x;
        int mind = 0;
        int maxd = 0;
        int ldis,sdis;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            if (x> l/2){
                ldis = x;
                sdis = l-x;
            }else{
                sdis = x;
                ldis = l-x;
            }
            mind = max(sdis,mind);
            maxd = max(ldis,maxd);
        }
        cout<<mind<<' '<<maxd<<'\n';
        
    }
    
    return 0;
}