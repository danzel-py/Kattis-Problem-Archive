#include <iostream>
using namespace std;

int main()
{
    string str[7];
    for (int i = 0; i < 7; i++)
    {
        getline(cin, str[i]);
    }
    int c = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (str[i][j] == '.')
            {
                if (i > 1)
                {
                    if (str[i - 2][j] == 'o' && str[i-1][j] == 'o')
                    {
                        c++;
                    }
                }
                if (i < 5)
                {
                    if (str[i + 2][j] == 'o' && str[i+1][j] == 'o')
                    {
                        c++;
                    }
                }
                if (j > 1)
                {
                    if (str[i][j-2] == 'o' && str[i][j-1] == 'o')
                    {
                        c++;
                    }
                }

                if (j < 5)
                {
                    if (str[i][j+2] == 'o' && str[i][j+1] == 'o')
                    {
                        c++;
                    }
                }
            }
        }
    }
    cout << c;

    return 0;
}