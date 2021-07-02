#include <iostream>
using namespace std;

int main()
{
    string arr[12] = {"Jan",
                      "Feb",
                      "Mar",
                      "Apr",
                      "May",
                      "Jun",
                      "Jul",
                      "Aug",
                      "Sep",
                      "Oct",
                      "Nov",
                      "Dec"};
    int tc;
    int tgl;
    string m;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        cin >> tgl >> m;

        if (arr[0] == m)
        {

            if (tgl < 21)
            {
                cout << "Capricorn";
            }
            else
            {
                cout << "Aquarius";
            }
        }

        else if (arr[1] == m)
        {

            if (tgl < 20)
            {
                cout << "Aquarius";
            }
            else
            {
                cout << "Pisces";
            }
        }

        else if (arr[2] == m)
        {

            if (tgl < 21)
            {
                cout << "Pisces";
            }
            else
            {
                cout << "Aries";
            }
        }

        else if (arr[3] == m)
        {

            if (tgl < 21)
            {
                cout << "Aries";
            }
            else
            {
                cout << "Taurus";
            }
        }

        else if (arr[4] == m)
        {

            if (tgl < 21)
            {
                cout << "Taurus";
            }
            else
            {
                cout << "Gemini";
            }
        }

        else if (arr[5] == m)
        {
            if (tgl < 22)
            {
                cout << "Gemini";
            }
            else
            {
                cout << "Cancer";
            }
        }

        else if (arr[6] == m)
        {

            if (tgl < 23)
            {
                cout << "Cancer";
            }
            else
            {
                cout << "Leo";
            }
        }

        else if (arr[7] == m)
        {
            if (tgl < 23)
            {
                cout << "Leo";
            }
            else
            {
                cout << "Virgo";
            }
        }

        else if (arr[8] == m)
            if (tgl < 22)
            {
                cout << "Virgo";
            }
            else
            {
                cout << "Libra";
            }

        else if (arr[9] == m)
        {

            if (tgl < 23)
            {
                cout << "Libra";
            }
            else
            {
                cout << "Scorpio";
            }
        }

        else if (arr[10] == m)
        {

            if (tgl < 23)
            {
                cout << "Scorpio";
            }
            else
            {
                cout << "Sagittarius";
            }
        }

        else if (m == arr[11])
        {

            if (tgl < 22)
            {
                cout << "Sagittarius";
            }
            else
            {
                cout << "Capricorn";
            }
        }

        cout << '\n';
    }

    return 0;
}