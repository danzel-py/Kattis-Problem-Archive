#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(b-a>180){
        cout<<b-a-360;
    }
    else if (b-a<-180)
    {
        cout<<b-a+360;
    }
    else if(b-a == -180){
        cout<<180;
    }
    else{
        cout<<b-a;
    }
    
    return 0;
}