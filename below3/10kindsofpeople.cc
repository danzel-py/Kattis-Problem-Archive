#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> visited;
vector<vector<char>> v;

void dfs(int i, int j, int n, int y, int num)
{
    if (visited[i][j] != 0)
    {
        return;
    }
    visited[i][j] = num;

    if (i > 0)
    {
        if (v[i - 1][j] == '1')
        {
            dfs(i - 1, j, n, y, num);
        }
    }
    if (i < n - 1)
    {
        if (v[i + 1][j] == '1')
        {
            dfs(i + 1, j, n, y, num);
        }
    }
    if (j > 0)
    {
        if (v[i][j - 1] == '1')
        {
            dfs(i, j - 1, n, y, num);
        }
    }
    if (j < y - 1)
    {
        if (v[i][j + 1] == '1')
        {
            dfs(i, j + 1, n, y, num);
        }
    }
    return;
}

void dfszero(int i, int j, int n, int y, int num)
{
    if (visited[i][j] != 0)
    {
        return;
    }
    visited[i][j] = num;

    if (i > 0)
    {
        if (v[i - 1][j] == '0')
        {
            dfszero(i - 1, j, n, y, num);
        }
    }
    if (i < n - 1)
    {
        if (v[i + 1][j] == '0')
        {
            dfszero(i + 1, j, n, y, num);
        }
    }
    if (j > 0)
    {
        if (v[i][j - 1] == '0')
        {
            dfszero(i, j - 1, n, y, num);
        }
    }
    if (j < y - 1)
    {
        if (v[i][j + 1] == '0')
        {
            dfszero(i, j + 1, n, y, num);
        }
    }
    return;
}

int main()
{
    int n;
    vector<char> dummy;
    vector<int> dummy2;
    int y;
    cin >> n >> y;
    int islandCount = 1;
    int zerocount = -1;
    char x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> x;
            dummy.push_back(x);
            dummy2.push_back(0);
        }
        v.push_back(dummy);
        visited.push_back(dummy2);
        dummy.clear();
        dummy2.clear();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (visited[i][j] == 0 && v[i][j] == '1')
            {
                dfs(i, j, n, y, islandCount);
                islandCount++;
            }
            else if (visited[i][j] == 0 && v[i][j] == '0')
            {
                dfszero(i, j, n, y, zerocount);
                zerocount--;
            }
        }
    }

    int tc;
    cin >> tc;
    int x1, x2, y1, y2;
    for (int i = 0; i < tc; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        if (visited[x1 - 1][y1 - 1] == visited[x2 - 1][y2 - 1])
        {
            if (visited[x1 - 1][y1 - 1] < 0)
            {
                cout << "binary\n";
            }
            else
            {
                cout << "decimal\n";
            }
        }
        else
        {
            cout << "neither\n";
        }
    }
    /* for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << setprecision(3) << visited[i][j] << ' ';
        }
        cout << '\n';
    } */

    return 0;
}