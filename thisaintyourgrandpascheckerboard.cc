#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arrs[n];
    bool good = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arrs[i];
        if (good)
        {
            int b = 0;
            int w = 0;
            if (arrs[i][0] == 'W')
                w++;
            else
                b++;
            if (arrs[i][1] == 'W')
                w++;
            else
                b++;
            for (int j = 0; j < n - 2; j++)
            {
                if (arrs[i][j] == arrs[i][j + 1] && arrs[i][j] == arrs[i][j + 2])
                {
                    good = false;
                    break;
                }
                if (arrs[i][j + 2] == 'W')
                    w++;
                else
                    b++;
            }
            if (w != b)
            {
                good = false;
            }
        }
    }

    if (good)
    {
        for (int i = 0; i < n; i++)
        {
            int bc = 0;
            int wc = 0;
            if (arrs[0][i] == 'W')
                wc++;
            else
                bc++;
            if (arrs[1][i] == 'W')
                wc++;
            else
                bc++;
            for (int j = 0; j < n-2; j++)
            {
                if(arrs[j][i] == arrs[j+1][i] && arrs[j][i] == arrs[j+2][i]){
                    good = false;
                    break;
                }
                if (arrs[j+2][i] == 'W')
                    wc++;
                else
                    bc++;
                
            }
            if(bc!=wc){
                good = false;
                break;
            }
            
        }
    }
    if(good) cout<<1;
    else cout<<0;

    return 0;
}