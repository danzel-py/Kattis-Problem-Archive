#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    bool isdown;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    if (str[0] == 'D')
    {
        isdown = true;
    }
    else
    {
        isdown = false;
    }

    for (int i = 1; i < str.length(); i++)
    {
        if(str[i]!=str[i-1]){
            count3++;
        }
        if (str[i] == 'D')
        {
            if (isdown)
            {
                count1++;
                isdown = false;
            }
            else
            {
                count1 += 2;
            }
        }else{
            if(isdown){
                isdown = false;
                count1++;
            }
        }
    }

    if (str[0] == 'D')
    {
        isdown = true;
    }
    else
    {
        isdown = false;
    }
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == 'U')
        {
            if (!isdown)
            {
                count2++;
                isdown = true;
            }
            else
            {
                count2 += 2;
            }
        }
        else{
            if(!isdown){
                count2++;
                isdown = true;
            }
        }
    }



    cout << count1 << '\n'
         << count2 << '\n'
         << count3;

    return 0;
}