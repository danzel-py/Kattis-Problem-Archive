#include <map>
#include <iostream>
using namespace std;

int main(){
    map <string, int> countermap;
    int n;
    cin>>n;
    string str;
    int mitn = 10000;
    for (int i = 0; i < n; i++)
    {
        cin>>str;
        countermap[str]++;
    }
    for(auto const [key,value] : countermap){
        mitn = min(mitn,value);
    }    
    for(auto const [key,value] : countermap){
        if(value == mitn){
            cout<<key<<'\n';
        }
    }    
    return 0;
}