#include <map>
#include <vector>
#include <iostream>
using namespace std;

// FAIL

int main()
{
    int tc;
    cin >> tc;
    int trod, inprod;
    int a, b;
    for (int i = 0; i < tc; i++)
    {
        int c = 0;
        cin >> trod >> inprod;
        vector<vector<int>> adjl(trod);
        map<int, bool> reamap;
        int hatsu;
        for (int j = 0; j < inprod; j++)
        {
            cin >> a >> b;
            if(j == 0){
                reamap[a] == true;
                reamap[b] == true;
            }
            adjl[a].push_back(b);
            adjl[b].push_back(a);
        }
        for (int j = 0; j < trod; j++)
        {
            if (!reamap[j])
            {
                continue;
            }
            for (int k = 0; k < adjl[j].size(); k++)
            {
                reamap[adjl[j][k]] = true;
            }
        }
        for (int j = 0; j < trod; j++)
        {
            if (!reamap[j])
            {
                continue;
            }
            for (int k = 0; k < adjl[j].size(); k++)
            {
                reamap[adjl[j][k]] = true;
            }
        }
        for (int j = 0; j < trod; j++)
        {
            if (!reamap[j])
            {
                c++;
                reamap[j] = true;
                for (int k = 0; k < adjl[j].size(); k++)
                {
                    reamap[adjl[j][k]] = true;
                }
                j = -1;
            }
        }
        

        cout << c << '\n';
    }

    return 0;
}