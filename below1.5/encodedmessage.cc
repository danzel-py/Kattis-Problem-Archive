#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str, dum;
    int size,foo;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        size = sqrt(str.length());
        foo = size -1;
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout<<str[foo+k*size-j];
            }
            
        }
        cout<<'\n';
        
        
    }

    return 0;
}