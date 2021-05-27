#include <iostream>
using namespace std;

int main(){
    string aw;
    getline(cin,aw);
    if(aw == "DEC 25" || aw == "OCT 31"){
        cout<<"yup";
    }
    else{
        cout<<"nope";
    }
    return 0;
}