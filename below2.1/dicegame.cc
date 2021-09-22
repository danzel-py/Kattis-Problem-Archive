#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    if(a+b+c+d>e+f+g+h){
        cout<<"Gunnar";
    }
    else if (a+b+c+d==e+f+g+h)
    {
        cout<<"Tie";
    }
    else{
        cout<<"Emma";
    }
    
    return 0;
}