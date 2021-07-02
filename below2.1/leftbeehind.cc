#include <iostream>
using namespace std;

int main(){
    int a,b;
    while(true){
        cin>>a>>b;
        if(a==0 && b==0){
            break;
        }
        if(a+b==13){
            cout<<"Never speak again.\n";
        }
        else if (a>b)
        {
            cout<<"To the convention.\n";
        }
        else if (b>a)
        {
            cout<<"Left beehind.\n";
        }
        else{
            cout<<"Undecided.\n";
        }
    }
    return 0;
}