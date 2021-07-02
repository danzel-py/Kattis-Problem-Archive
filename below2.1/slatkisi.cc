#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x;
    cin>>x;
    int tens;
    cin>>tens;
    double divs = 1;
    for (int i = 0; i < tens; i++)
    {
        divs*=10;
    }

    x/=divs;
    cout<<long(round(x)*divs);
    
    
    
    return 0;
}