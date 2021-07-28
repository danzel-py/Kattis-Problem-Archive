#include <iostream>
using namespace std;

// tags: easy 2d array

int main()
{
    int x, y;
    cin >> x >> y;
    char arr[x + 2][y + 2];
    for (int i = 1; i < x + 1; i++)
    {
        for (int j = 1; j < y + 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i < x + 1; i++)
    {
        int lp = y;
        while (lp--)
        {
            for (int j = 1; j < y + 1; j++)
            {
                // v drip
                if (arr[i][j] == '.')
                {
                    if (arr[i - 1][j] == 'V')
                    {
                        arr[i][j] = 'V';
                    }
                }
                /* code */

                if (arr[i][j] == '#')
                {
                    if (arr[i - 1][j] == 'V')
                    {
                        if (arr[i - 1][j - 1] != '#')
                        {
                            arr[i - 1][j - 1] = 'V';
                        }
                        if (arr[i - 1][j + 1] != '#')
                        {
                            arr[i - 1][j + 1] = 'V';
                        }
                    }
                }
            }
        }
    }
    for (int i = 1; i < x + 1; i++)
    {
        for (int j = 1; j < y + 1; j++)
        {
            cout << arr[i][j];
        }
        cout << '\n';
    }

    return 0;
}