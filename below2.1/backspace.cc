#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> wow;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '<')
        {
            if (!wow.empty())
            {
                wow.pop();
            }
        }
        else
        {
            wow.push(s[i]);
        }
    }
    if (!wow.empty())
    {
        int sad = wow.size();   
        char qq[sad];
        for (int i = sad - 1; i > -1; i--)
        {
            qq[i] = wow.top();
            wow.pop();
        }
    for (int i = 0; i < sad; i++)
    {
        cout<<qq[i];
    }
    
    }

    return 0;
}