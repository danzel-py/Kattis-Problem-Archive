#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string key;
    cin >> key;
    for (int i = 0; i < str.length(); i++)
    {
        if (i % 2 == 1)
        {
            if (int(str[i]) + int(key[i]) - 65 < 91)
            {
                cout << char(int(str[i]) + int(key[i]) - 65);
            }
            else
            {
                cout << char(int(str[i]) + int(key[i]) - 65 - 26);
            }
        }
        else{
            if(int(str[i])-int(key[i])+65>64){
                cout<<char(int(str[i])-int(key[i])+65);
                
            }
            else{
                cout<<char(int(str[i])-int(key[i])+65+26);

            }
        }
    }

    return 0;
}