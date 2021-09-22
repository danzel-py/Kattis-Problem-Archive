#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tea[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tea[i];
    }
    int m;
    cin >> m;
    int topping[m];
    for (int i = 0; i < m; i++)
    {
        cin >> topping[i];
    }

    int cheapest[n];
    int mtot;
    int foo;
    int minz;
    for (int i = 0; i < n; i++)
    {
        cin >> mtot;
        minz = 1001;
        for (int j = 0; j < mtot; j++)
        {
            cin >> foo;
            minz = min(minz, topping[foo-1]);
        }
        cheapest[i] = minz;
    }
    int money;
    cin>>money;
    minz = 1001;
    for (int i = 0; i < n; i++)
    {
        minz = min(minz, tea[i] + cheapest[i]);
    }
    int aw = money/minz-1;
    aw = max(aw,0);
    cout<<aw;
    

    return 0;
}