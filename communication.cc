#include <bitset>
#include <iostream>
using namespace std;

int main(){
    int tc;
    int n;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        cin>>n;
        string str = bitset<32>(n).to_string();
        int pos = 0;
        for (int i = 0; i <= 32; i++)
        {
            if(str[i] == '1'){
                pos = i;
                break;
            }
        }

        str = str.substr(pos);
        cout<<str<<' ';
        bool now = true;
        string newstr = "1";
        for (int i = 0; i < str.length()-1; i++)
        {
            if(str[i] == '1'){
                now = !now;
            }
            if(now){
                newstr+="1";
            }
            else{
                newstr+="0";
            }
        }
        cout<<newstr<<' ';
        cout<<bitset<32>(newstr).to_ulong()<<'\n';
        
        
        
    }
    
    return 0;
}