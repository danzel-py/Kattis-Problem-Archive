#include <iostream>
#include <map>
using namespace std;


int main(){
    string s;
    int c;
    map<char,int> hi;
    string a;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(hi[s[i]]==0){
            a+=s[i];
        }
        hi[s[i]]++;
    }
    for (int i = 0; i < a.length(); i++)
    {
        if(hi[a[i]]%2!=0){
            c++;
        }
    }
    if(c-1<0){
        c=1;
    }
    int x = c-1;
    cout<<x;
    
    
    return 0;
}