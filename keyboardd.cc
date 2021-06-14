#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

unordered_set<char> bruh;

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int pos1 = 0;
    int pos2 = 0;
    while (pos2<str2.length())
    {
        if(str1[pos1] != str2[pos2]){
            bruh.insert(str2[pos2]);
            pos2++;
        }
        if(pos1 == str1.length()){
            break;
        }
        pos1++;
        pos2++;
    }
    for(auto const &b: bruh){
        cout<<b;
    }
    
    return 0;
}