#include <iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    string str[tc];
    for (int i = 0; i < tc; i++)
    {
        cin>>str[i];
    }
    string snum;
    cin>>snum;
    int c=0;
    bool falsey = false;
    for (int i = 0; i < tc; i++)
    {
        if(snum.length()!=str[i].length()){
            continue;
        }
        falsey = false;
        for (int j = 0; j < snum.length(); j++)
        {
            if(snum[j] == '1'){
                falsey = true;
                break;
            }
            else if (snum[j] == '2' && !(str[i][j] == 'a' || str[i][j] == 'b' || str[i][j] == 'c'))
            {
                falsey = true;
                break;
            }
            else if (snum[j] == '3' && !(str[i][j] == 'd' || str[i][j] == 'e' || str[i][j] == 'f'))
            {
                falsey = true;
                break;
            }
            else if (snum[j] == '4' && !(str[i][j] == 'g' || str[i][j] == 'h' || str[i][j] == 'i'))
            {
                falsey = true;
                break;
            }
            else if (snum[j] == '5' && !(str[i][j] == 'j' || str[i][j] == 'k' || str[i][j] == 'l'))
            {
                falsey = true;
                break;
            }
            else if (snum[j] == '6'&& !(str[i][j] == 'm' || str[i][j] == 'n' || str[i][j] == 'o'))
            {
                falsey = true;
                break;
            }
            else if (snum[j] == '7' && !(str[i][j] == 'p' || str[i][j] == 'q' || str[i][j] == 'r' || str[i][j] == 's'))
            {
                falsey = true;
                break;
            }
            else if (snum[j] == '8' && !(str[i][j] == 't' || str[i][j] == 'u' || str[i][j] == 'v'))
            {
                falsey = true;
                break;
            }
            else if (snum[j] == '9' && !(str[i][j] == 'w' || str[i][j] == 'x' || str[i][j] == 'y' || str[i][j] == 'z'))
            {
                falsey = true;
                break;
            } 
        }
        if(!falsey){
            c++;
        }
        
    }
    cout<<c;
    
    return 0;
}