#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    string st;
    while (true)
    {
        getline(cin, st);
        if (st == "end")
        {
            cout << st<<'\n';
            return 0;
        }
        char ar[7][29];
        // memset(ar, ' ', sizeof(ar));
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 29; j++)
            {
                ar[i][j] = ' ';
            }
            
        }
        
        int pos = 0;
        for (int i = 0; i < 5; i++)
        {
            if (i == 2)
            {
                ar[2][pos] = 'o';
                ar[4][pos] = 'o';
                pos += 3;

                continue;
            }
            if (st[i] == '1')
            {
                // ar[0][pos] = '+';
                // ar[1][pos] = '|';
                // ar[2][pos] = '|';
                // ar[3][pos] = '+';
                // ar[4][pos] = '|';
                // ar[5][pos] = '|';
                // ar[6][pos] = '+';


                // ar[0][pos+1] = '-';
                // ar[0][pos+2] = '-';
                // ar[0][pos+3] = '-';

                // ar[3][pos+1] = '-';
                // ar[3][pos+2] = '-';
                // ar[3][pos+3] = '-';

                // ar[6][pos+1] = '-';
                // ar[6][pos+2] = '-';
                // ar[6][pos+3] = '-';


                ar[0][pos + 4] = '+';
                ar[1][pos + 4] = '|';
                ar[2][pos + 4] = '|';
                ar[3][pos + 4] = '+';
                ar[4][pos + 4] = '|';
                ar[5][pos + 4] = '|';
                ar[6][pos + 4] = '+';
                
            }
            else if (st[i] == '2')
            {
                ar[0][pos] = '+';
                // ar[1][pos] = '|';
                // ar[2][pos] = '|';
                ar[3][pos] = '+';
                ar[4][pos] = '|';
                ar[5][pos] = '|';
                ar[6][pos] = '+';


                ar[0][pos+1] = '-';
                ar[0][pos+2] = '-';
                ar[0][pos+3] = '-';

                ar[3][pos+1] = '-';
                ar[3][pos+2] = '-';
                ar[3][pos+3] = '-';

                ar[6][pos+1] = '-';
                ar[6][pos+2] = '-';
                ar[6][pos+3] = '-';


                ar[0][pos + 4] = '+';
                ar[1][pos + 4] = '|';
                ar[2][pos + 4] = '|';
                ar[3][pos + 4] = '+';
                // ar[4][pos + 4] = '|';
                // ar[5][pos + 4] = '|';
                ar[6][pos + 4] = '+';
                
            }
            else 
            if (st[i] == '3')
            {
                ar[0][pos] = '+';
                // ar[1][pos] = '|';
                // ar[2][pos] = '|';
                ar[3][pos] = '+';
                // ar[4][pos] = '|';
                // ar[5][pos] = '|';
                ar[6][pos] = '+';


                ar[0][pos+1] = '-';
                ar[0][pos+2] = '-';
                ar[0][pos+3] = '-';

                ar[3][pos+1] = '-';
                ar[3][pos+2] = '-';
                ar[3][pos+3] = '-';

                ar[6][pos+1] = '-';
                ar[6][pos+2] = '-';
                ar[6][pos+3] = '-';


                ar[0][pos + 4] = '+';
                ar[1][pos + 4] = '|';
                ar[2][pos + 4] = '|';
                ar[3][pos + 4] = '+';
                ar[4][pos + 4] = '|';
                ar[5][pos + 4] = '|';
                ar[6][pos + 4] = '+';
                
            }
            
            else if (st[i] == '4')
            {
                ar[0][pos] = '+';
                ar[1][pos] = '|';
                ar[2][pos] = '|';
                ar[3][pos] = '+';
                // ar[4][pos] = '|';
                // ar[5][pos] = '|';
                // ar[6][pos] = '+';


                // ar[0][pos+1] = '-';
                // ar[0][pos+2] = '-';
                // ar[0][pos+3] = '-';

                ar[3][pos+1] = '-';
                ar[3][pos+2] = '-';
                ar[3][pos+3] = '-';

                // ar[6][pos+1] = '-';
                // ar[6][pos+2] = '-';
                // ar[6][pos+3] = '-';


                ar[0][pos + 4] = '+';
                ar[1][pos + 4] = '|';
                ar[2][pos + 4] = '|';
                ar[3][pos + 4] = '+';
                ar[4][pos + 4] = '|';
                ar[5][pos + 4] = '|';
                ar[6][pos + 4] = '+';
                
            }
            else if (st[i] == '5')
            {
                ar[0][pos] = '+';
                ar[1][pos] = '|';
                ar[2][pos] = '|';
                ar[3][pos] = '+';
                // ar[4][pos] = '|';
                // ar[5][pos] = '|';
                ar[6][pos] = '+';


                ar[0][pos+1] = '-';
                ar[0][pos+2] = '-';
                ar[0][pos+3] = '-';

                ar[3][pos+1] = '-';
                ar[3][pos+2] = '-';
                ar[3][pos+3] = '-';

                ar[6][pos+1] = '-';
                ar[6][pos+2] = '-';
                ar[6][pos+3] = '-';


                ar[0][pos + 4] = '+';
                // ar[1][pos + 4] = '|';
                // ar[2][pos + 4] = '|';
                ar[3][pos + 4] = '+';
                ar[4][pos + 4] = '|';
                ar[5][pos + 4] = '|';
                ar[6][pos + 4] = '+';
                
            }
            else if (st[i] == '6')
            {
                ar[0][pos] = '+';
                ar[1][pos] = '|';
                ar[2][pos] = '|';
                ar[3][pos] = '+';
                ar[4][pos] = '|';
                ar[5][pos] = '|';
                ar[6][pos] = '+';


                ar[0][pos+1] = '-';
                ar[0][pos+2] = '-';
                ar[0][pos+3] = '-';

                ar[3][pos+1] = '-';
                ar[3][pos+2] = '-';
                ar[3][pos+3] = '-';

                ar[6][pos+1] = '-';
                ar[6][pos+2] = '-';
                ar[6][pos+3] = '-';


                ar[0][pos + 4] = '+';
                // ar[1][pos + 4] = '|';
                // ar[2][pos + 4] = '|';
                ar[3][pos + 4] = '+';
                ar[4][pos + 4] = '|';
                ar[5][pos + 4] = '|';
                ar[6][pos + 4] = '+';
                
            }
            else if (st[i] == '7')
            {
                ar[0][pos] = '+';
                // ar[1][pos] = '|';
                // ar[2][pos] = '|';
                // ar[3][pos] = '+';
                // ar[4][pos] = '|';
                // ar[5][pos] = '|';
                // ar[6][pos] = '+';


                ar[0][pos+1] = '-';
                ar[0][pos+2] = '-';
                ar[0][pos+3] = '-';

                // ar[3][pos+1] = '-';
                // ar[3][pos+2] = '-';
                // ar[3][pos+3] = '-';

                // ar[6][pos+1] = '-';
                // ar[6][pos+2] = '-';
                // ar[6][pos+3] = '-';


                ar[0][pos + 4] = '+';
                ar[1][pos + 4] = '|';
                ar[2][pos + 4] = '|';
                ar[3][pos + 4] = '+';
                ar[4][pos + 4] = '|';
                ar[5][pos + 4] = '|';
                ar[6][pos + 4] = '+';
                
            }
            else if (st[i] == '8')
            {
                ar[0][pos] = '+';
                ar[1][pos] = '|';
                ar[2][pos] = '|';
                ar[3][pos] = '+';
                ar[4][pos] = '|';
                ar[5][pos] = '|';
                ar[6][pos] = '+';


                ar[0][pos+1] = '-';
                ar[0][pos+2] = '-';
                ar[0][pos+3] = '-';

                ar[3][pos+1] = '-';
                ar[3][pos+2] = '-';
                ar[3][pos+3] = '-';

                ar[6][pos+1] = '-';
                ar[6][pos+2] = '-';
                ar[6][pos+3] = '-';


                ar[0][pos + 4] = '+';
                ar[1][pos + 4] = '|';
                ar[2][pos + 4] = '|';
                ar[3][pos + 4] = '+';
                ar[4][pos + 4] = '|';
                ar[5][pos + 4] = '|';
                ar[6][pos + 4] = '+';
                
            }
            else if (st[i] == '9')
            {
                ar[0][pos] = '+';
                ar[1][pos] = '|';
                ar[2][pos] = '|';
                ar[3][pos] = '+';
                // ar[4][pos] = '|';
                // ar[5][pos] = '|';
                ar[6][pos] = '+';


                ar[0][pos+1] = '-';
                ar[0][pos+2] = '-';
                ar[0][pos+3] = '-';

                ar[3][pos+1] = '-';
                ar[3][pos+2] = '-';
                ar[3][pos+3] = '-';

                ar[6][pos+1] = '-';
                ar[6][pos+2] = '-';
                ar[6][pos+3] = '-';


                ar[0][pos + 4] = '+';
                ar[1][pos + 4] = '|';
                ar[2][pos + 4] = '|';
                ar[3][pos + 4] = '+';
                ar[4][pos + 4] = '|';
                ar[5][pos + 4] = '|';
                ar[6][pos + 4] = '+';
                
            }
            else if (st[i] == '0')
            {
                ar[0][pos] = '+';
                ar[1][pos] = '|';
                ar[2][pos] = '|';
                ar[3][pos] = '+';
                ar[4][pos] = '|';
                ar[5][pos] = '|';
                ar[6][pos] = '+';


                ar[0][pos+1] = '-';
                ar[0][pos+2] = '-';
                ar[0][pos+3] = '-';

                // ar[3][pos+1] = '-';
                // ar[3][pos+2] = '-';
                // ar[3][pos+3] = '-';

                ar[6][pos+1] = '-';
                ar[6][pos+2] = '-';
                ar[6][pos+3] = '-';


                ar[0][pos + 4] = '+';
                ar[1][pos + 4] = '|';
                ar[2][pos + 4] = '|';
                ar[3][pos + 4] = '+';
                ar[4][pos + 4] = '|';
                ar[5][pos + 4] = '|';
                ar[6][pos + 4] = '+';
                
            }
            pos += 7;
        }

        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 29; j++)
            {
                cout << ar[i][j];
            }
            cout << '\n';
        }
        cout<<"\n\n";
    }

    return 0;
}