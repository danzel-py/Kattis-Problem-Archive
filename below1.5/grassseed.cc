#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double c;
    int l;
    cin>>c;
    cin>>l;
    double w,h;
    double sum = 0;
    for(int i = 0; i<l; i++){
        cin>>w>>h;
        sum += w*h;
    }
    cout<<fixed<<setprecision(6)<<sum*c;
    return 0;
}