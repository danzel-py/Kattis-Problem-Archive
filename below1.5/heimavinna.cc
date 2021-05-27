#include <iostream>
#include <regex>
using namespace std;

int main(){
    string inp;
    cin>>inp;
    regex e("[0-9]+-*[0-9]*");
    regex l("(.*)-(.*)");
    smatch s;
    int sum = 0;

    string a;
    for(sregex_iterator i = sregex_iterator(inp.begin(),inp.end(),e); i!=sregex_iterator();++i){
        smatch m = *i;
        a = m.str(); // BECAUSE REGEX SEARCH CANNOT PROCESS A TEMPORARY STRING
        if(regex_search(a,s,l)){
            sum+= stoi(s[2])-stoi(s[1])+1;
        }
        else{
            sum++;
        }
    }
    cout<<sum;
    
    return 0;
}