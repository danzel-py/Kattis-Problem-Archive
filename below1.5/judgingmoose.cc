#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a+b==0){
        cout<<"Not a moose";
    }
    else if (a==b)
    {
        cout<<"Even "<<a+b;
    }
    else
    {
        int res = a>b?a*2:b*2;
        cout<<"Odd "<< res;
    }
    
    
    return 0;
}