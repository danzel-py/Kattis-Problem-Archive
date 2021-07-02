#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>str;
        c++;
        if(str.length()==1){
            continue;
        }
        for (int j = 1; j < str.length(); j++)
        {
            if(str[j] == 'D' && str[j-1] == 'C'){
                c--;
                break;
            }
        }
        
    }
    cout<<c;
    
    return 0;
}