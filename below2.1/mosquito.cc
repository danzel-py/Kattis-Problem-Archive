#include <iostream>
using namespace std;

int main()
{
    int m, p, l, e, r, s, n, mem;
    while (cin >> m)
    {
        int eggnow = 0;
        cin >> p >> l >> e >> r >> s >> n;
        for (int i = 0; i < n; i++)
        {
            mem = m;
            m = p / s;
            p = l / r;
            l = mem * e;
        }
            cout << m << '\n';
    }

    return 0;
}