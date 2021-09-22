#include <cmath>
#include <iostream>
using namespace std;

int main(){
    double a,n;
    cin>>a>>n;
    if( a > n*n/4/M_PI){
        cout<<"Need more materials!";
    }else{
        cout<<"Diablo is happy!";
    }
    return 0;
}