#include <regex>
#include <iostream>
using namespace std;

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    string arrz[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if((i+j)%2 == 1)arrz[i][j] = "|...";
            else arrz[i][j] = "|:::";
            if(j == 7){
                arrz[i][j] += "|";
            }
        }
        
    }
    
    regex r("[A-z]+[0-9]");
    int ex,ye;
    for(sregex_iterator i = sregex_iterator(str1.begin(), str1.end(), r); i!=sregex_iterator(); ++i){
        smatch m = *i;
        string word = m.str();
        if(word[0] < 'Z' && word[0] > 'A'){
            ex = int(word[1]) - int('a');
            ye = int(word[2]) - int('1');
            arrz[ye][ex][2] = word[0];
        }
        else{
            ex = int(word[0]) - int('a');
            ye = int(word[1]) - int('1');
            arrz[ye][ex][2] = 'P';
        }
    }
    for(sregex_iterator i = sregex_iterator(str2.begin(), str2.end(), r); i!=sregex_iterator(); ++i){
        smatch m = *i;
        string word = m.str();
        if(word[0] < 'Z' && word[0] > 'A'){
            ex = int(word[1]) - int('a');
            ye = int(word[2]) - int('1');
            arrz[ye][ex][2] = char(int(word[0]) + int('a') - int('A'));
        }
        else{
            ex = int(word[0]) - int('a');
            ye = int(word[1]) - int('1');
            arrz[ye][ex][2] = 'p';
        }
    }

    cout<<"+---+---+---+---+---+---+---+---+\n";
    for (int i = 7; i > -1; i--)
    {
        for (int j = 0; j < 8; j++)
        {
            cout<<arrz[i][j];
        }
        cout<<'\n';
        cout<<"+---+---+---+---+---+---+---+---+\n";
        
    }
    
    return 0;
}