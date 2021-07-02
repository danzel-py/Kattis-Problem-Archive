#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    string str[m];
    string candidate;
    vector<string> v;

    for (int i = 0; i < m; i++)
    {
        cin >> str[i];
        candidate = "";
        for (int j = 0; j < str[i].length(); j++)
        {
            if (str[i][j] != '#')
            {
                candidate += str[i][j];
            }
            else
            {
                if (candidate.length() > 1)
                {
                    v.push_back(candidate);
                }
                candidate = "";
            }
        }
        if (candidate.length() > 1)
        {
            v.push_back(candidate);
        }
    }

    for (int j = 0; j < n; j++)
    {
        candidate = "";
        for (int i = 0; i < m; i++)
        {
            if (str[i][j] != '#')
            {
                candidate += str[i][j];
            }
            else
            {
                if (candidate.length() > 1)
                {
                    v.push_back(candidate);
                }
                candidate = "";
            }
        }
        if (candidate.length() > 1)
        {
            v.push_back(candidate);
        }
    }

    sort(v.begin(), v.end());
    cout<<v[0];

    return 0;
}