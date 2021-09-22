#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tc, x;
    for (int i = 0; i < n; i++)
    {
        cin >> tc >> x;
        int foo = x;
        int octo = 0;
        int docto = 0;
        int popow = 0;
        bool ocot = true;
        while (foo != 0)
        {
            if(foo%10 > 8){
                ocot = false;
            }
            octo += (foo%10) * pow(8,popow);
            docto += (foo%10) * pow(16,popow);
            foo/=10;
            popow++;
        }
        if(!ocot){
            octo = 0;
        }
        cout<<tc<<' '<<octo<<' '<<x<<' '<<docto<<'\n';
    }

    return 0;
}