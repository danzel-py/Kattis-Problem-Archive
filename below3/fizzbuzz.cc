#include <iostream>
using namespace std;

int main()
{

    int tc, n;
    string b, ans;
    cin >> tc >> n;
    int winner, sum;
    int smaz = 0;
    for (int i = 1; i <= tc; i++)
    {
        sum = 0;

        for (int j = 1; j <= n; j++)
        {
            ans.clear();
            cin >> b;
            if (j % 3 == 0)
            {
                ans += "fizz";
            }
            if (j % 5 == 0)
            {
                ans += "buzz";
            }
            if (j % 3 != 0 && j % 5 != 0)
            {
                ans = to_string(j);
            }
            if (b == ans)
            {
                sum++;
            }
        }
        if (sum > smaz)
        {
            smaz = sum;
            winner = i;
        }
    }
    cout<<winner;

    return 0;
}