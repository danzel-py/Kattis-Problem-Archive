#include <iostream>
using namespace std;

int main(){
    string mainstr;
    cin>>mainstr;
    int tc;
    cin>>tc;
    string word;
    bool found;
    bool badidea;
    bool centerleter;
    for (int abcde = 0; abcde < tc; abcde++)
    {
        cin>>word;
        if(word.length()<4){
            continue;
        }
        centerleter = false;
        badidea = false;
        for (int i = 0; i < word.length(); i++)
        {
            found = false;
            for (int j = 0; j < mainstr.length(); j++)
            {
                if(word[i] == mainstr[0]){
                    centerleter = true;
                }
                if(word[i] == mainstr[j]){
                    found = true;
                    break;
                }
                
            }
            if(!found){
                badidea = true;
                break;
            }
        }
        if(!badidea && centerleter){
            cout<<word<<'\n';
        }
        
    }
    
    return 0;
}