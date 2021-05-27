#include <iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int c = 1;
    bool gj = true;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        while(x!=c){
            cout<<c<<'\n';
            c++;
            gj = false;
        }
        c++;
    }
    if(gj){
        cout<<"good job";
    }
    
    return 0;
}