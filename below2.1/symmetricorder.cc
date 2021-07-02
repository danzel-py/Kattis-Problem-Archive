#include <iostream>
using namespace std;

int main(){
    int n;
    int c = 1;
    while (true)
    {
        cin >> n;
        if(n==0){
            break;
        }
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin>>s[i];
        }
        cout<<"SET "<<c<<'\n';
        c++;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0){
                cout<<s[i]<<'\n';
            }
        }
        for (int i = n-1; i > -1; i--)
        {
            if(i%2==1){
                cout<<s[i]<<'\n';
            }
        }
        
        
        
    }
    
    return 0;
}