#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        int n;
        int dn;
        cin>>n;
        double arrx[n];
        double arry[n];
        double arrr[n];
        string name[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arrx[i]>>arry[i]>>arrr[i]>>name[i];
            arrr[i] /= M_PI;
        }
        cin>>dn;
        double x,y;
        for (int i = 0; i < dn; i++)
        {
            cin>>x>>y;
            bool f = true;
            for (int j = n-1; j > -1; j--)
            {
                if((x-arrx[j])*(x-arrx[j])+(y-arry[j])*(y-arry[j]) <= arrr[j]+1e-6){
                    cout<<name[j]<<'\n';
                     f = false;
                    break;
                }
            }
            if(f){
            cout<<"white\n";

            }
        }
        
        
    }
    
    return 0;
}