#include <map>
#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

// simple substring problem

int main()
{
    int tc;
    int kes = 0;
    cin >> tc;
    while (tc--)
    {
        bool couted = false;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        kes++;
        cout << "Case #" << kes << ":\n";
        map<int, vector<int>> cter;
        for (int i = 1; i < (1 << 20); i++)
        {
            int sum = 0;
            string subs = bitset<20>(i).to_string();
            for (int j = 0; j < 20; j++)
            {
                if (subs[j] == '1')
                {
                    sum += arr[j];
                }
            }

            if (cter[sum].empty())
            {
                cter[sum].push_back(i);
            }
            else
            {
                int gg = cter[sum][0];
                string ggstr = bitset<20>(gg).to_string();
                for (int j = 0; j < 20; j++)
                {
                    if (subs[j] == '1')
                    {
                        cout << arr[j] <<' ';
                    }
                }
                cout<<'\n';
                for (int j = 0; j < 20; j++)
                {
                    if (ggstr[j] == '1')
                    {
                        cout << arr[j] <<' ';
                    }
                }
                cout<<'\n';
                couted = true;
                break;

            }
        }
        if(!couted){
            cout<<"Impossible\n";
        }

    }
    return 0;
}