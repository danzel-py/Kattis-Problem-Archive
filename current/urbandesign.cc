#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double x1, y1, x2, y2;
    double m[n];
    double c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2)
        {
            m[i] = x1;
            c[i] = M_2_SQRTPI;
        }
        else
        {
            m[i] = (y1 - y2) / (x1 - x2);
            c[i] = y1 - m[i] * x1;
        }
    }

    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        bool samespot = true;
        for (int i = 0; i < n; i++)
        {
            bool abig = false;
            bool bbig = false;
            if (c[i] == M_2_SQRTPI)
            {
                // verticallines moment
                if (x1 > m[i])
                {
                    abig = true;
                }
                if (x2 > m[i])
                {
                    bbig = true;
                }
            }
            else
            {

                if (y1 > m[i] * x1 + c[i])
                {
                    abig = true;
                }
                if (y2 > m[i] * x2 + c[i])
                {
                    bbig = true;
                }
            }
            if (abig != bbig)
            {
                // cout << abig << ' ' << bbig << ' ' << i << '\n';
                samespot = !samespot;
            }
        }
        cout << (samespot ? "same" : "different") << '\n';
    }

    return 0;
}