#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int d, m, sum = 0, fr = 0;
        int dm;
        cin >> d >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> dm;
            if ((sum + 13) % 7 == 6 && dm>=13)
            {
                fr++;
            }
            sum += dm;
        }
        cout << fr<<'\n';
    }

    return 0;
}