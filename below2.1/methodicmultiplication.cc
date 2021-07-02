#include <iostream>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n1 = 0,n2 = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == 'S'){
            n1++;
        }
    }
    for (int j = 0; j < s2.length(); j++)
    {
        if(s2[j] == 'S'){
            n2++;
        }
    }
    int res = n1*n2;
    for (int i = 0; i < res; i++)
    {
        cout<<"S(";
    }
    cout<<'0';
    for (int i = 0; i < res; i++)
    {
        cout<<')';
    }
    
    
    
    
    return 0;
}