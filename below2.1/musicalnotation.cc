#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int times;
    string str;
    string arr[14] = {"G", "F", "E", "D", "C", "B", "A", "g", "f", "e", "d", "c", "b", "a"};
    for (int i = 0; i < 14; i++)
    {
        arr[i] += ": ";
    }

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str[1] == '\0')
        {
            str[0] == 'G' ? arr[0] += "*" : arr[0] += " ";
            str[0] == 'F' ? arr[1] += "*" : arr[1] += "-";
            str[0] == 'E' ? arr[2] += "*" : arr[2] += " ";
            str[0] == 'D' ? arr[3] += "*" : arr[3] += "-";
            str[0] == 'C' ? arr[4] += "*" : arr[4] += " ";
            str[0] == 'B' ? arr[5] += "*" : arr[5] += "-";
            str[0] == 'A' ? arr[6] += "*" : arr[6] += " ";
            str[0] == 'g' ? arr[7] += "*" : arr[7] += "-";
            str[0] == 'f' ? arr[8] += "*" : arr[8] += " ";
            str[0] == 'e' ? arr[9] += "*" : arr[9] += "-";
            str[0] == 'd' ? arr[10] += "*" : arr[10] += " ";
            str[0] == 'c' ? arr[11] += "*" : arr[11] += " ";
            str[0] == 'b' ? arr[12] += "*" : arr[12] += " ";
            str[0] == 'a' ? arr[13] += "*" : arr[13] += "-";
        }
        else
        {
            times = stoi(str.substr(1));
            for (int p = 0; p < times; p++)
            {
                str[0] == 'G' ? arr[0] += "*" : arr[0] += " ";
                str[0] == 'F' ? arr[1] += "*" : arr[1] += "-";
                str[0] == 'E' ? arr[2] += "*" : arr[2] += " ";
                str[0] == 'D' ? arr[3] += "*" : arr[3] += "-";
                str[0] == 'C' ? arr[4] += "*" : arr[4] += " ";
                str[0] == 'B' ? arr[5] += "*" : arr[5] += "-";
                str[0] == 'A' ? arr[6] += "*" : arr[6] += " ";
                str[0] == 'g' ? arr[7] += "*" : arr[7] += "-";
                str[0] == 'f' ? arr[8] += "*" : arr[8] += " ";
                str[0] == 'e' ? arr[9] += "*" : arr[9] += "-";
                str[0] == 'd' ? arr[10] += "*" : arr[10] += " ";
                str[0] == 'c' ? arr[11] += "*" : arr[11] += " ";
                str[0] == 'b' ? arr[12] += "*" : arr[12] += " ";
                str[0] == 'a' ? arr[13] += "*" : arr[13] += "-";
            }
        }
        if (i != n - 1)
        {
            arr[0] += " ";
            arr[1] += "-";
            arr[2] += " ";
            arr[3] += "-";
            arr[4] += " ";
            arr[5] += "-";
            arr[6] += " ";
            arr[7] += "-";
            arr[8] += " ";
            arr[9] += "-";
            arr[10] += " ";
            arr[11] += " ";
            arr[12] += " ";
            arr[13] += "-";
        }
    }
    for (int i = 0; i < 14; i++)
    {
        cout << arr[i] << '\n';
    }

    return 0;
}