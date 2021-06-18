#include <iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for (int ii = 0; ii < tc; ii++)
    {
        int god,mgod;
        cin>>god>>mgod;
        int maxx=0,x,maxxmg=0;
        for (int jj = 0; jj < god; jj++)
        {
            cin>>x;
            maxx = max(x,maxx);
        }
        for (int kk = 0; kk < mgod; kk++)
        {
            cin>>x;
            maxxmg = max(x,maxxmg);
        }
        if(maxx >= maxxmg){
            cout<<"Godzilla\n";
        }else{
            cout<<"MechaGodzilla\n";
        }
        
        
    }
    
    return 0;
}