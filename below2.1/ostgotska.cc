#include <iostream>
#include <regex>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    regex regexp("[a-z]+");
    double counter = 0;
    double total = 0;
    for (sregex_iterator i = sregex_iterator(str.begin(),str.end(),regexp); i != sregex_iterator(); ++i)
    {
        smatch m = *i;
        string word = m.str();
        bool found = false;
        for (int j = 0; j < word.length()-1; j++)
        {
            if(word[j]=='a'&&word[j+1]=='e'){
                found = true;
                break;
            }
        }
        if(found) counter++;
        total ++;
    }
    if (counter/total >= 0.4)
    {
        cout<<"dae ae ju traeligt va";
    }else{
        cout<<"haer talar vi rikssvenska";
    }
        
    return 0;
}