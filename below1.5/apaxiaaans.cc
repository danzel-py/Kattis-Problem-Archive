#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int c = 0;
    for (int i = 0; i < s.length()-1; i++)
    {
        if(s[i]!=s[i+1]){
            if(c==0){
                cout<<s[i];
                c++;
            }
            cout<<s[i+1];
        }
    }
    if(c==0){
        cout<<s[0];
    }
    
    return 0;
}