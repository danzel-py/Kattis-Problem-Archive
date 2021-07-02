#include <iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    int d,h,m;
    char cjar;
    for (int i = 0; i < tc; i++)
    {
        cin>>cjar>>d>>h>>m;
        if(cjar == 'B'){
            m -= d;
            while(m<0){
                m+= 60;
                h-=1;
            }
            while (h<0)
            {
                h+=24;
            }
        }
        else{
            m+=d;
            while (m>59)
            {
                h++;
                m-=60;;
            }
            while (h>23)
            {
                h-=24;
            }
            
            
        }
        cout<<h<<' '<<m<<'\n';
    }

    
    return 0;
}