#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,k,a,b;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d/%d",&k,&a,&b);
        int up =0, c = 0, twos = 0;
        while(true){
            if(a>b){
                a-=b;
                c+=pow(2,up);
                up++;
            }
            else if(b>a){
                b-=a;
                up++;
            }
            else{
                break;
            }
        }
        cout<<k<<' '<<int(pow(2,up)+c)<<'\n';
    }
    
    return 0;
}