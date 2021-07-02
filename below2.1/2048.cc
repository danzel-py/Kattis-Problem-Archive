#include <iostream>
using namespace std;

int main()
{
    int arr[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    int command;
    cin >> command;
    bool bruh = true;

    if (command == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = j; k < 4; k++)
                {
                    if (j == k || arr[i][k] == 0)
                        continue;
                    if (arr[i][j] == arr[i][k])
                    {
                        arr[i][j] *= 2;
                        arr[i][k] = 0;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arr[i][j] == 0)
                {
                    if (arr[i][j + 1] != 0)
                    {
                        arr[i][j] = arr[i][j + 1];
                        arr[i][j + 1] = 0;
                        j = -1;
                    }
                }
            }
        }
    }
    else if (command == 2)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 3; j > 0; j--)
            {

                for (int k = j; k > -1; k--)
                {
                    if (j == k || arr[i][k] == 0)
                        continue;
                    if (arr[i][j] == arr[i][k])
                    {
                        arr[i][j] *= 2;
                        arr[i][k] = 0;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 3; j > 0; j--)
            {
                if (arr[i][j] == 0)
                {
                    if (arr[i][j - 1] != 0)
                    {
                        arr[i][j] = arr[i][j - 1];
                        arr[i][j - 1] = 0;
                        j = 4;
                    }
                }
            }
        }
    }

    else if (command == 1)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int i = 0; i < 3; i++)
            {

                for (int k = i; k < 4; k++)
                {
                    if (i == k || arr[k][j] == 0)
                    {
                        continue;
                    }
                    if (arr[i][j] == arr[k][j])
                    {
                        arr[i][j] *= 2;
                        arr[k][j] = 0;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        for (int j = 0; j < 4; j++)
        {
            for (int i = 0; i < 3; i++)
            {
                if (arr[i][j] == 0)
                {
                    if (arr[i + 1][j] != 0)
                    {
                        arr[i][j] = arr[i + 1][j];
                        arr[i + 1][j] = 0;
                        i = -1;
                    }
                }
            }
        }
    }

    else if (command == 3)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int i = 3; i > 0; i--)
            {

                for (int k = i; k > -1; k--)
                {
                    if (i == k || arr[k][j] == 0)
                    {
                        continue;
                    }
                    if (arr[i][j] == arr[k][j])
                    {
                        arr[i][j] *= 2;
                        arr[k][j] = 0;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        for (int j = 0; j < 4; j++)
        {
            for (int i = 3; i > 0; i--)
            {
                if (arr[i][j] == 0)
                {
                    if (arr[i - 1][j] != 0)
                    {
                        arr[i][j] = arr[i - 1][j];
                        arr[i - 1][j] = 0;
                        i = 4;
                    }
                }
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << "\n";
    }

    return 0;
}