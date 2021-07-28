#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int wmax, n;
    int ct = 0;
    while (1)
    {
        ct++;
        cin >> wmax >> n;
        if (!wmax && !n)
            break;
        int ln[n];
        int oc[n];
        string aw;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> aw;
            ln[i] = aw.length();
            cin >> oc[i];
            mx = max(mx, oc[i]);
        }
        int wnow = 0;
        int htot = 0;
        int hmax = 0;
        for (int i = 0; i < n; i++)
        {
            int p = double(8 + ceil(40.0 * (double)(oc[i] - 4) / double(mx - 4)));
            int w = ceil(double(9 * ln[i] * p) / 16.0);
            if (wnow + w <= wmax)
            {
                wnow += w + 10;
                hmax = max(hmax, p);
            }
            else
            {
                wnow = w+10;
                htot += hmax;
                hmax = p;
            }
        }
        htot += hmax;
        cout << "CLOUD " << ct << ": " << htot << '\n';
    }
    return 0;
}