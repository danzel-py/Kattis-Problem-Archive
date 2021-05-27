#include <iostream>
using namespace std;

int main(){
    int n,x,p;
    int localmin,localmax;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        localmin = 100;
        localmax = 0;
        for (int i = 0; i < x; i++)
        {
            cin>>p;
            if(p>localmax){
                localmax = p;
            }
            if(p<localmin){
                localmin = p;
            }
        }  
        cout<<(localmax-localmin)*2<<'\n';
    }
    
    return 0;
}