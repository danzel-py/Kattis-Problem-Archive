#include <algorithm>
#include <vector>
#include <utility>
#include <cmath>
#include <queue>
#include <iostream>
using namespace std;

// ! GGWP !!

int main()
{
    while (true)
    {
        priority_queue<pair<double, int> > pq;

        int city, ballot;
        double dummy;
        cin >> city >> ballot;
        if (city == -1)
        {
            break;
        }
        int arr[city];
        for (int i = 0; i < city; i++)
        {
            cin >> dummy;
            arr[i] = dummy;
            pq.push(make_pair(dummy, 1));
        }

        ballot -= city;
        int hematx = 0;

        while (ballot != 0)
        {
            ballot--;
            double fs = pq.top().first;
            int sc = pq.top().second;
            pq.pop();
            pq.push(make_pair(fs * sc / (sc + 1), sc + 1));
        }
        cout << ceil(pq.top().first)<<'\n';
    }

    return 0;
}