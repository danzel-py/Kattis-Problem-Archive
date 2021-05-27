#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int x;
    cin>>n;
    int sum=0;
    int power=0;
    for (int i = 0; i<n; i++){
        cin>>x;
        power = x%10;
        x /= 10;
        sum+= pow(x,power);
    }
    cout<<sum;
    return 0;
}