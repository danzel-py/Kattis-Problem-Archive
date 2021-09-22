#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    double sum = 0;
    double fact = 1;
    for (int i = 0; i < n+1; i++)
    {
        sum+=1.0/fact;
        fact*=i+1;
    }
    cout<<fixed<<setprecision(14)<<sum;
    
    return 0;
}