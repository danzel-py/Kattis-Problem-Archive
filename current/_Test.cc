#include <iostream>
using namespace std;

string draw(string w){
    w += "w";
    return w;
}

int main(){
    string a  = "qq";
    a = draw(a);
    cout<<a;
    return 0;
}