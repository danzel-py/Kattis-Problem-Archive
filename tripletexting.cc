#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    for (int i = 0; i < str.length()/3; i++)
    {
        if(str[i] == str[i+str.length()/3]){
            cout<<str[i];
        }else if (str[i] == str[i+str.length()/3*2]){
            cout<<str[i];
        }else{
            cout<<str[i+str.length()/3];
        }
        
    }
    
    return 0;
}