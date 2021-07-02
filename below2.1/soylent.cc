#include <iostream>
using namespace std;

int main(){
    int n,req;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>req;
        cout<<(req+399)/400<<'\n';
    }
    
    return 0;
}