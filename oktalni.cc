#include <iostream>
#include <cmath>
#define CAPENULIS(a,b) else if (thesub == a){cout<<b;}
using namespace std;
// wkwk macro

int main(){
    string str;
    cin>>str;
    while(str.length()%3 != 0){
        str = "0" +str;
    }
    string thesub;
    for (int i = 0; i < str.length(); i+=3)
    {
        thesub = str.substr(i,3);
        if(thesub == "000"){
            cout<<0;
        }
        CAPENULIS("001",1)
        CAPENULIS("010",2)
        CAPENULIS("011",3)
        CAPENULIS("100",4)
        CAPENULIS("101",5)
        CAPENULIS("110",6)
        CAPENULIS("111",7)
        
    }
    
    
    
    return 0;
}