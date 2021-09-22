#include <cmath>
#include <iostream>
using namespace std;

int main(){
    int k,g;
    double b;
    cin>>b>>k>>g;
    b--;
    int hub = k/g;
    cout<< ceil(b/hub);
    return 0;
}