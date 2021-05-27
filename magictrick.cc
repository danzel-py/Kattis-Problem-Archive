#include <iostream>
#include <map>
using namespace std;

int main(){
    string str;
    cin>>str;
    map<char,int> gtc;

    for (int i = 0; i < str.length(); i++)
    {
        if(gtc[str[i]]!=0){
            cout<<0;
            return 0;
        }
        gtc[str[i]]++;
    }
    cout<<1;
    
    return 0;
}