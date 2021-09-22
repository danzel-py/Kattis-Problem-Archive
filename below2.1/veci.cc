#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str;
    int res = 0;
    cin>>str;
    int init = stoi(str);
    sort(str.begin(), str.end());
    while (next_permutation(str.begin(),str.end())){
        if(stoi(str) > init){
            cout<<str;
            return 0;
        }
    }
    cout<<res;
    

    
    return 0;
}