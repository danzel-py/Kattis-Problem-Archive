#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    string binary = bitset<64>(n).to_string();
    for (int i = 0; i < binary.length(); i++){
        if(binary[i]=='1'){
            binary.erase(0,i);
        }
    }
    reverse(binary.begin(),binary.end());
    cout<<stoi(binary,0,2);
    
    return 0;
}