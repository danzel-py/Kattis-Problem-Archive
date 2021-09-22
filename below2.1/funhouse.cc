#include <iostream>
using namespace std;

int main()
{
    int p, q;
    int hn = 0;
    while (true)
    {

        cin >> q >> p;
        if (p == 0)
        {
            break;
        }
        hn++;
        string str[p];
        for (int i = 0; i < p; i++)
        {
            cin >> str[i];
        }

        int head;
        int starx;
        int stary;
        bool solved = false;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                if (str[i][j] == '*')
                {
                    if (j == 0)
                    {
                        head = 1;
                    }
                    else if (i == 0)
                    {
                        head = 2;
                    }
                    else if (j == q - 1)
                    {
                        head = 3;
                    }
                    else if (i == p - 1)
                    {
                        head = 0;
                    }
                    while (true)
                    {
                        if (head == 1)
                        {
                            j++;
                        }
                        else if (head == 2)
                        {
                            i++;
                        }
                        else if (head == 3)
                        {
                            j--;
                        }
                        else if (head == 0)
                        {
                            i--;
                        }
                        if (str[i][j] == '\\')
                        {
                            if (head == 1)
                            {
                                head = 2;
                            }
                            else if (head == 2)
                            {
                                head = 1;
                            }
                            else if (head == 3)
                            {
                                head = 0;
                            }
                            else if (head == 0)
                            {
                                head = 3;
                            }
                        }
                        else if (str[i][j] == '/')
                        {
                            if (head == 1)
                            {
                                head = 0;
                            }
                            else if (head == 0)
                            {
                                head = 1;
                            }
                            else if (head == 2)
                            {
                                head = 3;
                            }
                            else if (head == 3)
                            {
                                head = 2;
                            }
                        }
                        else if (str[i][j] == 'x')
                        {
                            starx=j;
                            stary=i;
                            solved = true;
                            break;
                        }
                    }
                }
                if(solved) break;
            }
            if(solved) break;
        }
        str[stary][starx] = '&';
        cout<<"HOUSE "<<hn<<'\n';
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << str[i][j];
            }
            cout << '\n';
        }
    }

    return 0;
}