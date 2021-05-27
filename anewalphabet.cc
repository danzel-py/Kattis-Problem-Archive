#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    string mem;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (int i = 0; i < str.length(); i++)
    {
        switch (int(str[i]))
        {
        case 97:
            mem = "@";
            break;
        case 98:
            mem = "8";
            break;
        case 99:
            mem = "(";
            break;
        case 100:
            mem = "|)";
            break;
        case 101:
            mem = "3";
            break;
        case 102:
            mem = "#";
            break;
        case 103:
            mem = "6";
            break;
        case 104:
            mem = "[-]";
            break;
        case 105:
            mem = "|";
            break;
        case 106:
            mem = "_|";
            break;
        case 107:
            mem = "|<";
            break;
        case 108:
            mem = "1";
            break;
        case 109:
            mem = "[]\\/[]";
            break;
        case 110: 
            mem = "[]\\[]";
            break;
        case 111:
            mem = "0";
            break;
        case 112:
            mem = "|D";
            break;
        case 113:
            mem = "(,)";
            break;
        case 114:
            mem = "|Z";
            break;
        case 115:
            mem = "$";
            break;
        case 116:
            mem = "']['";
            break;
        case 117:
            mem = "|_|";
            break;
        case 118:
            mem = "\\/";
            break;
        case 119:
            mem = "\\/\\/";
            break;
        case 120:
            mem = "}{";
            break;
        case 121:
            mem = "`/";
            break;
        case 122:
            mem = "2";
            break;
        default:
            mem = str[i];
            break;
        }
        cout<<mem;
    }

    return 0;
}