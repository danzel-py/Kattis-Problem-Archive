#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;


int main(){
    string word;
    string wow;
    map <string,int> mapc;
    while (cin>>wow)
    {
        word = wow;
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        if (mapc[word] == 0)
        {
            cout<<wow<<' ';
        }else{
            cout<<". ";
        }
        
        mapc[word]++;

    }
    
    return 0;
}