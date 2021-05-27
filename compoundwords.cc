#include <iostream>
#include <set>
using namespace std;

int main(){
    set<string> wordset;
    string word[100];
    int i = 0;
    while(cin>>word[i]){
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        for (int k = 0; k < i; k++)
        {
            if(j==k) {
                continue;
            }
            wordset.insert(word[j]+word[k]);
        }
    }
    for (auto nw: wordset)
    {
        cout<<nw<<'\n';
    }
    
    
    return 0;
}