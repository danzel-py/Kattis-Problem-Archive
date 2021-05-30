#include <map>
#include <iostream>
using namespace std;

int main(){
    string cmd,s,st;
    int n;
    char y;
    map<string,int> getval;
    while (cin>>cmd)
    {
        if(cmd == "define"){
            cin>>n>>s;
            getval[s] = n;
        }
        else{
            cin>>s>>y>>st;
            if(!getval.count(s) || !getval.count(st)){
                cout<<"undefined\n";
                continue;
            }
            if(y == '<'){
                if(getval[s] < getval[st]){
                    cout<<"true";
                }
                else{
                    cout<<"false";
                }
            }else if (y == '>')
            {
                if (getval[s]> getval[st])
                {
                    cout<<"true";
                }
                else{
                    cout<<"false";
                }
                
            }
            else{
                getval[s] == getval[st]? cout<<"true":cout<<"false";
            }
            cout<<'\n';
            
        }
    }
    
    return 0;
}