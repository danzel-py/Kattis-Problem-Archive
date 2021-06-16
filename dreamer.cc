#include <iostream>
#include <algorithm>
using namespace std;
// * GG permutation

bool checkvalidity(int d, int m, int y)
{
    if (d == 0 || m == 0)
    {
        return false;
    }

    if (y < 2000)
    {
        return false;
    }
    if (m > 12)
    {
        return false;
    }
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (d > 31)
        {
            return false;
        }
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (d > 30)
        {
            return false;
        }
    }
    else
    {
        bool leap = false;
        if (y % 4 == 0)
        {
            leap = true;
            if (y % 100 == 0 && y % 400 != 0)
            {
                leap = false;
            }
        }
        if (leap && d > 29)
        {
            return false;
        }
        else if (!leap && d > 28)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int tc;
    cin >> tc;
    string a, b, c;
    int counter;
    for (int i = 0; i < tc; i++)
    {
        counter = 0;
        cin >> a >> b >> c;
        a = a + b + c;

        sort(a.begin(), a.end());
        bool first = true;
        string fsd,fsm,fsy;
        int bruh = 999999999;

        do
        {
            if (a[0] > '3' || a[2] > '1' || a[4] < '2')
            {
                continue;
            }
            int day = stoi(a.substr(0,2));
            int mon = stoi(a.substr(2,2));
            int ye = stoi(a.substr(4));
            

            if(checkvalidity(day,mon,ye)){
                counter++;
                bruh = min(bruh, ye*10000+mon*100+day);
                
            }

        } while (next_permutation(a.begin(), a.end()));
        cout<<counter <<' ';
        if(counter!=0) {
            string wow = to_string(bruh);
            fsd = wow.substr(6);
            fsm = wow.substr(4,2);
            fsy = wow.substr(0,4);
            cout<<fsd<<' '<<fsm <<' '<<fsy;
        }
        cout<<'\n';
    }

    return 0;
}