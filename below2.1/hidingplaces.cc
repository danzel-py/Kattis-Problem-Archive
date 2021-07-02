#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int>> chessboard;
vector<vector<int>> listx;
vector<vector<int>> listy;
vector<int> foox;
vector<int> fooy;


int nodelast;

int arr1[] = {2, 2, 1, 1, -1, -1, -2, -2};
int arr2[] = {1, -1, 2, -2, 2, -2, 1, -1};

void bfs(int sx, int sy, int &lay)
{
    queue<int> qx;
    queue<int> qy;
    qx.push(sx);
    qy.push(sy);
    int nodenow = 1, nodenext = 0;

    while (!qx.empty())
    {
        int xnow = qx.front();
        qx.pop();
        int ynow = qy.front();
        qy.pop();

        chessboard[xnow][ynow] = 1;

        for (int i = 0; i < 8; i++)
        {
            int xx = xnow + arr1[i];
            int yy = ynow + arr2[i];

            if (xx > 7 || xx < 0 || yy > 7 || yy < 0)
            {
                continue;
            }

            if (chessboard[xx][yy] != 0)
            {
                continue;
            }
            chessboard[xx][yy] = 1;
            qx.push(xx);
            qy.push(yy);
            foox.push_back(xx);
            fooy.push_back(yy);   
            nodenext++;
        }
        nodenow--;
        if (nodenow == 0)
        {
            nodenow = nodenext;
            if(nodenext!=0){
            nodelast = nodenext;

            }
            nodenext = 0;
            lay++;
        }
    }

    return;
}

bool nbsort(string &s1, string &s2){
    if(s1[1] == s2[1]){
        return s1[0] < s2[0];
    }
    else{
        return s2[1] < s1[1];
    }
}

int main()
{
    int n;
    cin >> n;
    string inp;
    int x, y;
    for (int il = 0; il < n; il++)
    {
        int lay = 0;
        cin >> inp;
        x = int(inp[0]) - int('a');
        y = int(inp[1]) - int('1');
        vector<int> foo;
        chessboard.clear();
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                foo.push_back(0);
            }
            chessboard.push_back(foo);
            foo.clear();
        }

        bfs(x, y, lay);
        cout << lay-1 <<' ';
        string str;
        vector<string> res;
        for (int i = foox.size()-nodelast; i < foox.size(); i++)
        {
            str = char(foox[i] + int('a'));
            str += char(fooy[i] + int('1'));
            res.push_back(str);
        }
        sort(res.begin(),res.end(),nbsort);

        for (int i = 0; i < res.size(); i++)
        {
            cout<<res[i]<<' ';
        }
        cout<<'\n';
        
        
    }

    return 0;
}