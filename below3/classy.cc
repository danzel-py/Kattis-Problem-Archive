#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for (int k = 0; k < tc; k++)
    {
        int n;
        cin >> n;
        string name, kurasu, foo, daclass;
        pair<string, string> arr[n];
        int pos;
        for (int i = 0; i < n; i++)
        {
            cin >> name >> kurasu >> foo;
            arr[i].second = name.substr(0,name.length()-1);
            if (kurasu[0] == 'u')
            {
                daclass = "0";
                pos = 6;
            }
            else if (kurasu[0] == 'm')
            {
                daclass = "1";
                pos = 7;
            }
            else
            {
                daclass = "2";
                pos = 6;
            }
            while (pos < kurasu.length() - 2)
            {
                if (kurasu[pos] == 'u')
                {
                    pos += 6;
                    daclass = "0"  + daclass;
                }
                else if (kurasu[pos] == 'm')
                {
                    pos += 7;
                    daclass = "1" + daclass ;
                }
                else
                {
                    pos += 6;
                    daclass = "2"  + daclass;
                }
            }
            while (daclass.length()<11){
                daclass += "1";
            }
            arr[i].first = daclass;
        }
        sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i].second<<' '<<arr[i].first<<'\n';
        }
        
        cout<<"==============================\n";
    }


    return 0;
}