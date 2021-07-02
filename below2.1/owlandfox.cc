#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin>>str;
        for (int j = str.length()-1; j > -1; j--)
        {
            if(str[j] == '0'){
                continue;
            }
            str[j] = char(int(str[j])-1);
            break;
        }
        cout<<stoi(str)<<'\n';
        
    }
    
    return 0;
}