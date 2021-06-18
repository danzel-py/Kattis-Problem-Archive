#include <iostream>
using namespace std;

int main()
{
    double dist;
    int bee;
    while (true)
    {
        cin >> dist >> bee;
        if (bee == 0)
        {
            break;
        }
        double arrx[bee];
        double arry[bee];
        for (int i = 0; i < bee; i++)
        {
            cin >> arrx[i] >> arry[i];
        }
        bool noob;
        int sourgang = 0, goodgang = 0;
        for (int i = 0; i < bee; i++)
        {
            noob = false;
            for (int j = 0; j < bee; j++)
            {
                if (i == j)
                {
                    continue;
                }
                if ((arrx[i] - arrx[j]) * (arrx[i] - arrx[j]) + (arry[i] - arry[j]) * (arry[i] - arry[j]) <= dist * dist + 10e-6)
                {
                    noob = true;
                    break;
                }
            }
            if (noob)
            {
                sourgang++;
            }
            else
            {
                goodgang++;
            }
        }
        cout << sourgang << " sour, " << goodgang << " sweet\n";
    }
    return 0;
}