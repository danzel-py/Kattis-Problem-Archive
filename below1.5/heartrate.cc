#include <iostream>
using namespace std;

int main(){
    int n;
    double x;
    double p;
    cin>>n;
    for (int i =0; i < n; i++){
        cin>>x>>p;
        cout<<(x-1)*60/p<<' '<<(x)*60/p<<' '<<(x+1)*60/p<<"\n";
    }
    return 0;
}