#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int took;
    int categ;
    int klas, req, klasnum,ct;
    while (true)
    {
        cin >> took;
        if (took == 0)
        {
            break;
        }
        cin >> categ;
        int tooklist[took];
        for (int i = 0; i < took; i++)
        {
            cin >> tooklist[i];
        }
        // line++;
        bool isok = true;
        for (int i = 0; i < categ; i++)
        {
            cin >> klas >> req;
            ct = 0;
            for (int j = 0; j < klas; j++)
            {
                cin >> klasnum;
                if(find(tooklist,tooklist+took,klasnum) != (tooklist+took)){
                    ct++;
                }
            }
            if (ct<req){
                isok=false;
            }
        }
        if(!isok){
            cout<<"no\n";
        }
        else{
            cout<<"yes\n";
        }
    }

    return 0;
}