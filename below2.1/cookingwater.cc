#include <map>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b;
    int maxa = 0;
    int minb = 1001;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        maxa = max(maxa, a);
        minb = min(minb, b);
    }
    if(maxa>minb){
        cout<<"edward is right";
    }
    else{
        cout<<"gunilla has a point";
    }
    
    
    return 0;
}