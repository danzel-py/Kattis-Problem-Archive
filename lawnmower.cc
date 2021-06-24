#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int wx, lx;
    double mowersize;
    while (true)
    {
        cin >> wx >> lx >> mowersize;
        if (wx == 0)
        {
            break;
        }
        double arrw[wx];
        double arrl[lx];

        for (int i = 0; i < wx; i++)
        {
            cin >> arrw[i];
        }
        for (int i = 0; i < lx; i++)
        {
            cin >> arrl[i];
        }
        sort(arrw, arrw + wx);
        sort(arrl, arrl + lx);
        bool cool = true;
        if (arrw[0] - mowersize/2.0> 0 + 1e-6)
        {
            cool = false;
        }
        if (arrw[wx - 1] + mowersize/2 < 75.0 - 1e-6)
        {
            cool = false;
        }
        if (arrl[0] - mowersize/2.0 > 0 + 10e-6)
        {
            cool = false;
        }
        if (arrl[lx - 1] + mowersize/2.0 < 100.0 - 1e-6)
        {
            cool = false;
        }

        if (cool)
        {
            // check inside;
            for (int i = 1; i < wx; i++)
            {
                if(arrw[i] - arrw[i-1] > mowersize + 1e-6 ){
                    cool = false;
                    break;
                }
            }
            for (int i = 1; i < lx; i++)
            {
                if(arrl[i] - arrl[i-1] > mowersize + 1e-6 ){
                    cool = false;
                    break;
                }
            }
        }
        cout<<(cool ? "YES": "NO")<<'\n';
    }

    return 0;
}