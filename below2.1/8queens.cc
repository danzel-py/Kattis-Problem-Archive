#include <iostream>
#include <map>
using namespace std;

int main()
{
    string str[8];
    map<int, int> hor;
    map<int, int> ver;
    map<int, int> dia1;
    map<int, int> dia2;
    for (int i = 0; i < 8; i++)
    {
        cin >> str[i];
    }
    bool valid = true;
    int qc = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (str[i][j] == '*')
            {
                qc++;
                hor[i+1]++;
                if (hor[i+1] > 1)
                {
                    valid = false;
                    break;
                }
                ver[j+1]++;
                if (ver[j+1] > 1)
                {
                    valid = false;
                    break;
                }
                dia1[j - i + 20]++;
                if (dia1[j - i + 20] > 1)
                {
                    valid = false;
                    break;
                }
                dia2[i + j + 1]++;
                if (dia2[i + j + 1] > 1)
                {
                    valid = false;
                    break;
                }
            }
        }
        if (!valid)
        {
            break;
        }
    }
    valid && qc == 8? cout << "valid" : cout << "invalid";

    return 0;
}