#include <iostream>
using namespace std;

int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    int arr[x + 2][y + 2];
    int doo[x + 2][y + 2];
    for (int i = 0; i < x + 2; i++)
    {
        for (int j = 0; j < y + 2; j++)
        {
            if (i == 0 || j == 0 || i == x + 1 || j == y + 1)
            {
                arr[i][j] = 2;
                doo[i][j] = 2;
            }
            else
            {
                arr[i][j] = 0;
                doo[i][j] = 0;
            }
        }
    }
    int xx, yy;
    for (int i = 0; i < n; i++)
    {
        cin >> xx >> yy;
        arr[xx][yy] = 1;
    }

    int day = 1;
    while (true)
    {
        int count = 0;

        for (int i = 1; i < x + 1; i++)
        {
            for (int j = 1; j < y + 1; j++)
            {
                if (arr[i][j] == 1)
                {
                    doo[i + 1][j] = max(arr[i + 1][j], 1);
                    doo[i - 1][j] = max(arr[i - 1][j], 1);
                    doo[i][j - 1] = max(arr[i][j - 1], 1);
                    doo[i][j + 1] = max(arr[i][j + 1], 1);
                    doo[i][j] = 2;
                }
                if (arr[i][j] == 0)
                {

                    count++;
                }
            }
        }

        if (count == 0)
        {
            break;
        }
        for (int i = 1; i < x + 1; i++)
        {
            for (int j = 1; j < y + 1; j++)
            {
                arr[i][j] = doo[i][j];
/*                 cout << arr[i][j];
 */            }

/*             cout << '\n';
 */        }
/*         cout << '\n';
 */        day++;
    }
    cout << day;

    return 0;
}