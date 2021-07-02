#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int pos = 0;
    
    int nop = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(int(str[i]) < int('a')){
            while(pos%4!=0){
                pos++;
                nop++;
            }
        }
        pos++;
    }
    cout<<nop;
    
    
    return 0;
}