#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==1){
        cout<<"single 1";
        return 0;
    }
    if(n==2){
        cout<<"single 2";
        return 0;
    }
    string ast[] = {"single ", "double ", "triple "};

    for (int i = 1; i <= 3; i++)
    {
        for (int ii = 1; ii <= 20; ii++)
        {

            for (int j = 1; j <= 3; j++)
            {
                for (int jj = 1; jj <= 20; jj++)
                {

                    for (int k = 1; k <= 3; k++)
                    {
                        for (int kk = 1; kk <= 20; kk++)
                        {
                            if (i * ii + j * jj + k * kk == n)
                            {
                                cout << ast[i - 1] << ii << '\n';
                                cout << ast[j - 1] << jj << '\n';
                                cout << ast[k - 1] << kk << '\n';
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "impossible";

    return 0;
}