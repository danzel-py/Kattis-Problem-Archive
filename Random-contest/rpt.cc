#include <iostream>
#include<map>
using namespace std;

int main(){
    string s;
    map<string,int>ct;
    bool bruh = false;
    while (cin>>s)
    {
        ct[s]++;
        if(ct[s] > 1){
            bruh = true;
        }
    }
    if(bruh){
        cout<<"no";
    }else{
        cout<<"yes";
    }
    
    return 0;
}