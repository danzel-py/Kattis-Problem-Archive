#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    string str[n];
    int win;

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    int dif01 = 0, dif12 = 0, dif20 = 0;
    int dif = 0, same = 0;

    if (n == 3)
    {
        for (int l = 0; l < m; l++)
        {
            if (str[0][l] != str[1][l])
            {
                dif01++;
            }
            if (str[1][l] != str[2][l])
            {
                dif12++;
            }
            if (str[2][l] != str[0][l])
            {
                dif20++;
            }
        }
        if (dif01 == dif12)
        {
            win = 1;
        }
        else if (dif12 == dif20)
        {
            win = 2;
        }
        else if (dif01 == dif20)
        {
            win = 0;
        }
    }else{
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            dif = 0;
            same = 0;
            for (int p = 0; p < m; p++)
            {
                if (str[i][p] != str[j][p])
                {
                    dif++;
                    if (dif > k)
                    {
                        break;
                    }
                }else{
                    same++;
                    if(same > m-k){
                        break;
                    }
                }
            }
            if (dif != k || same > m-k)
            {
                break;
            }
        }

        if (dif == k)
        {
            win = i;
            break;
        }
    }
    }

    cout << win + 1;

    return 0;
}