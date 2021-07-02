#include <iostream>
using namespace std;

int main(){
    int offset,times;
    string str;
    cin>>offset>>str>>times;
    int vowelbiggercount = 0;
    for (int i = 0; i < times; i++)
    {
        int vowels = 0;
        for (int k = 0; k < str.length(); k++)
        {
            if(int(str[k])-int('a')+offset > 25){
                str[k] = char(int(str[k])+offset-26);
            }else{
                str[k] = char(int(str[k])+offset);
            }
            if(str[k] == 'a' || str[k] == 'i' ||str[k] == 'u' ||str[k] == 'e' ||str[k] == 'o' ||str[k] == 'y' ){
                vowels++;
            }
        }
        if(vowels*2>=str.length()-vowels){
            vowelbiggercount++;
        }
        
        
    }
    if(vowelbiggercount>=times-vowelbiggercount){
        cout<<"Colleague";
    }
    else{
        cout<<"Boris";
    }
    
    return 0;
}