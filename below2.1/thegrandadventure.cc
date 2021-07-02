#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string sym;
    for (int j = 0; j < n; j++)
    {
        bool fail = false;
        stack<char> stak;
        cin >> sym;
        for (int i = 0; i < sym.length(); i++)
        {
            if (sym[i] == '$')
            {
                stak.push('M');
            }
            else if (sym[i] == '|')
            {
                stak.push('I');
            }
            else if (sym[i] == '*')
            {
                stak.push('G');
            }
            else if (!stak.empty())
            {
                if (sym[i] == 'b')
                {
                    if (stak.top() == 'M')
                    {
                        stak.pop();
                    }
                    else
                    {
                        fail = true;
                    }
                }
                else if (sym[i] == 't')
                {
                    if (stak.top() == 'I')
                    {
                        stak.pop();
                    }
                    else
                    {
                        fail = true;
                    }
                }
                else if (sym[i] == 'j')
                {
                    if (stak.top() == 'G')
                    {
                        stak.pop();
                    }
                    else
                    {
                        fail = true;
                    }
                }
            }
            else if (stak.empty() && sym[i]!= '.')
            {
                fail = true;
            }
            
        }

        if (stak.empty() && fail == false)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << '\n';
    }
    return 0;
}