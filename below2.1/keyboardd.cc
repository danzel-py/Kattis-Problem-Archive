#include <iostream>
#include <map>
using namespace std;

map<char,int> ctr1;
map<char,int> ctr2;

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    for (int i = 0; i < str1.length(); i++)
    {
        ctr1[str1[i]]++;
    }
    for (int i = 0; i < str2.length(); i++)
    {
        ctr2[str2[i]]++;
    }
    
    for(auto  [key,value] : ctr1){
        if(ctr2[key] != value){
            cout<<key;
        }
    }
    
    return 0;
}