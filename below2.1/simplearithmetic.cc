#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    long double a, b, c;
    cin >> a >> b >> c;
    long double d = a * b;
    long double sisa = fmod(d, c);
    long double bagi = floor(d / c);
    sisa /= c;
    cout << fixed << setprecision(0) << bagi;
    cout << to_string(sisa).substr(1);
    return 0;
}