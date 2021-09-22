#include <iostream>
#include <utility>
#include <map>
#include <algorithm>
using namespace std;

bool sortsc(const pair<string, pair<int, string> > &p1, const pair<string, pair<int, string> > &p2)
{
    return p1.second.first > p2.second.first;
}

int main()
{
    int n;
    cin >> n;
    pair<string, pair<int, string> > arr[n];
    map<string, int> bdtosc;
    string aqq[n];
    string name, bd;
    int score;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> score >> bd;
        if (bdtosc[bd] < score)
        {
            bdtosc[bd] = score;
        }
        arr[i].first = name;
        arr[i].second = make_pair(score, bd);
    }
    sort(arr, arr + n, sortsc);
    int c = 0;
    for (int j = 0; j < n; j++)
    {
        if(bdtosc[arr[j].second.second] == arr[j].second.first){
            aqq[c] = arr[j].first;
            c++;
        }
    }
    sort(aqq, aqq+c);
    cout<<c<<'\n';
    for (int k = 0; k < c; k++)
    {
        cout<<aqq[k]<<'\n';
    }
    
    

    return 0;
}