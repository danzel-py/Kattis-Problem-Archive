#include <iostream>
#include <sstream>
#include <map>
using namespace std;

map<string,bool> map1;

int main(){
    int n;
    cin>>n;
    getchar();
    string raw;
    bool falsey = false;
    int indx  = 0;
    for (int i = 0; i < n; i++)
    {
        getline(cin,raw);
        if(falsey){
            continue;
        }
        stringstream ss(raw);
        string dd;
        bool before = true;
        while (ss.rdbuf()->in_avail() != 0)
        {
            ss>>dd;
            if(dd == "->"){
                before = false;
                continue;
            }
            if(before){
                if(map1[dd] != true){
                    indx = i + 1;
                    falsey= true;
                    break;
                }
            }else{
                map1[dd] = true;
            }

        }
        
    }
    if(falsey){
        printf("%d",indx);
    }else{
        printf("correct");
    }
    
    return 0;
}