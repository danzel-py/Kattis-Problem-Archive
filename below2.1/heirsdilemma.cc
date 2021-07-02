#include <iostream>
#include <set>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c = 0;
    for (int i = a; i < b + 1; i++)
    {
        if(i%2==1){
            continue;
        }
        string wow = to_string(i);
        set<int> setz;
        for (int k = 0; k < wow.length(); k++)
        {
            setz.insert(int(wow[k]) - int('0'));
        }
        if (setz.size() != 6)
        {
            continue;
        }
        bool dividable = true;
        for (int j = 0; j < 6; j++)
        {
            if ((int(wow[j]) - int('0')) != 0)
            {
                if (i % (int(wow[j]) - int('0')) != 0)
                {
                    dividable = false;
                    break;
                }
            }
            else{
                dividable = false;
                break;
            }
        }
        if (dividable)
        {
            c++;
        }
    }
    cout << c;

    return 0;
}