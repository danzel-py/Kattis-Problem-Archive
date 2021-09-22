#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string arr[5];
    while (true)
    {
        double supercal = 0;
        double superf = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
            if (arr[0] == "-")
            {
                return 0;
            }
        }

        // 1st computation
        double cf = 0, ctot = 0;

        double pcf = 0, pctot = 0;
        for (int i = 0; i < 5; i++)
        {
            if (arr[i][arr[i].length() - 1] == '%')
            {
                pctot += stoi(arr[i].substr(0, arr[i].length() - 1));
                if (i == 0)
                {
                    pcf += stoi(arr[i].substr(0, arr[i].length() - 1));
                }
            }
            else
            {
                if (arr[i][arr[i].length() - 1] == 'g')
                {
                    if (i == 0)
                    {
                        cf += stoi(arr[i].substr(0, arr[i].length() - 1)) * 9;
                        ctot += stoi(arr[i].substr(0, arr[i].length() - 1)) * 9;
                    }
                    else if (i == 4)
                    {
                        ctot += stoi(arr[i].substr(0, arr[i].length() - 1)) * 7;
                    }
                    else
                    {
                        ctot += stoi(arr[i].substr(0, arr[i].length() - 1)) * 4;
                    }
                }
                else
                {
                    if (i == 0)
                    {
                        cf += stoi(arr[i].substr(0, arr[i].length() - 1));
                    }
                    ctot += stoi(arr[i].substr(0, arr[i].length() - 1));
                }
            }
        }
        double r = ctot / (100.0 - pctot);
        for (int i = 0; i < 5; i++)
        {
            if (arr[i][arr[i].length() - 1] == '%')
            {
                ctot += stoi(arr[i].substr(0, arr[i].length() - 1)) * r;
                if (i == 0)
                {
                    cf += stoi(arr[i].substr(0, arr[i].length() - 1)) * r;
                }
            }
        }
        superf += cf;
        supercal += ctot;

        while (true)
        {
            cf = ctot = pcf = pctot = 0;
            cin >> arr[0];
            if (arr[0] == "-")
            {
                break;
            }
            for (int i = 1; i < 5; i++)
            {
                cin >> arr[i];
            }
            for (int i = 0; i < 5; i++)
            {
                if (arr[i][arr[i].length() - 1] == '%')
                {
                    pctot += stoi(arr[i].substr(0, arr[i].length() - 1));
                    if (i == 0)
                    {
                        pcf += stoi(arr[i].substr(0, arr[i].length() - 1));
                    }
                }
                else
                {
                    if (arr[i][arr[i].length() - 1] == 'g')
                    {
                        if (i == 0)
                        {
                            cf += stoi(arr[i].substr(0, arr[i].length() - 1)) * 9;
                            ctot += stoi(arr[i].substr(0, arr[i].length() - 1)) * 9;
                        }
                        else if (i == 4)
                        {
                            ctot += stoi(arr[i].substr(0, arr[i].length() - 1)) * 7;
                        }
                        else
                        {
                            ctot += stoi(arr[i].substr(0, arr[i].length() - 1)) * 4;
                        }
                    }
                    else
                    {
                        if (i == 0)
                        {
                            cf += stoi(arr[i].substr(0, arr[i].length() - 1));
                        }
                        ctot += stoi(arr[i].substr(0, arr[i].length() - 1));
                    }
                }
            }
            double r = ctot / (100.0 - pctot);
            for (int i = 0; i < 5; i++)
            {
                if (arr[i][arr[i].length() - 1] == '%')
                {
                    ctot += stoi(arr[i].substr(0, arr[i].length() - 1)) * r;
                    if (i == 0)
                    {
                        cf += stoi(arr[i].substr(0, arr[i].length() - 1)) * r;
                    }
                }
            }
            superf += cf;
            supercal += ctot;
        }

        // finalres
        cout<<round(superf/supercal*100)<<"%\n";
    }

    return 0;
}