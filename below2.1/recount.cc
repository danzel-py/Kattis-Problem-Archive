#include <map>
#include <iostream>
using namespace std;

int main(){
    string str;
        bool run = false;
        map<string,int> getcount;
        int maxx = 0;
        string stm;
    while(true){
        getline(cin,str);
        if(str == "***"){
            break;
        }
        getcount[str]++;
        if(getcount[str] == maxx){
            run = true;
        }
        else if(getcount[str] > maxx){
            maxx = getcount[str];
            stm = str;
            run = false;
        }

        
    }
    run? cout<<"Runoff!":cout<<stm;
    return 0;
}