#include <iostream>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    int arr[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = -1;
        }
    }

    int c = -1;
    int death = 0;
    while (true)
    {
        for (int i = 0; i < s; i++)
        {
            c++;
            if (arr[c] == -1)
            {
                c++;
            }
            if (c >= 2 * n)
            {
                c -= 2 * n;
            }
        }
        if (arr[c] == 0)
        {
            arr[c] = 1;
            arr[c + 1] = 1;
            c--;
        }
        else if (arr[c] == 1)
        {
            arr[c] = 2;
        }
        else if (arr[c] == 2)
        {
            arr[c] = -1;
            death++;
        }
        for (int j = 0; j < n * 2; j++)
        {
            if(arr[j]>-1) cout<<' ';
            cout << arr[j] << ' ';
        }
        cout<<'\n';
        if (death == n * 2 - 1)
        {
            break;
        }
    }

    return 0;
}