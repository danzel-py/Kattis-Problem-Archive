#include <iostream>
using namespace std;

int main(){
    string s1,s2;
    char oper;
    cin>>s1>>oper>>s2;
    int c = 0;
    if(oper == '+'){
        for (int i = max(s1.length(),s2.length())-1;i>-1; i--)
        {
            c = 0;
            if(i == s1.length()-1){
                c++;
            }
            if(i == s2.length()-1){
                c++;
            }
            cout<<c;
        }  
    }
    else{
        cout<<1;
        for (int i = 1; i < s1.length()+s2.length()-1; i++)
        {
            cout<<0;
        }
        
    }

    return 0;
}