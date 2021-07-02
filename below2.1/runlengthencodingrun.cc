#include <iostream>
using namespace std;

int main(){
    char a;
    string str;
    cin>>a>>str;
    int c =0;
    if(a=='E')
    {
        str += "@";
        for (int i = 0; i < str.length()-1; i++)
        {
            c++;
            if(str[i] != str[i+1]){
                cout<<str[i]<<c;
                c=0;
            }
        }
        

    }else if (a=='D')
    {
        for (int i = 1; i < str.length(); i+=2)
        {
            for (int j = 0; j < int(str[i])-int('0'); j++)
            {
                cout<<str[i-1];
            }
            
        }
        
    }
    
    return 0;
}