#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//WA 3rd(2nd)

int main()
{
    string comd;
    map<string, int> dict;
    string str;
    int num;
    int res;
    string nextstr;
    string resstr;
    char op;
    vector<string> vstr;
    while (cin >> comd)
    {
        if (comd == "def")
        {
            cin >> str >> num;
            dict[str] = num;
            vstr.push_back(str);
        }
        else if (comd == "calc")
        {
            cin >> str;
            bool falsey = false;
            if (find(vstr.begin(), vstr.end(), str) == vstr.end())
            {
                falsey = true;
            }
            res = dict[str];
            cout << str;
            while (true)
            {
                cin >> op;
                if (op == '=')
                {
                    break;
                }
                else
                {

                    cin >> nextstr;
                    if (find(vstr.begin(), vstr.end(), nextstr) == vstr.end())
                    {
                        falsey = true;
                    }
                    if (op == '+')
                    {
                        cout << " + ";
                        res += dict[nextstr];
                    }
                    else if (op == '-')
                    {
                        cout << " - ";
                        res -= dict[nextstr];
                    }
                }
                cout << nextstr;
            }
            resstr = "unknown";
            for (auto const [key, value] : dict)
            {
                if (value == res)
                {
                    resstr = key;
                }
            }
            if (falsey)
            {
                resstr = "unknown";
            }
            cout << " = " << resstr << '\n';
        }
        else if (comd == "clear")
        {
            dict.clear();
            vstr.clear();
        }
    }
    return 0;
}