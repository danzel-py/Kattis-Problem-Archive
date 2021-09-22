#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y, z;
    for (int i = 0; i < n; i++)
    {
        if(i!=0)cout<<'\n';
        cin >> x >> y >> z;
        char arr[x][y];
        char dum[x][y];
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> arr[i][j];
                dum[i][j] = arr[i][j];
            }
        }

        if (x > 2 && y > 2)
        {

            for (int p = 0; p < z; p++)
            {
                for (int r = 0; r < x - 1; r++)
                {
                    for (int t = 0; t < y - 1; t++)
                    {
                        if (arr[r][t] == 'R')
                        {
                            if (arr[r][t + 1] == 'P')
                            {
                                dum[r][t] = 'P';
                            }
                            else if (arr[r][t + 1] == 'S')
                            {
                                dum[r][t + 1] = 'R';
                            }
                            if (arr[r + 1][t] == 'P')
                            {
                                dum[r][t] = 'P';
                            }
                            else if (arr[r + 1][t] == 'S')
                            {
                                dum[r + 1][t] = 'R';
                            }
                        }
                        else if (arr[r][t] == 'P')
                        {
                            if (arr[r][t + 1] == 'S')
                            {
                                dum[r][t] = 'S';
                            }
                            else if (arr[r][t + 1] == 'R')
                            {
                                dum[r][t + 1] = 'P';
                            }
                            if (arr[r + 1][t] == 'S')
                            {
                                dum[r][t] = 'S';
                            }
                            else if (arr[r + 1][t] == 'R')
                            {
                                dum[r + 1][t] = 'P';
                            }
                        }
                        else if (arr[r][t] == 'S')
                        {
                            if (arr[r][t + 1] == 'R')
                            {
                                dum[r][t] = 'R';
                            }
                            else if (arr[r][t + 1] == 'P')
                            {
                                dum[r][t + 1] = 'S';
                            }
                            if (arr[r + 1][t] == 'R')
                            {
                                dum[r][t] = 'R';
                            }
                            else if (arr[r + 1][t] == 'P')
                            {
                                dum[r + 1][t] = 'S';
                            }
                        }
                    }
                }
                if (arr[x - 1][y - 1] == 'R')
                {
                    if (arr[x - 2][y - 1] == 'P')
                    {
                        dum[x - 1][y - 1] = 'P';
                    }
                    else if (arr[x - 1][y - 2] == 'P')
                    {
                        dum[x - 1][y - 1] = 'P';
                    }
                }
                else if (arr[x - 1][y - 1] == 'P')
                {
                    if (arr[x - 2][y - 1] == 'S')
                    {
                        dum[x - 1][y - 1] = 'S';
                    }
                    else if (arr[x - 1][y - 2] == 'S')
                    {
                        dum[x - 1][y - 1] = 'S';
                    }
                }
                else if (arr[x - 1][y - 1] == 'S')
                {
                    if (arr[x - 2][y - 1] == 'R')
                    {
                        dum[x - 1][y - 1] = 'R';
                    }
                    else if (arr[x - 1][y - 2] == 'R')
                    {
                        dum[x - 1][y - 1] = 'R';
                    }
                }

                for (int i = 0; i < x; i++)
                {
                    for (int j = 0; j < y; j++)
                    {
                        arr[i][j] = dum[i][j];
                    }
                }
            }
        }
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << dum[i][j];
            }
            cout << '\n';
        }
    }

    return 0;
}