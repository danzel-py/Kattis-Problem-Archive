#include <iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int min = 10e9+1;
    int ind;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x<min){
            min = x;
            ind = i;
        }
    }
    cout<<ind;
    
    
    return 0;
}