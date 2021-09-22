#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double fun(double gez){
    return pow(gez,gez);
}


int main(){
    double n;
    cin>>n;
    double low = 1;
    double high = 100001;
    double guess = (low+high)/2;
    int cter = 0;
    while (cter<10000000)
    {
        cter ++;
        double res = fun(guess);
        if(res > n + 1e-6){
            high = guess;
        }else if (res < n - 1e-6)
        {
            low = guess;
        }else{
            break;
        }
        guess = (low+high)/2;
    }
    cout<<fixed<<setprecision(6)<<guess;
    
    return 0;
}