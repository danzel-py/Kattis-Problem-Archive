#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n == 0 || n == 1 ){
        cout<<0;
        return 0;
    }
    
    cout<<int(pow(2,n)-1-n);
    return 0;
}