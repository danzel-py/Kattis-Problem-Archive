#include <iostream>
#include <regex>
using namespace std;

int main(){
    string a;
    cin >> a;
    
    regex regexp("[^A-Z]");
    cout << regex_replace(a,regexp,"");
    return 0;
}