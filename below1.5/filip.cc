#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int dupea=a;
    int dupeb=b;

    int newa = 0;
    int newb = 0;
    while(dupea!=0){
        newa *= 10;
        newa += dupea%10;
        dupea /= 10;
    }
    while(dupeb!=0){
        newb *= 10;
        newb += dupeb%10;
        dupeb /= 10;
    }
    int res = newa>newb? newa:newb;
    cout<<res;
    return 0;
}