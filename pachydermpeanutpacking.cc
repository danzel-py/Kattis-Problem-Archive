#include <iostream>
#include <tuple>
using namespace std;

int main()
{
    int n, m;
    while (true)
    {
        double x1, y1, x2, y2;
        string size;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        tuple<double, double, double, double, string> list[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x1 >> y1 >> x2 >> y2 >> size;
            list[i] = make_tuple(x1, y1, x2, y2, size);
        }
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> x1 >> y1 >> size;
            cout << size << ' ';
            bool couted = false;
            for (int j = 0; j < n; j++)
            {
                if (x1 >= get<0>(list[j]) && x1 <= get<2>(list[j]) && y1 >= get<1>(list[j]) && y1 <= get<3>(list[j]))
                {
                    if (get<4>(list[j]) == size)
                    {
                        cout << "correct";
                        couted = true;
                        break;
                    }
                    else
                    {
                        cout << get<4>(list[j]);
                        couted = true;
                        break;
                    }
                }
            }
            if (!couted)
            {
                cout << "floor";
            }
            cout << '\n';
        }
        cout<<'\n';
    }
    return 0;
}