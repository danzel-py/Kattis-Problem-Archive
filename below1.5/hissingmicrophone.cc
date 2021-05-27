#include <iostream>
using namespace std;

int main(){
    string wow;
    cin>>wow;
    int a = wow.length();
    bool wowzie = false;
    for(int i = 1; i < a; i++){
        if(wow[i] == 's' && wow[i-1] == 's'){
            wowzie = true;
        }
    }
    string res = wowzie? "hiss":"no hiss";
    cout<<res;
    return 0;
}