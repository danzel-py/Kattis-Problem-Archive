#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string str;
    cin >> str;
    int x = 0, y = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            x+=pow(2,str.length()-i-1.0);
        }else if (str[i] == '2')
        {
            y+=pow(2,str.length()-i-1.0);
        }
        else if (str[i] == '3')
        {
            x+=pow(2,str.length()-i-1.0);
            y+=pow(2,str.length()-i-1.0);
            
        }
        
        
        
    }
    cout<<str.length()<<' '<<x<<' '<<y;
    
    return 0;
}