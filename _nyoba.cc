#include <iostream>
using namespace std;

int main(){
    string s("wow");
    cout<<s[0];
    if(s[4] == '\0'){
        cout<<"SAD";
    }
    cout<<s[1];
    return 0;
}