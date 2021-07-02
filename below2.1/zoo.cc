#include <iostream>
#include <sstream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n;
        int x = 1;
    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        string str;
        string anime;
        cin.ignore(10000, '\n');
        map<string, int> animecount;
        for (int i = 0; i < n; i++)
        {
            getline(cin, str);
            stringstream ss(str);
            while (ss.rdbuf()->in_avail() != 0)
            {
                ss >> anime;
            }
            transform(anime.begin(), anime.end(), anime.begin(), ::tolower);
            animecount[anime]++;
        }
        cout << "List " << x << ":\n";
        x++;
        for (auto const [key, value] : animecount)
        {
            cout << key << " | " << value << '\n';
        }
    }

    return 0;
}