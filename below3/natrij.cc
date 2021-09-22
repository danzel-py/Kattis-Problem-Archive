#include <iostream>
using namespace std;

int main(){
    int sh,sm,ss;
    int eh,em,es;
    scanf("%d:%d:%d",&sh,&sm,&ss);
    scanf("%d:%d:%d",&eh,&em,&es);
    
    int rh,rm,rs;
    rh = eh-sh;
    rm = em-sm;
    rs = es-ss;

    if(rs<0){
        rs+=60;
        rm--;
    }
    if(rm<0){
        rm+=60;
        rh--;
    }
    if(rh<0){
        rh+=24;
    }
    
    string strh,strm,strs;
    strh = to_string(rh);
    strm = to_string(rm);
    strs = to_string(rs);
    if(rh == 0 && rm == 0 && rs == 0){
        strh = "24";
    }
    if(strh.length()<2){
        strh = "0" + strh;
    }
    if(strm.length()<2){
        strm = "0" + strm;
    }
    if(strs.length()<2){
        strs = "0" + strs;
    }
    cout<<strh<<':'<<strm<<':'<<strs;

    return 0;
}