#include <iostream>
#include <regex>
#include <sstream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(11000, '\n');
    string str, strdict, animal, goes, sound;
    regex e("[A-Za-z]+");

        for (int i = 0; i < n; i++)
    {
        map<string, int> maptoanimal;
        getline(cin, str);
        while (true)
        {
            getline(cin, strdict);
            if (strdict == "what does the fox say?")
            {
                break;
            }
            stringstream ss(strdict);
            ss >> animal >> goes >> sound;
            maptoanimal[sound] = 1;
        }
        for (sregex_iterator i = sregex_iterator(str.begin(), str.end(), e); i != sregex_iterator(); ++i)
        {
            smatch m = *i;
            string a = m.str();
            if(maptoanimal[a]==0){
                cout<<a<<' ';
            }

        }
        cout<<'\n';
    }

    return 0;
}