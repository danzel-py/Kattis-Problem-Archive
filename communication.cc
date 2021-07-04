#include <map>
#include <bitset>
#include <iostream>
using namespace std;

int gety(int x){
    string strx = bitset<32>(x).to_string();
    int pos = strx.find_first_of('1');
    strx = strx.substr(pos);
    int siz = strx.length();
    string strxlef = bitset<32>(x<<1).to_string();
    strxlef = strxlef.substr(pos);
    bitset<32> xori = bitset<32>(strx);
    bitset<32> xlef = bitset<32>(strxlef);
   int res = (xori^xlef).to_ulong();
   return res;
}

int main(){
    map<int,int>m;
    int tc;
    cin>>tc;
    for (int i = 1; i < 257; i++)
    {
        int w = i^(i<<1);
        if(w >256){
            w = gety(i);
        }
        m[w] = i;
    }
    int n;
    for (int i = 0; i < tc; i++)
    {
        cin>>n;
        cout<<m[n]<<' ';
    }
    
    return 0;
}