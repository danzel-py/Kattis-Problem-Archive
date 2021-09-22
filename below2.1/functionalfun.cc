#include <iostream>
#include <sstream>
#include <vector>
#include <map>
using namespace std;

// gg getline eof;

int main()
{
    string s1, s2;
    string foo, bar;
    string d, c;
    vector<string> dom;
    vector<string> codom;
    map<string, int> mapcount;
    map<string, int> domc;
    while (getline(cin, s1))
    {
        bool inj = true;
        bool surj = true;
        bool func = true;
        mapcount.clear();
        domc.clear();
        dom.clear();
        codom.clear();
        getline(cin, s2);
        stringstream ss1(s1);
        stringstream ss2(s2);
        ss1 >> foo;
        ss2 >> bar;
        while (ss1.rdbuf()->in_avail() != 0)
        {
            ss1 >> foo;
            dom.push_back(foo);
        }
        while (ss2.rdbuf()->in_avail() != 0)
        {
            ss2 >> foo;
            codom.push_back(foo);
        }
        int tc;
        cin >> tc;
        for (int i = 0; i < tc; i++)
        {
            cin >> d >> foo >> c;
            mapcount[c]++;
            domc[d]++;
            if (domc[d] > 1)
            {
                func = false;
            }
            if (mapcount[c] > 1)
            {
                inj = false;
            }
        }
        for (int i = 0; i < codom.size(); i++)
        {
            if (mapcount[codom[i]] == 0)
            {
                surj = false;
                break;
            }
        }
        if (!func)
        {
            cout << "not a function";
        }
        else
        {
            if (!inj && !surj)
            {
                cout << "neither injective nor surjective";
            }
            else if (!inj)
            {
                cout << "surjective";
            }
            else if (!surj)
            {
                cout << "injective";
            }
            else
            {
                cout << "bijective";
            }
        }
        cout << '\n';
        cin.ignore(256,'\n');
    }
    return 0;
}