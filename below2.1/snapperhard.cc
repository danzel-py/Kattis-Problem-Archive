#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int nintendo, times;
        cin >> nintendo >> times;


            cout<<"Case #"<<i+1<<": "<<(((times+1)%(int)pow(2,nintendo) == 0)? "ON":"OFF") <<'\n';
        

    }

    return 0;
}