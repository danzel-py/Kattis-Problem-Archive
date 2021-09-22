#include <iostream>
using namespace std;

int main(){
    int n,t,b=0;
    cin>>n>>t;
    int x, sum =0;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        sum+=x;
        if(sum>t && found == false){
            b = i;
            found = true;
        }
    }
    if(!found){
        b = n;
    }
    cout<<b;
    
    return 0;
}