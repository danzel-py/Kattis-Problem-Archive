#include <iostream>
using namespace std;

// should be dp but sad
// tag: medium dp easy math

// 3 11 41 153
// weird sequence but solvable

// problem doesn't state output for non even number. assume 0 a.k.a tiling can't fit
// turns out 0 tiles fit by 1 possible tilings *trolled*

int solv(int n){
    if(n <= 0) return 1;
    return 4*solv(n-1) - solv(n-2);
}

int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        int res = solv(n/2);
        if(n%2==1){
            res = 0;
        }
        cout<<res<<'\n';
    }

    return 0;
}