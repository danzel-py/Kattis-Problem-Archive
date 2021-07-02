#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int h,v;
    cin>>h>>v;
    if(v<=180){
        cout<<"safe";
        return 0;
    }
    cout<<int(h/-sin(v*M_PI/180));
    return 0;
}