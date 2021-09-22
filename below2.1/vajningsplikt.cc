#include <map>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string a,b,c;
    cin>>a>>b>>c;
    map <string, int > getint;
    getint["North"] = 1;
    getint["East"] = 2;
    getint["South"] = 3;
    getint["West"] = 4;
    int aa,bb,cc;
    aa = getint[a];
    bb = getint[b];
    cc = getint[c];
    bool row = false;
    if(abs(aa-bb) == 2 && (aa-cc == 1 || aa-cc == -3)){
        row = true;
    }else if ((bb-aa ==1 || bb-aa == -3) && (abs(aa-cc) == 2 || (aa-cc == 1 || aa-cc == -3)))
    {
        row = true;
    }
    row? cout<<"yes":cout<<"no";
    
    return 0;
}