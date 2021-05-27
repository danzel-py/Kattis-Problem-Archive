#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x, result;
    cin >> x;
    result = pow(1+pow(2,x),2);
    cout << result;
}