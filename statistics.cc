#include <iostream>
using namespace std;

int main(){
    int n,x;
    int cas = 1;
    int max,min;
    while(cin>>n){
        max = -10000001; 
        min = 10000001;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            if(x>max){
                max = x;
            }
            if (x<min)
            {
                min =x;
            }
        }
        cout<<"Case "<<cas<<": "<<min<<' '<<max<<' '<<max-min<<'\n';
        cas++;
        
    }
    return 0;
}