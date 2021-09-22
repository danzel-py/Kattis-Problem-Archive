#include <iostream>
#include <vector>
#include <set>
#include <utility>
#include <map>
using namespace std;
// ! sadly WA, tapi udah bisa
vector<vector<char>> v;
map<pair<int,int>, bool > map1;
int arr1[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int arr2[8] = {1, 0, -1, 1, -1, 1, 0, -1};

int main()
{
    int x, y;
    char dummy;
    cin >> x >> y;
    vector<char> foo;

    // * With border
    x += 2;
    y += 2;
    for (int j = 0; j < y; j++)
    {
        foo.push_back('.');
    }
    v.push_back(foo);
    foo.clear();

    for (int i = 0; i < x - 2; i++)
    {
        foo.push_back('.');
        for (int j = 0; j < y - 2; j++)
        {
            cin >> dummy;
            foo.push_back(dummy);
        }
        foo.push_back('.');
        v.push_back(foo);
        foo.clear();
    }
    for (int j = 0; j < y; j++)
    {
        foo.push_back('.');
    }
    v.push_back(foo);

    // * all input done, now place Mirko

    int surroundC;
    int mirkoI = 1, mirkoJ =1 ;
    int maxx = 0;
    for (int i = 1; i < x-1; i++)
    {
        for (int j = 1; j < y-1; j++)
        {
            if (v[i][j] == '.')
            {
                surroundC = 0;
                for (int k = 0; k < 8; k++)
                {
                    if (v[i + arr1[k]][j + arr2[k]] == 'o')
                    {
                        surroundC++;
                    }
                }
                maxx = max(maxx, surroundC);
            }
        }
    }


    // * handshake
    int c = 0;
    int a,b,reala;

    for (int i = 1; i < x-1; i++)
    {
        for (int j = 1; j < y-1; j++)
        {

            if (v[i][j] == 'o')
            {
                for (int k = 0; k < 8; k++)
                {
                    if (v[i + arr1[k]][j + arr2[k]] == 'o')
                    {
                        // ! HANDSHAKE
                        a = i*(x+2501)+j;
                        b = (i+arr1[k])*(x+2501)+j+arr2[k];
                        reala = max(a,b);
                        b = min(a,b);

                        if(!map1[make_pair(reala,b)]){
                            map1[make_pair(reala,b)] = true;
                            c++;
                        }
                        
                    }
                }
            }
        }
    }

    

    
    

    cout << c+maxx;

    return 0;
}