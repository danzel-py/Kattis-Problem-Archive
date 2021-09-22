#include <iostream>
using namespace std;

int main(){
    int a1,b1,c;
    cin>>a1>>b1>>c;
    bool bruh = false;
    int a = a1, b = b1;
    while(true){
        if(a>c || b>c){
            break;
        }
        if(a == b){
            bruh = true;
            break;
        }
        else if(a>b){
            b+=b1;
        }
        else{
            a+=a1;
        }
    }
    if(bruh) cout<<"yes";
    else cout<<"no";
    return 0;
}