#include <stack>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin.ignore(1000,'\n');
    getline(cin, str);
    stack<int> mystack;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
        {
            mystack.push(1);
        }
        else if (str[i] == '[')
        {
            mystack.push(2);
        }
        else if (str[i] == '{')
        {
            mystack.push(3);
        }
        else if (str[i] == ')')
        {
            if (mystack.empty())
            {
                cout << ')' << ' ' << i;
                return 0;
            }
            else
            {
                if (mystack.top() != 1)
                {
                    cout << ')' << ' ' << i;
                    return 0;
                }
                mystack.pop();
            }
        }
        else if (str[i] == ']')
        {
            if (mystack.empty())
            {
                cout << ']' << ' ' << i;
                return 0;
            }
            else
            {
                if (mystack.top() != 2)
                {
                    cout << ']' << ' ' << i;
                    return 0;
                }
                mystack.pop();
            }
        }
        else if (str[i] == '}')
        {
            if (mystack.empty())
            {
                cout << '}' << ' ' << i;
                return 0;
            }
            else
            {
                if (mystack.top() != 3)
                {
                    cout << '}' << ' ' << i;
                    return 0;
                }
                mystack.pop();
            }
        }
    }
    cout<<"ok so far";

    return 0;
}