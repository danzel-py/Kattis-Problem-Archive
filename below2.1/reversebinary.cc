#include <algorithm>
#include <iostream>
#include <bitset>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str = bitset<32>(n).to_string();

    for (int i = 0; i <= 32; i++)
    {
        if(str[i] == '1'){
            str = str.substr(i);
            break;
        }
    }
    
    reverse(str.begin(),str.end());
    cout<<bitset<32>(str).to_ulong();
    


    
    return 0;
}