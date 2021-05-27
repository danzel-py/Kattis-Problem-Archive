#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    string charmor;
    while (cin >> str)
    {
        string morse = "";
        int arr[str.length()];
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'A')
                charmor = ".-";
            else if (str[i] == 'B')
                charmor = "-...";
            else if (str[i] == 'C')
                charmor = "-.-.";
            else if (str[i] == 'D')
                charmor = "-..";
            else if (str[i] == 'E')
                charmor = ".";
            else if (str[i] == 'F')
                charmor = "..-.";
            else if (str[i] == 'G')
                charmor = "--.";
            else if (str[i] == 'H')
                charmor = "....";
            else if (str[i] == 'I')
                charmor = "..";
            else if (str[i] == 'J')
                charmor = ".---";
            else if (str[i] == 'K')
                charmor = "-.-";
            else if (str[i] == 'L')
                charmor = ".-..";
            else if (str[i] == 'M')
                charmor = "--";
            else if (str[i] == 'N')
                charmor = "-.";
            else if (str[i] == 'O')
                charmor = "---";
            else if (str[i] == 'P')
                charmor = ".--.";
            else if (str[i] == 'Q')
                charmor = "--.-";
            else if (str[i] == 'R')
                charmor = ".-.";
            else if (str[i] == 'S')
                charmor = "...";
            else if (str[i] == 'T')
                charmor = "-";
            else if (str[i] == 'U')
                charmor = "..-";
            else if (str[i] == 'V')
                charmor = "...-";
            else if (str[i] == 'W')
                charmor = ".--";
            else if (str[i] == 'X')
                charmor = "-..-";
            else if (str[i] == 'Y')
                charmor = "-.--";
            else if (str[i] == 'Z')
                charmor = "--..";
            else if (str[i] == '_')
                charmor = "..--";
            else if (str[i] == ',')
                charmor = ".-.-";
            else if (str[i] == '.')
                charmor = "---.";
            else if (str[i] == '?')
                charmor = "----";
            morse += charmor;
            arr[i] = charmor.length();
        }
        reverse(arr, arr + str.length());
        int pos = 0;
        for (int j = 0; j < str.length(); j++)
        {
            charmor = morse.substr(pos,arr[j]);
            pos += arr[j];
            if(charmor == ".-") cout<<'A';
            else if(charmor == "-...") cout<<'B';
            else if(charmor == "-.-.") cout<<'C';
            else if(charmor == "-..") cout<<'D';
            else if(charmor == ".") cout<<'E';
            else if(charmor == "..-.") cout<<'F';
            else if(charmor == "--.") cout<<'G';
            else if(charmor == "....") cout<<'H';
            else if(charmor == "..") cout<<'I';
            else if(charmor == ".---") cout<<'J';
            else if(charmor == "-.-") cout<<'K';
            else if(charmor == ".-..") cout<<'L';
            else if(charmor == "--") cout<<'M';
            else if(charmor == "-.") cout<<'N';
            else if(charmor == "---") cout<<'O';
            else if(charmor == ".--.") cout<<'P';
            else if(charmor == "--.-") cout<<'Q';
            else if(charmor == ".-.") cout<<'R';
            else if(charmor == "...") cout<<'S';
            else if(charmor == "-") cout<<'T';
            else if(charmor == "..-") cout<<'U';
            else if(charmor == "...-") cout<<'V';
            else if(charmor == ".--") cout<<'W';
            else if(charmor == "-..-") cout<<'X';
            else if(charmor == "-.--") cout<<'Y';
            else if(charmor == "--..") cout<<'Z';
            else if(charmor == "..--") cout<<'_';
            else if(charmor == ".-.-") cout<<',';
            else if(charmor == "---.") cout<<'.';
            else if(charmor == "----") cout<<'?';
        }
        cout<<'\n';
        
    }
    return 0;
}