#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int r, p;
    cin >> r >> p;
    int arr[p * 2];
    for (int i = 0; i < p * 2; i += 2)
    {
        arr[i] = 3;
        arr[i + 1] = 0;
    }
    int pos = -1;
    bool fin = false;
    while (true)
    {
        for (int i = 0; i < r; i++)
        {
            int dt = 0;
            pos++;
            if (pos == 2 * p)
            {
                pos = 0;
            }
            while (arr[pos] == 0 || arr[pos] == -1)
            {
                dt++;
                pos++;
                if (pos == 2 * p)
                {
                    pos = 0;
                }
                if (dt == p * 2)
                {
                    fin = true;
                    break;
                }
            }
        }
        if (fin)
        {
            break;
        }
        if (arr[pos] == 3)
        {
            arr[pos] = 2;
            arr[pos + 1] = 2;
            pos--;
            if(pos <0){
                pos = p+p-1;
            }
        }else if (arr[pos] == 2)
        {
            arr[pos] = 1;
        }
        else if (arr[pos] == 1)
        {
            arr[pos] = -1;
            v.push_back(pos);
        }
        
        
    }
    cout<<v.back()/2 +1;

    return 0;
}