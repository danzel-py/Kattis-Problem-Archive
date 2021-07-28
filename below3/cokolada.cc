#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cok = 1;
    while (cok < n)
    {
        cok *= 2;
    }

    cout << cok << ' ';
    if (cok == n)
    {
        cout << 0;
        return 0;
    }

    int a = cok / 2;
    int b = cok / 2;
    int br = 1;
    while (a!=n)
    {
        br++;
        if(a+b/2 > n){
            b/=2;
        }else{
            b/=2;
            a+=b;
        }
    }
    cout<<br;

    return 0;
}