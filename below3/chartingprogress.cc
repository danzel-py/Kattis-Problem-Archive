#include <iostream>
#include <map>
using namespace std;


int main(){
    string s;
    while (getline(cin,s))
    {
        map<int,int> ctr;
        int pos = 0;
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            if(s[i] == '*'){
                ctr[pos]++;
            }
        }

        while (true)
        {
            if(s.length() == 0){
                break;
            }
            getline(cin,s);
            pos++;
            for (int i = 0; i < s.length(); i++)
            {
                if(s[i] == '*'){
                    ctr[pos]++;
                }
            }
        }
        
        char arr[pos][len];
        for (int i = 0; i < pos; i++)
        {
            for (int j = 0; j < len; j++)
            {
                arr[i][j] = '.';   
            }   
        }
        int lef = len-1;
        for (int i = 0; i < pos; i++)
        {
            for (int j = 0; j < ctr[i]; j++)
            {
                arr[i][lef] = '*';
                lef--;
            }
        }
        
        for (int i = 0; i < pos; i++)
        {
            for (int j = 0; j < len; j++)
            {
                cout<<arr[i][j];
            }
            cout<<'\n';
            
        }
        
        cout<<'\n';






    }
    
    return 0;
}