#include <iostream>
#include <iomanip>
#include <utility>
// idk what went wrong fork it just gonna move on;
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum;
    double min = 99999999;
    int ai,jei,kei,el;
    pair < string, pair<double, double> > arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second.first >> arr[i].second.second;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
                continue;
            for (int k = 0; k < 4; k++)
            {
                if (i == k || j == k)
                    continue;
                for (int l = 0; l < 4; l++)
                {
                    if (l == k || l == j || l == i)
                        continue;
                    sum = arr[i].second.first + arr[j].second.second + arr[k].second.second + arr[l].second.second;
                    if(sum<min){
                        min = sum;
                        ai = i;
                        jei = j;
                        kei = k;
                        el =l;
                    }
                }
            }
        }
    }
    cout<<fixed<<setprecision(10)<<min<<'\n';
    cout<<arr[ai].first<<'\n';
    cout<<arr[jei].first<<'\n';
    cout<<arr[kei].first<<'\n';
    cout<<arr[el].first<<'\n';
    return 0;
}