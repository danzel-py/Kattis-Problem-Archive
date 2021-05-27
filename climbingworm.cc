#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int count=0;
    while (true)
    {
        c-=a;
        count++;
        if(c<1){
            break;
        }
        c+=b;
    }
    cout<<count;
    
}