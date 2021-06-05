#include <iostream>
#include <vector>
#include <utility>
using namespace std;
// DONT UNDERSTAND THE PROBLEM :V
int main()
{
    string str[12];
    vector<pair<int, pair<int, int>>> res;
    for (int i = 0; i < 12; i++)
    {
        cin >> str[i];
    }
    int x, y, z;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 11; j++)
        {
            x = 0;
            if (str[i][0] == str[j][0])
            {
                x = x | (1 << 1);
            }
            if (str[i][1] == str[j][1])
            {
                x = x | (1 << 2);
            }
            if (str[i][2] == str[j][2])
            {
                x = x | (1 << 3);
            }
            if (str[i][3] == str[j][3])
            {
                x = x | (1 << 4);
            }
            if (__builtin_popcount(x) > 1)
            {

                for (int k = j + 1; k < 12; k++)
                {
                    y = 0;
                    if (str[k][0] == str[j][0])
                    {
                        y = y | (1 << 1);
                    }
                    if (str[k][1] == str[j][1])
                    {
                        y = y | (1 << 2);
                    }
                    if (str[k][2] == str[j][2])
                    {
                        y = y | (1 << 3);
                    }
                    if (str[k][3] == str[j][3])
                    {
                        y = y | (1 << 4);
                    }
                    z = x&y;
                    if(__builtin_popcount(z) > 1){
                        cout<<i<<' '<<j<<' '<<k<<'\n';
                    }
                }
            }
        }
    }

    return 0;
}