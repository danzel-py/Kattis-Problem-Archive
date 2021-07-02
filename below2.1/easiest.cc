#include <iostream>
using namespace std;

int main()
{
    int x;
    int mul, sum1, sum2, dum;
    while (true)
    {

        cin >> x;
        if (x == 0)
        {
            break;
        }
        int i = 11;
        while (true)
        {
            sum1 = 0;
            sum2 = 0;
            mul = x * i;
            dum = x;
            while (true)
            {
                sum1 += dum % 10;
                dum /= 10;
                if (dum == 0)
                {
                    break;
                }
            }
            while (true)
            {
                sum2 += mul % 10;
                mul /= 10;
                if (mul == 0)
                {
                    break;
                }
            }
            if (sum1 == sum2)
            {
                break;
            }
            i++;
        }
        cout << i << '\n';
    }
}