#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n;
    cin>>n;
    if(n==3){
        cout<<0;
    }else if (n == 4)
    {
        cout<<1;
    }else if (n == 5)
    {
        cout<<5;
    }else
    {
        cout<<n*pow(2,n-6)*2.5;
    }
    
    
    
    return 0;
}