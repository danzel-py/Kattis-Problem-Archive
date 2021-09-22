#include <iostream>
#include <algorithm>
using namespace std;

bool spc(char x){
    if((x >= '!' && x<='*') || (x >= '[' && x<=']')){
        return true;
    }
    return false;
}

int main(){
    int layer;
    while(cin>>layer){
        string ori;
        cin.ignore(255,'\n');
        getline(cin,ori);
        bool kill;
        string nexstr;
        for (int i = 0; i < layer; i++)
        {
            kill = false;
            for (int j = 0; j < ori.length(); j++)
            {
                if(spc(ori[j])){
                    nexstr+='\\';
                }
                nexstr += ori[j];

            }
            ori = nexstr;
            nexstr.clear();
            
        }
        cout<<ori<<'\n';
        
    }
    return 0;
}