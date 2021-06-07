#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> getvalue;
    getvalue[33] = 9;
    getvalue[34] = 6;
    getvalue[35] = 24;
    getvalue[36] = 29;
    getvalue[37] = 22;
    getvalue[38] = 24;
    getvalue[39] = 3;
    getvalue[40] = 12;
    getvalue[41] = 12;
    getvalue[42] = 17;
    getvalue[43] = 13;
    getvalue[44] = 7;
    getvalue[45] = 7;
    getvalue[46] = 4;
    getvalue[47] = 10;
    getvalue[48] = 22;
    getvalue[49] = 19;
    getvalue[50] = 22;
    getvalue[51] = 23;
    getvalue[52] = 21;
    getvalue[53] = 27;
    getvalue[54] = 26;
    getvalue[55] = 16;
    getvalue[56] = 23;
    getvalue[57] = 26;
    getvalue[58] = 8;
    getvalue[59] = 11;
    getvalue[60] = 10;
    getvalue[61] = 14;
    getvalue[62] = 10;
    getvalue[63] = 15;
    getvalue[64] = 32;
    getvalue[65] = 24;
    getvalue[66] = 29;
    getvalue[67] = 20;
    getvalue[68] = 26;
    getvalue[69] = 26;
    getvalue[70] = 20;
    getvalue[71] = 25;
    getvalue[72] = 25;
    getvalue[73] = 18;
    getvalue[74] = 18;
    getvalue[75] = 21;
    getvalue[76] = 16;
    getvalue[77] = 28;
    getvalue[78] = 25;
    getvalue[79] = 26;
    getvalue[80] = 23;
    getvalue[81] = 31;
    getvalue[82] = 28;
    getvalue[83] = 25;
    getvalue[84] = 16;
    getvalue[85] = 23;
    getvalue[86] = 19;
    getvalue[87] = 26;
    getvalue[88] = 18;
    getvalue[89] = 14;
    getvalue[90] = 22;
    getvalue[91] = 18;
    getvalue[92] = 10;
    getvalue[93] = 18;
    getvalue[94] = 7;
    getvalue[95] = 8;
    getvalue[96] = 3;
    getvalue[97] = 23;
    getvalue[98] = 25;
    getvalue[99] = 17;
    getvalue[100] = 25;
    getvalue[101] = 23;
    getvalue[102] = 18;
    getvalue[103] = 30;
    getvalue[104] = 21;
    getvalue[105] = 15;
    getvalue[106] = 20;
    getvalue[107] = 21;
    getvalue[108] = 16;
    getvalue[109] = 22;
    getvalue[110] = 18;
    getvalue[111] = 20;
    getvalue[112] = 25;
    getvalue[113] = 25;
    getvalue[114] = 13;
    getvalue[115] = 21;
    getvalue[116] = 17;
    getvalue[117] = 17;
    getvalue[118] = 13;
    getvalue[119] = 19;
    getvalue[120] = 13;
    getvalue[121] = 24;
    getvalue[122] = 19;
    getvalue[123] = 18;
    getvalue[124] = 12;
    getvalue[125] = 18;
    getvalue[126] = 9;
    string str;
    int sum;
    while (getline(cin,str))
    {
        sum = 0;
        for (int i = 0; i < str.length(); i++)
        {
            sum += getvalue[int(str[i])];
        }
        cout<<sum<<'\n';
        
    }
    
    return 0;
}