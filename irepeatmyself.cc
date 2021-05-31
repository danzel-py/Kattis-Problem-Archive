#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    cin.ignore(10000, '\n');
    for (int p = 0; p < tc; p++)
    {
        string str;
        getline(cin, str);
        int ln = str.length();
        int c, a;
        bool falsey;
        int i;
        for (i = 1; i < ln; i++)
        {
            falsey = true;
            if (str[0] == str[i])
            {
                falsey = false;

                a = 0;
                while (a < i)
                {
                    c = i + a;
                    while (c < ln)
                    {
                        if (str[c] != str[a])
                        {
                            falsey = true;
                            break;
                        }
                        c += i;
                    }
                    if (falsey)
                        break;
                    a++;
                }
            }
            if (!falsey)
                break;
        }
        cout << i << '\n';
    }

    return 0;
}