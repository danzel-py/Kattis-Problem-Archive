#include <iostream>
using namespace std;

int main(){
    int x,n,t,sum;
    int loser;
    cin>>x>>n;
    char cha;
    bool found = false;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>t>>cha;
        sum+=t;
        if(sum>210 && !found){
            loser = x;
            found = true;
        }
        if(cha == 'T'){
            x++;
            if(x>8){
                x =1;
            }
        }
    }
    cout<<loser;
    
    return 0;
}