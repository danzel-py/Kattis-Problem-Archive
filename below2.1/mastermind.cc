#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    map<char, int> mapz;
    map<char, int> mapzb;
    map<char, int> bot;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            mapz[a[i]]++;
            mapzb[b[i]]++;
        }
    }
    int cc = 0, ccb = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            cc++;
        }
        else
        {
            if(mapzb[b[i]] && mapz[b[i]]){
                // available
                mapzb[b[i]]--;
                mapz[b[i]]--;
                ccb++;
            }
        }
    }
    cout << cc << ' ' << ccb;

    return 0;
}