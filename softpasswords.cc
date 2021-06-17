#include <iostream>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    bool cool = false;
    string fmyy;
    if(a == b){
        cool = true;
    }
    if(a[0] >= '0' && a[0] <= '9' && a.length()-1 == b.length()){
        fmyy = a.substr(1);
        if(fmyy == b){
            cool = true;
        }
    }

    if(a[a.length()-1] >= '0' && a[a.length()-1] <='9' && a.length()-1 == b.length()){
        fmyy = a.substr(0,a.length()-1);
        if(fmyy == b){
            cool = true;
        }
    }

    if(a.length() == b.length()){
        for (int i = 0; i < a.length(); i++)
        {
            if(a[i] >= 'a' && a[i] <='z'){
                a[i] = char(int(a[i])-32);
            }
            else if(a[i] >= 'A' && a[i] <='Z'){
                a[i] = char(int(a[i])+32);
            }
            
            
        }
        if(a == b){
            cool = true;
        }
        
    }

    if(cool){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}