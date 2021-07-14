#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while (true)
    {
        cin >> a >> b;
        if (a == 0 || b == 0)
        {
            break;
        }

        string sa = to_string(a);
        string sb = to_string(b);

        int width = 5 + sa.length() * 4;
        int height = 5 + sb.length() * 4;
        char arr[height][width];


        // perform calculations here
        int calres[sb.length()][sa.length()];
        for (int i = 0; i < sa.length(); i++)
        {
            for (int j = 0; j < sb.length(); j++)
            {
                int isa = int(sa[i]) - int('0');
                int isb = int(sb[j]) - int('0');

                calres[j][i] = isa*isb;
            }
            
        }
        
        // zuhyou kakimasu
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (j == 0 || j == width - 1)
                {
                    arr[i][j] = '|';
                }
                else if (i == 0 || i == height - 1)
                {
                    arr[i][j] = '-';
                }
                else
                {
                    arr[i][j] = ' ';
                }
            }
        }

        for (int i = 0; i < sa.length(); i++)
        {
            arr[1][4+i*4] = sa[i];
        }
        

        for (int i = 0; i < sb.length(); i++)
        {
            arr[4+i*4][width-2]=sb[i];
            for (int j = 0; j < sa.length(); j++)
            {
                // slots in vertical flex direction
                arr[2 + i * 4][2 + j * 4] = '+';
                arr[3 + i * 4][2 + j * 4] = '|';
                arr[4 + i * 4][2 + j * 4] = '|';
                arr[5 + i * 4][2 + j * 4] = '|';
                arr[2 + i * 4][3 + j * 4] = '-';
                arr[2 + i * 4][4 + j * 4] = '-';
                arr[2 + i * 4][5 + j * 4] = '-';

                if(calres[i][j] < 10){
                    arr[3 + i * 4][3 + j * 4] = '0';
                    arr[5 + i * 4][5 + j * 4] = char(calres[i][j] + int('0'));
                }else{
                    arr[3 + i * 4][3 + j * 4] = to_string(calres[i][j])[0];
                    arr[5 + i * 4][5 + j * 4] = to_string(calres[i][j])[1];
                }
                
                arr[4 + i * 4][4 + j * 4] = '/';
                arr[3 + i * 4][5 + j * 4] = '/';
                arr[5 + i * 4][3 + j * 4] = '/';

                // tokubetsu no baai
                if (j == sa.length() - 1)
                {
                    arr[2 + i * 4][2 + j * 4 + 4] = '+';
                    arr[3 + i * 4][2 + j * 4 + 4] = '|';
                    arr[4 + i * 4][2 + j * 4 + 4] = '|';
                    arr[5 + i * 4][2 + j * 4 + 4] = '|';
                }
                if (i == sb.length() - 1)
                {
                    arr[2 + i * 4 + 4][2 + j * 4] = '+';
                    arr[2 + i * 4 + 4][3 + j * 4] = '-';
                    arr[2 + i * 4 + 4][4 + j * 4] = '-';
                    arr[2 + i * 4 + 4][5 + j * 4] = '-';
                }
            }
        }

        arr[height - 3][width - 3] = '+';
        arr[0][0] = '+';
        arr[0][width - 1] = '+';
        arr[height - 1][width - 1] = '+';
        arr[height - 1][0] = '+';

        // adds multiplication result

        int res = a*b;
        string sres = to_string(res);

        for (int i = 0; i < sres.length(); i++)
        {
            if(i >= sa.length()){
                arr[height-4*(i-sa.length())-4][1] = sres[sres.length()-1-i]; 
                arr[height-4*(i-sa.length())-2][1] = '/'; 
                continue;  
            }
            arr[height-2][width-6-i*4] = sres[sres.length()-1-i];
            if( i == 0 ){
                continue;
            }
            arr[height-2][width-4-i*4] = '/';
        }
        






        // shutsuryoku shimasu
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                cout << arr[i][j];
            }
            cout << '\n';
        }
    }

    return 0;
}