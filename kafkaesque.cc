#include <iostream>
using namespace std;

int main(){
    int c = 0;
    int n;
    cin>>n;
    int mem = 101;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(mem>x){
            c++;
        }
        mem = x;
    }
    cout<<c;
    
    return 0;
}