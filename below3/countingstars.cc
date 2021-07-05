#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> v;
vector<vector<bool>> visited;

int arr1[] = {1, -1, 0, 0};
int arr2[] = {0, 0, 1, -1};

void dfs(int x, int y, int xm, int ym)
{
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int xx = x + arr1[i];
        int yy = y + arr2[i];

        if (xx < 0 || yy < 0 || xx == xm || yy == ym)
        {
            continue;
        }
        if (visited[xx][yy] || v[xx][yy] == '#')
        {
            continue;
        }
        dfs(xx, yy, xm, ym);
    }
}

int main()
{
    int num = 0;
    int x, y;
    while (cin >> x)
    {
        num++;
        cin >> y;
        vector<char> bruh;
        vector<bool> brow;
        char w;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> w;
                bruh.push_back(w);
                brow.push_back(false);
            }
            v.push_back(bruh);
            visited.push_back(brow);
            bruh.clear();
            brow.clear();
        }
        int c = 0;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (v[i][j] == '-' && visited[i][j] == false)
                {
                    dfs(i, j, x, y);
                    c++;
                }
            }
        }
        cout<<"Case "<<num<<": " << c << '\n';
        v.clear();
        visited.clear();
    }
    return 0;
}