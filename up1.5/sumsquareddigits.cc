#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int z,ssd;
    int k,b,n;
    cin>>z;
    for (int i = 0; i < z; i++)
    {
        ssd=0;
        cin>>k>>b>>n;
        while(n!=0){
            ssd+=pow(n%b,2);
            n-=n%b;
            n/=b;
        }
        cout<<k<<' '<<ssd<<'\n';
    }
    
    return 0;
}