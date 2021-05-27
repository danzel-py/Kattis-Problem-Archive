#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string sn, sm;
    cin>>sn>>sm;
    int c = 0;
    for (int i = m-n; i > 0; i--)
    {
        sn = char(int(sm[i])-int(sn[0])+97) + sn;
        while(int(sn[0])<97){
            sn[0] = char(int(sn[0])+26);
        }
        c++;
    }
    cout<<sn;
    return 0;
}