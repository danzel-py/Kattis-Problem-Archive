#include <iostream>
#include <regex>
using namespace std;

int main(){
    string wow;
    cin >> wow;
    
    regex r("h(e+)y");
    smatch match;

    if(regex_search(wow,match,r)){
        /* match[1] consists of 'e's in hey */
        cout<<wow[0]<<match[1]<<match[1]<<wow.back();
    }
    return 0;
}