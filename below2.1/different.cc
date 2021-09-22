#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    while (cin >> a >> b)
    {
        if (a > b)
        {
            cout << a - b;
        }
        else
        {
            cout << b - a ;
        }
        cout<<'\n';
    }
    return 0;
}