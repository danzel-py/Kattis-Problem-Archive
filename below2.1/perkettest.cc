#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int n = 4;

    for (int b = 0; b < (1 << n); b++)
    {
        
        bitset<4> foo = bitset<4>(b);
        cout<<foo[1]<<'\n';
        
    }
    return 0;
}