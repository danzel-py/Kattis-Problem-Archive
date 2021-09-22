#include <bitset>
#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    string strx = bitset<32>(x).to_string();
    int pos = strx.find_first_of('1');
    strx = strx.substr(pos);
    int siz = strx.length();
    string strxlef = bitset<32>(x<<1).to_string();
    strxlef = strxlef.substr(pos);
    bitset<32> xori = bitset<32>(strx);
    bitset<32> xlef = bitset<32>(strxlef);
   int res = (xori^xlef).to_ulong();
   cout<<res;
    return 0;
}