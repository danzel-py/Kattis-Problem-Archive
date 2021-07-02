#include <iostream>
using namespace std;

int main(){
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    int sum = abs(x1-x2) + abs(y1-y2);
    int bar;
    cin>>bar;
    if(bar<sum){
        cout<<"N";
        return 0;
    }
    if(sum%2 == 1){
        if(bar%2 == 1){
            cout<<"Y";
        }else{
            cout<<"N";
        }
    }
    if(sum%2 == 0){
        if(bar%2 == 0){
            cout<<"Y";
        }else{
            cout<<"N";
        }
    }
    return 0;
}