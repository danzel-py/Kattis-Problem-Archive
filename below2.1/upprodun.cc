#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string str[n];
    string base;
    for (int j = 0; j < m / n; j++)
    {
        base+="*";
    }
    for (int i = 0; i < n; i++)
    {
        str[i] = base;
    }
    for (int k = 0; k < m%n; k++)
    {
        str[k] += "*";
    }
    for (int l = 0; l < n; l++)
    {
        cout<<str[l]<<'\n';
    }
    
    

    return 0;
}