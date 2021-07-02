#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int c;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }
    sort(arr, arr + n, greater<int>());
    double tote = 0;
    for (int i = 0; i < n; i++)
    {
        tote += double(arr[i] * pow(0.8, double(i) / 1.0));
    }
    cout << fixed << setprecision(6) << tote / 5 << '\n';
        tote =0;
    for (int j = 0; j < n; j++)
    {
            c = 0;
        for (int i = 0; i < n; i++)
        {
            if (i != j)
                {tote += double(arr[i] * pow(0.8, double(c) / 1.0));
                c++;}
        }
    }
        cout << fixed << setprecision(6) << tote / 5 /n<< '\n';

    return 0;
}