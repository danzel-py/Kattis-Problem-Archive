#include <iostream>
#include <map>
using namespace std;

int main(){
    int dum;
    map<string , int> getvalue;
    cin>>dum;
    string str;
    int num;
    while (cin>>str)
    {
        cin>>num;
        getvalue[str] = num;
    }
    for(auto const [key,val]:getvalue){
        cout<<"getvalue["<<int(key[0])<<"] = "<<val<<';'<<'\n';
    }
    return 0;
}