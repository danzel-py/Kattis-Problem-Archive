#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int counter = 0;
    while (n%2 == 0 && n >2)
    {
        counter++;
        n/=2;
    }
    int diver = 3;
    while (n >= diver*diver)
    {
        if(n%diver == 0){
            n/=diver;
            counter++;
            continue;
        }
        diver +=2;
    }
    
    
    cout<<counter+1;
    
    return 0;
}