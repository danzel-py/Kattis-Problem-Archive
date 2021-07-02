#include <iostream>
using namespace std;

int main(){
    int a;
    int num;
    string str;
    char lesgo;
    while(true){

    string hi;
        cin>>a;
        if(a==0){
            break;
        }
        cin>>str;
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == '.'){
                num = 27;
            }else if (str[i] == '_')
            {
                num = 26;
            }else{
                num = int(str[i]-65);
            }
            num+=a;
            if(num>27){
                num-=28;
            }
            if(num == 27){
                lesgo = '.';
            }
            else if (num==26)
            {
                lesgo = '_';
            }else{
                lesgo = char(num+65);
            }
            hi+=lesgo;
            
            
            
            
        }
        for (int i = str.length()-1; i > -1; i--)
        {
            cout<<hi[i];
        }
        
        cout<<'\n';
        
    }
    return 0;
}