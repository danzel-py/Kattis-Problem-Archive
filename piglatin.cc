#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string str;
    string wow;
    string star,en;
    int pos;
    bool svow;
    while (getline(cin, str))
    {
        stringstream ss(str);
        while (ss.rdbuf()->in_avail() != 0)
        {
            ss >> wow;
            if (wow[0] == 'a' || wow[0] == 'i' || wow[0] == 'u' || wow[0] == 'e' || wow[0] == 'o' || wow[0] == 'y')
            {
                svow = true;
            }
            else
            {
                svow = false;
            }

            if (svow)
            {
                cout << wow << "yay ";
            }
            else
            {
                for (int i = 1; i < wow.length(); i++)
                {
                    if (wow[i] == 'a' || wow[i] == 'i' || wow[i] == 'u' || wow[i] == 'e' || wow[i] == 'o' || wow[i] == 'y'){
                        pos = i;
                        break;
                    }
                }
                star = wow.substr(0,pos);
                en = wow.substr(pos);
                cout<<en<<star<<"ay ";

            }
        }
        cout<<'\n';
    }

    return 0;
}