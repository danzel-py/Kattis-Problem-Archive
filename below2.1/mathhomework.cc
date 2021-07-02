#include <iostream>
using namespace std;

int main(){
    int a,b,c,t;
    cin>>a>>b>>c>>t;
    bool printed = false;
    for (int i = 0; i <= t/a; i++)
    {
        for (int j = 0; j <= t/b; j++)
        {
            for (int k = 0; k <= t/c; k++)
            {
                if(i*a+j*b+k*c == t){
                    cout<<i<<' '<<j<<' '<<k<<'\n';
                    printed = true;
                }
            }
            
        }
        
    }
    if(!printed){
        cout<<"impossible";
    }
    
    return 0;
}