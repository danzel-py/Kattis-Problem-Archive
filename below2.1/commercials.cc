#include <iostream>
using namespace std;

int main(){
    int n, cost;
    cin>>n>>cost;
    int sum = 0;
    int foo;
    int maxx = 0;
    int maxhere = 0;
    int maxglobal = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>foo;
        maxhere +=  foo - cost;
        maxhere = max(0,maxhere);
        maxglobal = max(maxglobal,maxhere);
    }
    cout<<maxglobal<<'\n';
    
    
    
    
    
    return 0;
}